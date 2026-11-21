/* m2c reference for func_801123F8 @ 801123F8 (35 words). Generated; not compiled or validated. */
? func_80112388();                                  /* extern */
? func_8016B4CC(? *, ?, ? *);                       /* extern */
? func_8016B504(? *, s32, ? *);                     /* extern */
extern ? D_80180B3C;
extern ? D_80180C2C;
extern s8 D_80180D2C;
static ? D_801C32A8;                                /* unable to generate initializer: unknown type */
static ? D_801C32AC;                                /* unable to generate initializer: unknown type */

void func_801123F8(void) {
    s32 var_s1;

    func_8016B4CC(&D_80180B3C, 0x14, &D_801C32A8);
    func_8016B4CC(&D_80180C2C, 0x14, &D_801C32AC);
    D_80180D2C = 1;
    func_80112388();
    var_s1 = 0;
    do {
        func_8016B504(&D_80180C2C, var_s1, &D_801C32AC);
        var_s1 += 1;
    } while (var_s1 < 0x14);
}
