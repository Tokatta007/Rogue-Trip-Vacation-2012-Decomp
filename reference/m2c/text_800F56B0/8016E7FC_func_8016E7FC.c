/* m2c reference for func_8016E7FC @ 8016E7FC (38 words). Generated; not compiled or validated. */
void func_8016E7FC(void *arg2) {
    GTE_VXY0 = saved_reg_s5->unk0;
    GTE_VZ0 = saved_reg_s5->unk4;
    gte_mvmva(1, 0, 0, 3, 0);
    arg2->unk0 = (s16) GTE_IR1;
    arg2->unk6 = (s16) GTE_IR2;
    arg2->unkC = (s16) GTE_IR3;
    GTE_VXY0 = saved_reg_s5->unk6 | (saved_reg_s5->unk8 << 0x10);
    GTE_VZ0 = saved_reg_s5->unkA;
    gte_mvmva(1, 0, 0, 3, 0);
    arg2->unk2 = (s16) GTE_IR1;
    arg2->unk8 = (s16) GTE_IR2;
    arg2->unkE = (s16) GTE_IR3;
    GTE_VXY0 = saved_reg_s5->unkC;
    GTE_VZ0 = saved_reg_s5->unk10;
    gte_mvmva(1, 0, 0, 3, 0);
    arg2->unk4 = (s16) GTE_IR1;
    arg2->unkA = (s16) GTE_IR2;
    arg2->unk10 = (s32) GTE_IR3;
}
