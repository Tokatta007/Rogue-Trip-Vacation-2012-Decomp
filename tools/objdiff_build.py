#!/usr/bin/env python3
"""objdiff integration for the Rogue Trip matching decomp.

  objdiff_build.py            build every object and (re)write objdiff.json
  objdiff_build.py OBJ.o      rebuild one object (objdiff's custom_make hook)

Objects live under build/objdiff/:

  base/<unit>.o      a maintained C unit (config/semantic/units.json),
                     compiled exactly like build.py (GCC 2.7.2 + maspsx)
  target/<unit>.o    the retail functions of that unit, assembled from
                     splat's asm/ with the C symbol names, each in the
                     same .text_<VA> section the C places it in
  target/nonmatching_<segment>.o
                     every other function of a splat text segment, so the
                     progress report covers the whole executable

Run tools\\splat.cmd first (targets come from asm/).
"""
import json, re, shutil, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from semantic_compile import compile_source  # noqa: E402
from semantic_elf import read_elf  # noqa: E402
from build_hybrid import auto_functions  # noqa: E402

AS = ROOT / 'toolchain/mips/bin/mipsel-none-elf-as.exe'
OUT = ROOT / 'build/objdiff'
BLOCK = re.compile(r'(?ms)^nonmatching (\S+), 0x[0-9A-Fa-f]+\n.*?^endlabel \1\n')
FIRST_VA = re.compile(r'/\* [0-9A-F]+ ([0-9A-F]{8}) ')
PREAMBLE = '.include "macro.inc"\n\n.set noat\n.set noreorder\n\n'


def units():
    return json.loads((ROOT / 'config/semantic/units.json').read_text())['units']


def unit_name(unit):
    return Path(unit['source']).stem


def asm_functions():
    """{VA: (segment, splat name, asm block)} from splat's asm/text_*.s."""
    out = {}
    for src in sorted((ROOT / 'asm').glob('text_*.s')):
        for m in BLOCK.finditer(src.read_text()):
            va = FIRST_VA.search(m.group(0))
            if va:
                out[va.group(1)] = (src.stem, m.group(1), m.group(0))
    if not out:
        sys.exit('asm/ is empty: run tools\\splat.cmd first')
    return out


def rename(block, old, new):
    if old == new:
        return block
    return re.sub(r'(?<![\w.$])%s(?![\w$])' % re.escape(old), new, block)


def assemble(text, obj):
    obj.parent.mkdir(parents=True, exist_ok=True)
    src = obj.with_suffix('.s')
    src.write_text(text, newline='\n')
    p = subprocess.run([str(AS), '-EL', '-march=r3000', '-mtune=r3000', '-no-pad-sections', '-G0',
                        '-I', str(ROOT / 'include'), '-o', str(obj), str(src)],
                       capture_output=True, text=True)
    if p.returncode:
        sys.exit('assembling %s failed:\n%s' % (src, p.stderr[-3000:]))


def build_base(unit):
    """Compile one unit; returns {VA: symbol} of its placed functions."""
    work = OUT / 'work' / unit_name(unit)
    shutil.rmtree(work, ignore_errors=True)
    row = compile_source(ROOT / unit['source'], work, unit.get('delay_slots', 'compiler'),
                         unit.get('preserve_common', False), compiler=unit.get('compiler', 'gcc2.7.2'),
                         cc_flags=unit.get('cc_flags'), aspsx=unit.get('aspsx', '2.34'),
                         gas=unit.get('gas'))
    if not row['compiled']:
        stage = row.get('failed_stage', 'unknown')
        log = work / (stage + '.stderr')
        sys.exit('compile failed: %s (%s)\n%s' % (unit['source'], stage,
                 log.read_text(errors='replace') if log.exists() else row.get('error', '')))
    obj = OUT / 'base' / (unit_name(unit) + '.o')
    obj.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(ROOT / row['artifacts']['source.o']['path'], obj)
    return unit.get('functions') or auto_functions(read_elf(obj))


def build_target(unit, functions, asm):
    parts = [PREAMBLE]
    for va, symbol in sorted(functions.items()):
        if va not in asm:
            sys.exit('%s: no splat function starts at %s' % (unit['source'], va))
        _, splat_name, block = asm[va]
        parts.append('.section .text_%s, "ax"\n\n%s\n' % (va, rename(block, splat_name, symbol)))
    assemble(''.join(parts), OUT / 'target' / (unit_name(unit) + '.o'))


def build_nonmatching(covered, asm):
    """Target-only units: every function not owned by a C unit."""
    segments = {}
    for va, (segment, name, block) in sorted(asm.items()):
        if va not in covered:
            segments.setdefault(segment, []).append(block)
    for segment, blocks in segments.items():
        assemble(PREAMBLE + '.section .text, "ax"\n\n' + '\n'.join(blocks),
                 OUT / 'target' / ('nonmatching_%s.o' % segment))
    return {s: len(b) for s, b in segments.items()}


def write_config(unit_rows, nonmatching):
    config = {
        '$schema': 'https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json',
        'min_version': '3.0.0',
        'custom_make': 'toolchain/python/python.exe',
        'custom_args': ['-B', 'tools/objdiff_build.py'],
        'build_base': True,
        'build_target': False,
        'watch_patterns': ['*.c', '*.h', '*.inc'],
        'options': {'mips.abi': 'o32', 'mips.instrCategory': 'r3000gte'},
        'progress_categories': [{'id': 'game', 'name': 'Game + SDK code'}],
        'units': [],
    }
    for unit in unit_rows:
        config['units'].append({
            'name': 'semantic/' + unit_name(unit),
            'target_path': 'build/objdiff/target/%s.o' % unit_name(unit),
            'base_path': 'build/objdiff/base/%s.o' % unit_name(unit),
            'metadata': {'source_path': unit['source'], 'progress_categories': ['game'],
                         'complete': unit.get('require', 'exact') == 'exact'},
        })
    for segment in sorted(nonmatching):
        config['units'].append({
            'name': 'nonmatching/' + segment,
            'target_path': 'build/objdiff/target/nonmatching_%s.o' % segment,
            'metadata': {'progress_categories': ['game'], 'auto_generated': True},
        })
    (ROOT / 'objdiff.json').write_text(json.dumps(config, indent=2) + '\n', newline='\n')


def main():
    asm = asm_functions()
    all_units = units()
    if len(sys.argv) > 1:
        # objdiff hook: rebuild just the requested object.
        rel = Path(sys.argv[1]).as_posix()
        for unit in all_units:
            if rel == 'build/objdiff/base/%s.o' % unit_name(unit):
                build_base(unit)
                return
            if rel == 'build/objdiff/target/%s.o' % unit_name(unit):
                build_target(unit, build_base(unit), asm)
                return
        sys.exit('objdiff_build.py: unknown object ' + rel)
    covered = {}
    for unit in all_units:
        functions = build_base(unit)
        build_target(unit, functions, asm)
        covered.update(functions)
        print('%-28s %3d functions' % (unit['source'], len(functions)))
    nonmatching = build_nonmatching(covered, asm)
    for segment, n in nonmatching.items():
        print('nonmatching/%-16s %4d functions' % (segment, n))
    write_config(all_units, nonmatching)
    print('wrote objdiff.json')


if __name__ == '__main__':
    main()
