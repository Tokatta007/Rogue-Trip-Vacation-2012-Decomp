/* m2c reference for func_8016827C @ 8016827C (36 words). Generated; not compiled or validated. */
? func_801593DC(s32, u32 *);                        /* extern */
? func_8015C2B4(u16 *, s32, u16, u16);              /* extern */

void func_8016827C(s32 arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    u16 sp16;
    u32 sp18;

    func_801593DC(arg0 + 4, &sp18);
    sp10 = sp1C;
    sp12 = sp1E;
    sp14 = sp20;
    sp16 = sp22;
    func_8015C2B4(&sp10, sp24, sp20, sp22);
    if ((sp18 >> 3) & 1) {
        sp10 = sp28;
        sp12 = sp2A;
        sp14 = sp2C;
        sp16 = sp2E;
        func_8015C2B4(&sp10, sp30, sp2C, sp2E);
    }
}
