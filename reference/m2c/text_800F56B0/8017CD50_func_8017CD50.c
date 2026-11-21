/* m2c reference for func_8017CD50 @ 8017CD50 (44 words). Generated; not compiled or validated. */
? func_801555E4(? *);                               /* extern */
? func_801555F8(?, s8 *, ? *);                      /* extern */
? func_80155734(?, s8 *);                           /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_8015FA70(?, ?, ?);                           /* extern */
? func_8015FB80(?, s16, s16);                       /* extern */
? func_8017CD30(?, ?);                              /* extern */
? func_8017D038(?);                                 /* extern */
extern ? func_8017CEB4;
static s16 D_801C36C0 = 0;
static s32 D_801C3704 = 0;
static s32 D_801C3708 = 0;
static s32 D_801C370C = 0;
static s32 D_801C3710 = 0;

void func_8017CD50(s32 arg1, s32 arg2) {
    s8 sp10;
    ? sp18;

    D_801C370C = arg2;
    D_801C3710 = arg1;
    D_801C3708 = arg1;
    D_801C3704 = 0;
    func_801555F8(0xF, &sp10, &sp18);
    sp10 = 5;
    func_8017CD30(0, 0);
    func_80155734(0xE, &sp10);
    if (sp19 & 0x80) {
        func_8015EBDC(3);
    }
    func_801555E4(&func_8017CEB4);
    func_8017D038(3);
    func_8015FA70(0, 0, 1);
    func_8015FB80(0, D_801C36C0, D_801C36C0);
}
