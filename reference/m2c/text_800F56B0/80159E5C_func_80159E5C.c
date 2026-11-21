/* m2c reference for func_80159E5C @ 80159E5C (15 words). Generated; not compiled or validated. */
void func_80159E5C(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 *arg6) {
    GTE_RGB0 = *arg0;
    GTE_RGB1 = *arg1;
    GTE_RGB2 = *arg2;
    GTE_RGBC = *arg2;
    GTE_IR0 = arg3;
    gte_dpct();
    *arg4 = GTE_RGB0;
    *arg5 = GTE_RGB1;
    *arg6 = GTE_RGB2;
}
