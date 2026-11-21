/* m2c reference for func_8014F2CC @ 8014F2CC (36 words). Generated; not compiled or validated. */
? func_8013BDCC(s32, ?, ?);                         /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_8014F2CC(s32 arg0, s32 arg1) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = arg0 + arg1;
    temp_v1->unk17B6 = 1;
    temp_v1->unk17B0 = 0;
    temp_v1->unk17B2 = -1;
    temp_v1->unk17B4 = 0;
    D_801C31CC.unkC = arg1;
    D_801C31CC.unk8 = 0x36;
    temp_v1_2 = (arg0 + (arg1 * 4))->unk17A0;
    temp_v1_3 = temp_v1_2 + 0x1C;
    D_801C3100.unk0 = (s32) temp_v1_2->unk1C;
    D_801C3100.unk4 = (s32) temp_v1_3->unk4;
    D_801C31CC.unk0 = &D_801C3100;
    D_801C3100.unk8 = (s32) temp_v1_3->unk8;
    func_8013BDCC(D_801C34F4, 0, 0);
}
