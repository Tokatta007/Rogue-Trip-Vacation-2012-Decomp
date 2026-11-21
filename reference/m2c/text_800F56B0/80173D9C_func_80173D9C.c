/* m2c reference for func_80173D9C @ 80173D9C (48 words). Generated; not compiled or validated. */
extern ? D_801F4A58;
extern ? D_801F4A98;
extern ? D_801F4AE0;
extern s16 D_801F4B22;
extern s32 D_801F4B24;
extern s32 D_801F4B2C;
extern s32 D_801F4B30;
extern ? D_801F4B39;
extern ? D_801F4B58;

s32 func_80173D9C(s16 arg0, s16 arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_v0;

    if ((u32) (arg0 & 0xFFFF) < 0x10U) {
        var_v0 = -1;
        if (*(&D_801F4B58 + arg0) == 1) {
            temp_v0 = arg0 * 4;
            if (arg1 >= D_801F4B22) {
                goto block_3;
            }
            temp_a1 = *(&D_801F4A58 + temp_v0);
            D_801F4B39.unk0 = (s8) arg0;
            D_801F4B39.unk5 = (s8) arg1;
            D_801F4B30 = *(&D_801F4AE0 + temp_v0);
            D_801F4B2C = *(&D_801F4A98 + temp_v0);
            D_801F4B24 = temp_a1;
            var_v0 = 0;
            D_801F4B39.unk6 = (u8) ((arg1 * 0x10) + temp_a1)->unk8;
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_3:
    return -1;
}
