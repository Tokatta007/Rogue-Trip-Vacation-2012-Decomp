/* m2c reference for func_8017222C @ 8017222C (29 words). Generated; not compiled or validated. */
? func_801737FC(?, s16);                            /* extern */
extern s32 D_801F3A9C;
extern s16 D_801F4B52;

s32 func_8017222C(s16 arg0) {
    if (D_801F3A9C == 1) {
        return -1;
    }
    D_801F3A9C = 1;
    if ((u32) (arg0 & 0xFFFF) >= 0x18U) {
        D_801F3A9C = 0;
        return -1;
    }
    D_801F4B52 = arg0;
    func_801737FC(0, arg0);
    D_801F3A9C = 0;
    return 0;
}
