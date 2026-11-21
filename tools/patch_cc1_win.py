#!/usr/bin/env python3
"""Patch the project's Windows GCC 2.7.2 cc1.exe towards the cc1 that built
the PsyQ libraries (libcomb in Rogue Trip).

  patch_cc1_win.py [--only N,N,...] [in out]
      (default: toolchain/gcc-2.7.2-psx/cc1.exe ->
                toolchain/gcc-2.7.2-psyqlib/cc1.exe)

The PsyQ runtime libraries were compiled with GCC 2.7.2 plus a few GCC 2.8
behaviours (juandav/dcb_decomp, tools/patch_cc1.py, MIT, patches a Linux i386
build of the same compiler; patch numbers here follow theirs). This file ports
them to the unoptimised MinGW build we have. Sites come from the exe's COFF
symbol table and every byte changed is checked first. New code goes into an
added executable section `.patch`:

  - small patches are hand-assembled here;
  - larger ones are C functions in tools/cc1patch/*.c (layout and entry
    points of this cc1 in tools/cc1patch/cc1.h), compiled by clang for i686
    without relocations. The compiled bytes are cached in
    tools/cc1patch/blobs.json, so clang (llvm-mingw; see find_clang) is only
    needed after a C source changes. A stub at
    each site passes the caller's frame and registers to the C function.

The patched image loads at its preferred base (dynamic base cleared) because
the new code uses absolute addresses of cc1's globals.

rtx layout in this build: code = 16-bit word at +0, mode byte at +4,
operands from +8; the rtx codes are those of GCC 2.7.2's rtl.def.

Ported (all of juandav's patches; 2 and 3 are folded into 18 and 16/17 as in
their file):
 1  try_combine keeps both loads of a narrow load + sign extension.
 4  fill_simple_delay_slots fills an unconditional jump's slot from its
    target (p4.c).
 5  find_best_addr keeps `reg + const_int` addresses (no fold to `sym+8`).
 6  alter_reg aligns a spill slot to its own mode.
 8  expand_increment queues a MEM post-increment as GCC 2.8 does (p8.c).
 9  cse's COST uses GCC 2.8's notreg_cost for lowpart SUBREGs (p9.c).
 10 block_alloc ties a called function pointer to the call's result register.
 11 combine_instructions calls init_recog () at its end (volatile MEMs are
    recognised again, so sched1 schedules them).
 12 -fforce-mem no longer copies a MEM to a register before extending it.
 13 prune_preferences tests register conflicts in both directions.
 14 jump_optimize: `if (..) { x = a; goto l; } x = b;` -> `x = a; if (..)
    goto l; x = b;` (p14.c).
 15 jump_optimize's store-flag conversion needs a power of two with cheap
    branches.
 7, 16, 17 reorg's mark_target_live_regs scan as in GCC 2.8: simple jumps
    followed to their label, conditional jumps on both paths, except a
    conditional jump the scan starts at (p16.c; `--only 16` selects all three).
 18 try_combine zeroes a dead I2DEST's counts when the new I2 doesn't mention
    it; regclass skips ST_REGS for a pseudo with two references.
 19 update_equiv_regs doubles the live length of a register with a
    REG_EQUIV note only when it crosses a call (found for _comb_control,
    not in juandav's set).
"""
import hashlib, json, os, shutil, struct, subprocess, sys, tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
STOCK = ROOT / 'toolchain/gcc-2.7.2-psx/cc1.exe'
PATCHED = ROOT / 'toolchain/gcc-2.7.2-psyqlib/cc1.exe'
STOCK_SHA256 = '94a3fda332316aa4db71d92cb4fa2ea225d7a9b50b893005145f7c86d77fd75e'
CDIR = ROOT / 'tools/cc1patch'
BLOBS = CDIR / 'blobs.json'


def find_clang():
    """clang for the C patch bodies (llvm-mingw or any clang that targets
    i686-w64-mingw32): CC1PATCH_CLANG, then PATH, then an llvm-mingw next to
    the project (tools/llvm-mingw here or two levels up, the TM2-PC-Port
    layout). Only needed when a tools/cc1patch/*.c source changes."""
    env = os.environ.get('CC1PATCH_CLANG')
    if env:
        return env
    for base in (ROOT / 'tools', ROOT.parent.parent / 'tools'):
        cand = base / 'llvm-mingw/bin/clang.exe'
        if cand.exists():
            return str(cand)
    return shutil.which('clang') or 'clang'


