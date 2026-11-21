#!/usr/bin/env python3
"""List the absolute data/code addresses a retail function references.

Resolves lui+lo pairs and $gp-relative accesses (gp = 801C3240) and jal
targets, so TM2 sources can be re-pointed at Rogue Trip storage.

  refs.py 8015D4C0 [8015DD64 ...]
"""
import argparse, csv
from pathlib import Path
from mips import Image, jal_target, writes_reg, LOADS, STORES

ROOT = Path(__file__).resolve().parents[1]
GP = 0x801C3240
KIND = {0x20: 'lb', 0x21: 'lh', 0x23: 'lw', 0x24: 'lbu', 0x25: 'lhu', 0x28: 'sb', 0x29: 'sh', 0x2B: 'sw',
        0x09: 'addiu', 0x32: 'lwc2', 0x3A: 'swc2', 0x22: 'lwl', 0x26: 'lwr', 0x2A: 'swl', 0x2E: 'swr'}


def refs(img, va, words, names):
    hi = {}
    out = []
    for i in range(words):
        pc = va + 4 * i
        w = img.word(pc)
        op, rs, rt = w >> 26, (w >> 21) & 31, (w >> 16) & 31
        simm = ((w & 0xFFFF) ^ 0x8000) - 0x8000
        if op == 0x03:
            t = jal_target(pc, w)
            out.append((pc, 'jal', t, names.get(t, '')))
        elif op == 0x0F:
            hi[rt] = (w & 0xFFFF) << 16
            continue
        elif op in KIND or op == 0x0D:
            if rs == 28:
                out.append((pc, KIND.get(op, 'ori') + ' gp', (GP + simm) & 0xFFFFFFFF, ''))
            elif rs in hi:
                target = (hi[rs] | (w & 0xFFFF)) if op == 0x0D else (hi[rs] + simm) & 0xFFFFFFFF
                out.append((pc, KIND.get(op, 'ori'), target, names.get(target, '')))
        d = writes_reg(w)
        if d is not None:
            hi.pop(d, None)
    return out


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('va', nargs='+')
    a = p.parse_args()
    img = Image((ROOT / 'bin/SLUS_006.43').read_bytes())
    rows = list(csv.DictReader((ROOT / 'config/US/funcs.tsv').open(), delimiter='\t'))
    words = {int(r['va'], 16): int(r['words']) for r in rows}
    names = {int(r['va'], 16): r['name'] for r in rows}
    for v in a.va:
        va = int(v, 16)
        print('%08X %s (%d words)' % (va, names.get(va, '?'), words[va]))
        for pc, kind, target, name in refs(img, va, words[va], names):
            print('  %08X %-9s %08X %s' % (pc, kind, target, name))


if __name__ == '__main__':
    main()
