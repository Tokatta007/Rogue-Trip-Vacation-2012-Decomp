/* m2c reference for func_80157918 @ 80157918 (41 words). Generated; not compiled or validated. */
extern ? D_801E4DB4;
extern s8 D_801E4DBC;

s32 func_80157918(s32 arg0, s8 *arg1) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s8 *var_s2;

    var_s0 = 0;
    var_s2 = &D_801E4DBC;
    var_s1 = 0;
loop_1:
    temp_v0 = *(&D_801E4DB4 + var_s1);
    if (temp_v0 != 0) {
        if (temp_v0 == arg0) {
            var_s2 += 0x2C;
            if (strcmp(arg1, var_s2) == 0) {
                return var_s0 + 1;
            }
            goto block_6;
        }
        var_s2 += 0x2C;
block_6:
        var_s0 += 1;
        var_s1 += 0x2C;
        if (var_s0 >= 0x80) {
            goto block_7;
        }
        goto loop_1;
    }
block_7:
    return -1;
}