CLANG = find_clang()
PATCH_SECTION_SIZE = 0x8000


def rel32(frm, to):
    return (to - frm).to_bytes(4, 'little', signed=True)


# ---------------------------------------------------------------- C bodies

def _coff_text(obj, entry):
    """(.text bytes, entry offset) of a clang COFF object. The only
    relocations allowed are REL32 calls between functions of the same .text
    (resolved here; the code stays position independent)."""
    b = Path(obj).read_bytes()
    nsec = struct.unpack_from('<H', b, 2)[0]
    symptr, nsym = struct.unpack_from('<II', b, 8)
    opt = struct.unpack_from('<H', b, 16)[0]
    text = tidx = None
    relocs = []
    for i in range(nsec):
        name, vs, va, rs, rp, relp, _, nrel = struct.unpack_from('<8sIIIIIIH', b, 20 + opt + 40 * i)
        name = name.rstrip(b'\0')
        if name == b'.text':
            text, tidx = bytearray(b[rp:rp + rs]), i + 1
            relocs = [struct.unpack_from('<IIH', b, relp + 10 * k) for k in range(nrel)]
        elif name in (b'.rdata', b'.data', b'.bss') and rs:
            sys.exit('patch_cc1_win: %s uses static data (%s)' % (obj, name.decode()))
    strtab = symptr + 18 * nsym
    syms, i = {}, 0
    while i < nsym:
        raw = b[symptr + 18 * i: symptr + 18 * i + 18]
        name = raw[:8]
        if name[:4] == b'\0\0\0\0':
            off = struct.unpack_from('<I', name, 4)[0]
            name = b[strtab + off: b.index(b'\0', strtab + off)]
        value, secno = struct.unpack_from('<Ih', raw, 8)
        syms[i] = (name.rstrip(b'\0').decode(), value, secno)
        i += 1 + raw[17]
    for at, symidx, kind in relocs:
        name, value, secno = syms[symidx]
        if kind != 0x14 or secno != tidx:      # IMAGE_REL_I386_REL32 within .text
            sys.exit('patch_cc1_win: %s: unsupported relocation to %s' % (obj, name))
        addend = struct.unpack_from('<i', text, at)[0]
        struct.pack_into('<i', text, at, value + addend - (at + 4))
    for name, value, secno in syms.values():
        if name == '_' + entry and secno == tidx:
            return bytes(text), value
    sys.exit('patch_cc1_win: %s: no symbol %s' % (obj, entry))


def c_blob(name):
    """Compiled bytes and entry offset of tools/cc1patch/<name>.c."""
    src = (CDIR / (name + '.c')).read_bytes() + (CDIR / 'cc1.h').read_bytes()
    key = hashlib.sha256(src).hexdigest()
    cache = json.loads(BLOBS.read_text()) if BLOBS.exists() else {}
    hit = cache.get(name)
    if hit and hit['source_sha256'] == key:
        return bytes.fromhex(hit['code']), hit['entry']
    if not (Path(CLANG).exists() or shutil.which(CLANG)):
        sys.exit('patch_cc1_win: %s.c changed and clang is not available (%s)' % (name, CLANG))
    with tempfile.TemporaryDirectory() as tmp:
        obj = Path(tmp) / (name + '.o')
        subprocess.run([CLANG, '--target=i686-w64-mingw32', '-O2', '-fno-pic', '-fno-jump-tables',
                        '-fno-stack-protector', '-fno-builtin', '-mno-sse', '-fno-asynchronous-unwind-tables',
                        '-c', str(CDIR / (name + '.c')), '-o', str(obj)], check=True)
        code, entry = _coff_text(obj, name)
    cache[name] = dict(source_sha256=key, entry=entry, code=code.hex())
    BLOBS.write_text(json.dumps(cache, indent=1, sort_keys=True) + '\n')
    return code, entry


# ------------------------------------------------------------------ image

