/* Patch 14 (juandav's numbering): GCC 2.8's jump_optimize transformation
 *     if (...) { x = a; goto l; } x = b;   ->   x = a; if (...) goto l; x = b;
 * (A a register or a constant, the test not involving X), tried right after
 * 2.7.2's `if (...) x = a; else x = b;` case gives up. As in 2.8, the rest of
 * the loop body is skipped whenever CHANGED is set afterwards.
 *
 * fp: jump_optimize's frame (changed at -0x1C, this_is_simplejump at -0xC0);
 * insn: the current jump (%ebx); *next: the loop's `next` (%edi).
 * Returns nonzero to `continue` the loop. */
#include "cc1.h"

int p14 (char *fp, rtx insn, rtx *next)
{
    rtx temp, temp1, temp2, temp3, temp4, src, notes, prev_label, insert_after;

    if (!LOCAL (fp, int, -0xC0))
        return 0;
    if ((temp2 = next_active_insn (insn)) == 0 || CODE (temp2) != INSN
        || (temp1 = single_set (temp2)) == 0
        || CODE (temp1 = SET_DEST (temp1)) != REG
        || (temp3 = prev_active_insn (insn)) == 0 || CODE (temp3) != INSN
        || (temp4 = single_set (temp3)) == 0
        || !rtx_equal_p (SET_DEST (temp4), temp1))
        return 0;
    src = SET_SRC (temp4);
    switch (CODE (src)) {
    case REG: case SUBREG: case CONST_INT: case CONST_DOUBLE:
    case CONST: case SYMBOL_REF: case LABEL_REF: case HIGH:
        break;
    default:
        return 0;
    }
    notes = REG_NOTES (temp3);
    if (notes != 0
        && ((MODE (notes) != REG_EQUAL && MODE (notes) != REG_EQUIV)
            || XEXP (notes, 1) != 0 || !rtx_equal_p (XEXP (notes, 0), src)))
        return 0;
    if ((temp = prev_active_insn (temp3)) == 0
        || !condjump_p (temp) || simplejump_p (temp)
        || prev_real_insn (JUMP_LABEL (temp)) != insn
        || !no_labels_between_p (temp, insn))
        return 0;

    prev_label = JUMP_LABEL (temp);
    insert_after = prev_nonnote_insn (temp);
    ++LABEL_NUSES (prev_label);
    if (insert_after != 0
        && no_labels_between_p (insert_after, temp)
        && !reg_referenced_between_p (temp1, insert_after, temp3)
        && !reg_referenced_between_p (temp1, temp3, NEXT_INSN (temp2))
        && !reg_set_between_p (temp1, insert_after, temp)
        && (CODE (src) == CONST_INT || !reg_set_between_p (src, insert_after, temp))
        && invert_jump (temp, JUMP_LABEL (insn))) {
        emit_insn_after_with_line_notes (PATTERN (temp3), insert_after, temp3);
        delete_insn (temp3);
        delete_insn (insn);
        *next = temp2;
        LOCAL (fp, int, -0x1C) = 1;
    }
    if (prev_label != 0 && --LABEL_NUSES (prev_label) == 0)
        delete_insn (prev_label);
    return LOCAL (fp, int, -0x1C) != 0;
}
