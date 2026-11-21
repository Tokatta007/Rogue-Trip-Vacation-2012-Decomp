/* m2c reference for func_80167A94 @ 80167A94 (27 words). Generated; not compiled or validated. */
s32 func_8015B5E8(s16, s16);                        /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C2B4(s16 *, s32);                        /* extern */

s32 func_80167A94(s32 arg0, s16 arg1, s16 arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 sp16;

    sp14 = 0x10;
    sp10 = arg1;
    sp12 = arg2;
    sp16 = 1;
    func_8015C2B4(&sp10, arg0);
    func_8015C008(0);
    return func_8015B5E8(arg1, arg2) & 0xFFFF;
}
