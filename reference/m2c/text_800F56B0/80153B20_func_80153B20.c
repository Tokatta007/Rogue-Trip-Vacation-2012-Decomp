/* m2c reference for func_80153B20 @ 80153B20 (96 words). Generated; not compiled or validated. */
? func_8010B62C(void *, s32, ?);                    /* extern */
? func_801253C8(void *, void *);                    /* extern */
? func_80125464(void *, ?);                         /* extern */
? func_8013BDCC(void *, ?, ?, s32);                 /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_80164274(void *, s32);                       /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34EC = NULL;
static void *D_801C34F4 = NULL;

void func_80153B20(void *arg0, void *arg1, ? arg2, s32 arg3) {
    s32 temp_a3;
    void *temp_v0;
    void *temp_v0_2;

    func_80164274(arg0->unk173C, (arg0 + (arg3 * 8))->unk1658);
    arg0->unk173C->unkC = 1;
    arg0->unk1740 = (s32) (arg1->unk8 + 0x70);
    arg0->unk1744 = 0x10;
    func_801253C8(arg0->unk173C + 0x1C, arg1);
    func_80125464(arg0->unk173C + 0x14, arg2);
    func_8015A05C(arg0->unk173C + 0x14, arg0->unk173C + 0x28);
    if (D_801C34EC->unk12408->unk820 != 0) {
        func_8010B62C(D_801C34EC + 0x6220, arg3 + 0x1B, 1);
    }
    D_801C31CC.unk8 = 0x21;
    D_801C34F4->unk2A8 = (s32) (D_801C34F4->unk2A8 + 1);
    if ((D_801C34F4 + 0x2A8)->unk4 < D_801C34F4->unk2A8) {
        D_801C34F4->unk2A8 = 1;
    }
    D_801C31CC.unkC = (s32) D_801C34F4->unk2A8;
    temp_v0 = arg0->unk173C;
    temp_v0_2 = temp_v0 + 0x1C;
    D_801C3100.unk0 = (s32) temp_v0->unk1C;
    D_801C3100.unk4 = (s32) temp_v0_2->unk4;
    temp_a3 = temp_v0_2->unk8;
    D_801C31CC.unk0 = &D_801C3100;
    D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
    D_801C3100.unk8 = temp_a3;
    func_8013BDCC(D_801C34F4, 0, 0, temp_a3);
}
