/* m2c reference for func_8017BA64 @ 8017BA64 (41 words). Generated; not compiled or validated. */
extern ? D_801F3AA8;

s32 func_8017BA64(s32 arg0, s16 arg1) {
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 temp_v1;
    u8 var_a0;
    void *temp_a1;

    temp_a1 = *(&D_801F3AA8 + ((s32) (arg0 << 0x10) >> 0xE)) + (arg1 * 0xB0);
    temp_v0 = temp_a1->unk0;
    var_a0 = *temp_v0;
    temp_a1->unk0 = (u8 *) (temp_v0 + 1);
    var_v0 = 0;
    if (var_a0 != 0) {
        var_v0_2 = var_a0 * 4;
        if (var_a0 & 0x80) {
            var_a0 &= 0x7F;
            do {
                temp_v0_2 = temp_a1->unk0;
                temp_v1 = *temp_v0_2;
                temp_a1->unk0 = (u8 *) (temp_v0_2 + 1);
                var_a0 = (var_a0 << 7) + (temp_v1 & 0x7F);
            } while (temp_v1 & 0x80);
            var_v0_2 = var_a0 * 4;
        }
        var_v0 = (var_v0_2 + var_a0) * 2;
        temp_a1->unk88 = (s32) (temp_a1->unk88 + var_v0);
    }
    return var_v0;
}
