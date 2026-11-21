/* m2c reference for func_80159C9C @ 80159C9C (12 words). Generated; not compiled or validated. */
s32 func_80159C9C(void *arg0, void *arg1, s32 arg2) {
    GTE_VXY0 = arg0->unk0;
    GTE_VZ0 = arg0->unk4;
    gte_mvmva(1, 0, 0, 3, 0);
    arg1->unk0 = (s32) GTE_IR1;
    arg1->unk4 = (s32) GTE_IR2;
    arg1->unk8 = (s32) GTE_IR3;
    return arg2;
}
