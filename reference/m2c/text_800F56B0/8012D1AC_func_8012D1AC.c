/* m2c reference for func_8012D1AC @ 8012D1AC (57 words). Generated; not compiled or validated. */
s32 func_801788E4(s32, u8 *, u8 *);                 /* extern */
extern s32 D_801C37C8;
static s32 D_801C32E4 = 0;
static s32 D_801C32F0 = 0;

s32 func_8012D1AC(u8 *arg0, s32 arg1) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;
    u8 *var_a1;
    u8 temp_v1;

    var_s2 = 3;
    var_a1 = arg0 + 1;
    var_a0 = 1;
    *arg0 = 0;
    if (arg1 > 1) {
        do {
            temp_v1 = *var_a1;
            var_a1 += 1;
            var_a0 += 1;
            *arg0 += temp_v1;
        } while (var_a0 < arg1);
    }
    D_801C32F0 = func_801788E4(var_a0, var_a1, arg0);
    var_s0 = write(D_801C32E4, arg0, arg1);
    if (var_s0 != arg1) {
loop_3:
        if (var_s2 != 0) {
            var_s2 -= 1;
            var_s0 += write(D_801C32E4, &arg0[var_s0], arg1 - var_s0);
            if (var_s0 != arg1) {
                goto loop_3;
            }
        }
        if (var_s0 != arg1) {
            D_801C37C8 = 1;
            return var_s0;
        }
        goto block_7;
    }
block_7:
    D_801C37C8 = 0;
    return var_s0;
}
