/* m2c reference for func_80159BBC @ 80159BBC (24 words). Generated; not compiled or validated. */
s32 func_80159BBC(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    GTE_IR0 = arg2;
    GTE_IR1 = arg0->unk0;
    GTE_IR2 = arg0->unk1;
    gte_gpf0();
    GTE_IR0 = arg3;
    GTE_IR1 = arg1->unk0;
    GTE_IR2 = arg1->unk1;
    gte_gpl0();
    arg4->unk0 = (s8) ((s32) GTE_MAC1 >> 0xC);
    arg4->unk1 = (s8) ((s32) GTE_MAC2 >> 0xC);
    return GTE_LZCR;
}
