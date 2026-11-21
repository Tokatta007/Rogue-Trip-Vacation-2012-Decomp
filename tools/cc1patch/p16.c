/* Patches 7, 16 and 17 (juandav's numbering): the forward scan of reorg's
 * mark_target_live_regs, rewritten as in GCC 2.8.
 *  7  a simple jump is followed to its label itself (not to the next active
 *     insn), so the label kills the registers left pending dead;
 *  16 a conditional jump is followed on both paths
 *     (find_dead_or_set_registers, at most one conditional jump: jump_count
 *     += 4): a register set before use on both paths is dead;
 *  17 ...except when the conditional jump is the scan's own starting insn:
 *     then the jump is marked and the scan stops if the jump goes forward,
 *     and it stops at once if it goes back.
 * GCC 2.8 also kills spill registers at labels; 2.7.2 has no record of them.
 *
 * fp: mark_target_live_regs' frame: target at +8, res at +0xC, needed
 * -0xA0, set -0x90, jump_insn -0x30, jump_target -0x34, jump_count -0x38.
 * Called in place of the scan loop; returns to the code after it. */
#include "cc1.h"

static void and_not (unsigned *dst, const unsigned *set, const unsigned *needed)
{
    int k;

    for (k = 0; k < 3; k++)
        dst[k] &= ~(set[k] & ~needed[k]);
}

/* Returns the jump insn inside a SEQUENCE, else INSN itself; -1 for insns
 * the scan skips (USE, CLOBBER), after handling a USE made by update_block. */
static rtx scan_insn (rtx insn, struct resources *res, int *skip)
{
    rtx pat, this_jump_insn = insn;
    int i;

    *skip = 0;
    if (CODE (insn) != INSN)
        return insn;
    pat = PATTERN (insn);
    if (CODE (pat) == USE) {
        if (RTX_CLASS (CODE (XEXP (pat, 0))) == 'i')
            mark_set_resources (XEXP (pat, 0), res, 0, 1);
        *skip = 1;
    } else if (CODE (pat) == CLOBBER) {
        *skip = 1;
    } else if (CODE (pat) == SEQUENCE) {
        for (i = 0; i < XVECLEN0 (pat); i++) {
            this_jump_insn = XVECEXP0 (pat, i);
            if (CODE (this_jump_insn) == JUMP_INSN)
                break;
        }
    }
    return this_jump_insn;
}

static void label_kills (struct resources *res, const struct resources *needed)
{
    int k;

    for (k = 0; k < 3; k++) {
        pending_dead_regs[k] &= ~needed->regs[k];
        res->regs[k] &= ~pending_dead_regs[k];
        pending_dead_regs[k] = 0;
    }
}

static void find_dead_or_set_registers (rtx target, struct resources *res, int jump_count,
                                        struct resources set, struct resources needed)
{
    rtx insn, next, this_jump_insn;
    int skip, k;

    for (insn = target; insn; insn = next) {
        next = NEXT_INSN (insn);
        if (CODE (insn) == CODE_LABEL) {
            label_kills (res, &needed);
            continue;
        }
        if (CODE (insn) == BARRIER || CODE (insn) == NOTE)
            continue;
        this_jump_insn = scan_insn (insn, res, &skip);
        if (skip)
            continue;
        if (CODE (this_jump_insn) == JUMP_INSN) {
            if (jump_count++ >= 10)
                return;
            if (simplejump_p (this_jump_insn) || CODE (PATTERN (this_jump_insn)) == RETURN) {
                next = JUMP_LABEL (this_jump_insn);
            } else if (condjump_p (this_jump_insn)) {
                struct resources target_set, target_res, fallthrough_res;

                jump_count += 4;
                if (jump_count >= 10)
                    return;
                mark_referenced_resources (insn, &needed, 1);
                mark_set_resources (insn, &set, 0, 1);
                target_set = set;
                target_res = *res;
                and_not (target_res.regs, target_set.regs, needed.regs);
                fallthrough_res = *res;
                and_not (fallthrough_res.regs, set.regs, needed.regs);
                find_dead_or_set_registers (JUMP_LABEL (this_jump_insn), &target_res,
                                            jump_count, target_set, needed);
                find_dead_or_set_registers (next, &fallthrough_res, jump_count, set, needed);
                for (k = 0; k < 3; k++)
                    res->regs[k] &= fallthrough_res.regs[k] | target_res.regs[k];
                return;
            } else {
                return;
            }
        }
        mark_referenced_resources (insn, &needed, 1);
        mark_set_resources (insn, &set, 0, 1);
        and_not (res->regs, set.regs, needed.regs);
    }
}

void p16 (char *fp)
{
    rtx target = LOCAL (fp, rtx, 8);
    struct resources *res = LOCAL (fp, struct resources *, 0xC);
    struct resources *needed = (struct resources *) (fp - 0xA0);
    struct resources *set = (struct resources *) (fp - 0x90);
    int *jump_count = &LOCAL (fp, int, -0x38);
    rtx *jump_insn = &LOCAL (fp, rtx, -0x30);
    rtx *jump_target = &LOCAL (fp, rtx, -0x34);
    rtx insn, next, this_jump_insn, label;
    int skip;

    for (insn = target; insn; insn = next) {
        next = NEXT_INSN (insn);
        if (CODE (insn) == CODE_LABEL) {
            label_kills (res, needed);
            continue;
        }
        if (CODE (insn) == BARRIER || CODE (insn) == NOTE)
            continue;
        this_jump_insn = scan_insn (insn, res, &skip);
        if (skip)
            continue;
        if (CODE (this_jump_insn) == JUMP_INSN) {
            if ((*jump_count)++ >= 10)
                break;
            if (simplejump_p (this_jump_insn) || CODE (PATTERN (this_jump_insn)) == RETURN) {
                next = JUMP_LABEL (this_jump_insn);                    /* 7 */
                if (*jump_insn == 0) {
                    *jump_insn = insn;
                    *jump_target = JUMP_LABEL (this_jump_insn);
                }
            } else if (!condjump_p (this_jump_insn)) {
                break;
            } else if (insn == target) {                                /* 17 */
                label = JUMP_LABEL (this_jump_insn);
                if (label == 0 || INSN_UID (label) < INSN_UID (this_jump_insn))
                    break;
                next = 0;
            } else {                                                    /* 16 */
                find_dead_or_set_registers (insn, res, *jump_count - 1, *set, *needed);
                break;
            }
        }
        mark_referenced_resources (insn, needed, 1);
        mark_set_resources (insn, set, 0, 1);
        and_not (res->regs, set->regs, needed->regs);
    }
}
