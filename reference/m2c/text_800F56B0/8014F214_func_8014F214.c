/* m2c reference for func_8014F214 @ 8014F214 (26 words). Generated; not compiled or validated. */
void func_8014F214(void *arg1, s32 arg2, s32 arg3) {
    void *temp_a2;

    temp_a2 = arg2 + ((s32) (arg3 << 0x10) >> 0xB);
    arg1->unk0 = (s32) ((s32) (temp_a2->unk14 * -temp_a2->unk8) >> 0xC);
    arg1->unk4 = (s32) ((s32) (temp_a2->unk14 * -temp_a2->unkC) >> 0xC);
    arg1->unk8 = (s32) ((s32) (temp_a2->unk14 * -temp_a2->unk10) >> 0xC);
}
