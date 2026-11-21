/* m2c reference for func_8017A930 @ 8017A930 (18 words). Generated; not compiled or validated. */
extern ? (*D_801C30E8)();
extern s32 D_801C30F4;

void func_8017A930(void) {
    if (D_801C30F4 == 0) {
        D_801C30F4 = 1;
        return;
    }
    D_801C30F4 = 0;
    D_801C30E8();
}
