#!/usr/bin/env python3
"""Build a C unit with the genuine PsyQ toolchain and compare with retail.

Pipeline, exactly as PsyQ's CCPSX driver runs it (checked with `ccpsx -v`):
  project cpp -> CC1PSX -quiet -O2 [extra] -> ASPSX -q -> PSYLINK /c (CPE)
Every `.text_<VA>` section is linked at its VA and every named data section
(--section .rdata=800F5004) at its VA; undefined symbols are equated to their
retail addresses. The pure binary is then compared with retail per function.

  psyq_real.py src/semantic/link_comb.c
  psyq_real.py src/semantic/link_comb_control.c --section .rdata=800F5004 --diff
"""
import argparse, os, re, shutil, struct, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from semantic_compile import CPP  # noqa: E402
from build_hybrid import address_for, symbol_map  # noqa: E402
from compiler_probe import CPP_FLAGS  # noqa: E402

RETAIL = ROOT / 'bin/SLUS_006.43'
BASE = 0x800EFA20


def run(cmd, cwd):
    env = dict(os.environ, TMP=str(cwd) + os.sep, TEMP=str(cwd) + os.sep, TMPDIR=str(cwd) + os.sep)
    p = subprocess.run([str(c) for c in cmd], cwd=cwd, capture_output=True, text=True, env=env,
                       stdin=subprocess.DEVNULL, timeout=120)
    return p.returncode, p.stdout + p.stderr


def build(source, psyq, extra, sections, out, asflags=()):
    shutil.rmtree(out, ignore_errors=True)
    out.mkdir(parents=True)
    i, s, obj, cpe = out / 'source.i', out / 'source.s', out / 'source.obj', out / 'image.cpe'
    code, log = run([CPP, *CPP_FLAGS, '-D_PSYQ', '-I', ROOT / 'include', '-I', ROOT / 'src',
                     '-I', ROOT / 'toolchain/psyq330/include', source, '-o', i], out)
    if code:
        sys.exit('cpp failed:\n' + log)
    code, log = run([psyq / 'CC1PSX.EXE', '-quiet', '-O2', *extra, i, '-o', s], out)
    if code or not s.exists():
        sys.exit('cc1psx failed:\n' + log)
    asm = s.read_text()
    code, log = run([psyq / 'ASPSX.EXE', '-q', *asflags, s, '-o', obj], out)
    if code:
        sys.exit('aspsx failed:\n' + log)
    # Symbols: defined text sections from the assembly, externals from references.
    texts = sorted(set(re.findall(r'\.section\s+(\.text_([0-9A-Fa-f]{8}))', asm)))
    defined = set(re.findall(r'(?m)^([A-Za-z_$.][\w$.]*):', asm))
    referenced = set(re.findall(r'\b([A-Za-z_][\w]*)\b', re.sub(r'(?m)#.*$', '', asm)))
    syms = symbol_map()
    equates = {}
    for name in sorted(referenced - defined):
        va = address_for(name, syms)
        if va is not None and not name.startswith('.'):
            equates[name] = va
    groups = [(sec, int(va, 16)) for sec, va in texts]
    groups += [(name, int(va, 16)) for name, va in sections.items()]
    lnk = []
    for n, (sec, va) in enumerate(sorted(groups, key=lambda g: g[1])):
        lnk.append('g%d\tgroup\torg($%08X)' % (n, va))
        lnk.append('\tsection\t%s,g%d' % (sec, n))
    lnk.append('\tinclude\t"source.obj"')
    (out / 'unit.lnk').write_text('\n'.join(lnk) + '\n')
    eq = ';'.join('%s=$%08X' % kv for kv in equates.items())
    linker = psyq / 'PSYLINK.EXE'
    if not linker.exists():            # e.g. the 4.3 package ships no linker
        linker = ROOT / 'toolchain/psyq4.4/PSYLINK.EXE'
    # Retail $gp is 801C3240. PSYLINK takes /gp as a section +/- a constant, so
    # express it relative to a placed small-data section when there is one;
    # otherwise PSYLINK defaults $gp to the start of the unit's .sdata.
    gp = []
    for name in ('.sdata', '.sbss'):
        if name in sections:
            delta = int(sections[name], 16) - 0x801C3240
            gp = ['/gp', '%s%s$%X' % (name, '-' if delta >= 0 else '+', abs(delta))]
            break
    cmd = [linker, '/c'] + gp + (['/e', eq] if eq else []) + ['@unit.lnk,image.cpe']
    code, log = run(cmd, out)
    (out / 'link.log').write_text(log)
    if code or not cpe.exists():
        sys.exit('psylink failed:\n' + log)
    return read_cpe(cpe.read_bytes()), groups


