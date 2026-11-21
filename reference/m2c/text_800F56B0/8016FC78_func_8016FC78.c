/* m2c reference for func_8016FC78 @ 8016FC78 (72 words). Generated; not compiled or validated. */
s32 func_801596CC(s32, s32);                        /* extern */

s32 func_8016FC78(void *arg0, void *arg1, s32 arg2) {
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;

    temp_lo = arg0->unk0 * arg0->unk0;
    temp_v0 = func_801596CC(temp_lo + (arg0->unk4 * arg0->unk4) + (arg0->unk8 * arg0->unk8), temp_lo);
    if ((temp_v0 > 0) && (arg2 > 0)) {
        temp_lo_2 = (s32) (arg2 << 0xC) / temp_v0;
        arg1->unk0 = (s32) ((s32) (temp_lo_2 * arg0->unk0) >> 0xC);
        arg1->unk4 = (s32) ((s32) (temp_lo_2 * arg0->unk4) >> 0xC);
        arg1->unk8 = (s32) ((s32) (temp_lo_2 * arg0->unk8) >> 0xC);
        return 1;
    }
    arg1->unk0 = 0;
    arg1->unk4 = 0;
    arg1->unk8 = 0;
    return 0;
}
