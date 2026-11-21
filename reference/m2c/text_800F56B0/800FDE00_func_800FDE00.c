/* m2c reference for func_800FDE00 @ 800FDE00 (145 words). Generated; not compiled or validated. */
? func_8010B7C8(void *);                            /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_80142AF8(void *, ?);                         /* extern */
? func_80144150(void *);                            /* extern */
? func_80164F34(void *, void *, s16 *, ?, s32);     /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
extern ? D_801C3758;
extern ? D_801C3918;
static s32 D_801C34F4 = 0;

void func_800FDE00(void *arg0) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_s1_2;
    s8 temp_v1;
    void **temp_s0_2;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;

    temp_s0 = arg0->unk78 * 4;
    temp_s3 = *(temp_s0 + (((s32) arg0->unk7C0 >> 4) * 8) + &D_801C3918);
    if (temp_s3 != NULL) {
        temp_lo = (s32) (arg0->unk10C * 0x64) / (s32) arg0->unk110;
        if (arg0->unk7C0 != 0xE0) {
            if (temp_lo < 0x19) {
                temp_s3->unk4 = 2U;
                return;
            }
            if (temp_lo < 0x3C) {
                temp_s3->unk4 = 1U;
                return;
            }
            goto block_15;
        }
        if (temp_lo < 0x28) {
            if (temp_s3->unk4 == 0) {
                temp_s1 = arg0 + 0x1E4;
                if (&D_801C3758 != NULL) {
                    sp18 = 0;
                    sp1A = 0;
                    sp1C = 0x1000;
                    temp_s0_2 = temp_s0 + &D_801C3758;
                    func_80164F34(*temp_s0_2, temp_s1, &sp18, -0x14, 0x64);
                    (*temp_s0_2)->unk4 = 0;
                    D_801C31CC.unk8 = 0x4A;
                    D_801C31CC.unkC = 0x4A;
                    D_801C3100.unk0 = (s32) arg0->unk1E4;
                    D_801C3100.unk4 = (s32) temp_s1->unk4;
                    D_801C31CC.unk0 = &D_801C3100;
                    D_801C3100.unk8 = (s32) temp_s1->unk8;
                    func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                }
                func_80142AF8(arg0);
                func_8010B7C8(arg0);
                func_80144150(arg0);
                temp_s3->unk4 = 1U;
                arg0->unk720 = -0x38;
                arg0->unk728 = 0;
            }
        } else {
            temp_v1 = temp_s3->unk4 & 0xFF;
            if (temp_v1 == 1) {
                temp_v0 = *(temp_s0 + &D_801C3758);
                if (temp_v0 != NULL) {
                    temp_v0->unk4 = temp_v1;
                }
                temp_s0_3 = arg0->unk10C;
                temp_s1_2 = arg0->unk110;
                arg0->unk10C = 0;
                func_80142AF8(arg0, 0xE0);
                func_8010B7C8(arg0);
                arg0->unk10C = temp_s0_3;
                arg0->unk110 = temp_s1_2;
                func_80144150(arg0);
block_15:
                temp_s3->unk4 = 0U;
            }
        }
    }
}
