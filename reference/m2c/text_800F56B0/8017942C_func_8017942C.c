/* m2c reference for func_8017942C @ 8017942C (10 words). Generated; not compiled or validated. */
extern s32 D_801C3914;

void func_8017942C(void) {
    s32 *var_v0;
    s32 var_v1;

    var_v1 = 1;
    var_v0 = &D_801C3914;
    do {
        *var_v0 = 0xDC;
        var_v1 -= 1;
        var_v0 -= 4;
    } while (var_v1 >= 0);
}
