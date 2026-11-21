/* m2c reference for func_8017D580 @ 8017D580 (15 words). Generated; not compiled or validated. */
extern s32 D_801C310C;

s32 func_8017D580(s32 arg0) {
    s32 *var_v1;
    s32 var_a1;
    s32 var_a2;

    var_a2 = 0;
    var_a1 = 0;
    var_v1 = &D_801C310C;
    do {
        if (*var_v1 == arg0) {
            var_a2 += 1;
        }
        var_a1 += 1;
        var_v1 += 8;
    } while (var_a1 < 0x18);
    return var_a2;
}
