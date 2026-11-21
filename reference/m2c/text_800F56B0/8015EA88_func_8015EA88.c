/* m2c reference for func_8015EA88 @ 8015EA88 (63 words). Generated; not compiled or validated. */
s32 func_8015E588();                                /* extern */
s32 func_8015EBDC(?);                               /* extern */
? func_8015EE4C(?, ? *);                            /* extern */
extern void *D_801BAD40;
extern ? (*D_801BAD44)(? *, s32);
extern u8 D_801BAD4A;
extern s32 *D_801BAE20;
extern s32 *D_801BAE2C;
extern s32 D_801BAE54;
extern s32 D_801BAE58;
extern ? func_8015EB84;
static ? D_800F4E10;                                /* unable to generate initializer: unknown type; const */

s32 func_8015EA88(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;

    if ((u8) D_801BAD4A >= 2U) {
        D_801BAD44(&D_800F4E10, arg0);
    }
    D_801BAE54 = func_8015EBDC(-1) + 0xF0;
    D_801BAE58 = 0;
    var_v0_2 = *D_801BAE2C;
loop_5:
    if (!(var_v0_2 & 0x01000000) && (*D_801BAE20 & 0x04000000)) {
        func_8015EE4C(2, &func_8015EB84);
        D_801BAD40->unk18(arg0);
        var_v0 = 0;
    } else {
        var_v0 = -1;
        if (func_8015E588() == 0) {
            var_v0_2 = *D_801BAE2C;
            goto loop_5;
        }
    }
    return var_v0;
}
