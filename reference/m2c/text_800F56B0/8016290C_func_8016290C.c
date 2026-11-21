/* m2c reference for func_8016290C @ 8016290C (26 words). Generated; not compiled or validated. */
s32 func_80162974(s32);                             /* extern */
extern s32 D_801BC0F8;
extern s32 D_801BC104;
extern s32 D_801BC108;
extern s32 D_801BC114;
extern ? (*D_801EC9D0)(?);

void func_8016290C(void) {
    D_801BC108 = 0;
    D_801BC104 = D_801BC114;
    if (func_80162974(D_801BC0F8 + (D_801BC114 * 0xF0)) == 0) {
        D_801EC9D0(0xFFFF);
    }
}
