/* m2c reference for func_801724CC @ 801724CC (43 words). Generated; not compiled or validated. */
? func_80176B6C(s16, u16 *, u16 *);                 /* extern */

s32 func_801724CC(s16 arg0, s16 *arg1, s16 *arg2) {
    u16 sp10;
    u16 sp12;

    if ((u32) (arg0 & 0xFFFF) >= 0x18U) {
        return -1;
    }
    func_80176B6C(arg0, &sp10, &sp12);
    *arg1 = sp10 / 129;
    *arg2 = sp12 / 129;
    return 0;
}
