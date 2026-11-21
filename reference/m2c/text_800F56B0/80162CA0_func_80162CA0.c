/* m2c reference for func_80162CA0 @ 80162CA0 (21 words). Generated; not compiled or validated. */
s32 func_801638CC();                                /* extern */
extern s32 *D_801BC11C;

s32 func_80162CA0(void) {
    s32 *temp_v0;
    s32 var_v0;

    temp_v0 = D_801BC11C;
loop_3:
    var_v0 = 1;
    if (!(*temp_v0 & 0x80)) {
        var_v0 = 0;
        if (func_801638CC() == 0) {
            goto loop_3;
        }
    }
    return var_v0;
}
