/* m2c reference for func_8015DCDC @ 8015DCDC (16 words). Generated; not compiled or validated. */
extern s32 *D_801BAE1C;
extern s32 *D_801BAE20;

s32 func_8015DCDC(s32 *arg0, s32 arg1) {
    s32 *var_a0;
    s32 temp_v1;
    s32 var_a2;

    var_a0 = arg0;
    var_a2 = arg1 - 1;
    *D_801BAE20 = 0x04000000;
    if (arg1 != 0) {
        do {
            temp_v1 = *var_a0;
            var_a0 += 4;
            var_a2 -= 1;
            *D_801BAE1C = temp_v1;
        } while (var_a2 != -1);
    }
    return 0;
}
