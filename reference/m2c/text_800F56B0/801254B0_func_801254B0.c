/* m2c reference for func_801254B0 @ 801254B0 (11 words). Generated; not compiled or validated. */
s32 func_801254B0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a0;

    var_a0 = arg0;
    temp_v1 = -arg1;
    if (var_a0 < temp_v1) {
        var_a0 = temp_v1;
    } else if (arg1 < var_a0) {
        var_a0 = arg1;
    }
    return var_a0;
}