class Image:
    def __init__(self, data):
        self.d = bytearray(data)
        d = self.d
        self.pe = pe = struct.unpack_from('<I', d, 0x3C)[0]
        self.nsec = struct.unpack_from('<H', d, pe + 6)[0]
        self.opt = pe + 24
        optsize = struct.unpack_from('<H', d, pe + 20)[0]
        self.base = struct.unpack_from('<I', d, self.opt + 28)[0]
        self.salign, self.falign = struct.unpack_from('<II', d, self.opt + 32)
        self.sh = self.opt + optsize
        self.secs = []
        for i in range(self.nsec):
            name, vs, va, rs, rp = struct.unpack_from('<8sIIII', d, self.sh + 40 * i)
            self.secs.append([name.rstrip(b'\0'), vs, self.base + va, rs, rp])
        self.cave_at = self.cave_end = None

    def fo(self, va):
        for _, vs, sva, rs, rp in self.secs:
            if sva <= va < sva + max(vs, rs) and va - sva < rs:
                return va - sva + rp
        raise ValueError(hex(va))

    def put(self, va, old, new):
        o = self.fo(va)
        if bytes(self.d[o:o + len(old)]) != bytes(old):
            sys.exit('patch_cc1_win: unexpected bytes at %#x: %s' % (va, self.d[o:o + len(old)].hex()))
        self.d[o:o + len(new)] = new

    def add_section(self, size):
        d = self.d
        hdr = self.sh + 40 * self.nsec
        if hdr + 40 > self.secs[0][4]:
            sys.exit('patch_cc1_win: no room for a section header')
        last = max(self.secs, key=lambda s: s[2])
        va = (last[2] - self.base + max(last[1], last[3]) + self.salign - 1) & ~(self.salign - 1)
        rp = (len(d) + self.falign - 1) & ~(self.falign - 1)
        d.extend(bytes(rp - len(d) + size))
        struct.pack_into('<8sIIIIIIHHI', d, hdr, b'.patch', size, va, size, rp, 0, 0, 0, 0, 0x60000020)
        struct.pack_into('<H', d, self.pe + 6, self.nsec + 1)
        struct.pack_into('<I', d, self.opt + 56, (va + size + self.salign - 1) & ~(self.salign - 1))
        self.secs.append([b'.patch', size, self.base + va, size, rp])
        self.nsec += 1
        self.cave_at = self.base + va
        self.cave_end = self.cave_at + size

    def cave(self, build):
        """Place build(address) -> bytes in .patch; returns the address."""
        at = self.cave_at
        code = build(at)
        if at + len(code) > self.cave_end:
            sys.exit('patch_cc1_win: .patch section full')
        o = self.fo(at)
        self.d[o:o + len(code)] = code
        self.cave_at = (at + len(code) + 15) & ~15
        return at

    def c_function(self, name):
        code, entry = c_blob(name)
        return self.cave(lambda at: code) + entry


# ---------------------------------------------------------------- patches

def patch5(img):
    # find_best_addr: 0x4A7DA5 `mov eax,[ebp-0x10]; movzx eax,word [eax];
    # cmp ax,REG; je skip` guards the fold (fold = 0x4A7DB1, skip = 0x4A7DED).
    site, fold, skip = 0x4A7DA5, 0x4A7DB1, 0x4A7DED

    def build(at):
        c = bytearray()
        c += b'\x8b\x45\xf0'                 # mov eax,[ebp-0x10]   (addr)
        c += b'\x0f\xb7\x00'                 # movzx eax,word [eax]
        c += b'\x66\x83\xf8\x34'             # cmp ax,REG
        c += b'\x0f\x84' + rel32(at + len(c) + 6, skip)
        c += b'\x66\x83\xf8\x41'             # cmp ax,PLUS
        c += b'\x0f\x85' + rel32(at + len(c) + 6, fold)
        c += b'\x8b\x4d\xf0'                 # mov ecx,[ebp-0x10]
        c += b'\x8b\x49\x0c'                 # mov ecx,[ecx+0xc]    (XEXP (addr, 1))
        c += b'\x66\x83\x39\x2f'             # cmp word [ecx],CONST_INT
        c += b'\x0f\x84' + rel32(at + len(c) + 6, skip)
        c += b'\xe9' + rel32(at + len(c) + 5, fold)
        return bytes(c)

    at = img.cave(build)
    img.put(site, b'\x8b\x45\xf0\x0f\xb7\x00\x66\x83\xf8\x34\x74\x3c',
            b'\xe9' + rel32(site + 5, at) + b'\x90' * 7)


def patch11(img):
    # combine_instructions+0x5fb, right before the return: `nop; lea esp,
    # [ebp-0xc]; pop ebx` -> call _init_recog (0x521CF0) first.
    site, init_recog = 0x4CBE67, 0x521CF0
    replaced = bytes.fromhex('908d65f45b')

    def build(at):
        c = bytearray(b'\xe8' + rel32(at + 5, init_recog)) + replaced
        c += b'\xe9' + rel32(at + len(c) + 5, site + len(replaced))
        return bytes(c)

    at = img.cave(build)
    img.put(site, replaced, b'\xe9' + rel32(site + 5, at))


