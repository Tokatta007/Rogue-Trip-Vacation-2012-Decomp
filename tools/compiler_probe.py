#!/usr/bin/env python3
"""Find which compiler reproduces retail functions byte-for-byte.

For each candidate cc1 (the project's GCC 2.7.2 and the PsyQ CC1PSX builds in
toolchain/psyq-candidates/), compile one C unit through the normal pipeline
(project cpp -> candidate cc1 -> maspsx -> GNU as), link every `.text_<VA>`
function at its retail address and compare it with the retail slot.

  compiler_probe.py src/semantic/link_comb.c
  compiler_probe.py src/semantic/math_vec.c --flags "-O2 -G8" --delay compiler
"""
import argparse, csv, json, os, re, shutil, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from semantic_compile import CPP, AS, MASPSX  # noqa: E402
from semantic_elf import read_elf  # noqa: E402
from build_hybrid import auto_functions, link_unit, symbol_map  # noqa: E402

CANDIDATES = {'gcc2.7.2 (TM2 kit)': ROOT / 'toolchain/gcc-2.7.2-psx/cc1.exe',
              'gcc2.7.2-psyqlib': ROOT / 'toolchain/gcc-2.7.2-psyqlib/cc1.exe'}
for d in sorted((ROOT / 'toolchain/psyq-candidates').glob('psyq*')):
    if (d / 'CC1PSX.EXE').is_file():
        CANDIDATES[d.name] = d / 'CC1PSX.EXE'

CPP_FLAGS = ['-EL', '-nostdinc', '-undef', '-D__GNUC__=2', '-D__OPTIMIZE__', '-Dmips', '-D__mips__',
             '-D__mips', '-Dpsx', '-D__psx__', '-D__psx', '-D__EXTENSIONS__', '-D_MIPSEL',
             '-D__CHAR_UNSIGNED__', '-D_LANGUAGE_C', '-DLANGUAGE_C', '-DINCLUDE_ASM_USE_MACRO_INC=1']


def run(cmd, cwd):
    # PsyQ CC1PSX builds its temp file from TMP/TMPDIR; a POSIX value from a
    # Unix-style shell makes it fail (exit 33, "\/ctaNNNN: No such file").
    tmp = str(cwd) + os.sep
    env = dict(os.environ, TMP=tmp, TEMP=tmp, TMPDIR=tmp)
    try:
        p = subprocess.run([str(c) for c in cmd], cwd=cwd, capture_output=True, env=env,
                           stdin=subprocess.DEVNULL, timeout=60)
    except subprocess.TimeoutExpired:
        return -1, b'', 'timeout after 60 s: ' + ' '.join(map(str, cmd))[:200]
    return p.returncode, p.stdout, p.stderr.decode(errors='replace')


