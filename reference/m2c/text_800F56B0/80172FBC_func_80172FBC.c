/* m2c reference for func_80172FBC @ 80172FBC (53 words). Generated; not compiled or validated. */
extern ? D_801C24B8;
extern ? D_801F4B3A;

s32 func_80172FBC(void) {
    s16 temp_v0_2;
    s32 temp_v0;
    s8 var_a1;
    u16 var_v1;
    u32 var_a1_2;

    var_a1 = D_801F4B3A.unkF;
    temp_v0 = (s8) D_801F4B3A.unkE - 0x3C;
    if (var_a1 < 0) {
        var_a1 += 7;
    }
    var_a1_2 = (u32) var_a1 >> 3;
    if ((u32) (var_a1_2 & 0xFFFF) >= 0x10U) {
        var_a1_2 = 0xF;
    }
    var_v1 = *(&D_801C24B8 + ((((s32) ((((s8) D_801F4B3A.unk0 - temp_v0) % 12) << 0x10) >> 0xC) + (var_a1_2 & 0xFFFF)) * 2));
    temp_v0_2 = (((s8) D_801F4B3A.unk0 - temp_v0) / 12) - 5;
    if (temp_v0_2 > 0) {
        var_v1 <<= temp_v0_2;
    } else if (temp_v0_2 < 0) {
        var_v1 = (u16) ((s32) (var_v1 & 0xFFFF) >> -temp_v0_2);
    }
    return var_v1 & 0xFFFF;
}
