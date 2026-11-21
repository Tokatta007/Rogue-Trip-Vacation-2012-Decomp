#!/usr/bin/env python3
"""Link compiled Rogue Trip units at their retail addresses into a hybrid EXE.

Each maintained function is linked alone at its fixed retail VA against the
retail symbol map, then its bytes replace the start of the retail slot. All
code and data not reconstructed stays as retail dependency bytes. Every
replaced function is compared with the retail slot:

  exact     compiled bytes equal the retail bytes (the slot is unchanged)
  semantic  compiled bytes differ but fit the slot (remaining tail = retail)

Functions marked "require": "exact" in the manifest fail the build unless
exact. A unit that is exact apart from a few functions lists those in
"semantic_functions" (VAs); only they may differ. --exact-only leaves them (and
their slots) as retail bytes, for the retail-identity gate. Placed data
sections that hold such a function's data (its jump tables) are listed in
"semantic_sections"; they may differ too, and --exact-only leaves them as
retail bytes. This is a fixed-address hybrid, not a source-only relink.
"""
import argparse, csv, json, re, struct, subprocess
from pathlib import Path
from semantic_compile import ROOT, MIPS, sha
from semantic_elf import read_elf, global_symbol

RETAIL = ROOT / 'bin/SLUS_006.43'
HEXNAME = re.compile(r'^(?:D_|jtbl_|func_|sub_|a)([0-9A-Fa-f]{8})$')
SECTION_HEX = re.compile(r'^\.(?:text|rodata|data|sdata|bss|sbss)_([0-9A-Fa-f]{8})$')


def symbol_map():
    out = {'_gp': 0x801C3240}
    for r in csv.DictReader((ROOT / 'config/US/funcs.tsv').open(), delimiter='\t'):
        out[r['name']] = int(r['va'], 16)
    path = ROOT / 'config/US/symbols.txt'
    if path.exists():
        for line in path.read_text().splitlines():
            m = re.match(r'\s*([A-Za-z_.$][\w.$]*)\s*=\s*0x([0-9A-Fa-f]+)\s*;', line)
            if m:
                out[m.group(1)] = int(m.group(2), 16)
    return out


def address_for(name, syms):
    if name in syms:
        return syms[name]
    m = HEXNAME.match(name)
    return int(m.group(1), 16) if m else None


def auto_functions(elf):
    """{VA: symbol} for global functions starting a `.text_<VA>` section."""
    out = {}
    for s in elf['symbols']:
        if s['binding'] != 1 or s['type'] != 2 or s['section_index'] >= len(elf['sections']) or s['address']:
            continue
        m = SECTION_HEX.match(elf['sections'][s['section_index']]['name'])
        if m and m.group(0).startswith('.text_'):
            out[m.group(1).upper()] = s['name']
    return out


