/* m2c reference for func_8015EBDC @ 8015EBDC (94 words). Generated; not compiled or validated. */
? func_8015ED54(s32, s32);                          /* extern */
extern s32 *D_801BAE70;
extern s32 *D_801BAE74;
extern s32 D_801BAE78;
extern s32 D_801BAE7C;
extern s32 D_801BBFA8;

s32 func_8015EBDC(s32 arg0) {
    s32 sp10;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_v0;

    do {
        sp10 = *D_801BAE74;
    } while (sp10 != *D_801BAE74);
    temp_s1 = (sp10 - D_801BAE78) & 0xFFFF;
    if (arg0 < 0) {
        return D_801BBFA8;
    }
    if (arg0 != 1) {
        if (arg0 > 0) {
            var_v0 = D_801BAE7C - 1 + arg0;
        } else {
            var_v0 = D_801BAE7C;
        }
        var_a1 = 0;
        if (arg0 > 0) {
            var_a1 = arg0 - 1;
        }
        func_8015ED54(var_v0, var_a1);
        temp_s0 = *D_801BAE70;
        func_8015ED54(D_801BBFA8 + 1, 1);
        if ((temp_s0 & 0x400000) && ((temp_s0 ^ *D_801BAE70) >= 0)) {
            do {

            } while (!((temp_s0 ^ *D_801BAE70) & 0x80000000));
        }
        D_801BAE7C = D_801BBFA8;
        do {
            D_801BAE78 = *D_801BAE74;
        } while (D_801BAE78 != *D_801BAE74);
    }
    return temp_s1;
}
