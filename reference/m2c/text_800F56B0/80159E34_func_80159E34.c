/* m2c reference for func_80159E34 @ 80159E34 (10 words). Generated; not compiled or validated. */
void func_80159E34(void *arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    GTE_IR1 = arg0->unk0;
    GTE_IR2 = arg0->unk4;
    GTE_IR3 = arg0->unk8;
    GTE_RGBC = *arg1;
    GTE_IR0 = arg2;
    gte_dpcl();
    *arg3 = GTE_RGB2;
}