def patch13(img):
    # prune_preferences+0x35c: after `CONFLICTP (allocno, allocno_order[j])`
    # fails, also test the other row. Globals: conflicts 0x5C2278,
    # allocno_row_words 0x5C227C, allocno_order 0x5C226C; locals: allocno
    # -0x24, j -0x20.
    site, merge, nxt = 0x4EFFB3, 0x4EFFB9, 0x4F00A1

    def build(at):
        c = bytearray()
        c += b'\xa1' + (0x5C226C).to_bytes(4, 'little')            # mov eax,[allocno_order]
        c += b'\x8b\x55\xe0'                                     # mov edx,[ebp-0x20]  (j)
        c += b'\x8b\x04\x90'                                     # mov eax,[eax+edx*4]
        c += b'\x0f\xaf\x05' + (0x5C227C).to_bytes(4, 'little')    # imul eax,[allocno_row_words]
        c += b'\x8b\x55\xdc'                                     # mov edx,[ebp-0x24]  (allocno)
        c += b'\x89\xd1'                                         # mov ecx,edx
        c += b'\xc1\xfa\x05'                                     # sar edx,5
        c += b'\x01\xd0'                                         # add eax,edx
        c += b'\x8b\x15' + (0x5C2278).to_bytes(4, 'little')        # mov edx,[conflicts]
        c += b'\x8b\x04\x82'                                     # mov eax,[edx+eax*4]
        c += b'\x83\xe1\x1f'                                     # and ecx,31
        c += b'\xd3\xf8'                                         # sar eax,cl
        c += b'\xa8\x01'                                         # test al,1
        c += b'\x0f\x85' + rel32(at + len(c) + 6, merge)
        c += b'\xe9' + rel32(at + len(c) + 5, nxt)
        return bytes(c)

    at = img.cave(build)
    img.put(site, b'\x0f\x84' + rel32(site + 6, nxt), b'\x0f\x84' + rel32(site + 6, at))


def patch14(img):
    # jump_optimize+0x1158: the next case starts `mov eax,[reload_completed]`
    # (0x5C5B08); every failure of the `if (...) x = a; else x = b;` case
    # lands here. insn is %ebx, next %edi; p14 () returns nonzero to
    # `continue` (loop tail 0x4A02C8).
    site, back, cont = 0x49EC7C, 0x49EC81, 0x4A02C8
    fn = img.c_function('p14')

    def build(at):
        c = bytearray()
        c += b'\x57'                          # push edi        (slot: next)
        c += b'\x89\xe0'                      # mov eax,esp
        c += b'\x50\x53\x55'                  # push eax (&next); push ebx; push ebp
        c += b'\xe8' + rel32(at + len(c) + 5, fn)
        c += b'\x83\xc4\x0c'                  # add esp,12
        c += b'\x5f'                          # pop edi         (next, maybe updated)
        c += b'\x85\xc0'                      # test eax,eax
        c += b'\x0f\x85' + rel32(at + len(c) + 6, cont)
        c += b'\xa1' + (0x5C5B08).to_bytes(4, 'little')   # the replaced insn
        c += b'\xe9' + rel32(at + len(c) + 5, back)
        return bytes(c)

    at = img.cave(build)
    img.put(site, b'\xa1' + (0x5C5B08).to_bytes(4, 'little'), b'\xe9' + rel32(site + 5, at))


def patch16(img):
    # Patches 7, 16, 17 together (p16.c): mark_target_live_regs+0xab5 starts
    # its forward scan with `insn = target; goto test` (11 bytes); the C scan
    # replaces the whole loop and returns to the code after it (0x512327).
    site, after = 0x512040, 0x512327
    old = bytes.fromhex('8b45088945d8') + b'\xe9' + rel32(site + 11, 0x51231D)
    fn = img.c_function('p16')

    def build(at):
        c = bytearray(b'\x55')                                   # push ebp
        c += b'\xe8' + rel32(at + len(c) + 5, fn)
        c += b'\x83\xc4\x04'                                     # add esp,4
        c += b'\xe9' + rel32(at + len(c) + 5, after)
        return bytes(c)

    at = img.cave(build)
    img.put(site, old, b'\xe9' + rel32(site + 5, at) + b'\x90' * 6)


