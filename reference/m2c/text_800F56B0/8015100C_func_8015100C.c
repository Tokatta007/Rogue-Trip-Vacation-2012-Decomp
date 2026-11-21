/* m2c reference for func_8015100C @ 8015100C (72 words). Generated; not compiled or validated. */
? func_801253C8(void *, void *, s32);               /* extern */
? func_80125464(void *, void *);                    /* extern */
? func_8013BDCC(s32, ?, ?);                         /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_8016D6BC(s32, ?);                            /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_8015100C(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_s0 = arg0 + (arg2 * 4);
    temp_v0 = arg0 + arg2;
    temp_a2 = arg2 * 2;
    temp_s2 = temp_s0->unk17E8;
    temp_v0->unk17F8 = 1;
    (arg0 + temp_a2)->unk17F0 = 0;
    temp_v0->unk17F6 = 1;
    temp_v0->unk17F4 = 0;
    temp_s0->unk17E0 = arg1;
    temp_s0->unk17E0->unkC = 0;
    temp_s2->unkC = 1;
    temp_s2->unkD = 1;
    temp_s2->unk0->unk2 = (s8) (temp_s0->unk17E0->unk0->unk2 & 0xFF);
    func_801253C8(temp_s2 + 0x1C, temp_s0->unk17E0 + 0x1C, temp_a2);
    temp_s1 = temp_s2 + 0x14;
    func_80125464(temp_s1, temp_s0->unk17E0 + 0x14);
    func_8015A05C(temp_s1, temp_s2 + 0x28);
    func_8016D6BC(temp_s0->unk16D8, 1);
    D_801C31CC.unk8 = 0x3C;
    D_801C31CC.unkC = 0x3C;
    temp_v1 = temp_s0->unk17E0;
    temp_v1_2 = temp_v1 + 0x1C;
    D_801C3100.unk0 = (s32) temp_v1->unk1C;
    D_801C3100.unk4 = (s32) temp_v1_2->unk4;
    D_801C31CC.unk0 = &D_801C3100;
    D_801C3100.unk8 = (s32) temp_v1_2->unk8;
    func_8013BDCC(D_801C34F4, 0, 0);
}
