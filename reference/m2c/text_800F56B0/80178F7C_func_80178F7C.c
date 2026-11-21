/* m2c reference for func_80178F7C @ 80178F7C (58 words). Generated; not compiled or validated. */
extern ? D_801C2E14;
extern ? D_801C2E34;
extern ? D_801F5100;

void func_80178F7C(s32 arg0) {
    s32 temp_s0;
    u32 temp_s2;
    void *temp_s1;

    temp_s1 = (arg0 * 0x60) + &D_801C2E34;
    temp_s0 = temp_s1->unk10;
    temp_s2 = temp_s1->unk14;
    SetGeomScreen(temp_s1->unk8);
    SetGeomOffset(temp_s0 / 2, (s32) (temp_s2 + (temp_s2 >> 0x1F)) >> 1);
    D_801C2E14.unk0 = (u16) temp_s1->unk28;
    D_801C2E14.unkA = (s16) -(s16) temp_s1->unk2C;
    D_801C2E14.unkE = (u16) temp_s1->unk2A;
    D_801F5100.unk0 = (s32) D_801C2E14.unk0;
    D_801F5100.unk4 = (s32) D_801C2E14.unk4;
    D_801F5100.unk8 = (s32) D_801C2E14.unk8;
    D_801F5100.unkC = (s32) D_801C2E14.unkC;
    D_801F5100.unk10 = (s32) D_801C2E14.unk10;
    D_801F5100.unk14 = (s32) D_801C2E14.unk14;
    D_801F5100.unk18 = (s32) D_801C2E14.unk18;
    D_801F5100.unk1C = (s32) D_801C2E14.unk1C;
}
