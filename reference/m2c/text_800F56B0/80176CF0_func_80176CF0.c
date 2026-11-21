/* m2c reference for func_80176CF0 @ 80176CF0 (55 words). Generated; not compiled or validated. */
s16 func_80178A1C();                                /* extern */

s32 func_80176CF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    temp_v0 = func_80178A1C();
    var_a0 = 0;
    var_v1_2 = 0;
    if (temp_v0 > 0) {
        do {
            var_a0 += 1;
            var_v1_2 += arg0 * arg3;
        } while (var_a0 < temp_v0);
    }
    var_v1 = arg1 + (var_v1_2 / 100);
    if (var_v1 == arg1) {
        if (var_v1 != arg2) {
            if (arg0 > 0) {
                var_v1 += 1;
            } else {
                var_v1 -= 1;
            }
        }
    } else {
        var_v0 = arg2 < var_v1;
        if (arg1 >= arg2) {
            var_v0 = var_v1 < arg2;
        }
        if (var_v0 != 0) {
            var_v1 = arg2;
        }
    }
    return var_v1;
}
