/* m2c reference for func_8016C718 @ 8016C718 (14 words). Generated; not compiled or validated. */
extern ? D_801F3338;

s32 func_8016C718(s32 arg0) {
    ? *var_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;

    var_a1 = 0;
    var_a2 = 0x10;
    var_v1 = &D_801F3338;
loop_1:
    var_v0 = var_a2;
    if (arg0 != var_v1) {
        var_a2 += 0x10;
        var_a1 += 1;
        var_v1 += 0xF0;
        if (var_a1 >= 2) {
            var_v0 = 0xFF;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
