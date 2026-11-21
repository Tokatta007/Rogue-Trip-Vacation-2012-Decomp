/* m2c reference for func_80173198 @ 80173198 (54 words). Generated; not compiled or validated. */
extern ? D_801C24B8;

s32 func_80173198(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    s16 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1_2;
    u16 var_v1;

    var_v0 = arg1 + (arg3 & 0xFF);
    if (var_v0 < 0) {
        var_v0 += 7;
    }
    temp_a1 = var_v0 >> 3;
    var_a3 = temp_a1;
    var_v1_2 = 0;
    if (temp_a1 >= 0x10) {
        var_v1_2 = 1;
        var_a3 = temp_a1 - 0x10;
    }
    temp_v0 = arg0 - ((arg2 & 0xFF) - 0x3C);
    var_v1 = *(&D_801C24B8 + ((((s32) (((var_v1_2 + temp_v0) % 12) << 0x10) >> 0xC) + (s16) var_a3) * 2));
    temp_a0 = ((var_v1_2 + temp_v0) / 12) - 5;
    if (temp_a0 > 0) {
        var_v1 <<= temp_a0;
    } else if (temp_a0 < 0) {
        var_v1 = (u16) ((s32) (var_v1 & 0xFFFF) >> -temp_a0);
    }
    return var_v1 & 0xFFFF;
}
