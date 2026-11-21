/* m2c reference for func_800FF47C @ 800FF47C (19 words). Generated; not compiled or validated. */
void func_800FF47C(s32 arg0, void *arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = (arg0 + (arg2 * 4))->unk8;
    arg1->unk0 = (s32) (temp_a0->unk0 + ((s32) temp_a0->unkC >> 1));
    arg1->unk4 = (s32) (temp_a0->unk4 + ((s32) temp_a0->unk10 >> 1));
    arg1->unk8 = (s32) temp_a0->unk8;
}
