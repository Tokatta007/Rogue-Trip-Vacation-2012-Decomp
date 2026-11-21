/* m2c reference for func_8017D534 @ 8017D534 (19 words). Generated; not compiled or validated. */
extern ? D_801C310C;

s32 func_8017D534(void) {
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;

    var_a0 = -1;
    var_v1 = 0;
    var_v0 = 0 * 8;
    do {
        if (*(var_v0 + &D_801C310C) == -1) {
            var_a0 = var_v1;
            var_v1 = 0x18;
        }
        var_v1 += 1;
        var_v0 = var_v1 * 8;
    } while (var_v1 < 0x18);
    return var_a0;
}
