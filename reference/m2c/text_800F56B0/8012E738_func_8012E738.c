/* m2c reference for func_8012E738 @ 8012E738 (39 words). Generated; not compiled or validated. */
s32 func_80125094(s32, void *);                     /* extern */
s32 func_8012EAEC(? *);                             /* extern */
extern ? D_8018462C;
extern s32 D_801C37DC;

s32 func_8012E738(s32 arg0) {
    ? *var_s0;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    var_s0 = &D_8018462C;
loop_1:
    var_v0 = 0;
    if (var_s1 < D_801C37DC) {
        if (func_8012EAEC(var_s0) & 0xFF) {
            var_s0 += 0x18;
            if (func_80125094(arg0, var_s0 + 0xC) < 0x50) {
                var_v0 = 1;
            } else {
                goto block_6;
            }
        } else {
            var_s0 += 0x18;
block_6:
            var_s1 += 1;
            goto loop_1;
        }
    }
    return var_v0;
}
