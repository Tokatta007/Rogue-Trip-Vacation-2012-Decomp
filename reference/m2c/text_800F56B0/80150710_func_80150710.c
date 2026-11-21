/* m2c reference for func_80150710 @ 80150710 (52 words). Generated; not compiled or validated. */
? func_801253C8(void *, s32);                       /* extern */
? func_80125464(void *, s32);                       /* extern */
? func_8015A05C(void *, void *, u16);               /* extern */

void func_80150710(s32 arg0, void *arg1, s32 arg2) {
    u16 temp_a2;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;

    temp_v0 = arg0 + (arg2 * 4);
    temp_a0 = arg0 + arg2;
    temp_s0 = temp_v0->unk17B8;
    temp_a0->unk17D0 = 1;
    temp_v0->unk17C8 = 0;
    temp_a0->unk17D4 = 0;
    temp_a0->unk17D6 = 0;
    temp_s0->unkC = 1;
    temp_v0->unk17C0 = arg1;
    func_801253C8(temp_s0 + 0x1C, arg1->unk738 + 0x1C);
    temp_s1 = temp_s0 + 0x14;
    func_80125464(temp_s1, arg1->unk738 + 0x14);
    if (arg1->unkBA != 0) {
        temp_s0->unk14 = 0U;
        temp_s0->unk18 = (u16) (temp_s0->unk18 + 0x800);
    }
    temp_a2 = arg1->unk704;
    temp_s0->unk14 = (u16) (temp_s0->unk14 - (arg1->unk6F0 + temp_a2));
    temp_s0->unk16 = 0;
    func_8015A05C(temp_s1, temp_s0 + 0x28, temp_a2);
}
