/* m2c reference for func_8017BB14 @ 8017BB14 (63 words). Generated; not compiled or validated. */
extern ? D_801F3AA8;

void func_8017BB14(s32 arg0, s16 arg1) {
    s32 *temp_a0;
    s32 temp_a2;
    void *temp_a2_2;
    void *temp_a3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_a0 = ((s32) (arg0 << 0x10) >> 0xE) + &D_801F3AA8;
    temp_a2 = arg1 * 0xB0;
    temp_a3 = *temp_a0 + temp_a2;
    temp_a3->unk20 = 1;
    temp_a3->unk21 = 0;
    temp_v1 = temp_a2 + *temp_a0;
    temp_v1->unk98 = (s32) (temp_v1->unk98 & ~0x100);
    temp_v1_2 = temp_a2 + *temp_a0;
    temp_v1_2->unk98 = (s32) (temp_v1_2->unk98 & ~8);
    temp_v1_3 = temp_a2 + *temp_a0;
    temp_v1_3->unk98 = (s32) (temp_v1_3->unk98 & ~2);
    temp_v1_4 = temp_a2 + *temp_a0;
    temp_v1_4->unk98 = (s32) (temp_v1_4->unk98 & ~4);
    temp_v1_5 = temp_a2 + *temp_a0;
    temp_v1_5->unk98 = (s32) (temp_v1_5->unk98 & ~0x200);
    temp_a3->unk14 = 1;
    temp_a3->unk0 = (s32) temp_a3->unk4;
    temp_a2_2 = temp_a2 + *temp_a0;
    temp_a2_2->unk98 = (s32) (temp_a2_2->unk98 | 1);
}
