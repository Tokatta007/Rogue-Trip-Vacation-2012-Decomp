/* m2c reference for func_80130C14 @ 80130C14 (26 words). Generated; not compiled or validated. */
? func_8013BDCC(s32, ?, ?);                         /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_80130C14(void *arg0) {
    void *temp_a0;

    D_801C31CC.unk8 = 0x1E;
    D_801C31CC.unkC = 0x1E;
    temp_a0 = arg0 + 0x1E4;
    D_801C3100.unk0 = (s32) arg0->unk1E4;
    D_801C3100.unk4 = (s32) temp_a0->unk4;
    D_801C31CC.unk0 = &D_801C3100;
    D_801C3100.unk8 = (s32) temp_a0->unk8;
    func_8013BDCC(D_801C34F4, 0, 0);
}
