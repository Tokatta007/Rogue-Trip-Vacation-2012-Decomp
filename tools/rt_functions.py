#!/usr/bin/env python3
"""Discover function boundaries in the retail Rogue Trip executable.

There is no IDA database for Rogue Trip, so boundaries come from static
evidence only: jal targets, the entry point, code after a completed function
(indirect/table-called functions) and data words pointing at such starts.
Each function is swept linearly; it ends at a `jr ra` or out-of-body `j`
(plus delay slot) once no pending forward branch target remains.

Writes config/US/funcs.tsv (va, words, name, evidence). Names are generic
func_XXXXXXXX unless config/US/names.tsv supplies one.
"""
import argparse, csv
from pathlib import Path
from mips import Image, jal_target, is_jr_ra, branch_target, is_j, plausible

ROOT = Path(__file__).resolve().parents[1]
# Rodata island holding the switch jump tables (see docs/RT_RECONSTRUCTION.md).
JTBL_REGION = (0x800F27B0, 0x800F56B0)
# Jump-table case labels: set by discover(). A case label never starts a
# function, and a function that contains a register jump runs on through the
# case labels between its apparent end and the next start.
CASES = set()


def sweep(img, start, limit):
    """Return the end VA (exclusive) of the function beginning at start."""
    return sweep_ex(img, start, limit)[0]


def falls_through(img, start, limit):
    """True when the body runs into `limit` without any terminator."""
    return sweep_ex(img, start, limit)[1]


def sweep_ex(img, start, limit):
    """(end VA, fell_through_to_limit) for the function beginning at start."""
    va, reach, computed = start, start, False
    while va < limit:
        w = img.word(va)
        if w & 0xFC1FFFFF == 0x00000008 and (w >> 21) & 31 not in (31, 10):
            computed = True                                      # jr reg (not ra / BIOS t2)
        if computed and va >= reach:
            later = [c for c in CASES if va < c < limit]
            if later:
                reach = max(later)
        if not plausible(w) and w != 0:
            return va, False                                     # ran into data
        t = branch_target(va, w)
        if w >> 16 == 0x1000 and va >= reach and (t <= va or not start <= t < limit):
            return va + 8, False                                 # b: shared tail or loop back-edge
        if t is not None and start <= t < limit:
            reach = max(reach, t)
        if is_j(w):
            t = jal_target(va, w)
            if va >= reach and (t <= va or not start <= t < limit):
                return va + 8, False                             # tail call or loop back-edge
            if start <= t < limit:
                reach = max(reach, t)
        if is_jr_ra(w) and va >= reach:
            return va + 8, False
        # BIOS stub: li t2,0xA0/B0/C0; jr t2; li t1,n (+ nop padding)
        if w == 0x01400008 and va > start and img.word(va - 4) >> 16 == 0x240A and va >= reach:
            return (va + 12 if img.word(va + 8) == 0 else va + 8), False
        if w & 0xFC00003F == 0x0000000D and va >= reach:  # break n: noreturn stub
            return va + 4, False
        va += 4
    return limit, True


def jump_table_cases(img, lo, hi, window=16, span=0x8000):
    """Case labels of switch jump tables, found from the code that uses them.

    For each `jr reg` (not ra/t2), look back a few instructions for a lui +
    addiu/lw pair that forms an address inside JTBL_REGION, then read the
    consecutive table words that point at code near the jump.
    """
    cases = set()
    for j in range(lo, hi, 4):
        w = img.word(j)
        if w & 0xFC1FFFFF != 0x00000008 or (w >> 21) & 31 in (31, 10):
            continue
        hi_regs = {}
        for va in range(max(lo, j - 4 * window), j, 4):
            x = img.word(va)
            op, rs, rt = x >> 26, (x >> 21) & 31, (x >> 16) & 31
            if op == 0x0F:
                hi_regs[rt] = (x & 0xFFFF) << 16
                continue
            if op in (0x09, 0x23) and rs in hi_regs:
                table = (hi_regs[rs] + (((x & 0xFFFF) ^ 0x8000) - 0x8000)) & 0xFFFFFFFF
                if JTBL_REGION[0] <= table < JTBL_REGION[1]:
                    t = table
                    while t < JTBL_REGION[1]:
                        e = img.word(t)
                        if not (lo <= e < hi and abs(e - j) < span and e % 4 == 0):
                            break
                        cases.add(e)
                        t += 4
    return cases


