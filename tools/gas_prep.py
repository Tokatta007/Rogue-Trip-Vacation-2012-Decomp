#!/usr/bin/env python3
"""Prepare GCC output for GNU as the way an old (1990s) GNU as encoded it.

Some Rogue Trip SDK objects (libcomb's _comb_control) were assembled by a GNU
assembler rather than ASPSX: macro loads use the destination register as the
temporary and empty reorder-mode delay slots are filled with the preceding
instruction. Modern GNU as does both, but differs from the old one in two
encodings, which this step restores before assembly:

  move rd,rs          -> addu rd,rs,$0      (modern gas emits `or`)
  div/divu rd,rs,rt   -> div first, then the divide-by-zero (and, for div,
                         overflow) checks, then mflo/mfhi   (modern gas puts
                         the checks first)

COFF debug directives from -g (.def, .loc, .begin, .bend) are dropped.
Nothing else is changed; delay-slot filling and macro expansion stay with
GNU as (-O2).

  gas_prep.py in.s out.s
"""
import re, sys


def expand_div(op, rd, rs, rt, n):
    signed = op in ('div', 'rem')
    move_from = 'mfhi' if op in ('rem', 'remu') else 'mflo'
    lines = ['\t.set\tpush', '\t.set\tnoreorder', '\t.set\tnoat',
             '\t%s\t$0,%s,%s' % ('div' if signed else 'divu', rs, rt),
             '\tbnez\t%s,.Lprep_nz_%d' % (rt, n), '\tnop', '\tbreak\t7',
             '.Lprep_nz_%d:' % n]
    if signed:
        lines += ['\tli\t$1,-1', '\tbne\t%s,$1,.Lprep_ok_%d' % (rt, n), '\tlui\t$1,0x8000',
                  '\tbne\t%s,$1,.Lprep_ok_%d' % (rs, n), '\tnop', '\tbreak\t6', '.Lprep_ok_%d:' % n]
    lines += ['\t%s\t%s' % (move_from, rd), '\t.set\tpop']
    return lines


def prepare(text):
    out, n = [], 0
    for line in text.splitlines():
        code = line.split('#', 1)[0]
        # -g output: COFF/SDB debug directives the modern assembler does not
        # know; they carry no code.
        if re.match(r'^\s*\.(def|loc|begin|bend)\s', code):
            continue
        m = re.match(r'^\s+move\s+(\$\w+),\s*(\$\w+)\s*$', code)
        if m:
            out.append('\taddu\t%s,%s,$0' % (m.group(1), m.group(2)))
            continue
        m = re.match(r'^\s+(div|divu|rem|remu)\s+(\$\w+),\s*(\$\w+),\s*(\$\w+)\s*$', code)
        if m and m.group(2) not in ('$0', '$zero'):
            n += 1
            out.extend(expand_div(m.group(1), m.group(2), m.group(3), m.group(4), n))
            continue
        out.append(line)
    return '\n'.join(out) + '\n'


def main():
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    src, dst = sys.argv[1], sys.argv[2]
    with open(src, encoding='utf-8', errors='replace') as f:
        text = f.read()
    with open(dst, 'w', encoding='utf-8', newline='\n') as f:
        f.write(prepare(text))


if __name__ == '__main__':
    main()
