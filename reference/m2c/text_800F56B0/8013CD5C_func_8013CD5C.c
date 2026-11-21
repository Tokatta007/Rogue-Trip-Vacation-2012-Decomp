/* m2c reference for func_8013CD5C @ 8013CD5C (30 words). Generated; not compiled or validated. */
? func_8013BDCC(?, ?);                              /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;

void func_8013CD5C(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    D_801C31CC.unk8 = 0x25;
    D_801C31CC.unkC = 0x25;
    D_801C3100.unk0 = (s32) arg2->unk0;
    D_801C3100.unk4 = (s32) arg2->unk4;
    D_801C31CC.unk0 = &D_801C3100;
    D_801C31CC.unk18 = arg1;
    D_801C3100.unk8 = (s32) arg2->unk8;
    arg0->unk260 = arg1;
    arg0->unk254 = arg3;
    arg0->unk25C = 1;
    arg0->unk258 = 0;
    func_8013BDCC(0, 0);
}
