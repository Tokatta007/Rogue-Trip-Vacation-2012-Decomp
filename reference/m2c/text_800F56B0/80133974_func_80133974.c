/* m2c reference for func_80133974 @ 80133974 (17 words). Generated; not compiled or validated. */
extern ? D_801CC590;

void func_80133974(void) {
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;

    var_a1 = 0;
    var_a0 = 0;
    do {
        var_v1 = var_a1 * 8;
loop_2:
        *(var_v1 + &D_801CC590) = 0;
        var_a0 += 1;
        var_v1 += 4;
        if (var_a0 < 2) {
            goto loop_2;
        }
        var_a1 += 1;
        var_a0 = 0;
    } while (var_a1 < 0x12);
}