def link_unit(unit, obj, folder, syms, slots):
    """Place every allocated section, link, and return {va: bytes}."""
    elf0 = read_elf(obj)
    if 'functions' not in unit:
        unit['functions'] = auto_functions(elf0)
    defined = {s['name']: s for s in elf0['symbols'] if s['binding'] in (1, 2) and s['section_index'] not in (0, 0xFFF1, 0xFFF2)}
    bases = {}
    for va, name in unit['functions'].items():
        s = defined.get(name)
        if not s:
            raise ValueError('%s does not define %s' % (unit['source'], name))
        sec = elf0['sections'][s['section_index']]['name']
        base = int(va, 16) - s['address']
        if bases.setdefault(sec, base) != base:
            raise ValueError('%s: section %s would need two bases' % (unit['source'], sec))
    # Data sections the manifest places at retail addresses, e.g. a switch's
    # jump tables: {"sections": {".rdata": "800F5004"}}. They are linked with
    # 4-byte input alignment, as the PsyQ linker placed them in retail.
    fixed = {name: int(va, 16) for name, va in unit.get('sections', {}).items()}
    for name, va in fixed.items():
        if not any(s['name'] == name and s['size'] for s in elf0['sections']):
            raise ValueError('%s: manifest places %s, but the object has no such section' % (unit['source'], name))
        bases[name] = va
    for s in elf0['sections']:
        if not (s['flags'] & 2 and s['size']) or s['name'] in bases or s['name'].startswith('.MIPS'):
            continue
        m = SECTION_HEX.match(s['name'])
        if not m:
            raise ValueError('%s: unplaced allocated section %s' % (unit['source'], s['name']))
        bases[s['name']] = int(m.group(1), 16)
    for va, name in unit['functions'].items():
        s = defined[name]
        sec = elf0['sections'][s['section_index']]
        size = s['size'] or sec['size']
        if size > slots.get(int(va, 16), 0) and not unit.get('allow_oversize'):
            raise ValueError('%s: %s is %d bytes, retail slot %08X is %d bytes' % (
                unit['source'], name, size, int(va, 16), slots.get(int(va, 16), 0)))
    undefined = sorted({s['name'] for s in elf0['symbols'] if s['section_index'] == 0 and s['name']})
    missing = [n for n in undefined if address_for(n, syms) is None]
    if missing:
        raise ValueError('%s: unresolved imports %s' % (unit['source'], ', '.join(missing)))
    placed = ' '.join('.s%d 0x%08X :%s { *(%s) }' % (i, b, ' SUBALIGN(4)' if n in fixed else '', n)
                      for i, (n, b) in enumerate(sorted(bases.items())))
    script = folder / 'unit.ld'
    # _gp is always retail's $gp: units that own small data are addressed
    # gp-relative, and ld resolves R_MIPS_GPREL16 against this symbol.
    script.write_text('SECTIONS { %s /DISCARD/ : { *(.reginfo .pdr .comment .gnu.attributes .mdebug*) } }\n'
                      '_gp = 0x%08X;\n%s\n' % (
        placed, syms['_gp'], ' '.join('%s = 0x%08X;' % (n, address_for(n, syms)) for n in undefined if n != '_gp')),
        encoding='ascii')
    elfpath = folder / 'unit.elf'
    # Probes may link oversized bodies; they overlap the next slot, so the
    # section overlap check is off for them (never for a real build).
    extra = ['--no-check-sections'] if unit.get('allow_oversize') else []
    q = subprocess.run([str(MIPS / 'mipsel-none-elf-ld.exe'), '-EL', *extra, '-T', str(script), '-o', str(elfpath), str(obj)],
                       capture_output=True, timeout=30)
    (folder / 'link.log').write_bytes(q.stdout + q.stderr)
    if q.returncode:
        raise ValueError('%s: link failed\n%s' % (unit['source'], (q.stdout + q.stderr).decode(errors='replace')))
    elf = read_elf(elfpath)
    out = {}
    for va, name in unit['functions'].items():
        s = global_symbol(elf, name)
        sec = elf['sections'][s['section_index']]
        start = s['address'] - sec['address']
        size = s['size']
        # A lone function in its own section owns any alignment tail too.
        others = [x for x in unit['functions'].values()
                  if global_symbol(elf, x)['section_index'] == s['section_index']]
        if len(others) == 1 and start == 0:
            size = sec['size']
        if s['address'] != int(va, 16):
            raise ValueError('placement drift %s' % va)
        out[va] = sec['data'][start:start + size]
    unit['placed_data'] = {}
    for sec in elf['sections']:
        for name, va in fixed.items():
            if sec['flags'] & 2 and sec['size'] and sec['address'] == va:
                unit['placed_data'][name] = (va, sec['data'])
    missing = set(fixed) - set(unit['placed_data'])
    if missing:
        raise ValueError('%s: placed sections not found after link: %s' % (unit['source'], sorted(missing)))
    return out


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--objects', type=Path, required=True, help='JSON {source: object path}')
    p.add_argument('--output', type=Path, required=True)
    p.add_argument('--manifest', type=Path, default=ROOT / 'config/semantic/units.json')
    p.add_argument('--exact-only', action='store_true', help='skip every semantic_functions entry')
    a = p.parse_args()
    out = a.output.resolve()
    out.mkdir(parents=True)
    manifest = json.loads(a.manifest.read_text())
    objects = json.loads(a.objects.read_text())
    retail = RETAIL.read_bytes()
    base = struct.unpack_from('<I', retail, 24)[0]
    slots = {int(r['va'], 16): 4 * int(r['words'])
             for r in csv.DictReader((ROOT / 'config/US/funcs.tsv').open(), delimiter='\t')}
    syms = symbol_map()
    image = bytearray(retail)
    taken, rows, failures, data_rows = [], [], [], []
    for index, unit in enumerate(manifest['units']):
        folder = out / ('unit-%04d' % index)
        folder.mkdir()
        code = link_unit(unit, ROOT / objects[unit['source']], folder, syms, slots)
        allowed = {v.upper() for v in unit.get('semantic_functions', [])}
        for va_s, data in code.items():
            if a.exact_only and va_s.upper() in allowed:
                continue
            va = int(va_s, 16)
            limit = slots.get(va)
            if limit is None:
                raise ValueError('%s is not a known function start' % va_s)
            if len(data) > limit:
                raise ValueError('%s: %d bytes exceed the %d-byte retail slot' % (va_s, len(data), limit))
            if any(va < o + n and o < va + limit for o, n in taken):
                raise ValueError('overlapping replacement at %s' % va_s)
            off = va - base + 0x800
            exact = retail[off:off + len(data)] == data and len(data) == limit
            image[off:off + len(data)] = data
            taken.append((va, limit))
            status = 'exact' if exact else 'semantic'
            rows.append(dict(va=va_s, symbol=unit['functions'][va_s], source=unit['source'],
                             bytes=len(data), slot=limit, status=status))
            if unit.get('require', 'exact') == 'exact' and not exact and va_s.upper() not in allowed:
                failures.append(va_s)
        loose = set(unit.get('semantic_sections', []))
        for name, (va, data) in unit.get('placed_data', {}).items():
            if a.exact_only and name in loose:
                continue
            off = va - base + 0x800
            exact = retail[off:off + len(data)] == data
            if any(va < o + n and o < va + len(data) for o, n in taken):
                raise ValueError('%s: placed %s overlaps a replaced range' % (unit['source'], name))
            image[off:off + len(data)] = data
            taken.append((va, len(data)))
            data_rows.append(dict(va='%08X' % va, section=name, source=unit['source'], bytes=len(data),
                                  status='exact' if exact else 'differs'))
            if unit.get('require', 'exact') == 'exact' and not exact and name not in loose:
                failures.append('%08X' % va)
    exe = out / 'RT_HYBRID.EXE'
    exe.write_bytes(image)
    report = dict(schema='rt-hybrid-v1', image=exe.relative_to(ROOT).as_posix(), image_sha256=sha(exe),
                  retail_sha256=sha(RETAIL), identical_to_retail=bytes(image) == retail,
                  replaced_functions=len(rows), exact=sum(r['status'] == 'exact' for r in rows),
                  semantic=sum(r['status'] == 'semantic' for r in rows), exact_required_failures=failures,
                  functions=sorted(rows, key=lambda r: r['va']), data_sections=data_rows,
                  source_only=False, runtime_validated=False,
                  scope=__doc__)
    (out / 'image-report.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({k: report[k] for k in ('image', 'image_sha256', 'identical_to_retail', 'replaced_functions',
                                             'exact', 'semantic', 'exact_required_failures')}, indent=2))
    if failures:
        for r in rows:
            if r['va'] in failures:
                print('NOT EXACT:', r['va'], r['symbol'], r['source'])
        for r in data_rows:
            if r['va'] in failures:
                print('DATA DIFFERS:', r['va'], r['section'], r['source'])
        raise SystemExit(1)


if __name__ == '__main__':
    main()
