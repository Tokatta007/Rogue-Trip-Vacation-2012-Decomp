/* m2c reference for func_80133808 @ 80133808 (51 words). Generated; not compiled or validated. */
? func_8015B78C(? *, ?);                            /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C5A0(? *, ? *);                          /* extern */
extern ? D_801B2E3C;

void func_80133808(s8 arg0) {
    ? sp10;
    s8 sp13;
    s8 sp14;
    s8 sp15;
    s8 sp16;
    s8 sp17;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;
    s16 sp20;
    s16 sp22;
    s16 sp24;
    s16 sp26;
    ? sp28;
    s8 sp2B;
    s32 sp2C;
    s32 var_a0;
    s32 var_v0;

    sp2B = 1;
    var_a0 = 0xE1000000;
    if (D_801B2E3C.unk16 != 0) {
        var_a0 = 0xE1000200;
    }
    var_v0 = var_a0 | 0x440;
    if (D_801B2E3C.unk17 == 0) {
        var_v0 = var_a0 | 0x40;
    }
    sp2C = var_v0;
    func_8015C5A0(&sp28, &D_801B2E3C);
    func_8015C008(0);
    sp13 = 5;
    sp17 = 0x28;
    func_8015B78C(&sp10, 1);
    sp18 = 0;
    sp1A = 0;
    sp1C = 0x140;
    sp1E = 0;
    sp20 = 0;
    sp22 = 0xF0;
    sp24 = 0x140;
    sp26 = 0xF0;
    sp14 = arg0;
    sp15 = arg0;
    sp16 = arg0;
    func_8015C5A0(&sp10);
}
