/* m2c reference for func_8016663C @ 8016663C (9 words). Generated; not compiled or validated. */
void func_8016663C(void *arg0, s32 *arg1, s32 *arg2) {
    GTE_IR1 = arg0->unk0;
    GTE_IR2 = arg0->unk4;
    GTE_IR3 = arg0->unk8;
    GTE_RGBC = *arg1;
    gte_cc();
    *arg2 = GTE_RGB2;
}
