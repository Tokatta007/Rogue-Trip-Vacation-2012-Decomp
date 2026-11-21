/* Patch 9 (juandav's numbering): cse's COST macro with GCC 2.8's
 * notreg_cost. A lowpart SUBREG of a wider integer REG costs what the REG
 * does (0 cheap, 1 pseudo, 2 hard) instead of rtx_cost (x, SET) * 2, so cse
 * prefers `(subreg:HI (reg:SI n) 0)` to an equivalent pseudo.
 *
 * Replaces the `rtx_cost (X, SET)` call of each COST expansion in cse.c;
 * the `* 2` after the call becomes a plain move, so this returns the
 * doubled cost itself. CHEAP_REG as compiled into this cc1's insert (). */
#include "cc1.h"

#define mode_class     ((const int *) 0x56ED00)
#define mode_size      ((const int *) 0x56ED80)
#define fixed_regs     ((const char *) 0x5C1440)
#define global_regs    ((const char *) 0x5C1560)
#define regno_to_class ((const int *) 0x5705C0)
#define rtx_cost       CC1 (0x4A3D48, int, (rtx, int))
#define subreg_lowpart_p CC1 (0x488689, int, (rtx))
#define MODE_INT 1
#define FIRST_PSEUDO 68

static int cheap_reg (rtx x)
{
    int regno = XINT (x, 0);

    if ((x->flags[1] & 0x08) && regno < FIRST_PSEUDO)   /* REG_USERVAR_P */
        return 1;
    if (regno == 30 || regno == 29 || regno == 0)       /* fp, sp, ap */
        return 1;
    if (regno >= FIRST_PSEUDO && regno <= FIRST_PSEUDO + 3)   /* virtual */
        return 1;
    return regno < FIRST_PSEUDO
           && (regno == 30 || fixed_regs[regno] || global_regs[regno])
           && regno_to_class[regno] != 0;
}

int p9 (rtx x, int outer)
{
    rtx r;
    int mx, mr;

    if (CODE (x) == SUBREG && CODE (r = XEXP (x, 0)) == REG) {
        mx = (signed char) MODE (x);
        mr = (signed char) MODE (r);
        if (mode_class[mx] == MODE_INT && mode_class[mr] == MODE_INT
            && mode_size[mx] < mode_size[mr] && subreg_lowpart_p (x))
            return cheap_reg (r) ? 0 : XINT (r, 0) >= FIRST_PSEUDO ? 1 : 2;
    }
    return rtx_cost (x, outer) * 2;
}
