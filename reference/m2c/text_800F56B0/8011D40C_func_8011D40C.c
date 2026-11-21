/* m2c reference for func_8011D40C @ 8011D40C (101 words). Generated; not compiled or validated. */
? func_8016B504(? *, s32, ? *);                     /* extern */
? func_8016B574(? *, s32, s32 *);                   /* extern */
extern ? D_80183200;
extern ? D_801832F0;
extern ? D_801C3790;
extern s32 D_801C3794;
extern ? D_801CA910;

void *func_8011D40C(void *arg0, s16 arg1, s32 arg2, s8 arg3) {
    s32 temp_s0;
    void *temp_a0;

    temp_s0 = D_801C3794;
    if (temp_s0 != -1) {
        func_8016B574(&D_801832F0, temp_s0, &D_801C3794);
        func_8016B504(&D_80183200, temp_s0, &D_801C3790);
        temp_a0 = (temp_s0 << 6) + &D_801CA910;
        temp_a0->unk3D = (s8) temp_s0;
        temp_a0->unk18 = arg2;
        if (temp_a0->unk18 == 0) {
            temp_a0->unk0 = (s32) arg0->unk0;
            temp_a0->unk4 = (s32) arg0->unk4;
            temp_a0->unk8 = (s32) arg0->unk8;
            temp_a0->unk1C = NULL;
        } else {
            temp_a0->unk8 = 0;
            temp_a0->unk4 = (s32) temp_a0->unk8;
            temp_a0->unk0 = (s32) temp_a0->unk4;
            temp_a0->unk1C = arg0;
        }
        temp_a0->unk2D = 0U;
        temp_a0->unk2C = (u8) temp_a0->unk2D;
        temp_a0->unk2E = 0x18;
        temp_a0->unk3E = 0;
        temp_a0->unk24 = 0U;
        temp_a0->unk22 = (u16) temp_a0->unk24;
        temp_a0->unk20 = (u16) temp_a0->unk22;
        temp_a0->unk30 = arg1;
        temp_a0->unk39 = 5;
        temp_a0->unk3A = arg3;
        temp_a0->unk3C = 0;
        temp_a0->unk32 = 0;
        temp_a0->unk33 = 0;
        temp_a0->unk34 = 0x14;
        temp_a0->unk35 = 7;
        temp_a0->unk36 = -1;
        temp_a0->unk37 = 4;
        temp_a0->unk38 = 0;
        temp_a0->unk2A = 0x7D00;
        temp_a0->unk3F = -0x80;
        return temp_a0;
    }
    return NULL;
}
