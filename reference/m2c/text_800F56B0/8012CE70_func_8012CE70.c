/* m2c reference for func_8012CE70 @ 8012CE70 (14 words). Generated; not compiled or validated. */
s32 func_8012CE70(s32 arg0) {
    s32 var_a1;
    s32 var_v1;
    void *var_v0;

    var_a1 = 0;
    var_v1 = 1;
    var_v0 = arg0 + 1;
loop_1:
    var_v1 += 1;
    if (var_v0->unk4C != 0) {
        var_a1 = 1;
    } else {
        var_v0 = arg0 + var_v1;
        if (var_v1 < 9) {
            goto loop_1;
        }
    }
    return var_a1;
}
