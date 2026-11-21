/* m2c reference for func_8015E944 @ 8015E944 (81 words). Generated; not compiled or validated. */
? func_8015C070(? *, void *);                       /* extern */
s32 func_8015E588();                                /* extern */
s32 func_8015EBDC(?);                               /* extern */
? func_8015EE4C(?, ? *);                            /* extern */
extern void *D_801BAD40;
extern ? D_801BADE8;
extern s32 *D_801BAE20;
extern s32 *D_801BAE2C;
extern s32 D_801BAE54;
extern s32 D_801BAE58;
extern ? func_8015EB84;
static ? D_800F4DD4;                                /* unable to generate initializer: unknown type; const */

s32 func_8015E944(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 var_v0;
    s32 var_v0_2;

    func_8015C070(&D_800F4DD4, arg0);
    D_801BAE54 = func_8015EBDC(-1) + 0xF0;
    D_801BAE58 = 0;
    var_v0_2 = *D_801BAE2C;
loop_3:
    if (!(var_v0_2 & 0x01000000) && (*D_801BAE20 & 0x04000000)) {
        func_8015EE4C(2, &func_8015EB84);
        var_v0 = -1;
        if (arg0->unk4 != 0) {
            if (arg0->unk6 == 0) {
                return -1;
            }
            temp_a1 = arg0->unk0;
            D_801BADE8.unk4 = (s32) ((arg2 << 0x10) | (arg1 & 0xFFFF));
            D_801BADE8.unk0 = temp_a1;
            D_801BADE8.unk8 = (s32) arg0->unk4;
            D_801BAD40->unk18(&D_801BADE8 - 8, temp_a1);
            var_v0 = 0;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_v0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = -1;
    if (func_8015E588() == 0) {
        var_v0_2 = *D_801BAE2C;
        goto loop_3;
    }
    return var_v0;
}
