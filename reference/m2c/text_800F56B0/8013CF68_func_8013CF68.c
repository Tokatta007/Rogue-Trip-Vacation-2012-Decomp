/* m2c reference for func_8013CF68 @ 8013CF68 (74 words). Generated; not compiled or validated. */
? func_8013BDCC(s32, ?, ?);                         /* extern */
? func_8013BEA8(s32, ? *);                          /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_8013CF68(void *arg0) {
    void *temp_a0;

    if (arg0->unk14 != 0) {
        D_801C31CC.unk8 = (s32) arg0->unk0;
        temp_a0 = arg0 + 4;
        D_801C31CC.unkC = (s32) arg0->unk0;
        D_801C3100.unk0 = (s32) arg0->unk4;
        D_801C3100.unk4 = (s32) temp_a0->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) temp_a0->unk8;
        if (arg0->unk18 & 1) {
            D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 1);
        }
        if (arg0->unk18 & 2) {
            D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 2);
        }
        if (arg0->unk18 & 8) {
            D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
        }
        func_8013BDCC(D_801C34F4, 0, 0);
    } else {
        D_801C31CC.unk8 = (s32) arg0->unk0;
        D_801C31CC.unkC = (s32) arg0->unk0;
        func_8013BEA8(D_801C34F4, &D_801C31CC);
    }
    arg0->unk10 = -1;
    arg0->unk14 = 0;
    arg0->unk18 = 0U;
}