def discover(img, lo, hi):
    starts = {img.pc: 'entry'}
    for va in range(lo, hi, 4):
        w = img.word(va)
        if w >> 26 != 3:
            continue
        t = jal_target(va, w)
        if lo <= t < hi and plausible(img.word(t)) and plausible(img.word(va + 4)):
            starts.setdefault(t, 'jal')
    CASES.clear()
    CASES.update(jump_table_cases(img, lo, hi))
    while True:                                          # fixed point over gaps
        added = 0
        order = sorted(starts)
        for i, s in enumerate(order):
            limit = order[i + 1] if i + 1 < len(order) else hi
            end = sweep(img, s, limit)
            va = end
            while va < limit and img.word(va) == 0:
                va += 4
            if va < limit and va not in starts and va not in CASES:
                w = img.word(va)
                # addiu sp,sp,-n or any plausible leaf body after a finished function
                if plausible(w) and plausible(img.word(va + 4)):
                    starts[va] = 'after_function'
                    added += 1
        if not added:
            break
    # Data words that point exactly at known function starts are recorded as evidence.
    pointed = set()
    for va in range(img.base, img.end, 4):
        w = img.word(va)
        if w in starts:
            pointed.add(w)
    return starts, pointed


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--exe', type=Path, default=ROOT / 'bin/SLUS_006.43')
    p.add_argument('--code-start', type=lambda s: int(s, 16), default=None)
    p.add_argument('--code-end', type=lambda s: int(s, 16), default=None)
    p.add_argument('--out', type=Path, default=ROOT / 'config/US/funcs.tsv')
    a = p.parse_args()
    img = Image(a.exe.read_bytes())
    lo = a.code_start or img.base
    hi = a.code_end or img.end
    starts, pointed = discover(img, lo, hi)
    names = {}
    names_path = ROOT / 'config/US/names.tsv'
    if names_path.exists():
        for r in csv.DictReader(names_path.open(), delimiter='\t'):
            names[int(r['va'], 16)] = r['name']
    order = sorted(starts)
    # A start that the previous body falls into (no terminator before it) is
    # an alternate entry of that function, e.g. 8017D5C0 skips 8017D5BC's
    # `addiu sp,sp,-0x80`. A shared return delay slot (end == limit + 4, as in
    # 80177884 -> 80177A98) is not a fall-through.
    # A gap-found start with no jal/pointer evidence that falls through into
    # the next start is stray data (e.g. two words at 8015F8DC), not code.
    alternates = {}
    for i, s in enumerate(order[:-1]):
        limit = order[i + 1]
        if falls_through(img, s, limit):
            if starts[s] == 'after_function' and s not in pointed and s not in alternates:
                after = [x for x in order if x > limit]
                body_end = sweep(img, limit, after[0] if after else hi)
                targets = [branch_target(v, img.word(v)) for v in range(s, limit, 4)]
                if any(x is not None and not s <= x < body_end for x in targets):
                    del starts[s]
                    continue
            alternates[limit] = alternates.get(s, s)
    order = sorted(starts)
    primary = [s for s in order if s not in alternates]
    rows = []
    for i, s in enumerate(primary):
        limit = primary[i + 1] if i + 1 < len(primary) else hi
        # Sweep through alternate entries: the body continues past them.
        end, va = s, s
        while True:
            nxt = min([x for x in order if x > va] + [hi])
            end = min(sweep(img, va, nxt), nxt)
            if nxt in alternates and end == nxt:
                va = nxt
                continue
            break
        ev = starts[s] + ('+pointer' if s in pointed else '')
        rows.append((s, (end - s) // 4, names.get(s, 'func_%08X' % s), ev))
    with a.out.open('w', newline='\n') as f:
        f.write('va\twords\tname\tevidence\n')
        for s, n, name, ev in rows:
            f.write('%08X\t%d\t%s\t%s\n' % (s, n, name, ev))
    with (ROOT / 'config/US/alt_entries.tsv').open('w', newline='\n') as f:
        f.write('va\tparent\tname\n')
        for s in sorted(alternates):
            f.write('%08X\t%08X\t%s\n' % (s, alternates[s], names.get(s, 'func_%08X' % s)))
    print('%d functions (+%d alternate entries), %08X-%08X, %d code words' % (
        len(rows), len(alternates), order[0], order[-1], sum(r[1] for r in rows)))


if __name__ == '__main__':
    main()
