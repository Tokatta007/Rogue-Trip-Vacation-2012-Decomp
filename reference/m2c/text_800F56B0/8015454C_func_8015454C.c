/* m2c reference for func_8015454C @ 8015454C (64 words). Generated; not compiled or validated. */
s32 func_80125094(void *, void *);                  /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
s32 func_80176CBC(s32, s32, ?);                     /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_8015454C(void *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    arg0->unk1768->unk1C = func_80176CBC(arg0->unk1768->unk1C, arg0->unk1764->unk0, 3);
    arg0->unk1768->unk20 = func_80176CBC(arg0->unk1768->unk20, arg0->unk1764->unk4, 3);
    arg0->unk1768->unk24 = func_80176CBC(arg0->unk1768->unk24, arg0->unk1764->unk8, 3);
    if (func_80125094(arg0->unk1768 + 0x1C, arg0->unk1764) < 0xC8) {
        arg0->unk176C = 0;
        arg0->unk1768->unkC = 0;
        D_801C31CC.unk8 = 0x1E;
        temp_v1 = arg0->unk1768;
        temp_v1_2 = temp_v1 + 0x1C;
        D_801C3100.unk0 = (s32) temp_v1->unk1C;
        D_801C3100.unk4 = (s32) temp_v1_2->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) temp_v1_2->unk8;
        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
    }
}
