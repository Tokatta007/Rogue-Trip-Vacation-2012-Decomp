/* m2c reference for func_80159A5C @ 80159A5C (20 words). Generated; not compiled or validated. */
s32 func_80159A5C(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    GTE_IR0 = arg2;
    GTE_IR1 = arg0->unk0;
    GTE_IR2 = arg0->unk4;
    GTE_IR3 = arg0->unk8;
    gte_gpf0();
    GTE_IR0 = arg3;
    GTE_IR1 = arg1->unk0;
    GTE_IR2 = arg1->unk4;
    GTE_IR3 = arg1->unk8;
    gte_gpl0();
    arg4->unk0 = (s32) GTE_IR1;
    arg4->unk4 = (s32) GTE_IR2;
    arg4->unk8 = (s32) GTE_IR3;
    return GTE_LZCR;
}
