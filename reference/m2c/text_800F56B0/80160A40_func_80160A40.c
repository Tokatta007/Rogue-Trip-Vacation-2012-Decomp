/* m2c reference for func_80160A40 @ 80160A40 (22 words). Generated; not compiled or validated. */
extern s32 *D_801BC010;

void func_80160A40(s32 arg0) {
    s32 var_a0;
    s32 var_v1;

    *D_801BC010 &= 0xFFF8FFFF;
    if (arg0 != 0) {
        var_v1 = *D_801BC010;
        var_a0 = 0x30000;
    } else {
        var_v1 = *D_801BC010;
        var_a0 = 0x50000;
    }
    *D_801BC010 = var_v1 | var_a0;
}
