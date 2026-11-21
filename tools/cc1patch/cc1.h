/* Layout and entry points of toolchain/gcc-2.7.2-psx/cc1.exe (GCC 2.7.2 for
 * mips-sony-psx, built unoptimised by MinGW GCC 13) for the C bodies of the
 * cc1 patches (tools/patch_cc1_win.py). The code is compiled with clang to
 * i686 without relocations: cc1 functions and globals are reached through
 * constant addresses, so everything here must stay free of static data,
 * string constants and jump tables. */

typedef struct rtx_def *rtx;
struct rtx_def {
    unsigned short code;
    unsigned short pad2;
    unsigned char mode;        /* +4: GET_MODE (REG_NOTE_KIND for notes) */
    unsigned char flags[3];
    union { int i; rtx r; } fld[1];   /* +8 */
};

#define CODE(x)        ((x)->code)
#define MODE(x)        ((x)->mode)
#define XEXP(x, n)     ((x)->fld[n].r)
#define XINT(x, n)     ((x)->fld[n].i)
#define NEXT_INSN(x)   XEXP (x, 2)
#define PREV_INSN(x)   XEXP (x, 1)
#define PATTERN(x)     XEXP (x, 3)
#define REG_NOTES(x)   XEXP (x, 6)
#define JUMP_LABEL(x)  XEXP (x, 7)
#define LABEL_NUSES(x) XINT (x, 5)
#define SET_DEST(x)    XEXP (x, 0)
#define SET_SRC(x)     XEXP (x, 1)

/* rtx codes (rtl.def order, same as in GCC 2.7.2's rtl.def) */
enum { SEQUENCE = 0x13, INSN = 0x1B, JUMP_INSN = 0x1C, CALL_INSN = 0x1D,
       BARRIER = 0x1E, CODE_LABEL = 0x1F, NOTE = 0x20, USE = 0x2A, CLOBBER = 0x2B, RETURN = 0x2D,
       CONST_INT = 0x2F, CONST_DOUBLE = 0x30, CONST_STRING = 0x31, CONST = 0x32,
       REG = 0x34, SUBREG = 0x36, LABEL_REF = 0x3A, SYMBOL_REF = 0x3B,
       PLUS = 0x41, HIGH = 0x72 };
enum { REG_EQUIV = 3, REG_EQUAL = 5 };

#define CC1(addr, ret, args) ((ret (*) args) (addr))

#define next_active_insn     CC1 (0x489A1D, rtx, (rtx))
#define prev_active_insn     CC1 (0x489A87, rtx, (rtx))
#define prev_real_insn       CC1 (0x4899DA, rtx, (rtx))
#define prev_nonnote_insn    CC1 (0x48996C, rtx, (rtx))
#define single_set           CC1 (0x484E10, rtx, (rtx))
#define rtx_equal_p          CC1 (0x485A90, int, (rtx, rtx))
#define no_labels_between_p  CC1 (0x4846D9, int, (rtx, rtx))
#define reg_referenced_between_p CC1 (0x4849E6, int, (rtx, rtx, rtx))
#define reg_set_between_p    CC1 (0x484A68, int, (rtx, rtx, rtx))
#define emit_insn_after_with_line_notes CC1 (0x48A417, rtx, (rtx, rtx, rtx))
#define simplejump_p         CC1 (0x4A15BF, int, (rtx))
#define condjump_p           CC1 (0x4A160F, int, (rtx))
#define delete_insn          CC1 (0x4A1EDC, rtx, (rtx))
#define invert_jump          CC1 (0x4A2266, int, (rtx, rtx))

/* reorg.c */
struct resources {
    char memory, unch_memory, volatil, cc;
    unsigned regs[3];          /* HARD_REG_SET (76 hard registers) */
};
#define mark_referenced_resources CC1 (0x50DF8C, void, (rtx, struct resources *, int))
#define mark_set_resources   CC1 (0x50E5AA, void, (rtx, struct resources *, int, int))
#define pending_dead_regs    ((unsigned *) 0x5C5710)
#define RTX_CLASS(code)      (((const char *) 0x56F0E0)[code])
#define INSN_UID(x)          XINT (x, 0)
#define XVECLEN0(x)          (*(int *) XEXP (x, 0))
#define XVECEXP0(x, i)       (((rtx *) XEXP (x, 0))[(i) + 1])

#define LOCAL(fp, type, off) (*(type *) ((char *) (fp) + (off)))
