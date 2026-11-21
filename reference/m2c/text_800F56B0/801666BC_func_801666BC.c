/* m2c reference for func_801666BC @ 801666BC (21 words). Generated; not compiled or validated. */
s32 func_801666BC(void *arg0, void *arg1, void *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    GTE_VXY0 = arg0->unk0;
    GTE_VZ0 = arg0->unk4;
    GTE_VXY1 = arg1->unk0;
    GTE_VZ1 = arg1->unk4;
    GTE_VXY2 = arg2->unk0;
    GTE_VZ2 = arg2->unk4;
    gte_rtpt();
    *arg3 = GTE_SXY0;
    *arg4 = GTE_SXY1;
    *arg5 = GTE_SXY2;
    *arg6 = GTE_IR0;
    *arg7 = GTE_FLAG;
    return (s32) GTE_SZ3 >> 2;
}
