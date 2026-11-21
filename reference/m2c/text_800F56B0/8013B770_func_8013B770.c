/* m2c reference for func_8013B770 @ 8013B770 (34 words). Generated; not compiled or validated. */
extern ? D_801B3A44;

s32 func_8013B770(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    void *temp_v0;

    temp_v1 = ((u32) (arg0 & 0xFF00) >> 8) | ((arg0 & 0xFF) << 8);
    if ((u32) ((temp_v1 + 0x7DB1) & 0xFFFF) < 0xAU) {
        var_v0 = 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        temp_v0 = (var_v0 * 4) + &D_801B3A44;
        return (temp_v0->unk2 + (temp_v1 - temp_v0->unk0)) & 0xFF;
    }
    var_v0 = 1;
    if ((u32) ((temp_v1 + 0x7DA0) & 0xFFFF) >= 0x1AU) {
        var_v0 = 2;
        if ((u32) ((temp_v1 + 0x7D7F) & 0xFFFF) >= 0x1AU) {
            return 0x20;
        }
    }
    temp_v0 = (var_v0 * 4) + &D_801B3A44;
    return (temp_v0->unk2 + (temp_v1 - temp_v0->unk0)) & 0xFF;
}
