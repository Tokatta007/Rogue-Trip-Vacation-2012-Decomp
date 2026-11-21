/* m2c reference for func_8010F6C0 @ 8010F6C0 (57 words). Generated; not compiled or validated. */
void func_8010F6C0(void *arg0, s32 arg1, void *arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_a3;
    s32 temp_v1;
    void *temp_a1;

    temp_a1 = arg0 + ((arg1 << 5) + 0x2C8);
    temp_v1 = temp_a1->unk10 + 2;
    temp_a3 = (s32) (-temp_a1->unk4 * temp_v1) >> 0xD;
    sp0 = temp_a3;
    sp4 = (s32) (-temp_a1->unk8 * temp_v1) >> 0xD;
    sp8 = (s32) (-temp_a1->unkC * temp_v1) >> 0xD;
    arg0->unk1E4 = (s32) (arg0->unk1E4 + temp_a3);
    arg0->unk1E8 = (s32) (arg0->unk1E8 + sp4);
    arg0->unk1EC = (s32) (arg0->unk1EC + sp8);
    arg2->unk1E4 = (s32) (arg2->unk1E4 - sp0);
    arg2->unk1E8 = (s32) (arg2->unk1E8 - sp4);
    arg2->unk1EC = (s32) (arg2->unk1EC - sp8);
}
