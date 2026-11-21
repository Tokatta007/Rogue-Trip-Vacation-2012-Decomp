/* m2c reference for func_80159F50 @ 80159F50 (22 words). Generated; not compiled or validated. */
void func_80159F50(void *arg0, void *arg1, void *arg2) {
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t7;

    temp_t5 = GTE_RT11RT12;
    temp_t6 = GTE_RT22RT23;
    temp_t7 = GTE_RT33;
    GTE_RT11RT12 = arg0->unk0;
    GTE_RT22RT23 = arg0->unk4;
    GTE_RT33 = arg0->unk8;
    GTE_IR3 = arg1->unk8;
    GTE_IR1 = arg1->unk0;
    GTE_IR2 = arg1->unk4;
    gte_op12();
    arg2->unk0 = (s32) GTE_MAC1;
    arg2->unk4 = (s32) GTE_MAC2;
    arg2->unk8 = (s32) GTE_MAC3;
    GTE_RT11RT12 = temp_t5;
    GTE_RT22RT23 = temp_t6;
    GTE_RT33 = temp_t7;
}
