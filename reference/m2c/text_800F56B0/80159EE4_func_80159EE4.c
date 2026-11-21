/* m2c reference for func_80159EE4 @ 80159EE4 (10 words). Generated; not compiled or validated. */
void *func_80159EE4(void *arg0, void *arg1) {
    GTE_IR1 = arg0->unk0;
    GTE_IR2 = arg0->unk4;
    GTE_IR3 = arg0->unk8;
    gte_sqr0();
    arg1->unk0 = (s32) GTE_MAC1;
    arg1->unk4 = (s32) GTE_MAC2;
    arg1->unk8 = (s32) GTE_MAC3;
    return arg1;
}
