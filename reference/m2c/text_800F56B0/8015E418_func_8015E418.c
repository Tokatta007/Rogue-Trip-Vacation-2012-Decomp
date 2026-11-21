/* m2c reference for func_8015E418 @ 8015E418 (79 words). Generated; not compiled or validated. */
? func_8015E068();                                  /* extern */
? func_8015E554();                                  /* extern */
s32 func_8015E588();                                /* extern */
extern s32 *D_801BAE20;
extern s32 *D_801BAE2C;
extern s32 D_801BAE40;
extern s32 D_801BAE44;

s32 func_8015E418(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    if (arg0 == 0) {
        func_8015E554();
loop_3:
        if (D_801BAE40 != D_801BAE44) {
            func_8015E068();
            var_v0 = -1;
            if (func_8015E588() == 0) {
                goto loop_3;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_v0;
        }
loop_6:
        if (!(*D_801BAE2C & 0x01000000) && (*D_801BAE20 & 0x04000000)) {
            return 0;
        }
        var_v0 = -1;
        if (func_8015E588() == 0) {
            goto loop_6;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_s0 = (D_801BAE40 - D_801BAE44) & 0x3F;
    if (temp_s0 != 0) {
        func_8015E068();
    }
    if ((*D_801BAE2C & 0x01000000) || (var_v0 = temp_s0, ((*D_801BAE20 & 0x04000000) == 0))) {
        var_v0 = temp_s0;
        if (temp_s0 == 0) {
            var_v0 = 1;
        }
    }
    return var_v0;
}
