/* m2c reference for func_801593DC @ 801593DC (57 words). Generated; not compiled or validated. */
void func_801593DC(void *arg0, void *arg1) {
    u32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = arg0->unk0;
    arg1->unk0 = temp_v0;
    if ((temp_v0 >> 3) & 1) {
        temp_a0 = arg0 + 4;
        temp_v0_2 = temp_a0 + (((u32) arg0->unk4 >> 2) * 4);
        temp_a0_2 = temp_a0 + 4;
        arg1->unk10 = (u16) temp_a0->unk4;
        temp_a0_3 = temp_a0_2 + 4;
        arg1->unk12 = (u16) temp_a0_2->unk2;
        temp_v0_3 = temp_v0_2 + 4;
        arg1->unk14 = (u16) temp_a0_2->unk4;
        arg1->unk18 = (void *) (temp_a0_3 + 4);
        arg1->unk16 = (u16) temp_a0_3->unk2;
        arg1->unk4 = (u16) temp_v0_2->unk4;
        temp_v0_4 = temp_v0_3 + 4;
        arg1->unk6 = (u16) temp_v0_3->unk2;
        arg1->unk8 = (u16) temp_v0_3->unk4;
        arg1->unkC = (void *) (temp_v0_4 + 4);
        arg1->unkA = (u16) temp_v0_4->unk2;
        return;
    }
    temp_a0_4 = arg0 + 8;
    arg1->unk4 = (u16) arg0->unk8;
    temp_a0_5 = temp_a0_4 + 4;
    arg1->unk6 = (u16) temp_a0_4->unk2;
    arg1->unk8 = (u16) temp_a0_4->unk4;
    arg1->unkC = (void *) (temp_a0_5 + 4);
    arg1->unkA = (u16) temp_a0_5->unk2;
}
