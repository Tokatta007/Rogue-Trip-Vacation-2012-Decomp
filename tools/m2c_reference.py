#!/usr/bin/env python3
"""Generate m2c reference C for every function in splat's asm/ output.

Each `nonmatching NAME ... endlabel NAME` block from asm/text_*.s is written
to build/m2c/asm/<NAME>.s and decompiled on its own with m2c
(mipsel-gcc-c), together with the rodata island and sdata (jump tables,
strings, $gp storage) and a preprocessed context built from
config/m2c/rt_ctx.c. Output:

  reference/m2c/<segment>/<VA>_<NAME>.c   one file per function
  reference/m2c/index.tsv                 va, name, words, status, file

m2c output is a reference for writing C, not maintained source: it is not
compiled, matched or validated. Run `tools\\splat.cmd` first.

  m2c_reference.py [--m2c ..\\m2c] [--jobs N] [-f NAME ...]
"""
import argparse, csv, os, re, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CPP = ROOT / 'toolchain/mips/bin/mipsel-none-elf-cpp.exe'
DATA = [ROOT / 'asm/data/rodata_800F27B0.rodata.s', ROOT / 'asm/data/sdata_801C3240.sdata.s']
PREAMBLE = '.include "macro.inc"\n.set noat\n.set noreorder\n.section .text, "ax"\n\n'
BLOCK = re.compile(r'(?ms)^nonmatching (\S+), 0x([0-9A-Fa-f]+)\n.*?^endlabel \1\n')
VA = re.compile(r'/\* [0-9A-F]+ ([0-9A-F]{8}) ')


def build_context(out):
    cmd = [CPP, '-EL', '-nostdinc', '-undef', '-D__GNUC__=2', '-Dmips', '-D__mips__', '-D__psx__',
           '-D_LANGUAGE_C', '-DLANGUAGE_C', '-P', '-I', ROOT / 'toolchain/psyq330/include',
           ROOT / 'config/m2c/rt_ctx.c', '-o', out]
    p = subprocess.run([str(c) for c in cmd], capture_output=True, text=True)
    if p.returncode:
        sys.exit('context preprocessing failed:\n' + p.stderr)


JTBL = re.compile(r'(?ms)^dlabel (jtbl_[0-9A-F]{8})\n(.*?)(?=^\S|\Z)')
WORD = re.compile(r'(?m)^(\s*/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/ \.word )0x(80[0-9A-F]{6})$')
INSN = re.compile(r'(?m)^(\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/ )')


def patch_rodata(src, dst, code_ranges):
    """Copy rodata with jump-table entries turned into label references.

    splat puts the rodata island in its own segment, so spimdisasm emits
    jump tables as raw `.word 0x8013403C` values with no labels in the code.
    m2c needs `.word .L8013403C`; returns every such target address.
    """
    text, targets = src.read_text(), set()

    def table(m):
        def entry(w):
            va = int(w.group(2), 16)
            if not any(lo <= va < hi for lo, hi in code_ranges):
                return w.group(0)
            targets.add(va)
            return '%s.L%08X' % (w.group(1), va)
        return 'dlabel %s\n%s' % (m.group(1), WORD.sub(entry, m.group(2)))

    dst.write_text(JTBL.sub(table, text), newline='\n')
    return targets


def add_jump_labels(body, targets):
    """Insert `.Lxxxxxxxx:` before instructions that are jump-table targets."""
    have = set(re.findall(r'(?m)^\s*\.L([0-9A-F]{8}):', body))

    def label(m):
        va = m.group(2)
        if int(va, 16) in targets and va not in have:
            have.add(va)
            return '  .L%s:\n%s' % (va, m.group(1))
        return m.group(1)

    return INSN.sub(label, body)


