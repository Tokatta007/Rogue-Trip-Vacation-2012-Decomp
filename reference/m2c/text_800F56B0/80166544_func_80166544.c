/* m2c reference for func_80166544 @ 80166544 (9 words). Generated; not compiled or validated. */
void func_80166544(void *arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    GTE_VXY0 = arg0->unk0;
    GTE_VZ0 = arg0->unk4;
    GTE_RGBC = *arg1;
    GTE_IR0 = arg2;
    gte_ncds();
    *arg3 = GTE_RGB2;
}
