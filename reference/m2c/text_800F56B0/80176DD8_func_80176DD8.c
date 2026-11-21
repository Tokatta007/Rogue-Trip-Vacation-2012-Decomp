/* m2c reference for func_80176DD8 @ 80176DD8 (49 words). Generated; not compiled or validated. */
extern s16 D_801C38F0;
extern ? D_801F4D08;

void func_80176DD8(s32 arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_t0;
    void *temp_a1;
    void *temp_v1;

    if (arg1->unk2 == 0) {
        arg1->unk2 = 1U;
        temp_a1 = arg1 + 4;
        temp_v1 = (D_801C38F0 * 0x1C) + &D_801F4D08;
        temp_v1->unk0 = temp_a1;
        temp_v1->unk4 = 0;
        temp_v1->unk18 = arg0;
        temp_a2 = temp_a1->unk14 * 8;
        temp_a0 = temp_a1->unk18 * 0x2D;
        temp_a2_2 = temp_a2 / temp_a0;
        temp_t0 = temp_a2 % temp_a0;
        temp_a1->unk18 = 0;
        temp_a1->unk14 = (s32) temp_a1->unk18;
        temp_v1->unkC = temp_a0;
        D_801C38F0 = (u16) D_801C38F0 + 1;
        temp_v1->unk10 = (s32) -temp_a0;
        temp_v1->unk8 = temp_t0;
        temp_v1->unk14 = (s16) temp_a2_2;
    }
}
