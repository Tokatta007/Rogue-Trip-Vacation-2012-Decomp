/* m2c reference for func_8016FB24 @ 8016FB24 (85 words). Generated; not compiled or validated. */
s32 func_801596CC(s32, s32);                        /* extern */

void func_8016FB24(void *arg0, void *arg1) {
    s32 temp_lo;
    s32 temp_v0;

    temp_lo = arg0->unk0 * arg0->unk0;
    temp_v0 = func_801596CC(temp_lo + (arg0->unk4 * arg0->unk4) + (arg0->unk8 * arg0->unk8), temp_lo);
    if (temp_v0 > 0) {
        arg1->unk0 = (s32) ((s32) (arg0->unk0 << 0xC) / temp_v0);
        arg1->unk4 = (s32) ((s32) (arg0->unk4 << 0xC) / temp_v0);
        arg1->unk8 = (s32) ((s32) (arg0->unk8 << 0xC) / temp_v0);
        return;
    }
    arg1->unk0 = 0;
    arg1->unk4 = 0;
    arg1->unk8 = 0;
}
