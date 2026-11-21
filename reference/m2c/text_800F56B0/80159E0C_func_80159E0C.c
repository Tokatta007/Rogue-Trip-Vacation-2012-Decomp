/* m2c reference for func_80159E0C @ 80159E0C (10 words). Generated; not compiled or validated. */
void func_80159E0C(void *arg0, void *arg1) {
    GTE_IR1 = arg0->unk0;
    GTE_IR2 = arg0->unk4;
    GTE_IR3 = arg0->unk8;
    gte_mvmva(1, 2, 3, 1, 1);
    arg1->unk0 = (s32) GTE_IR1;
    arg1->unk4 = (s32) GTE_IR2;
    arg1->unk8 = (s32) GTE_IR3;
}
