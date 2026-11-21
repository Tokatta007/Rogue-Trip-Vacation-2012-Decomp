/* m2c reference for func_801587CC @ 801587CC (13 words). Generated; not compiled or validated. */
extern s32 D_801E4770;

void func_801587CC(s32 arg0, u32 arg1) {
    s32 temp_v0;
    u32 var_a2;

    var_a2 = 0;
    if (arg1 != 0) {
        do {
            temp_v0 = var_a2 + arg0;
            var_a2 += 1;
            *(D_801E4770 + (temp_v0 << 5)) = 0;
        } while (var_a2 < arg1);
    }
}
