/* m2c reference for func_8016FD98 @ 8016FD98 (11 words). Generated; not compiled or validated. */
void func_8016FD98(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_v0;
    s32 var_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (arg2 > 0) {
        do {
            temp_v0 = *var_a1;
            var_a1 += 4;
            var_v1 += 1;
            *var_a0 = temp_v0;
            var_a0 += 4;
        } while (var_v1 < arg2);
    }
}