def patch9(img):
    # cse's COST: each `call rtx_cost` of a COST expansion (arguments X, SET)
    # goes to p9 (GCC 2.8's notreg_cost, returning the doubled cost) and the
    # `* 2` after it becomes a move. Sites as juandav's: insert, find_best_addr
    # (3), fold_rtx (5), cse_insn (6), cse_set_around_loop (2).
    rtx_cost = 0x4A3D48
    fn = img.c_function('p9')
    for site, double, move in (
            (0x4A5324, b'\x01\xc0', b'\x89\xc0'),            # insert
            (0x4A839F, b'\x01\xc0', b'\x89\xc0'),            # find_best_addr
            (0x4A8599, b'\x01\xc0', b'\x89\xc0'),
            (0x4A86BC, b'\x01\xc0', b'\x89\xc0'),
            (0x4AD72C, b'\x01\xc0', b'\x89\xc0'),            # fold_rtx
            (0x4ADE48, b'\x8d\x1c\x00', b'\x89\xc3\x90'),    # lea ebx,[eax+eax]
            (0x4ADF50, b'\x01\xc0', b'\x89\xc0'),
            (0x4AE264, b'\x8d\x1c\x00', b'\x89\xc3\x90'),
            (0x4AE3B4, b'\x01\xc0', b'\x89\xc0'),
            (0x4B1CFA, b'\x01\xc0', b'\x89\xc0'),            # cse_insn
            (0x4B1E33, b'\x01\xc0', b'\x89\xc0'),
            (0x4B1F5A, b'\x01\xc0', b'\x89\xc0'),
            (0x4B2093, b'\x01\xc0', b'\x89\xc0'),
            (0x4B273A, b'\x8d\x1c\x00', b'\x89\xc3\x90'),
            (0x4B27FF, b'\x01\xc0', b'\x89\xc0'),
            (0x4B50B1, b'\x8d\x1c\x00', b'\x89\xc3\x90'),    # cse_set_around_loop
            (0x4B51F0, b'\x01\xc0', b'\x89\xc0')):
        img.put(site, b'\xe8' + rel32(site + 5, rtx_cost) + double,
                b'\xe8' + rel32(site + 5, fn) + move)


def patch10(img):
    # block_alloc+0x32f, where an operand is tied to output operand 0: for a
    # CALL_INSN whose operand is a MEM, use the register inside it (as for a
    # 'p' operand), as GCC 2.8's mips.md call patterns do; the register
    # holding a function pointer then prefers $v0. Locals: r1 -0x5c; insn is
    # %edi. `movzbl (%eax),%eax; cmp $'p',%al` (5 bytes) is the site.
    site, is_p, not_p = 0x4EBA58, 0x4EBA5F, 0x4EBA7F

    def build(at):
        c = bytearray(b'\x0f\xb6\x00\x3c\x70')            # the replaced insns
        c += b'\x0f\x84' + rel32(at + len(c) + 6, is_p)
        c += b'\x66\x83\x3f\x1d'                          # cmpw $CALL_INSN,(%edi)
        c += b'\x0f\x85' + rel32(at + len(c) + 6, not_p)
        c += b'\x8b\x45\xa4'                              # mov eax,[ebp-0x5c] (r1)
        c += b'\x66\x83\x38\x39'                          # cmpw $MEM,(%eax)
        c += b'\x0f\x85' + rel32(at + len(c) + 6, not_p)
        c += b'\x8b\x40\x08\x89\x45\xa4'                  # r1 = XEXP (r1, 0)
        c += b'\xe9' + rel32(at + len(c) + 5, not_p)
        return bytes(c)

    at = img.cave(build)
    img.put(site, b'\x0f\xb6\x00\x3c\x70', b'\xe9' + rel32(site + 5, at))


