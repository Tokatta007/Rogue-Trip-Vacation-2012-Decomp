/* m2c reference for func_8010F7A4 @ 8010F7A4 (33 words). Generated; not compiled or validated. */
void func_8010F7A4(s32 *arg1, s32 *arg2) {
    s32 var_v0;
    s32 var_v1;

    if ((*arg2 * *arg1) >= 0) {
        var_v1 = *arg1;
        var_v0 = *arg2;
        if (var_v1 < 0) {
            var_v1 = -var_v1;
        }
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < var_v1) {
            *arg1 -= *arg2;
        } else {
            *arg1 = 0;
        }
    }
    *arg2 += *arg1;
}
