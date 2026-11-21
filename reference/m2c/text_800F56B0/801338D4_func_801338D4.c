/* m2c reference for func_801338D4 @ 801338D4 (24 words). Generated; not compiled or validated. */
? func_8015C374(s16 *, ?, ?);                       /* extern */
extern s16 D_801C3820;
extern s16 D_801C3822;
extern s16 D_801C3824;
extern s16 D_801C3826;

void func_801338D4(s32 arg0) {
    ? var_a1;

    if (arg0 == 0) {
        var_a1 = 0x140;
        D_801C3820 = 0;
    } else {
        var_a1 = 0;
        D_801C3820 = 0x140;
    }
    D_801C3822 = 0;
    D_801C3824 = 0x140;
    D_801C3826 = 0xF0;
    func_8015C374(&D_801C3820, var_a1, 0);
}
