/* m2c reference for func_8015A01C @ 8015A01C (16 words). Generated; not compiled or validated. */
void *func_8015A01C(void *arg0, void *arg1) {
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t3;

    temp_t1 = arg0->unk0;
    temp_t2 = arg0->unk4;
    arg1->unk4 = temp_t1;
    arg1->unk0 = temp_t2;
    arg1->unk0 = (s16) temp_t1;
    temp_t3 = arg0->unk8;
    temp_t1_2 = arg0->unkC;
    arg1->unkC = temp_t3;
    arg1->unk8 = temp_t1_2;
    arg1->unkC = (s16) temp_t2;
    arg1->unk8 = (s16) temp_t3;
    arg1->unk4 = (s16) temp_t1_2;
    arg1->unk10 = (s16) arg0->unk10;
    return arg1;
}
