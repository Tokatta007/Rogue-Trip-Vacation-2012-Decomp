#!/usr/bin/env python3
"""Side-by-side disassembly of a retail function and its linked build bytes.

  diff_func.py 8016F60C                       latest work/build-*/ output
  diff_func.py 8016F60C --build work/build-X  a specific build
  diff_func.py 8016F60C --retail-only         retail disassembly only
"""
import argparse, csv, json, re, subprocess, sys, tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OBJDUMP = ROOT / 'toolchain/mips/bin/mipsel-none-elf-objdump.exe'


def disasm(data, va):
    with tempfile.NamedTemporaryFile(suffix='.bin', delete=False) as f:
        f.write(data)
    out = subprocess.run([str(OBJDUMP), '-D', '-b', 'binary', '-m', 'mips:3000', '-EL', '-z',
                          '--adjust-vma=0x%X' % va, f.name], capture_output=True, text=True).stdout
    Path(f.name).unlink()
    rows = []
    for line in out.splitlines():
        m = re.match(r'\s*([0-9a-f]+):\s+([0-9a-f]{8})\s+(.*)', line)
        if m:
            rows.append((int(m.group(1), 16), m.group(2), re.sub(r'\s+', ' ', m.group(3)).strip()))
    return rows


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('va')
    p.add_argument('--build', type=Path)
    p.add_argument('--retail-only', action='store_true')
    a = p.parse_args()
    va = int(a.va, 16)
    words = {int(r['va'], 16): int(r['words']) for r in csv.DictReader((ROOT / 'config/US/funcs.tsv').open(), delimiter='\t')}
    n = words[va]
    retail = (ROOT / 'bin/SLUS_006.43').read_bytes()
    off = va - 0x800EFA20 + 0x800
    left = disasm(retail[off:off + 4 * n], va)
    if a.retail_only:
        for v, w, t in left:
            print('%08X %s  %s' % (v, w, t))
        return
    build = a.build or sorted((ROOT / 'work').glob('build-*'))[-1]
    image = (build / 'psx/RT_HYBRID.EXE').read_bytes()
    report = json.loads((build / 'psx/image-report.json').read_text())
    row = next((r for r in report['functions'] if r['va'] == '%08X' % va), None)
    if not row:
        sys.exit('%08X was not replaced in %s' % (va, build))
    right = disasm(image[off:off + row['bytes']], va)
    diffs = 0
    for i in range(max(len(left), len(right))):
        l = left[i] if i < len(left) else (0, '', '')
        r = right[i] if i < len(right) else (0, '', '')
        mark = ' ' if l[1] == r[1] else '*'
        diffs += mark == '*'
        print('%s %08X  %-34s | %s' % (mark, va + 4 * i, l[2][:34], r[2]))
    print('%d differing words; retail %d words, build %d words' % (diffs, len(left), len(right)))


if __name__ == '__main__':
    main()
