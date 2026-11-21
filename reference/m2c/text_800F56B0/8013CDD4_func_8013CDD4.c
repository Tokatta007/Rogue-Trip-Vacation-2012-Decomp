/* m2c reference for func_8013CDD4 @ 8013CDD4 (51 words). Generated; not compiled or validated. */
? func_8013BDCC(void *, ?, ?, ? *);                 /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;

void func_8013CDD4(void *arg0, void *arg1) {
    if (arg0->unk264 <= 0) {
        D_801C31CC.unk8 = 0x2A;
        arg0->unk298 = (s32) (arg0->unk298 + 1);
        if ((arg0 + 0x298)->unk4 < arg0->unk298) {
            arg0->unk298 = 1;
        }
        D_801C31CC.unkC = (s32) arg0->unk298;
        D_801C3100.unk0 = (s32) arg1->unk0;
        D_801C3100.unk4 = (s32) arg1->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 0xC);
        D_801C3100.unk8 = (s32) arg1->unk8;
        func_8013BDCC(arg0, 0, 0, &D_801C31CC);
        arg0->unk264 = (s32) ((rand() & 0xF) + 6);
    }
}
