/* m2c reference for func_8012CEA8 @ 8012CEA8 (31 words). Generated; not compiled or validated. */
s32 func_8012CEA8(s32 arg0) {
    s32 var_a0;
    s32 var_s0;
    s32 var_v1;
    void *var_v0;

    var_s0 = -1;
    var_v1 = rand() & 7;
    var_a0 = 1;
    var_v0 = arg0 + var_v1;
loop_1:
    if (var_v0->unk4C != 0) {
        var_s0 = var_v1;
    } else {
        var_v1 += 1;
        if (var_v1 >= 9) {
            var_v1 = 1;
        }
        var_a0 += 1;
        var_v0 = arg0 + var_v1;
        if (var_a0 < 9) {
            goto loop_1;
        }
    }
    return var_s0;
}
