#!/usr/bin/env python3
"""Rebuild SLUS_006.43 from splat's asm output and compare with retail.

Assembles every asm/**/*.s with the bundled GNU as, links with the
splat-generated build/slus_006.43.ld (+ undefined_*_auto.txt), converts to a
flat binary and compares it byte-for-byte with bin/SLUS_006.43. A match
proves the splat config (segments, symbols, data) is lossless.

Run splat first:  tools\\splat.cmd
"""
import hashlib, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
BIN = ROOT / 'toolchain/mips/bin'
AS, LD, OBJCOPY = (BIN / ('mipsel-none-elf-%s.exe' % t) for t in ('as', 'ld', 'objcopy'))
RETAIL = ROOT / 'bin/SLUS_006.43'


def run(cmd):
    p = subprocess.run([str(c) for c in cmd], cwd=ROOT, capture_output=True, text=True)
    if p.returncode:
        sys.exit('FAILED: %s\n%s%s' % (' '.join(map(str, cmd)), p.stdout, p.stderr[-4000:]))


def assemble(src):
    obj = ROOT / 'build' / src.relative_to(ROOT).with_suffix('.o')
    obj.parent.mkdir(parents=True, exist_ok=True)
    run([AS, '-EL', '-march=r3000', '-mtune=r3000', '-no-pad-sections', '-G0',
         '-I', ROOT / 'include', '-o', obj, src])
    return obj


def main():
    sources = sorted((ROOT / 'asm').rglob('*.s'))
    if not sources:
        sys.exit('No asm/ output: run tools\\splat.cmd first')
    with ThreadPoolExecutor() as pool:
        objs = list(pool.map(assemble, sources))
    print('assembled %d files' % len(objs))
    elf = ROOT / 'build/slus_006.43.elf'
    run([LD, '-EL', '-nostdlib', '--no-check-sections',
         '-T', ROOT / 'build/undefined_syms_auto.txt', '-T', ROOT / 'build/undefined_funcs_auto.txt',
         '-T', ROOT / 'build/slus_006.43.ld', '-Map', ROOT / 'build/slus_006.43.map', '-o', elf])
    out = ROOT / 'build/SLUS_006.43.rebuilt'
    run([OBJCOPY, '-O', 'binary', '--gap-fill', '0x00', elf, out])
    retail = RETAIL.read_bytes()
    built = out.read_bytes()
    # The retail file ends with 0x300 zero bytes of sector padding that the
    # (NOLOAD) bss range overlaps; pad the flat image back to file size.
    if len(built) < len(retail) and not any(retail[len(built):]):
        built += bytes(len(retail) - len(built))
        out.write_bytes(built)
    h = hashlib.sha256(built).hexdigest()
    print('rebuilt %d bytes sha256 %s' % (len(built), h))
    if built == retail:
        print('MATCH: splat output reassembles to the retail executable')
        return 0
    diffs = [i for i in range(min(len(built), len(retail))) if built[i] != retail[i]]
    print('MISMATCH: size %d vs %d, %d differing bytes' % (len(built), len(retail), len(diffs)))
    if diffs:
        first = diffs[0]
        va = first - 0x800 + 0x800EFA20
        print('first difference at file 0x%X (VA %08X)' % (first, va))
    return 1


if __name__ == '__main__':
    sys.exit(main())
