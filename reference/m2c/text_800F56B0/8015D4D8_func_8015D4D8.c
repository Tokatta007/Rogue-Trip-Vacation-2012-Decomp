/* m2c reference for func_8015D4D8 @ 8015D4D8 (56 words). Generated; not compiled or validated. */
? func_8015E554(s32, s32 *);                        /* extern */
s32 func_8015E588();                                /* extern */
extern s32 *D_801BAE30;
extern s32 *D_801BAE34;
extern s32 *D_801BAE38;
extern s32 *D_801BAE3C;

s32 func_8015D4D8(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    *D_801BAE3C |= 0x08000000;
    *D_801BAE38 = 0;
    temp_a0 = arg0 + ((arg1 * 4) - 4);
    *D_801BAE30 = temp_a0;
    *D_801BAE34 = arg1;
    *D_801BAE38 = 0x11000002;
    func_8015E554(temp_a0, D_801BAE3C);
    var_v0 = arg1;
    if (*D_801BAE38 & 0x01000000) {
loop_2:
        var_v0 = -1;
        if (func_8015E588() == 0) {
            var_v0 = arg1;
            if (*D_801BAE38 & 0x01000000) {
                goto loop_2;
            }
        }
    }
    return var_v0;
}
