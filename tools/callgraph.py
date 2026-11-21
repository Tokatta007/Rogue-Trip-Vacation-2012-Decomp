#!/usr/bin/env python3
"""Callers and callees of retail functions (static; jal plus data pointers).

  callgraph.py 80160EB4 [8012CF84 ...]       direct callers/callees
  callgraph.py --range 80160E00 80162000     every function in a range

Callees are jal targets; "pointer" lists data words and lui/lo pairs that
hold the function's address (tables, callbacks, driver structs).
"""
import argparse, bisect, csv
from pathlib import Path
from mips import Image, jal_target
from refs import refs

ROOT = Path(__file__).resolve().parents[1]


def load():
    img = Image((ROOT / 'bin/SLUS_006.43').read_bytes())
    rows = [(int(r['va'], 16), int(r['words']), r['name'])
            for r in csv.DictReader((ROOT / 'config/US/funcs.tsv').open(), delimiter='\t')]
    return img, rows


def build(img, rows):
    starts = [r[0] for r in rows]
    names = {r[0]: r[2] for r in rows}
    callees, callers, taken = {}, {}, {}

    def owner(a):
        i = bisect.bisect_right(starts, a) - 1
        return starts[i] if i >= 0 else None

    for va, n, _ in rows:
        for pc, kind, t, _ in refs(img, va, n, names):
            if kind == 'jal':
                callees.setdefault(va, []).append((pc, t))
                callers.setdefault(t, []).append((pc, va))
            elif t in names:
                taken.setdefault(t, []).append('code %08X' % pc)
    for a in range(img.base, img.end, 4):
        w = img.word(a)
        if w in names:
            o = owner(a)
            if not (o is not None and o <= a < o + 4 * dict((r[0], r[1]) for r in rows).get(o, 0)):
                taken.setdefault(w, []).append('data %08X' % a)
    return names, callees, callers, taken


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('va', nargs='*')
    p.add_argument('--range', nargs=2, metavar=('LO', 'HI'))
    a = p.parse_args()
    img, rows = load()
    names, callees, callers, taken = build(img, rows)
    words = {r[0]: r[1] for r in rows}
    targets = [int(v, 16) for v in a.va]
    if a.range:
        lo, hi = (int(x, 16) for x in a.range)
        targets += [r[0] for r in rows if lo <= r[0] < hi]
    for va in targets:
        print('%08X %s (%d words)' % (va, names.get(va, '?'), words.get(va, 0)))
        for pc, src in callers.get(va, []):
            print('   <- %08X %s  (call at %08X)' % (src, names.get(src, '?'), pc))
        for how in taken.get(va, []):
            print('   <- pointer %s' % how)
        seen = set()
        for pc, t in callees.get(va, []):
            if t not in seen:
                seen.add(t)
                print('   -> %08X %s' % (t, names.get(t, '?')))


if __name__ == '__main__':
    main()
