#!/usr/bin/env python3
"""Score source variants of one C unit against retail (structural diff).

A variants file is JSON:
  {"base": "src/semantic/x.c", "va": "80161468", "words": 309,
   "compiler": "psyq4.4", "flags": "-O2 -G8 -mno-split-addresses", "aspsx": "2.56",
   "sections": {".rodata": "800F5004"},
   "variants": {"name": [["old text", "new text"], ...], ...}}

Each variant applies its replacements to the base file, is written under
work/variants/, compiled with the chosen compiler and linked at the retail
address; the score counts retail words not matched after aligning the
instruction streams with branch/jump targets ignored (0 = structurally
identical). The base file itself is scored as "base".
"""
import argparse, difflib, json, re, struct, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from compiler_probe import CANDIDATES, probe  # noqa: E402

OBJDUMP = ROOT / 'toolchain/mips/bin/mipsel-none-elf-objdump.exe'


def norm(w):
    op = w >> 26
    if op in (2, 3):
        return w & 0xFC000000
    if op in (1, 4, 5, 6, 7):
        return w & 0xFFFF0000
    return w


def score(elf, va, words):
    retail = (ROOT / 'bin/SLUS_006.43').read_bytes()
    out = subprocess.run([str(OBJDUMP), '-d', str(elf)], capture_output=True, text=True).stdout
    # Only the function's own block: an oversized body overlaps the next
    # function's slot, whose words must not be mixed in.
    built, inside = [], False
    for line in out.splitlines():
        if re.match(r'[0-9a-f]{8} <', line):
            inside = int(line[:8], 16) == va
            continue
        m = re.match(r'\s*([0-9a-f]{8}):\s+([0-9a-f]{8})\s', line)
        if m and inside:
            built.append(int(m.group(2), 16))
    ret = [struct.unpack_from('<I', retail, va - 0x800EFA20 + 0x800 + 4 * i)[0] for i in range(words)]
    sm = difflib.SequenceMatcher(None, [norm(w) for w in ret], [norm(w) for w in built], autojunk=False)
    same = sum(b.size for b in sm.get_matching_blocks())
    exact = built[:words] == ret and len(built) >= words
    return words - same, len(built), exact


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('spec', type=Path)
    p.add_argument('--keep', help='write this variant over the base file')
    p.add_argument('--no-base', action='store_true', help='do not score the unmodified base '
                   '(for parallel workers, which would share its build folder)')
    a = p.parse_args()
    spec = json.loads(a.spec.read_text(encoding='utf-8'))
    base = ROOT / spec['base']
    text = base.read_text(encoding='utf-8')
    targets = [(int(v, 16), int(n)) for v, n in spec.get('functions', [[spec.get('va'), spec.get('words')]])]
    outdir = ROOT / 'work/variants'
    outdir.mkdir(parents=True, exist_ok=True)
    variants = dict(spec['variants']) if a.no_base else dict(base=[], **spec['variants'])
    for name, reps in variants.items():
        t = text
        ok = True
        for old, new in reps:
            if t.count(old) != 1:
                print('%-28s SKIP: pattern found %d times: %r' % (name, t.count(old), old[:50]))
                ok = False
                break
            t = t.replace(old, new)
        if not ok:
            continue
        src = outdir / ('%s__%s.c' % (base.stem, name))
        src.write_text(t, encoding='utf-8', newline='\n')
        r = probe(src, 'v_' + name, CANDIDATES[spec.get('compiler', 'psyq4.4')], spec['flags'], 'compiler',
                  spec.get('aspsx', '2.56'), ROOT / 'build/variant_probe', spec.get('sections'),
                  spec.get('gas'))
        if 'error' in r:
            print('%-28s ERROR %s' % (name, r['error'].splitlines()[0][:100]))
            continue
        elf = ROOT / 'build/variant_probe' / ('v_' + name) / 'unit.elf'
        # Structural scores ignore immediates, so wrong code can score well:
        # "forbid" regexes over the compiler output reject such variants.
        asm_text = (elf.parent / 'source.s').read_text()
        bad = [f for f in spec.get('forbid', []) if re.search(f, asm_text)]
        if bad:
            print('%-28s INVALID (forbidden pattern %r)' % (name, bad[0]))
            continue
        parts, total = [], 0
        for va, words in targets:
            s, n, exact = score(elf, va, words)
            total += s
            parts.append('%08X:%s' % (va, 'EXACT' if exact else '%d/%dw' % (s, n)))
        print('%-28s unmatched %3d  %s' % (name, total, '  '.join(parts)))
        if a.keep == name:
            base.write_text(t, encoding='utf-8', newline='\n')
            print('   -> written to', spec['base'])


if __name__ == '__main__':
    main()
