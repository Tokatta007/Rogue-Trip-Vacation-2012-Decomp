/* m2c reference for func_80179064 @ 80179064 (133 words). Generated; not compiled or validated. */
? func_8015A05C(s32, s32);                          /* extern */
? func_80164CA8(s32, void *);                       /* extern */
? func_80179868(s32, s32, ?);                       /* extern */
extern ? D_801C2E34;
extern ? D_801C38F8;
extern ? D_801C38FC;
extern ? D_801C3908;
extern ? D_801C3910;
extern ? D_801F5090;
extern MATRIX D_801F5100;
static s32 D_801C3698 = 0;

void func_80179064(s32 arg0) {
    s32 *temp_s4;
    s32 temp_s3;
    s32 temp_s5;
    u32 temp_a1;
    void *temp_s0;
    void *temp_s2;
    void *temp_v0;

    temp_s5 = arg0 * 4;
    temp_s4 = temp_s5 + &D_801C3908;
    if (*temp_s4 == 4) {
        func_80179868(D_801C38FC.unk0 + 0x14, D_801C38FC.unk-4 + 0x14, 3);
        func_80179868(D_801C38FC.unk0 + 0x1C, D_801C38FC.unk-4 + 0x1C, 3);
        D_801C38FC.unk0->unk18 = (u16) (D_801C38FC.unk0->unk18 + 0x800);
        D_801C38FC.unk0->unk14 = (u16) (D_801C38FC.unk0->unk14 - 0x38);
    }
    temp_s2 = *(temp_s5 + &D_801C38F8);
    temp_s0 = (arg0 * 0x34) + &D_801F5090;
    D_801C3698 = arg0;
    temp_s3 = temp_s2 + 0x28;
    func_8015A05C(temp_s2 + 0x14, temp_s3);
    D_801F5100.m[0][0] = (s16) ((*temp_s4 * 0x60) + &D_801C2E34)->unk28;
    D_801F5100.m[1][2] = -(s16) ((*temp_s4 * 0x60) + &D_801C2E34)->unk2C;
    D_801F5100.m[2][1] = (s16) ((*temp_s4 * 0x60) + &D_801C2E34)->unk2A;
    SetRotMatrix(&D_801F5100);
    func_80164CA8(temp_s3, temp_s0 + 0x14);
    temp_s0->unk8 = (s32) -temp_s2->unk1C;
    temp_s0->unkC = (s32) -temp_s2->unk20;
    temp_s0->unk10 = (s32) -temp_s2->unk24;
    SetGeomScreen(*(temp_s5 + &D_801C3910));
    temp_v0 = (*temp_s4 * 0x60) + &D_801C2E34;
    temp_a1 = temp_v0->unk1C;
    SetGeomOffset((s32) temp_v0->unk18 / 2, (s32) (temp_a1 + (temp_a1 >> 0x1F)) >> 1);
}