def read_cpe(data):
    """{load address: bytes} from a PsyQ CPE file. The pure-binary output
    (/p) concatenates groups and loses the gaps between their origins."""
    if data[:4] != b'CPE\x01':
        raise ValueError('not a CPE file')
    blocks, i = {}, 4
    while i < len(data):
        tag = data[i]
        i += 1
        if tag == 0:                                  # end
            break
        if tag == 1:                                  # load data: addr, size, bytes
            addr, size = struct.unpack_from('<II', data, i)
            blocks[addr] = data[i + 8:i + 8 + size]
            i += 8 + size
        elif tag == 2:                                # run address
            i += 4
        elif tag == 3:                                # set register: u16 reg, u32 value
            i += 6
        elif tag == 4:                                # set register: u16 reg, u16 value
            i += 4
        elif tag == 8:                                # select unit
            i += 1
        else:
            raise ValueError('unknown CPE tag %d at offset %d' % (tag, i - 1))
    return blocks


def fetch(blocks, va, size):
    """Bytes [va, va+size) assembled from contiguous CPE load blocks (PSYLINK
    writes one block per object fragment, e.g. per jump table)."""
    out = bytearray()
    at = va
    while len(out) < size:
        block = next(((a, d) for a, d in blocks.items() if a <= at < a + len(d)), None)
        if block is None:
            break
        a, d = block
        take = d[at - a:at - a + size - len(out)]
        out += take
        at += len(take)
    return bytes(out)


def contiguous_size(blocks, va):
    """Length of the run of contiguous blocks starting at va."""
    at = va
    while True:
        nxt = blocks.get(at)
        if nxt is None:
            return at - va
        at += len(nxt)


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('source', type=Path)
    p.add_argument('--psyq', default='psyq4.4', help='package under toolchain/ or toolchain/psyq-candidates/')
    p.add_argument('--flags', default='', help='extra CC1PSX flags after -O2')
    p.add_argument('--section', action='append', default=[], metavar='NAME=VA')
    p.add_argument('--asflags', default='', help='extra ASPSX options, e.g. -s2')
    p.add_argument('--diff', action='store_true')
    a = p.parse_args()
    psyq = ROOT / 'toolchain' / a.psyq
    if not psyq.is_dir():
        psyq = ROOT / 'toolchain/psyq-candidates' / a.psyq
    sections = dict(s.split('=', 1) for s in a.section)
    out = ROOT / 'build/psyq_real' / a.source.stem
    blocks, groups = build(a.source.resolve(), psyq, a.flags.split(), sections, out, a.asflags.split())
    retail = RETAIL.read_bytes()
    funcs = {}
    import csv
    for r in csv.DictReader((ROOT / 'config/US/funcs.tsv').open(), delimiter='\t'):
        funcs[int(r['va'], 16)] = 4 * int(r['words'])
    all_exact = True
    for sec, va in sorted(groups, key=lambda g: g[1]):
        size = funcs.get(va) if sec.startswith('.text_') else None
        if size is None:
            size = contiguous_size(blocks, va)
        got = fetch(blocks, va, size)
        want = retail[va - BASE + 0x800: va - BASE + 0x800 + size]
        same = sum(got[k:k + 4] == want[k:k + 4] for k in range(0, size, 4))
        exact = got == want
        all_exact &= exact
        extra = ''
        if sec.startswith('.text_') and not exact:
            from variant_probe import norm
            import difflib
            n = size // 4
            longer = fetch(blocks, va, size + 64)
            bw = [struct.unpack_from('<I', longer, k)[0] for k in range(0, len(longer) // 4 * 4, 4)]
            rw = [struct.unpack_from('<I', want, k)[0] for k in range(0, size, 4)]
            sm = difflib.SequenceMatcher(None, [norm(w) for w in rw], [norm(w) for w in bw], autojunk=False)
            extra = '  structural unmatched %d' % (n - sum(b.size for b in sm.get_matching_blocks()))
        print('%-16s %08X  %s  %d/%d words%s' % (sec, va, 'EXACT' if exact else 'diff ', same, size // 4, extra))
        if a.diff and not exact:
            for k in range(0, size, 4):
                if got[k:k + 4] != want[k:k + 4]:
                    print('    %08X  build %08X  retail %08X' % (va + k, struct.unpack_from('<I', got, k)[0],
                                                              struct.unpack_from('<I', want, k)[0]))
    return 0 if all_exact else 1


if __name__ == '__main__':
    sys.exit(main())
