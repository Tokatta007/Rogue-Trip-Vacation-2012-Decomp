/* m2c reference for func_80173090 @ 80173090 (66 words). Generated; not compiled or validated. */
extern ? D_801C24B8;
extern s32 D_801F4B30;
extern ? D_801F4B3F;

s32 func_80173090(s32 arg0, s32 arg1) {
    s16 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_v0;
    u16 var_v1;
    void *temp_v1;

    temp_v1 = ((s32) (((s8) D_801F4B3F.unk5 + (D_801F4B3F.unk0 * 0x10)) << 0x10) >> 0xB) + D_801F4B30;
    var_v0 = (arg1 & 0xFFFF) + temp_v1->unk5;
    if (var_v0 < 0) {
        var_v0 += 7;
    }
    temp_a1 = var_v0 >> 3;
    var_a3 = temp_a1;
    var_a2 = 0;
    if (temp_a1 >= 0x10) {
        var_a2 = 1;
        var_a3 = temp_a1 - 0x10;
    }
    temp_v0 = (arg0 + 0x3C) - temp_v1->unk4;
    temp_a0 = ((var_a2 + temp_v0) / 12) - 5;
    var_v1 = *(&D_801C24B8 + ((((s32) (((var_a2 + temp_v0) % 12) << 0x10) >> 0xC) + (s16) var_a3) * 2));
    if (temp_a0 > 0) {
        var_v1 <<= temp_a0;
    } else if (temp_a0 < 0) {
        var_v1 = (u16) ((s32) (var_v1 & 0xFFFF) >> -temp_a0);
    }
    return var_v1 & 0xFFFF;
}
