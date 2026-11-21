/* m2c reference for func_8013C9C0 @ 8013C9C0 (72 words). Generated; not compiled or validated. */
? func_8013BDCC(void *, ?, ?);                      /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
extern s32 D_801C31E4;

void func_8013C9C0(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    void *temp_a0;

    if (arg0->unk214 <= 0) {
        temp_a0 = (arg1 * 8) + arg0;
        arg0->unk214 = (s32) ((rand() & 3) + 1);
        D_801C31CC.unk8 = arg1;
        temp_a0->unk1D0 = (s32) (temp_a0->unk1D0 + 1);
        if ((temp_a0 + 0x1D0)->unk4 < temp_a0->unk1D0) {
            temp_a0->unk1D0 = 1;
        }
        D_801C31CC.unkC = (s32) temp_a0->unk1D0;
        if (arg2 == NULL) {
            D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 1);
        } else {
            D_801C3100.unk0 = (s32) arg2->unk0;
            D_801C3100.unk4 = (s32) arg2->unk4;
            D_801C31CC.unk0 = &D_801C3100;
            D_801C3100.unk8 = (s32) arg2->unk8;
        }
        if (arg3 != -1) {
            D_801C31E4 = arg3;
        }
        D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
        func_8013BDCC(arg0, 0, 0);
    }
}
