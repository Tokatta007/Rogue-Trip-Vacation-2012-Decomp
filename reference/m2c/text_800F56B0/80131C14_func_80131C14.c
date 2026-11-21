/* m2c reference for func_80131C14 @ 80131C14 (18 words). Generated; not compiled or validated. */
extern s32 D_801C37F0;

s32 func_80131C14(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = (arg0 << 0xA) + arg1;
    var_v0 = temp_a0;
    if (temp_a0 < 0) {
        var_v0 = temp_a0 + 0x1F;
    }
    return (*(((temp_a0 >> 5) * 4) + D_801C37F0) & (1 << (temp_a0 - ((var_v0 >> 5) << 5)))) == 0;
}
