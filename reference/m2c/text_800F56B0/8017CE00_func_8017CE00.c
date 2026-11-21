/* m2c reference for func_8017CE00 @ 8017CE00 (45 words). Generated; not compiled or validated. */
? func_801555F8(?, s8 *, ? *);                      /* extern */
? func_80155868(?, s8 *, ?);                        /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_8015EE7C(? *);                               /* extern */
? func_8015FA70(?, ?, ?);                           /* extern */
? func_8015FB80(?, s16, s16);                       /* extern */
? func_8017CD30(?, ?);                              /* extern */
? func_8017D038(?);                                 /* extern */
extern ? func_8017CF64;
static s16 D_801C36C0 = 0;
static s32 D_801C3704 = 0;
static s32 D_801C3708 = 0;
static s32 D_801C370C = 0;
static s32 D_801C3710 = 0;

void func_8017CE00(s32 arg1, s32 arg2) {
    s8 sp10;
    ? sp18;

    D_801C370C = arg2;
    D_801C3710 = arg1;
    D_801C3708 = arg1;
    D_801C3704 = 0;
    func_801555F8(0xF, &sp10, &sp18);
    sp10 = 0xC0;
    func_8017CD30(0, 0);
    func_80155868(0xE, &sp10, 0);
    if (sp19 & 0x80) {
        func_8015EBDC(3);
    }
    func_8015EE7C(&func_8017CF64);
    func_8017D038(6);
    func_8015FA70(0, 0, 1);
    func_8015FB80(0, D_801C36C0, D_801C36C0);
}
