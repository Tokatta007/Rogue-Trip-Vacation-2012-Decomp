/* m2c reference for func_8016668C @ 8016668C (11 words). Generated; not compiled or validated. */
s32 func_8016668C(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    GTE_VXY0 = arg0->unk0;
    GTE_VZ0 = arg0->unk4;
    gte_rtps();
    *arg1 = GTE_SXY2;
    *arg2 = GTE_IR0;
    *arg3 = GTE_FLAG;
    return (s32) GTE_SZ3 >> 2;
}
