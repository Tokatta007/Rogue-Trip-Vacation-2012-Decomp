/* m2c reference for func_8016BB58 @ 8016BB58 (17 words). Generated; not compiled or validated. */
extern s32 D_801BC218;

void func_8016BB58(void) {
    s32 *var_a1;
    s32 *var_v1;
    s32 var_a0;
    s32 var_a2;

    var_a2 = 0;
    var_a1 = &D_801BC218;
loop_1:
    var_a0 = 0;
    if (var_a2 < 2) {
        var_v1 = var_a1;
        do {
            *var_v1 = 0;
            var_a0 += 1;
            var_v1 += 4;
        } while (var_a0 < 9);
        var_a1 += 0x24;
        var_a2 += 1;
        goto loop_1;
    }
}
