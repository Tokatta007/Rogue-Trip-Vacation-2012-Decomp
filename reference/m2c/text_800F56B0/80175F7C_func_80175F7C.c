/* m2c reference for func_80175F7C @ 80175F7C (36 words). Generated; not compiled or validated. */
extern s32 D_801BC000;
extern s32 D_801C2664;

s32 func_80175F7C(s32 arg0) {
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a0;

    var_a1 = -1;
    var_v1 = 0;
    var_v0_2 = 1 << 0;
loop_1:
    if (!(arg0 & var_v0_2)) {
        var_v1 += 1;
        var_v0_2 = 1 << var_v1;
        if (var_v1 < 0x18) {
            goto loop_1;
        }
    } else {
        var_a1 = var_v1;
    }
    if (var_a1 == -1) {
        return -1;
    }
    temp_a0 = ((var_a1 * 0x10) + D_801BC000)->unkC;
    if (!(D_801C2664 & (1 << var_a1))) {
        return (temp_a0 != 0) * 2;
    }
    var_v0 = 1;
    if (temp_a0 == 0) {
        var_v0 = 3;
    }
    return var_v0;
}
