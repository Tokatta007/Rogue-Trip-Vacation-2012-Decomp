/* m2c reference for func_801507E0 @ 801507E0 (246 words). Generated; not compiled or validated. */
? func_8011BC6C(? *, ?, ?, ?, s32, s32);            /* extern */
? func_80124CF4(? *, void *, ?, ?, s32);            /* extern */
? func_80124FC8(void *, VECTOR *, void *);          /* extern */
? func_801253C8(s32, void *);                       /* extern */
? func_801254DC(VECTOR *, ?, ?, ?);                 /* extern */
? func_8012CDF4(void *, ?);                         /* extern */
? func_8013BDCC(void *, ?, ?, s32);                 /* extern */
? func_8013C824(void *, ?, void *, ?);              /* extern */
? func_8014EAA8(void *, void *);                    /* extern */
? func_80150BB8(void *, s32, ? *, ? *);             /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34F4 = NULL;

void func_801507E0(void *arg0, s32 arg1) {
    VECTOR sp18;
    VECTOR sp28;
    ? sp38;
    ? sp48;
    ? sp68;
    s32 sp70;
    MATRIX *temp_s0_4;
    s32 temp_a3;
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s3;
    void *temp_s4;
    void *temp_s5;
    void *temp_s6;
    void *temp_v0;
    void *temp_v1;

    temp_s3 = arg0 + (arg1 * 4);
    temp_v1 = temp_s3->unk17C0;
    temp_s5 = temp_s3->unk17B8;
    temp_v0 = arg0 + arg1;
    if (temp_v1->unk8C != 0) {
        temp_s5->unkC = 0;
        temp_v0->unk17D0 = 0;
        temp_v0->unk17D2 = 0;
        temp_v0->unk17D4 = 0;
        return;
    }
    if (temp_v1->unk87 == 0) {
        temp_v0_2 = temp_s3->unk17C8;
        temp_s3->unk17C8 = (s32) (temp_v0_2 + 1);
        temp_s6 = arg0 + arg1;
        if (temp_v0_2 >= 0xC9) {
            temp_s0 = arg0 + arg1;
            temp_s0->unk17D0 = 0;
            temp_s5->unkC = 0;
            if (temp_s0->unk17D6 == 0) {
                func_8012CDF4(temp_s3->unk17C0 + 0x264, 0);
                temp_s0->unk17D6 = 1U;
            }
        } else if (temp_s6->unk17D2 != 0) {
            temp_s5->unkC = 0;
            if (rand() & 1) {
                temp_s0_2 = temp_s5 + 0x1C;
                func_80124CF4(&sp38, temp_s0_2, 0x1FF, 0x1FF, 0);
                D_801C31CC.unk8 = 0x39;
                D_801C34F4->unk2A0 = (s32) (D_801C34F4->unk2A0 + 1);
                if ((D_801C34F4 + 0x2A0)->unk4 < D_801C34F4->unk2A0) {
                    D_801C34F4->unk2A0 = 1;
                }
                D_801C31CC.unkC = (s32) D_801C34F4->unk2A0;
                D_801C3100.unk0 = (s32) temp_s5->unk1C;
                D_801C3100.unk4 = (s32) temp_s0_2->unk4;
                temp_a3 = temp_s0_2->unk8;
                D_801C31CC.unk0 = &D_801C3100;
                D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
                D_801C3100.unk8 = temp_a3;
                func_8013BDCC(D_801C34F4, 0, 0, temp_a3);
                func_8011BC6C(&sp38, 0, 0x14, 0xE, 0, 0);
                func_8011BC6C(&sp38, 0, 0x14, 0x28, 0, 0);
                func_8011BC6C(&sp38, 0, 0x32, 0x1A, 0, 0);
            }
            temp_s1 = arg0 + (arg1 * 4);
            temp_s0_3 = arg0 + arg1;
            if (temp_s1->unk17C8 >= 0x15) {
                temp_s0_3->unk17D0 = 0;
                temp_s0_3->unk17D2 = 0;
                temp_s0_3->unk17D4 = 0;
                if (temp_s0_3->unk17D6 == 0) {
                    func_8012CDF4(temp_s1->unk17C0 + 0x264, 0);
                    temp_s0_3->unk17D6 = 1U;
                }
                temp_s1->unk17C0->unk297 = 0;
            }
        } else {
            temp_s0_4 = temp_s5 + 0x28;
            memcpy(&sp48, temp_s0_4, 0x20);
            temp_s4 = temp_s5 + 0x1C;
            memcpy(&sp68, temp_s4, 0xC);
            sp70 += 0x28;
            func_801254DC(&sp18, 0, 0x5D, 0);
            mathMulTransVec(temp_s0_4, &sp18, &sp28);
            func_80124FC8(temp_s4, &sp28, temp_s4);
            func_80150BB8(arg0, arg1, &sp48, &sp68);
            func_8013C824(D_801C34F4, 0xD, temp_s4, 0);
            temp_a0 = temp_s3->unk17C0;
            var_v1 = 0;
            if (temp_a0->unkB8 != 0) {
                var_v1 = temp_s6->unk17D4 != 0;
            }
            if (var_v1 != 0) {
                temp_s6->unk17D4 = 0U;
                temp_s6->unk17D2 = 1U;
                temp_s3->unk17C8 = 0;
                func_801253C8(arg0->unk1064 + 0x1C, temp_s4);
                arg0->unk106C = (void *) temp_s3->unk17C0;
                arg0->unk1070 = 0xD;
                arg0->unk1098 = 0x14;
                arg0->unk109A = 0x258;
                arg0->unk10AA = 0;
                temp_s5->unk24 = (s32) (temp_s5->unk24 - 0x38);
                func_8014EAA8(arg0, arg0 + 0x1050);
                return;
            }
            if (temp_a0->unkB8 == 0) {
                temp_s6->unk17D4 = 1U;
            }
        }
    }
}
