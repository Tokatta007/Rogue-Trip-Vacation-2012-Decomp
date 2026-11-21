/* m2c reference for func_8015959C @ 8015959C (40 words). Generated; not compiled or validated. */
extern ? D_801B3618;
extern ? D_801B4618;
extern ? D_801B4E18;

s16 func_8015959C(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 < 0) {
        var_a0 = -var_a0;
    }
    temp_a0 = var_a0 & 0xFFF;
    if (temp_a0 < 0x801) {
        if (temp_a0 < 0x401) {
            return *(&D_801B4E18 + ((0x400 - temp_a0) * 2));
        }
        return -*(&D_801B4618 + (temp_a0 * 2));
    }
    if (temp_a0 >= 0xC01) {
        return *(&D_801B3618 + (temp_a0 * 2));
    }
    return -*(&D_801B4E18 + ((0xC00 - temp_a0) * 2));
}