def split_functions():
    funcs = []
    for src in sorted((ROOT / 'asm').glob('text_*.s')):
        text = src.read_text()
        for m in BLOCK.finditer(text):
            name, body = m.group(1), m.group(0)
            va = VA.search(body)
            funcs.append(dict(name=name, va=va.group(1) if va else '', segment=src.stem,
                              words=int(m.group(2), 16) // 4, body=body))
    return funcs


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('--m2c', type=Path, default=ROOT.parent.parent / 'tools' / 'm2c')
    p.add_argument('--python', default=sys.executable if 'toolchain' not in sys.executable else 'python')
    p.add_argument('--jobs', type=int, default=os.cpu_count() or 4)
    p.add_argument('-f', '--function', action='append', help='Only these names (for iterating)')
    a = p.parse_args()
    m2c = a.m2c / 'm2c.py'
    if not m2c.exists():
        sys.exit('m2c not found at %s' % m2c)
    if not all(d.exists() for d in DATA):
        sys.exit('asm/ is missing: run tools\\splat.cmd first')
    work = ROOT / 'build/m2c'
    (work / 'asm').mkdir(parents=True, exist_ok=True)
    ctx = work / 'ctx.c'
    build_context(ctx)

    funcs = split_functions()
    code_ranges = [(0x800EFA28, 0x800F27B0), (0x800F56B0, 0x801806C0)]
    rodata = work / 'rodata_800F27B0.rodata.s'
    targets = patch_rodata(DATA[0], rodata, code_ranges)
    data_files = [rodata] + DATA[1:]
    if a.function:
        funcs = [f for f in funcs if f['name'] in a.function]
    out_root = ROOT / 'reference/m2c'

    bios = re.compile(r'addiu\s+\$t2, \$zero, (0x[ABC]0)\s*\n.*?jr\s+\$t2\s*\n.*?addiu\s+\$t1, \$zero, (0x[0-9A-F]+)', re.S)

    def run(f):
        b = bios.search(f['body'])
        if b and f['words'] <= 4:
            # m2c cannot follow a register tail jump; these are reconstructed.
            dest = out_root / f['segment'] / ('%s_%s.c' % (f['va'], f['name']))
            dest.parent.mkdir(parents=True, exist_ok=True)
            dest.write_text('/* %s @ %s: BIOS %s(%sh) tail stub. Maintained source: '
                            'src/semantic/bios_calls.c (not decompiled by m2c). */\n'
                            % (f['name'], f['va'], b.group(1)[2], b.group(2)[2:]), newline='\n')
            return dict(va=f['va'], name=f['name'], words=f['words'], status='bios',
                        file=dest.relative_to(ROOT).as_posix())
        asm = work / 'asm' / (f['name'] + '.s')
        asm.write_text(PREAMBLE + add_jump_labels(f['body'], targets), newline='\n')
        cmd = [a.python, str(m2c), '-t', 'mipsel-gcc-c', '--context', str(ctx), '--no-cache',
               '--globals', 'used', '-f', f['name'], str(asm)] + [str(d) for d in data_files]
        try:
            q = subprocess.run(cmd, capture_output=True, text=True, timeout=300)
            code, out, err = q.returncode, q.stdout, q.stderr
        except subprocess.TimeoutExpired:
            code, out, err = -1, '', 'timeout after 300 s'
        dest = out_root / f['segment'] / ('%s_%s.c' % (f['va'], f['name']))
        dest.parent.mkdir(parents=True, exist_ok=True)
        header = '/* m2c reference for %s @ %s (%d words). Generated; not compiled or validated. */\n' % (
            f['name'], f['va'], f['words'])
        if code == 0 and out.strip():
            status = 'warnings' if 'Warning' in out or 'M2C_ERROR' in out else 'ok'
            if 'M2C_ERROR' in out:
                status = 'partial'
            dest.write_text(header + out, newline='\n')
        else:
            status = 'failed'
            dest.write_text(header + '/*\n' + (err or out).replace('*/', '* /')[-4000:] + '\n*/\n', newline='\n')
        return dict(va=f['va'], name=f['name'], words=f['words'], status=status,
                    file=dest.relative_to(ROOT).as_posix())

    rows = []
    with ThreadPoolExecutor(a.jobs) as pool:
        for i, r in enumerate(pool.map(run, funcs), 1):
            rows.append(r)
            if i % 200 == 0 or i == len(funcs):
                print('%d/%d' % (i, len(funcs)), flush=True)

    index = out_root / 'index.tsv'
    old = {}
    if a.function and index.exists():
        old = {r['name']: r for r in csv.DictReader(index.open(), delimiter='\t')}
    for r in rows:
        old[r['name']] = r
    with index.open('w', newline='\n') as f:
        f.write('va\tname\twords\tstatus\tfile\n')
        for r in sorted(old.values(), key=lambda r: r['va']):
            f.write('%s\t%s\t%s\t%s\t%s\n' % (r['va'], r['name'], r['words'], r['status'], r['file']))
    counts = {}
    for r in old.values():
        counts[r['status']] = counts.get(r['status'], 0) + 1
    print('functions %d: %s' % (len(old), ', '.join('%s %d' % kv for kv in sorted(counts.items()))))


if __name__ == '__main__':
    main()