def probe(source, name, cc1, flags, delay, aspsx, work, sections=None, gas=None):
    out = work / re.sub(r'[^\w.]+', '_', name)
    shutil.rmtree(out, ignore_errors=True)
    out.mkdir(parents=True)
    i, s, ms, o = (out / ('source' + ext) for ext in ('.i', '.s', '.ms', '.o'))
    code, _, err = run([CPP, *CPP_FLAGS, '-I', ROOT / 'include', '-I', ROOT / 'src',
                        '-I', ROOT / 'toolchain/psyq330/include', source, '-o', i], out)
    if code:
        return dict(error='cpp: ' + err[-400:])
    ccflags = flags.split() + ['-quiet'] + ([] if delay == 'compiler' else ['-fno-delayed-branch'])
    code, _, err = run([cc1, *ccflags, i, '-o', s], out)
    if not s.exists() or s.stat().st_size == 0:
        return dict(error=f'cc1 exit {code}: ' + err[-400:])
    if gas is None:
        code, text, err = run([sys.executable, MASPSX, f'--aspsx-version={aspsx}', '--expand-div',
                               '--dont-force-G0', '-G8', s], out)
        if code:
            return dict(error='maspsx: ' + err[-400:])
        ms.write_bytes(text)
        as_input, as_flags = ms, ['-O1', '-G0']
    else:
        # GNU as on the compiler output: gas expands the macros and fills
        # reorder-mode delay slots itself (no maspsx). gas_prep restores the
        # old GNU as encodings of move and div first.
        from gas_prep import prepare
        as_input = out / 'source.gas.s'
        as_input.write_text(prepare(s.read_text(errors='replace')), newline='\n')
        as_flags = gas.split()
    code, _, err = run([AS, '-EL', '-I', ROOT / 'include', '-I', ROOT, '-march=r3000', '-mtune=r3000',
                        '-no-pad-sections', *as_flags, '-o', o, as_input], out)
    if code:
        return dict(error='as: ' + err[-400:])
    slots = {int(r['va'], 16): 4 * int(r['words'])
             for r in csv.DictReader((ROOT / 'config/US/funcs.tsv').open(), delimiter='\t')}
    # Probe-only: link oversized bodies too, so they can still be diffed.
    unit = dict(source=str(source), functions=auto_functions(read_elf(o)), sections=sections or {},
                allow_oversize=True)
    try:
        code_bytes = link_unit(unit, o, out, symbol_map(), slots)
    except ValueError as e:
        return dict(error='link: ' + str(e)[-400:])
    retail = (ROOT / 'bin/SLUS_006.43').read_bytes()
    result = {}
    for va, data in sorted(code_bytes.items()):
        off = int(va, 16) - 0x800EFA20 + 0x800
        want = retail[off:off + slots[int(va, 16)]]
        words = len(want) // 4
        same = sum(data[k:k + 4] == want[k:k + 4] for k in range(0, min(len(data), len(want)), 4))
        result[unit['functions'][va]] = dict(exact=data == want, words_equal=same, retail_words=words,
                                             built_words=len(data) // 4)
    for sec, (va, data) in unit.get('placed_data', {}).items():
        off = va - 0x800EFA20 + 0x800
        want = retail[off:off + len(data)]
        same = sum(data[k:k + 4] == want[k:k + 4] for k in range(0, len(data), 4))
        result[sec] = dict(exact=data == want, words_equal=same, retail_words=len(data) // 4,
                           built_words=len(data) // 4)
    return result


def show_diff(elf_path):
    """Word-by-word listing of every differing instruction or data word."""
    objdump = ROOT / 'toolchain/mips/bin/mipsel-none-elf-objdump.exe'
    retail = (ROOT / 'bin/SLUS_006.43').read_bytes()
    out = subprocess.run([str(objdump), '-D', '-z', str(elf_path)], capture_output=True, text=True).stdout
    shown = 0
    for line in out.splitlines():
        m = re.match(r'\s*([0-9a-f]{8}):\s+([0-9a-f]{8})\s+(.*)', line)
        if not m:
            continue
        va, word = int(m.group(1), 16), int(m.group(2), 16)
        off = va - 0x800EFA20 + 0x800
        want = int.from_bytes(retail[off:off + 4], 'little')
        if word != want:
            print('   * %08X  build %08X  retail %08X  %s' % (va, word, want, re.sub(r'\s+', ' ', m.group(3))[:40]))
            shown += 1
            if shown >= 40:
                print('   ... (first 40 shown)')
                return


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('source', type=Path)
    p.add_argument('--flags', default='-O2 -G8')
    p.add_argument('--delay', choices=('compiler', 'assembler'), default='compiler')
    p.add_argument('--aspsx', default='2.34', help='maspsx --aspsx-version')
    p.add_argument('--only', action='append', help='candidate name substring(s)')
    p.add_argument('--diff', action='store_true', help='print differing words for each candidate')
    p.add_argument('--gas', metavar='FLAGS', help='assemble the compiler output with GNU as directly '
                   '(these as flags, e.g. "-O2 -G0") instead of maspsx')
    p.add_argument('--section', action='append', default=[], metavar='NAME=VA',
                   help='place a data section at a retail VA, e.g. .rdata=800F5004')
    a = p.parse_args()
    source = a.source.resolve()
    work = ROOT / 'build/compiler_probe' / source.stem
    report = {}
    for name, cc1 in CANDIDATES.items():
        if a.only and not any(x in name for x in a.only):
            continue
        r = probe(source, name, cc1, a.flags, a.delay, a.aspsx, work,
                  dict(s.split('=', 1) for s in a.section), a.gas)
        report[name] = r
        if 'error' in r:
            print('%-20s ERROR %s' % (name, r['error'].splitlines()[0] if r['error'] else ''))
            continue
        cells = ['%s %s %d/%d' % (fn, 'EXACT' if v['exact'] else 'diff', v['words_equal'], v['retail_words'])
                 for fn, v in r.items()]
        print('%-20s %s' % (name, '  '.join(cells)))
        if a.diff:
            show_diff(work / re.sub(r'[^\w.]+', '_', name) / 'unit.elf')
    (work / 'report.json').write_text(json.dumps(dict(flags=a.flags, delay=a.delay, aspsx=a.aspsx,
                                                      results=report), indent=2) + '\n')


if __name__ == '__main__':
    main()
