/* Patch 8 (juandav's numbering): expand_increment, GCC 2.8's fallback for a
 * post-increment whose value is used, of a MEM that the add insn can't take
 * (`if (count++ > N)` on a global): the address goes to a register, the old
 * value is loaded into a temp, and the add and the store are queued:
 *     addr = general_operand (XEXP (op0, 0), mode)
 *            ? force_reg (Pmode, XEXP (op0, 0)) : copy_to_reg (XEXP (op0, 0));
 *     op0 = change_address (op0, VOIDmode, addr);
 *     temp = force_reg (GET_MODE (op0), op0);
 *     if (! insn_operand_predicate[icode][2] (op1, mode))
 *       op1 = force_reg (mode, op1);
 *     enqueue_insn (op0, gen_move_insn (op0, temp));
 *     return enqueue_insn (temp, GEN_FCN (icode) (temp, temp, op1));
 * Called where 2.7.2 falls back to copy_to_reg + expand_binop; returns the
 * result, or 0 to go on as 2.7.2 does.
 * fp: the frame (post at +0xC, mode -0x2C, icode -0x34); op0 %ebx, op1 %edi. */
#include "cc1.h"

#define MEM             0x39
#define SImode          4
#define CODE_FOR_nothing 0x151
#define general_operand CC1 (0x522E3F, int, (rtx, int))
#define force_reg       CC1 (0x4718E4, rtx, (int, rtx))
#define copy_to_reg     CC1 (0x4717DF, rtx, (rtx))
#define change_address  CC1 (0x488EBE, rtx, (rtx, int, rtx))
#define gen_move_insn   CC1 (0x478F84, rtx, (rtx, rtx))
#define enqueue_insn    CC1 (0x44E8B1, rtx, (rtx, rtx))

typedef int (*predicate) (rtx, int);
typedef rtx (*gen_fn) (rtx, rtx, rtx);
#define operand_predicate(icode, n) (((predicate *) 0x596A80)[(icode) * 10 + (n)])
#define gen_function(icode)         (((gen_fn *) 0x58D040)[icode])

rtx p8 (char *fp, rtx op0, rtx op1)
{
    int mode = LOCAL (fp, int, -0x2C);
    int icode = LOCAL (fp, int, -0x34);
    rtx addr, temp;

    if (!LOCAL (fp, int, 0xC) || icode == CODE_FOR_nothing || CODE (op0) != MEM)
        return 0;
    addr = XEXP (op0, 0);
    addr = general_operand (addr, mode) ? force_reg (SImode, addr) : copy_to_reg (addr);
    op0 = change_address (op0, 0, addr);
    temp = force_reg ((signed char) MODE (op0), op0);
    if (!operand_predicate (icode, 2) (op1, mode))
        op1 = force_reg (mode, op1);
    enqueue_insn (op0, gen_move_insn (op0, temp));
    return enqueue_insn (temp, gen_function (icode) (temp, temp, op1));
}
