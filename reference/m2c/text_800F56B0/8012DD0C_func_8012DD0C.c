/* m2c reference for func_8012DD0C @ 8012DD0C (62 words). Generated; not compiled or validated. */
? func_80020464(s32, s32, u32);                     /* extern */
? func_801588EC(? *);                               /* extern */
? func_8015C2B4(? *, s32);                          /* extern */
extern u8 D_801C37CC;
extern ? D_801CB984;
extern s32 D_801E473C;

void func_8012DD0C(void) {
    u16 temp_a1;
    u16 temp_v1;
    u32 temp_a2;
    u32 temp_lo;
    u32 temp_v0_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_3;

    if (D_801C37CC != 0) {
        if (D_801E473C != 0) {
            func_801588EC(&D_801CB984);
            D_801E473C = 0;
        }
    }
    temp_s0 = &D_801CB984 - 0x24;
    func_8015C2B4(&D_801CB984, temp_s0->unkC);
    temp_a1 = temp_s0->unk28;
    temp_a2 = temp_s0->unk20;
    temp_v1 = temp_s0->unk24 + temp_a1;
    temp_s0->unk24 = temp_v1;
    temp_v0 = (temp_a2 * 8) + temp_s0;
    if ((s16) temp_v1 < (temp_v0->unk10 + temp_v0->unk14)) {
        temp_lo = (s16) temp_a1 * temp_s0->unk2A;
        func_80020464(temp_s0->unkC, (s32) (temp_lo + (temp_lo >> 0x1F)) >> 1, temp_a2);
        return;
    }
    temp_s0->unk2C = 1;
    temp_v0_2 = temp_a2 < 1U;
    temp_s0->unk20 = temp_v0_2;
    temp_v0_3 = (temp_v0_2 * 8) + temp_s0;
    temp_s0->unk24 = (u16) temp_v0_3->unk10;
    temp_s0->unk26 = (u16) temp_v0_3->unk12;
}
