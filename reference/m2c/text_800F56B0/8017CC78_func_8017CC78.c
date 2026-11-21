/* m2c reference for func_8017CC78 @ 8017CC78 (46 words). Generated; not compiled or validated. */
? func_801555E4(? *);                               /* extern */
? func_801555F8(?, s8 *, ? *);                      /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_8017CD30(?, ?);                              /* extern */
extern ? func_8017CEB4;
static s8 D_801C3714 = 0;
static s32 D_801C3718 = 0;

s32 func_8017CC78(s32 arg1) {
    s8 sp10;
    ? sp18;

    if (D_801C3718 == 4) {
        func_801555F8(0xF, &sp10, &sp18);
        sp10 = 5;
        func_8017CD30(0, 0);
        func_801555F8(0xE, &sp10, NULL);
        if (sp19 & 0x80) {
            func_8015EBDC(3);
        }
        func_801555E4(&func_8017CEB4);
        func_8017CD30(0, 0);
        func_801555F8(3, &D_801C3714, NULL);
        D_801C3718 = 1;
    }
    return arg1;
}
