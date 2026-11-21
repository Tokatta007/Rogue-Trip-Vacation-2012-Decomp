/* m2c reference for func_80136840 @ 80136840 (23 words). Generated; not compiled or validated. */
extern s32 D_801B38E4;
extern ? D_801B38F4;
extern s32 D_801B393C;

void func_80136840(void) {
    s32 *var_a0;
    s32 *var_v0;
    s32 *var_v1;
    s32 var_a1;
    s32 var_v1_2;

    var_a1 = 0;
    var_a0 = &D_801B393C;
    var_v1 = &D_801B38E4;
    do {
        *var_v1 = -1;
        *var_a0 = 0;
        var_a0 += 4;
        var_a1 += 1;
        var_v1 += 4;
    } while (var_a1 < 4);
    var_v1_2 = 0x11;
    var_v0 = &D_801B38F4 + 0x44;
    do {
        *var_v0 = 0;
        var_v1_2 -= 1;
        var_v0 -= 4;
    } while (var_v1_2 >= 0);
}
