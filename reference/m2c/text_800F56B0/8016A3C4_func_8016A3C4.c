/* m2c reference for func_8016A3C4 @ 8016A3C4 (119 words). Generated; not compiled or validated. */
s32 func_80169F08(?, s32, s16 *, s16 *);            /* extern */

s32 func_8016A3C4(void *arg0, s32 arg1, s16 arg2, s8 arg3) {
    s16 sp18;
    s16 sp20;
    s16 var_v1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s2;

    temp_s2 = *(void **)0x1F800008;
    var_v0 = 0;
    if (func_80169F08(0x1F800048, arg1, &sp18, &sp20) != 0) {
        if (!(arg0->unk4->unk12 & 1)) {
            var_v1 = sp1E;
            var_v0_2 = (s32) ((sp18 * (void *)0x1F800048->unk0) + (sp1A * (void *)0x1F800048->unk4) + (sp1C * (void *)0x1F800048->unk8)) >> 0xC;
            goto block_5;
        }
        var_s0 = ((s32) ((sp18 * (void *)0x1F800048->unk0) + (sp1A * (void *)0x1F800048->unk4) + (sp1C * (void *)0x1F800048->unk8)) >> 0xC) + sp1E;
        if (var_s0 >= 0) {
            var_v1 = sp26;
            var_v0_2 = (s32) ((sp20 * (void *)0x1F800048->unk0) + (sp22 * (void *)0x1F800048->unk4) + (sp24 * (void *)0x1F800048->unk8)) >> 0xC;
block_5:
            var_s0 = var_v0_2 + var_v1;
            var_v0 = var_s0;
            if (var_s0 < 0) {
                goto block_7;
            }
        } else {
block_7:
            if ((-0x32 << arg1) < var_s0) {
                temp_s2->unk0 = 1;
                temp_s2->unk4 = var_s0;
                temp_s2->unk2 = arg2;
                temp_s2->unk1 = arg3;
            }
            var_v0 = var_s0;
        }
    }
    return var_v0;
}
