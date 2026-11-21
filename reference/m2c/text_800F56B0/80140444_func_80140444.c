/* m2c reference for func_80140444 @ 80140444 (47 words). Generated; not compiled or validated. */
void func_80140444(void *arg0) {
    s32 sp10;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1;

    temp_v1 = arg0->unk0;
    sp10 = (s32) (s8) temp_v1->unk744;
    sp10.unk4 = (s32) (s8) temp_v1->unk745;
    sp10.unk8 = (s32) (s8) temp_v1->unk746;
    mathMulTransVec(arg0->unk0->unk738 + 0x28, (VECTOR *) &sp10, arg0 + 0x10);
    temp_a0 = arg0->unk0;
    temp_a0_2 = temp_a0 + 0x1E4;
    arg0->unk10 = (s32) (arg0->unk10 + temp_a0->unk1E4);
    arg0->unk14 = (s32) (arg0->unk14 + temp_a0_2->unk4);
    arg0->unk18 = (s32) (arg0->unk18 + temp_a0_2->unk8);
}
