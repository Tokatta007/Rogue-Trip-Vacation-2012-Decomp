/* m2c reference for func_8015E2C8 @ 8015E2C8 (84 words). Generated; not compiled or validated. */
s32 func_8015E6CC(s32);                             /* extern */
? func_8015EBAC(? *, ?, ?);                         /* extern */
s32 func_8015EF68(s32);                             /* extern */
extern s32 *D_801BAE20;
extern s32 *D_801BAE2C;
extern s32 *D_801BAE3C;
extern s32 D_801BAE40;
extern s32 D_801BAE44;
extern s32 D_801BAE50;
extern ? D_801EB040;
extern ? D_801EB148;

s32 func_8015E2C8(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v0 = func_8015EF68(0);
    D_801BAE44 = 0;
    D_801BAE50 = temp_v0;
    D_801BAE40 = D_801BAE44;
    temp_v1 = arg0 & 7;
    switch (temp_v1) {                              /* irregular */
    case 5:
    case 0:
        *D_801BAE2C = 0x401;
        *D_801BAE3C |= 0x800;
        *D_801BAE20 = 0;
        func_8015EBAC(&D_801EB040, 0, 0x100);
        func_8015EBAC(&D_801EB148, 0, 0x1800);
        break;
    case 1:
    case 3:
        *D_801BAE2C = 0x401;
        *D_801BAE3C |= 0x800;
        *D_801BAE20 = 0x02000000;
        *D_801BAE20 = 0x01000000;
        break;
    }
    func_8015EF68(D_801BAE50);
    var_v0 = 0;
    if (!(arg0 & 7)) {
        var_v0 = func_8015E6CC(arg0);
    }
    return var_v0;
}
