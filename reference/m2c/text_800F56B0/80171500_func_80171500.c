/* m2c reference for func_80171500 @ 80171500 (32 words). Generated; not compiled or validated. */
s16 func_80171500(void *arg0, ? arg1, ? arg2, s32 arg3, s32 arg4, s16 arg15) {
    s16 var_a1;
    s16 var_a2;
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_a2 = -1;
    var_a1 = 0;
loop_1:
    var_v1 = 0;
    if ((var_a0->unk0 == arg3) && (var_a0->unk4 == arg4)) {
        var_v1 = (s16) var_a0->unk10 == arg15;
    }
    if (var_v1 != 0) {
        var_a2 = var_a1;
    } else {
        var_a1 += 1;
        var_a0 += 0x18;
        if (var_a1 < 0x18) {
            goto loop_1;
        }
    }
    return var_a2;
}
