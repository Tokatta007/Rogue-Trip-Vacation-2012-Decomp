/* m2c reference for func_80166568 @ 80166568 (18 words). Generated; not compiled or validated. */
void func_80166568(void *arg0, void *arg1, void *arg2, s32 *arg3, s32 arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    GTE_VXY0 = arg0->unk0;
    GTE_VZ0 = arg0->unk4;
    GTE_VXY1 = arg1->unk0;
    GTE_VZ1 = arg1->unk4;
    GTE_VXY2 = arg2->unk0;
    GTE_VZ2 = arg2->unk4;
    GTE_RGBC = *arg3;
    GTE_IR0 = arg4;
    gte_ncdt();
    *arg5 = GTE_RGB0;
    *arg6 = GTE_RGB1;
    *arg7 = GTE_RGB2;
}
