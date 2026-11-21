/* m2c reference for func_8016F240 @ 8016F240 (148 words). Generated; not compiled or validated. */
extern ? D_801F37C8;

void func_8016F240(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t2;
    void *temp_a0;
    void *temp_t0;
    void *temp_v1;

    temp_t0 = (arg0 * 0x70) + &D_801F37C8;
    temp_t2 = 0xFF - arg3;
    temp_a0 = (arg1 * 0x70) + &D_801F37C8;
    temp_v1 = (arg2 * 0x70) + &D_801F37C8;
    temp_v1->unkC = (s16) ((s32) ((temp_t0->unkC * temp_t2) + (temp_a0->unkC * arg3)) >> 8);
    temp_v1->unk12 = (s16) ((s32) ((temp_t0->unk12 * temp_t2) + (temp_a0->unk12 * arg3)) >> 8);
    temp_v1->unk18 = (s16) ((s32) ((temp_t0->unk18 * temp_t2) + (temp_a0->unk18 * arg3)) >> 8);
    temp_v1->unkE = (s16) ((s32) ((temp_t0->unkE * temp_t2) + (temp_a0->unkE * arg3)) >> 8);
    temp_v1->unk14 = (s16) ((s32) ((temp_t0->unk14 * temp_t2) + (temp_a0->unk14 * arg3)) >> 8);
    temp_v1->unk1A = (s16) ((s32) ((temp_t0->unk1A * temp_t2) + (temp_a0->unk1A * arg3)) >> 8);
    temp_v1->unk10 = (s16) ((s32) ((temp_t0->unk10 * temp_t2) + (temp_a0->unk10 * arg3)) >> 8);
    temp_v1->unk16 = (s16) ((s32) ((temp_t0->unk16 * temp_t2) + (temp_a0->unk16 * arg3)) >> 8);
    temp_v1->unk1C = (s16) ((s32) ((temp_t0->unk1C * temp_t2) + (temp_a0->unk1C * arg3)) >> 8);
    temp_v1->unk0 = (s32) ((s32) ((temp_t0->unk0 * temp_t2) + (temp_a0->unk0 * arg3)) >> 8);
    temp_v1->unk4 = (s32) ((s32) ((temp_t0->unk4 * temp_t2) + (temp_a0->unk4 * arg3)) >> 8);
    temp_v1->unk8 = (s32) ((s32) ((temp_t0->unk8 * temp_t2) + (temp_a0->unk8 * arg3)) >> 8);
}
