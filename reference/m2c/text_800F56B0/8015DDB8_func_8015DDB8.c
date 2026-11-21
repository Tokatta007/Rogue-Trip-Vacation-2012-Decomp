/* m2c reference for func_8015DDB8 @ 8015DDB8 (172 words). Generated; not compiled or validated. */
? func_8015E068();                                  /* extern */
? func_8015E554();                                  /* extern */
s32 func_8015E588();                                /* extern */
? func_8015EE4C(?, ? (*)());                        /* extern */
s32 func_8015EF68(s32);                             /* extern */
extern ? D_801BAD48;
extern s32 *D_801BAE20;
extern s32 *D_801BAE2C;
extern s32 D_801BAE40;
extern s32 D_801BAE44;
extern s32 D_801BAE48;
extern ? D_801EB148;
extern ? D_801EB14C;
extern ? D_801EB150;
extern ? D_801EB154;

s32 func_8015DDB8(? (*arg0)(s32 *, s32), s32 *arg1, s32 arg2, s32 arg3) {
    s32 *var_a3;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a2;
    s32 var_v0;

    func_8015E554();
loop_3:
    if (((D_801BAE40 + 1) & 0x3F) != D_801BAE44) {
        D_801BAE48 = func_8015EF68(0);
        D_801BAD48.unk8 = 1;
        if ((D_801BAD48.unk1 == 0) || ((D_801BAE40 == D_801BAE44) && !(*D_801BAE2C & 0x01000000) && (D_801BAD48.unkC == 0))) {
            do {

            } while (!(*D_801BAE20 & 0x04000000));
            arg0(arg1, arg3);
            func_8015EF68(D_801BAE48);
            return 0;
        }
        func_8015EE4C(2, func_8015E068);
        var_a2 = 0;
        if (arg2 != 0) {
            var_a3 = arg1;
loop_13:
            temp_a0 = var_a2 * 4;
            if (var_a2 < (arg2 / 4)) {
                temp_a1 = *var_a3;
                var_a3 += 4;
                var_a2 += 1;
                *(temp_a0 + ((D_801BAE40 * 0x60) + &D_801EB154)) = temp_a1;
                goto loop_13;
            }
            *(&D_801EB14C + (D_801BAE40 * 0x60)) = (D_801BAE40 * 0x60) + &D_801EB154;
        } else {
            *(&D_801EB14C + (D_801BAE40 * 0x60)) = arg1;
        }
        *(&D_801EB150 + (D_801BAE40 * 0x60)) = arg3;
        *(&D_801EB148 + (D_801BAE40 * 0x60)) = arg0;
        D_801BAE40 = (D_801BAE40 + 1) & 0x3F;
        func_8015EF68(D_801BAE48);
        func_8015E068();
        var_v0 = (D_801BAE40 - D_801BAE44) & 0x3F;
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = -1;
    if (func_8015E588() == 0) {
        func_8015E068();
        goto loop_3;
    }
    return var_v0;
}
