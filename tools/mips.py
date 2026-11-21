"""Minimal R3000 decoding helpers for static analysis (no dependencies)."""
import struct

LOADS = {0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x32}
STORES = {0x28, 0x29, 0x2A, 0x2B, 0x2E, 0x3A}
BRANCHES = {0x04, 0x05, 0x06, 0x07}           # beq bne blez bgtz (+ REGIMM 0x01)
GP, SP, RA = 28, 29, 31


class Image:
    """A PS-X EXE: header fields and word access by virtual address."""

    def __init__(self, raw):
        if raw[:8] != b'PS-X EXE':
            raise ValueError('not a PS-X EXE')
        self.raw = raw
        self.pc, self.gp0, self.base, self.size = struct.unpack_from('<4I', raw, 16)
        self.end = self.base + self.size

    def contains(self, va):
        return self.base <= va < self.end

    def word(self, va):
        return struct.unpack_from('<I', self.raw, va - self.base + 0x800)[0]

    def offset(self, va):
        return va - self.base + 0x800


def fields(w):
    return dict(op=w >> 26, rs=(w >> 21) & 31, rt=(w >> 16) & 31, rd=(w >> 11) & 31,
                sa=(w >> 6) & 31, fn=w & 63, imm=w & 0xFFFF, simm=((w & 0xFFFF) ^ 0x8000) - 0x8000,
                target=w & 0x3FFFFFF)


def jal_target(va, w):
    return ((va + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)


def is_jr_ra(w):
    return w == 0x03E00008


def branch_target(va, w):
    """Relative branch target, or None."""
    op = w >> 26
    if op in BRANCHES or op == 0x01 or (op in (0x10, 0x12) and (w >> 21) & 31 == 8):
        return va + 4 + ((((w & 0xFFFF) ^ 0x8000) - 0x8000) << 2)
    return None


def is_j(w):
    return w >> 26 == 0x02


def writes_reg(w):
    """Destination GPR of a plain ALU/load instruction, else None."""
    op = w >> 26
    if op == 0:
        fn = w & 63
        if fn in (0x08, 0x0C, 0x0D, 0x18, 0x19, 0x1A, 0x1B, 0x11, 0x13):
            return None
        return (w >> 11) & 31
    if op in (0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F) or op in LOADS:
        return (w >> 16) & 31
    if op == 0x03:
        return RA
    if op == 0x12 and ((w >> 21) & 31) in (0, 2):          # mfc2/cfc2
        return (w >> 16) & 31
    return None


def plausible(w):
    """Loose check that a word decodes as an instruction the compiler emits."""
    op = w >> 26
    if op == 0:
        if (w & 63) in (0, 2, 3) and (w >> 21) & 31:
            return False                  # sll/srl/sra encode rs = 0
        return (w & 63) in {0, 2, 3, 4, 6, 7, 8, 9, 12, 13, 16, 17, 18, 19, 24, 25, 26, 27,
                            32, 33, 34, 35, 36, 37, 38, 39, 42, 43}
    if op == 1:
        return ((w >> 16) & 31) in (0, 1, 16, 17)
    if (op in LOADS or op in STORES) and (w >> 21) & 31 == 0:
        return False                      # $zero base: a data word (e.g. code pointer)
    return op in {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0x10, 0x12, 0x20, 0x21,
                  0x22, 0x23, 0x24, 0x25, 0x26, 0x28, 0x29, 0x2A, 0x2B, 0x2E, 0x32, 0x3A}


def normalize(image, start, words, gp):
    """Relocation-insensitive signature of a function body.

    Masks jal/j targets, lui immediates, gp-relative offsets and low halves
    paired with a preceding lui. Keeps opcodes, registers, stack offsets,
    struct offsets and relative branches.
    """
    out = []
    hi = {}
    for i in range(words):
        va = start + 4 * i
        w = image.word(va)
        op = w >> 26
        rs, rt = (w >> 21) & 31, (w >> 16) & 31
        if op in (2, 3):
            n = w & 0xFC000000
        elif op == 0x0F:
            n = w & 0xFFFF0000
            hi[rt] = True
        elif (op in LOADS or op in STORES or op in (0x09, 0x0D, 0x0A, 0x0B, 0x32, 0x3A)) and (rs == gp or hi.get(rs)):
            n = w & 0xFFFF0000
        else:
            n = w
        d = writes_reg(w)
        if d is not None and op != 0x0F:
            hi.pop(d, None)
        out.append(n)
    return out
