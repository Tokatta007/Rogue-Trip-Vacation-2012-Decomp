/* m2c reference for func_80163E04 @ 80163E04 (14 words). Generated; not compiled or validated. */
extern s32 D_801ECB48;

s32 *func_80163E04(void) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = &D_801ECB48;
loop_1:
    var_a0 += 1;
    if (*var_v1 == 0) {
        return var_v1;
    }
    var_v1 += 0x4C;
    if (var_a0 >= 7) {
        return NULL;
    }
    goto loop_1;
}