def patch12(img):
    # -fforce-mem doesn't load a MEM into a register before extending it
    # (GCC 2.8): expand_expr's NOP_EXPR drops `if (flag_force_mem && MEM)
    # op0 = copy_to_reg (op0)` (its `je` becomes `jmp`), and emit_unop_insn
    # skips force_not_mem for SIGN_EXTEND/ZERO_EXTEND (code at +0x14).
    img.put(0x457969, b'\x74\x13', b'\xeb\x13')
    site, call, skip = 0x477750, 0x477759, 0x477767
    flag = (0x5B4988).to_bytes(4, 'little')                  # flag_force_mem

    def build(at):
        c = bytearray(b'\x83\x3d' + flag + b'\x00')            # cmpl $0,flag_force_mem
        c += b'\x0f\x84' + rel32(at + len(c) + 6, skip)
        c += b'\x8b\x45\x14\x83\xe8\x64\x83\xf8\x01'          # code - SIGN_EXTEND <= 1 ?
        c += b'\x0f\x86' + rel32(at + len(c) + 6, skip)
        c += b'\xe9' + rel32(at + len(c) + 5, call)
        return bytes(c)

    at = img.cave(build)
    img.put(site, b'\xa1' + flag + b'\x85\xc0\x74\x0e', b'\xe9' + rel32(site + 5, at) + b'\x90\x90\x90\x90')


def patch1(img):
    # try_combine+0x213a: the `jne` after `cmp $SIGN_EXTEND` (the special
    # case splitting a PARALLEL of a narrow load and its sign extension)
    # becomes a `jmp` to the same target: the ROM keeps both loads.
    site = 0x4CEC74
    old = bytes(img.d[img.fo(site):img.fo(site) + 6])
    if old[:2] != b'\x0f\x85':
        sys.exit('patch_cc1_win: patch 1 site changed')
    target = site + 6 + struct.unpack_from('<i', old, 2)[0]
    img.put(site, old, b'\xe9' + rel32(site + 5, target) + b'\x90')


def patch18(img):
    # try_combine+0x34ba: I2DEST's stale REG_N_SETS/REG_N_REFS are zeroed
    # also when the new I2 pattern doesn't mention it (GCC 2.8:
    # `newi2pat == 0 || ! reg_mentioned_p (i2dest, newi2pat)`). Locals:
    # newi2pat -0x130, i2dest -0x138.
    site, keep, go_on = 0x4CFFF4, 0x4D007D, 0x4CFFFA
    reg_mentioned_p = 0x484557

    def build(at):
        c = bytearray(b'\xff\xb5' + (-0x130).to_bytes(4, 'little', signed=True))   # push newi2pat
        c += b'\xff\xb5' + (-0x138).to_bytes(4, 'little', signed=True)             # push i2dest
        c += b'\xe8' + rel32(at + len(c) + 5, reg_mentioned_p)
        c += b'\x83\xc4\x08\x85\xc0'                                              # add esp,8; test
        c += b'\x0f\x85' + rel32(at + len(c) + 6, keep)
        c += b'\xe9' + rel32(at + len(c) + 5, go_on)
        return bytes(c)

    at = img.cave(build)
    img.put(site, b'\x0f\x85' + rel32(site + 6, keep), b'\x0f\x85' + rel32(site + 6, at))

    # ...and (juandav's old patch 2, kept by them for the registers that stay
    # stale in 2.8 too): regclass's best-class search starts below ST_REGS for
    # a pseudo with exactly two references. `mov esi,ALL_REGS-1` at
    # 0x4E7CE7; i is %ebx; reg_n_refs (int *) at 0x5C108C.
    site2, back = 0x4E7CE7, 0x4E7CEC

    def build2(at):
        c = bytearray(b'\xbe\x07\x00\x00\x00')                   # mov esi,ST_REGS
        c += b'\xa1' + (0x5C108C).to_bytes(4, 'little')          # mov eax,[reg_n_refs]
        c += b'\x83\x3c\x98\x02\x75\x05'                         # cmp dword [eax+ebx*4],2; jne +5
        c += b'\xbe\x06\x00\x00\x00'                             # mov esi,MD_REGS
        c += b'\xe9' + rel32(at + len(c) + 5, back)
        return bytes(c)

    at2 = img.cave(build2)
    img.put(site2, b'\xbe\x07\x00\x00\x00', b'\xe9' + rel32(site2 + 5, at2))


def patch4(img):
    # fill_simple_delay_slots+0xa55: `cmpl $0,delay_list; je skip` (6 bytes)
    # -> p4 (fp, insn = %edi) first, then the same test.
    site, skip, go = 0x512FAF, 0x512FFD, 0x512FB5
    fn = img.c_function('p4')

    def build(at):
        c = bytearray(b'\x57\x55')                               # push edi; push ebp
        c += b'\xe8' + rel32(at + len(c) + 5, fn)
        c += b'\x83\xc4\x08'                                     # add esp,8
        c += b'\x83\x7d\xe4\x00'                                 # cmpl $0,-0x1c(%ebp)
        c += b'\x0f\x84' + rel32(at + len(c) + 6, skip)
        c += b'\xe9' + rel32(at + len(c) + 5, go)
        return bytes(c)

    at = img.cave(build)
    img.put(site, b'\x83\x7d\xe4\x00\x74\x48', b'\xe9' + rel32(site + 5, at) + b'\x90')


