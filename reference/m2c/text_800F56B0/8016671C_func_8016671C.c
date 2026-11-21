/* m2c reference for func_8016671C @ 8016671C (30 words). Generated; not compiled or validated. */
s32 func_8016671C(void *arg0, void *arg1, void *arg2, void *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg8, s32 *arg9) {
    s32 temp_v1;

    GTE_VXY0 = arg0->unk0;
    GTE_VZ0 = arg0->unk4;
    GTE_VXY1 = arg1->unk0;
    GTE_VZ1 = arg1->unk4;
    GTE_VXY2 = arg2->unk0;
    GTE_VZ2 = arg2->unk4;
    gte_rtpt();
    *arg4 = GTE_SXY0;
    *arg5 = GTE_SXY1;
    *arg6 = GTE_SXY2;
    temp_v1 = GTE_FLAG;
    GTE_VXY0 = arg3->unk0;
    GTE_VZ0 = arg3->unk4;
    gte_rtps();
    *arg7 = GTE_SXY2;
    *arg8 = GTE_IR0;
    *arg9 = GTE_FLAG | temp_v1;
    return (s32) GTE_SZ3 >> 2;
}
