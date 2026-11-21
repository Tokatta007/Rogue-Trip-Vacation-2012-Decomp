/* m2c reference for func_8012BD30 @ 8012BD30 (20 words). Generated; not compiled or validated. */
s32 func_8012BD30(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    void *var_v1;

    var_a2 = 0;
    var_a1 = 1;
    var_v1 = arg0 + 1;
loop_1:
    if (var_v1->unk43 & 0x80) {
        var_a2 = 0x3E8;
    } else {
        var_a1 += 1;
        var_a2 += (s8) var_v1->unk43;
        var_v1 = arg0 + var_a1;
        if (var_a1 < 9) {
            goto loop_1;
        }
    }
    return var_a2;
}
