/* m2c reference for func_801664D0 @ 801664D0 (7 words). Generated; not compiled or validated. */
void func_801664D0(s32 *arg0, s32 arg1, s32 *arg2) {
    GTE_RGBC = *arg0;
    GTE_IR0 = arg1;
    gte_dpcs();
    *arg2 = GTE_RGB2;
}
