/* m2c reference for func_8013D090 @ 8013D090 (41 words). Generated; not compiled or validated. */
? func_8016B4CC(? *, ?, ? *);                       /* extern */
? func_8016B504(? *, s32, ? *);                     /* extern */
extern ? D_801C3854;
extern ? D_801C3858;
extern ? D_801E24E0;
extern ? D_801E2E40;
extern s16 D_801E37A0;

void func_8013D090(void) {
    s16 *var_s0;
    s32 var_s1;

    func_8016B4CC(&D_801E24E0, 0xC8, &D_801C3854);
    func_8016B4CC(&D_801E2E40, 0xC8, &D_801C3858);
    var_s1 = 0;
    var_s0 = &D_801E37A0;
    do {
        *var_s0 = 0;
        func_8016B504(&D_801E2E40, var_s1, &D_801C3858);
        var_s1 += 1;
        var_s0 += 2;
    } while (var_s1 < 0xC8);
}
