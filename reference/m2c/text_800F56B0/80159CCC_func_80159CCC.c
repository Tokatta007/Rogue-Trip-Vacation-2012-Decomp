/* m2c reference for func_80159CCC @ 80159CCC (67 words). Generated; not compiled or validated. */
void *func_80159CCC(void *arg0, void *arg1) {
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t8;

    GTE_RT11RT12 = arg0->unk0;
    GTE_RT13RT21 = arg0->unk4;
    GTE_RT22RT23 = arg0->unk8;
    GTE_RT31RT32 = arg0->unkC;
    GTE_RT33 = arg0->unk10;
    GTE_VXY0 = arg1->unk0 | (arg1->unk4 & 0xFFFF0000);
    GTE_VZ0 = arg1->unkC;
    gte_mvmva(1, 0, 0, 3, 0);
    temp_t3 = GTE_IR1;
    temp_t4 = GTE_IR2;
    temp_t5 = GTE_IR3;
    GTE_VXY0 = arg1->unk2 | (arg1->unk8 << 0x10);
    GTE_VZ0 = arg1->unkE;
    gte_mvmva(1, 0, 0, 3, 0);
    temp_t6 = GTE_IR1;
    temp_t7 = GTE_IR2;
    temp_t8 = GTE_IR3;
    GTE_VXY0 = (u16) arg1->unk4 | (arg1->unk8 & 0xFFFF0000);
    GTE_VZ0 = arg1->unk10;
    gte_mvmva(1, 0, 0, 3, 0);
    arg0->unk0 = (s32) ((temp_t6 << 0x10) | (temp_t3 & 0xFFFF));
    arg0->unkC = (s32) ((temp_t8 << 0x10) | (temp_t5 & 0xFFFF));
    arg0->unk4 = (s32) ((GTE_IR1 & 0xFFFF) | (temp_t4 << 0x10));
    arg0->unk8 = (s32) ((GTE_IR2 << 0x10) | (temp_t7 & 0xFFFF));
    arg0->unk10 = (s32) GTE_IR3;
    return arg0;
}
