/* m2c reference for func_801694D8 @ 801694D8 (40 words). Generated; not compiled or validated. */
s32 func_801694D8(void *arg0, void *arg1) {
    GTE_RT11RT12 = (arg0->unk0 & 0xFFFF) | (arg0->unk6 << 0x10);
    GTE_RT13RT21 = (arg0->unkC & 0xFFFF) | (arg0->unk2 << 0x10);
    GTE_RT22RT23 = (arg0->unk8 & 0xFFFF) | (arg0->unkE << 0x10);
    GTE_RT31RT32 = (arg0->unk4 & 0xFFFF) | (arg0->unkA << 0x10);
    GTE_RT33 = arg0->unk10;
    GTE_VXY0 = arg1->unk0;
    GTE_VZ0 = arg1->unk4;
    gte_mvmva(1, 0, 0, 3, 0);
    return GTE_MAC1;
}
