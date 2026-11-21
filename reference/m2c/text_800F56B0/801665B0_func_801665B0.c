/* m2c reference for func_801665B0 @ 801665B0 (8 words). Generated; not compiled or validated. */
void func_801665B0(void *arg0, s32 *arg1, s32 *arg2) {
    GTE_VXY0 = arg0->unk0;
    GTE_VZ0 = arg0->unk4;
    GTE_RGBC = *arg1;
    gte_nccs();
    *arg2 = GTE_RGB2;
}
