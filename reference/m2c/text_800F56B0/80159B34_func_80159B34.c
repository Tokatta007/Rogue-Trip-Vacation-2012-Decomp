/* m2c reference for func_80159B34 @ 80159B34 (34 words). Generated; not compiled or validated. */
s32 func_80159B34(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 temp_t0;
    s32 temp_t0_2;

    temp_t0 = arg0->unk0;
    GTE_IR0 = arg2;
    GTE_IR1 = temp_t0 & 0xFFFF;
    GTE_IR2 = temp_t0 >> 0x10;
    GTE_IR3 = arg0->unk4 & 0xFFFF;
    gte_gpf0();
    temp_t0_2 = arg1->unk0;
    GTE_IR0 = arg3;
    GTE_IR1 = temp_t0_2 & 0xFFFF;
    GTE_IR2 = temp_t0_2 >> 0x10;
    GTE_IR3 = arg1->unk4 & 0xFFFF;
    gte_gpl0();
    arg4->unk0 = (s32) ((GTE_IR1 & 0xFFFF) | (GTE_IR2 << 0x10));
    arg4->unk4 = (s32) GTE_IR3;
    return GTE_LZCR;
}