def patch6(img):
    # alter_reg: both `assign_stack_local (mode, total_size, -1)` take GCC
    # 2.8's align `inherent_size == total_size ? 0 : -1` (a spilled pseudo's
    # slot aligned to its own mode). Locals: inherent_size -0x2c, total_size
    # -0x1c; the site is the 8-byte `movl $-1,8(%esp)` (eax holds the mode
    # at the first site and must survive).
    for site in (0x5032C9, 0x5033E8):
        def build(at, site=site):
            c = bytearray(b'\x8b\x4d\xd4\x31\xd2')                   # mov ecx,[ebp-0x2c]; xor edx,edx
            c += b'\x3b\x4d\xe4\x74\x01\x4a'                         # cmp ecx,[ebp-0x1c]; je +1; dec edx
            c += b'\x89\x54\x24\x08'                                 # mov [esp+8],edx
            c += b'\xe9' + rel32(at + len(c) + 5, site + 8)
            return bytes(c)

        at = img.cave(build)
        img.put(site, b'\xc7\x44\x24\x08\xff\xff\xff\xff', b'\xe9' + rel32(site + 5, at) + b'\x90' * 3)


def patch15(img):
    # jump_optimize's store-flag conversion of `x = a; if (...) x = b;` with
    # A or B zero: as in GCC 2.8, with cheap branches (BRANCH_COST < 2, the
    # R3000) the other value must also satisfy exact_log2 (INTVAL) >= 0
    # (taken of a REG too, as 2.8 does). mips_cpu 0x5C5FB4 (R6000/R4000 = 2/3
    # make BRANCH_COST 2); const0_rtx 0x5C07B8; temp2 -0xdc, temp3 -0x44.
    ok_a, next_alt, ok_b = 0x49F129, 0x49F069, 0x49F073
    fail_b = 0x49F092
    const0 = (0x5C07B8).to_bytes(4, 'little')

    def cheap_or_pow2(c, at, yes, no):          # rtx in eax
        c += b'\x8b\x15' + (0x5C5FB4).to_bytes(4, 'little')    # mov edx,[mips_cpu]
        c += b'\x83\xfa\x03'
        c += b'\x0f\x84' + rel32(at + len(c) + 6, yes)
        c += b'\x83\xfa\x02'
        c += b'\x0f\x84' + rel32(at + len(c) + 6, yes)
        c += b'\x8b\x40\x08\x85\xc0'                           # INTVAL; test
        c += b'\x0f\x84' + rel32(at + len(c) + 6, no)
        c += b'\x89\xc2\xf7\xda\x21\xc2\x39\xc2'               # (x & -x) == x
        c += b'\x0f\x84' + rel32(at + len(c) + 6, yes)
        c += b'\xe9' + rel32(at + len(c) + 5, no)

    # A: `je ok_a` when temp2 == const0_rtx (0x49F063, 6 bytes).
    def build_a(at):
        c = bytearray(b'\x8b\x45\xbc')                          # mov eax,[ebp-0x44] (temp3)
        cheap_or_pow2(c, at, ok_a, next_alt)
        return bytes(c)

    at = img.cave(build_a)
    img.put(0x49F063, b'\x0f\x84' + rel32(0x49F069, ok_a), b'\x0f\x84' + rel32(0x49F069, at))

    # B: `mov eax,[const0_rtx]; cmp [ebp-0x44],eax; jne fail_b` (10 bytes
    # from 0x49F069); when temp3 is zero, temp2 must pass the test.
    def build_b(at):
        c = bytearray(b'\xa1' + const0 + b'\x39\x45\xbc')       # mov eax,[const0]; cmp [ebp-0x44],eax
        c += b'\x0f\x85' + rel32(at + len(c) + 6, fail_b)
        c += b'\x8b\x85' + (-0xDC).to_bytes(4, 'little', signed=True)   # mov eax,[ebp-0xdc] (temp2)
        cheap_or_pow2(c, at, ok_b, fail_b)
        return bytes(c)

    at = img.cave(build_b)
    img.put(0x49F069, b'\xa1' + const0 + b'\x39\x45\xbc\x75\x1f', b'\xe9' + rel32(0x49F069 + 5, at) + b'\x90' * 5)


