/* m2c reference for func_801652BC @ 801652BC (14 words). Generated; not compiled or validated. */
extern s32 D_801F25E0;

s32 *func_801652BC(void) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = &D_801F25E0;
loop_1:
    var_a0 += 1;
    if (*var_v1 == 0) {
        return var_v1;
    }
    var_v1 += 0x218;
    if (var_a0 >= 4) {
        return NULL;
    }
    goto loop_1;
}
