/* Patch 4 (juandav's numbering): reorg's fill_simple_delay_slots fills the
 * empty slot of an unconditional jump from the jump's target, as GCC 2.8
 * does (2.7.2 only fills it from the insns before the jump):
 *     if (GET_CODE (insn) == JUMP_INSN && slots_filled != slots_to_fill
 *         && simplejump_p (insn))
 *       delay_list = fill_slots_from_thread (insn, const_true_rtx,
 *           next_active_insn (JUMP_LABEL (insn)), 0, 1, 1,
 *           own_thread_p (JUMP_LABEL (insn), JUMP_LABEL (insn), 0), 0,
 *           slots_to_fill, &slots_filled);
 * Called right before `if (delay_list) emit_delay_sequence (...)`.
 * fp: the frame (delay_list -0x1C, slots_filled -0x7C, slots_to_fill
 * -0x84); insn is %edi. */
#include "cc1.h"

#define fill_slots_from_thread CC1 (0x5132E2, rtx, (rtx, rtx, rtx, rtx, int, int, int, int, int, int *))
#define own_thread_p   CC1 (0x510FC4, int, (rtx, rtx, int))
#define const_true_rtx (*(rtx *) 0x5C07C8)

void p4 (char *fp, rtx insn)
{
    int *slots_filled = &LOCAL (fp, int, -0x7C);
    int slots_to_fill = LOCAL (fp, int, -0x84);
    rtx label;

    if (CODE (insn) == JUMP_INSN && *slots_filled != slots_to_fill && simplejump_p (insn)) {
        label = JUMP_LABEL (insn);
        LOCAL (fp, rtx, -0x1C)
            = fill_slots_from_thread (insn, const_true_rtx, next_active_insn (label), 0, 1, 1,
                                      own_thread_p (label, label, 0), 0, slots_to_fill,
                                      slots_filled);
    }
}
