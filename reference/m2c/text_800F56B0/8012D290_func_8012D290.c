/* m2c reference for func_8012D290 @ 8012D290 (80 words). Generated; not compiled or validated. */
s32 func_801788E4();                                /* extern */
extern s32 D_801C37C8;
static s32 D_801C32E0 = 0;
static s32 D_801C32F0 = 0;
static s32 D_801C32F4 = 0;
static s32 D_801C3300 = 0;
static s32 D_801C3304 = 0;

s32 func_8012D290(u8 *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    u8 *var_a2;

    D_801C32F0 = func_801788E4();
    var_s1 = 3;
    var_s0 = read(D_801C32E0, arg0, arg1);
    var_a3 = 0;
    if (var_s0 != arg1) {
loop_1:
        if (var_s1 != 0) {
            D_801C32F0 = func_801788E4();
            var_s0 += read(D_801C32E0, arg0 + var_s0, arg1 - var_s0);
            if (D_801C32F4 != 0) {
                if (var_s0 == 0) {
                    D_801C3304 += 1;
                }
                return 0;
            }
            var_s1 -= 1;
            if (var_s0 == arg1) {
                goto block_7;
            }
            goto loop_1;
        }
block_7:
        var_a3 = 0;
        if (var_s0 != arg1) {
            var_a2 = arg0 + 1;
            if (var_s0 == 0) {
                D_801C3304 += 1;
                return 0;
            }
            goto block_11;
        }
        goto block_10;
    }
block_10:
    var_a2 = arg0 + 1;
block_11:
    var_v1 = 1;
    if (arg1 > 1) {
        do {
            var_v1 += 1;
            var_a3 += *var_a2;
            var_a2 += 1;
        } while (var_v1 < arg1);
    }
    D_801C3300 = 0;
    temp_v1 = var_a3 & 0xFF;
    if (temp_v1 == *arg0) {
        D_801C37C8 = 0;
        D_801C3304 = 0;
    }
    return *arg0 == temp_v1;
}
