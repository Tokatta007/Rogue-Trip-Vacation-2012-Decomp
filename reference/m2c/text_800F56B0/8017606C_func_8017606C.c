/* m2c reference for func_8017606C @ 8017606C (23 words). Generated; not compiled or validated. */
u16 func_80160960(?, s32);                          /* extern */
extern u16 D_801BC018;
extern s32 D_801BC028;

s32 func_8017606C(s32 arg0) {
    if ((u32) (arg0 - 0x1010) <= 0x7EFE8U) {
        D_801BC018 = func_80160960(-1, arg0);
        return D_801BC018 << D_801BC028;
    }
    return 0;
}
