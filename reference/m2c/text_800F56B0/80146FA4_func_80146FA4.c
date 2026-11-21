/* m2c reference for func_80146FA4 @ 80146FA4 (233 words). Generated; not compiled or validated. */
? func_8013BDCC(s32, ?, ?, ? **);                   /* extern */
? func_8013BEA8(s32, ? **);                         /* extern */
? func_80147348(void *, ? **);                      /* extern */
extern ? D_801C3100;
extern ? *D_801C31CC;
static s32 D_801C34F4 = 0;

void func_80146FA4(void *arg0) {
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    void *temp_a0;
    void *temp_a2;

    D_801C31CC.unk8 = (s32) arg0->unk7D8;
    D_801C31CC.unkC = (s32) arg0->unk7C4;
    if (arg0->unk10C > 0) {
        temp_a0 = arg0 + 0x1E4;
        D_801C3100.unk0 = (s32) arg0->unk1E4;
        D_801C3100.unk4 = (s32) temp_a0->unk4;
        var_a0 = 0;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) temp_a0->unk8;
        if ((arg0->unk7D8 == 0x22) || (arg0->unk7D8 == 0x28)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            D_801C31CC.unk10 = -1;
            D_801C31CC.unk14 = (s32) ((s32) (arg0->unk7A4 * 0x7F) / (s32) arg0->unk25C);
        } else {
            func_80147348(arg0, &D_801C31CC);
            D_801C31CC.unk30 = 1;
            D_801C31CC.unk14 = (s32) ((s32) arg0->unk7F8 >> 7);
            D_801C31CC.unk10 = (s32) (arg0->unk7F8 & 0x7F);
        }
        func_8013BDCC(D_801C34F4, 0, 0);
        if (((s32) arg0->unk7C0 >> 4) == 9) {
            D_801C31CC.unk8 = 0x22;
            D_801C31CC.unk30 = 1;
            D_801C31CC.unk14 = 0x4B;
            D_801C31CC.unk18 = 0xC;
            D_801C31CC.unk10 = 0;
            D_801C31CC.unkC = (s32) arg0->unk7C4;
            goto block_11;
        }
        if (((s32) arg0->unk7C0 >> 4) == 0xE) {
            D_801C31CC.unk8 = 0x49;
            D_801C31CC.unkC = (s32) arg0->unk7C4;
            D_801C31CC.unk10 = -1;
            D_801C31CC.unk14 = (s32) ((s32) (arg0->unk7A4 * 0x7F) / (s32) arg0->unk25C);
            D_801C31CC.unk18 = (s32) ((s32) (arg0->unk7A4 * 0x7F) / (s32) arg0->unk25C);
block_11:
            temp_a2 = arg0 + 0x1E4;
            D_801C3100.unk0 = (s32) arg0->unk1E4;
            D_801C3100.unk4 = (s32) temp_a2->unk4;
            D_801C31CC.unk0 = &D_801C3100;
            D_801C3100.unk8 = (s32) temp_a2->unk8;
            func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
        }
        D_801C31CC.unk30 = 0;
        if (arg0->unk820 != 0) {
            var_v1 = 0;
            if (arg0->unk7D != 0) {
                var_v1 = (D_801C34F4 + (arg0->unk7CC * 4))->unk280 == 0;
            }
            if (var_v1 != 0) {
                D_801C31CC.unk8 = 5;
                D_801C31CC.unkC = (s32) arg0->unk7C4;
                func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
            }
        }
    } else {
        func_8013BEA8(D_801C34F4, &D_801C31CC);
        D_801C31CC.unk8 = 5;
        D_801C31CC.unkC = (s32) arg0->unk7C4;
        func_8013BEA8(D_801C34F4);
        var_v0 = 0x22;
        if ((((s32) arg0->unk7C0 >> 4) == 9) || (var_v0 = 0x49, (((s32) arg0->unk7C0 >> 4) == 0xE))) {
            D_801C31CC.unk8 = var_v0;
            D_801C31CC.unkC = (s32) arg0->unk7C4;
            func_8013BEA8(D_801C34F4);
        }
    }
    if (arg0->unk820 != 0) {
        (D_801C34F4 + (arg0->unk7CC * 4))->unk280 = (s32) (arg0->unk7D & 0xFF);
    }
}
