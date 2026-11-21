/* m2c reference for func_80131A7C @ 80131A7C (18 words). Generated; not compiled or validated. */
s32 func_80132F8C();                                /* extern */
s32 func_80132F98();                                /* extern */
s32 func_8016CE50();                                /* extern */
extern s32 D_801C37EC;
extern s32 D_801C37F0;
extern s32 D_801C37F4;
extern s32 D_801C37F8;

void func_80131A7C(void) {
    s32 temp_v0;

    D_801C37F4 = func_8016CE50();
    temp_v0 = func_80132F8C();
    D_801C37F0 = temp_v0;
    D_801C37EC = temp_v0 + 0x10004;
    D_801C37F8 = func_80132F98();
}
