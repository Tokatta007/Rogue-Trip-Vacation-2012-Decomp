/* m2c reference for func_8013B6F8 @ 8013B6F8 (30 words). Generated; not compiled or validated. */
extern ? D_801B3A44;

s32 func_8013B6F8(s32 arg0) {
    s32 var_v1;
    void *temp_v1;

    if ((u32) ((arg0 - 0x30) & 0xFF) < 0xAU) {
        var_v1 = 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        temp_v1 = (var_v1 * 4) + &D_801B3A44;
        return ((temp_v1->unk0 + (arg0 & 0xFF)) - temp_v1->unk2) & 0xFFFF;
    }
    var_v1 = 1;
    if ((u32) ((arg0 - 0x41) & 0xFF) >= 0x1AU) {
        var_v1 = 2;
        if ((u32) ((arg0 - 0x61) & 0xFF) >= 0x1AU) {
            return 0x8140;
        }
    }
    temp_v1 = (var_v1 * 4) + &D_801B3A44;
    return ((temp_v1->unk0 + (arg0 & 0xFF)) - temp_v1->unk2) & 0xFFFF;
}
