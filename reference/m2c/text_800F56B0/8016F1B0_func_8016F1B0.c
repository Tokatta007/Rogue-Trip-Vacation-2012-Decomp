/* m2c reference for func_8016F1B0 @ 8016F1B0 (24 words). Generated; not compiled or validated. */
extern ? D_801F3748;
extern ? D_801F37C8;

void func_8016F1B0(s32 arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = (arg1 * 2) + (arg0 * 0x70) + &D_801F37C8;
    D_801F3748.unk0 = (s32) ((s32) (temp_a1->unkC << 0x10) >> 0x14);
    D_801F3748.unk4 = (s32) ((s32) (temp_a1->unk12 << 0x10) >> 0x14);
    D_801F3748.unk8 = (s32) ((s32) (temp_a1->unk18 << 0x10) >> 0x14);
}