def patch8(img):
    # expand_increment+0x42b: `cmpl $0,post; je preincrement` (6 bytes)
    # starts 2.7.2's copy_to_reg + expand_binop fallback; p8 (fp, op0 = %ebx,
    # op1 = %edi) first tries GCC 2.8's queued MEM post-increment and, if it
    # returns an rtx, that is the function's result (epilogue 0x45E17E).
    site, done, pre, go = 0x45E10A, 0x45E17E, 0x45E11F, 0x45E110
    fn = img.c_function('p8')

    def build(at):
        c = bytearray(b'\x57\x53\x55')                           # push edi; push ebx; push ebp
        c += b'\xe8' + rel32(at + len(c) + 5, fn)
        c += b'\x83\xc4\x0c\x85\xc0'                             # add esp,12; test eax,eax
        c += b'\x0f\x85' + rel32(at + len(c) + 6, done)
        c += b'\x83\x7d\x0c\x00'                                 # cmpl $0,0xc(%ebp)
        c += b'\x0f\x84' + rel32(at + len(c) + 6, pre)
        c += b'\xe9' + rel32(at + len(c) + 5, go)
        return bytes(c)

    at = img.cave(build)
    img.put(site, b'\x83\x7d\x0c\x00\x74\x0f', b'\xe9' + rel32(site + 5, at) + b'\x90')

def patch19(img):
    # update_equiv_regs+0x4af: `reg_live_length[regno] *= 2` for a register
    # with a REG_EQUIV note lowers its priority in global.c. The library
    # compiler did this only for a register that crosses a call: a constant
    # address in a register that lives across no call keeps its full priority
    # (_comb_control's DTR block, `shadow` before `ctrl`), while one that
    # crosses calls is still demoted (func_80160F60's `x`). At the site
    # `mov eax,[ebp-0x2c]; mov eax,[eax+8]` loads REGNO (dest); the code at
    # 0x4EB55E stores it to [ebp-0x34] and doubles, 0x4EB581 follows.
    site, back, after = 0x4EB558, 0x4EB55E, 0x4EB581
    old = bytes.fromhex('8b45d48b4008')
    calls_crossed = 0x5C1098                      # reg_n_calls_crossed

    def build(at):
        c = bytearray(old)                                            # eax = regno
        c += b'\x8b\x15' + calls_crossed.to_bytes(4, 'little')         # mov edx,[reg_n_calls_crossed]
        c += b'\x83\x3c\x82\x00'                                      # cmp dword [edx+eax*4],0
        c += b'\x0f\x85' + rel32(at + len(c) + 6, back)                # crosses calls: double
        c += b'\x89\x45\xcc'                                          # mov [ebp-0x34],eax
        c += b'\xe9' + rel32(at + len(c) + 5, after)
        return bytes(c)

    at = img.cave(build)
    img.put(site, old, b'\xe9' + rel32(site + 5, at) + b'\x90')


PATCHES = {1: patch1, 4: patch4, 5: patch5, 6: patch6, 8: patch8, 9: patch9, 10: patch10,
           11: patch11, 12: patch12, 13: patch13, 14: patch14, 15: patch15, 16: patch16,
           18: patch18, 19: patch19}


def patch(src, dst, only=None):
    data = Path(src).read_bytes()
    if hashlib.sha256(data).hexdigest() != STOCK_SHA256:
        sys.exit('patch_cc1_win: %s is not the expected stock cc1.exe' % src)
    img = Image(data)
    img.add_section(PATCH_SECTION_SIZE)
    for n, fn in sorted(PATCHES.items()):
        if only is None or n in only:
            fn(img)
    # the new code uses absolute addresses: load at the preferred base
    at = img.opt + 70
    struct.pack_into('<H', img.d, at, struct.unpack_from('<H', img.d, at)[0] & ~0x40)
    Path(dst).parent.mkdir(parents=True, exist_ok=True)
    Path(dst).write_bytes(img.d)
    return hashlib.sha256(img.d).hexdigest()


if __name__ == '__main__':
    args = sys.argv[1:]
    only = None
    if args[:1] == ['--only']:
        only = {int(x) for x in args[1].split(',')}
        args = args[2:]
    src, dst = (args if len(args) == 2 else (STOCK, PATCHED))
    print('patched %s -> %s' % (patch(src, dst, only), dst))
