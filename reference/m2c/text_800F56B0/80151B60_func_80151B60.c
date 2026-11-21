/* m2c reference for func_80151B60 @ 80151B60 (341 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
? func_80124FC8(void *, VECTOR *, void *);          /* extern */
? func_80125050(void *, s32, ? *);                  /* extern */
s32 func_801250C8(void *, s32);                     /* extern */
? func_80125130(? *, ? *);                          /* extern */
? func_80125490(? *, void *);                       /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013BEA8(s32, void *);                       /* extern */
s32 func_8013C568(s32, void *);                     /* extern */
? func_8013CAE0(s32, ?, void *);                    /* extern */
? func_801520B4(s32, s32, s32, ? *, s32 *);         /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_8016408C(s32 *);                             /* extern */
s32 func_80176CBC(s32, ?, ?);                       /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_80151B60(s32 arg0, s32 arg1) {
    VECTOR sp18;
    ? sp28;
    s32 sp30;
    ? sp38;
    ? sp48;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 temp_a0;
    s32 temp_s0_5;
    s32 temp_t0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s4;
    s32 var_s7;
    u16 temp_v0;
    u16 var_a0;
    u16 var_v0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_6;
    void *temp_s2;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s6;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    var_s7 = -1;
    temp_a0 = arg1 * 2;
    temp_a1 = arg0 + temp_a0;
    temp_v0 = temp_a1->unk1840;
    sp78 = -1;
    temp_a1->unk1840 = (u16) (temp_v0 + 1);
    var_s4 = 0;
    if ((s16) temp_v0 < 0x96) {
        sp80 = temp_a0;
        temp_v0_2 = arg1 * 0xC;
        sp88 = temp_v0_2 + 0x1800;
        temp_t0 = arg1 * 4;
        temp_s6 = arg0 + temp_t0;
        sp84 = temp_v0_2;
        sp7C = temp_t0;
        do {
            temp_s3 = (arg0 + (sp7C + (var_s4 * 8)))->unk1820;
            if (temp_s3->unkC == 1) {
                sp68 = temp_s3->unk1C;
                sp6C = temp_s3->unk20;
                temp_s0 = arg0 + sp84;
                sp70 = temp_s3->unk24;
                temp_s0->unk1804 = func_80176CBC(temp_s0->unk1804, 0x42, 5);
                mathMulTransVec(temp_s3 + 0x28, arg0 + sp88, &sp18);
                temp_s0_2 = temp_s3 + 0x1C;
                func_80124FC8(temp_s0_2, &sp18, temp_s0_2);
                temp_s2 = temp_s3 + 0x14;
                if (temp_s6->unk1838 != 0) {
                    func_80125050(temp_s0_2, temp_s6->unk1838 + 0x1C, &sp28);
                    func_80125130(&sp28, &sp38);
                    sp30 = sp40 - (s16) temp_s2->unk4;
                    func_8016408C(&sp30);
                    temp_s0_3 = arg0 + (sp80 + (var_s4 * 4));
                    temp_s0_3->unk1844 = func_80176CBC((s32) (s16) temp_s0_3->unk1844, 0x64, 5);
                    if ((s16) temp_s0_3->unk1844 < sp30) {
                        var_v0 = temp_s2->unk4 + temp_s0_3->unk1844;
                    } else if (sp30 < -(s16) temp_s0_3->unk1844) {
                        var_v0 = temp_s2->unk4 - temp_s0_3->unk1844;
                    } else {
                        var_v0 = temp_s2->unk4 + (u16) sp30;
                    }
                    temp_s2->unk4 = var_v0;
                }
                if (temp_s6->unk1838 != 0) {
                    if (func_801250C8(temp_s3 + 0x1C, temp_s6->unk1838 + 0x1C) >= 0x321) {
                        if (rand() & 1) {
                            var_a0 = temp_s2->unk4 + (rand() % 250);
                        } else {
                            goto block_16;
                        }
                        goto block_17;
                    }
                } else {
                    if (rand() & 1) {
                        var_a0 = temp_s2->unk4 + (rand() % 250);
                    } else {
block_16:
                        var_a0 = temp_s2->unk4 - (rand() % 250);
                    }
block_17:
                    temp_s2->unk4 = var_a0;
                }
                temp_s0_4 = temp_s3 + 0x28;
                func_80125490(&sp48, temp_s0_4);
                func_8015A05C(temp_s2, temp_s0_4);
                func_801520B4(arg0, var_s4, arg1, &sp48, &sp68);
            }
            temp_v0_3 = func_8013C568(D_801C34F4, temp_s3 + 0x1C);
            if ((temp_v0_3 < var_s7) || (var_s7 == -1)) {
                var_s7 = temp_v0_3;
                sp78 = var_s4;
            }
            var_s4 += 1;
        } while (var_s4 < 3);
        temp_s0_5 = arg1 * 4;
        D_801C31CC.unk8 = 0x40;
        D_801C31CC.unkC = 0x40;
        temp_v1 = (arg0 + (temp_s0_5 + (sp78 * 8)))->unk1820;
        temp_v1_2 = temp_v1 + 0x1C;
        D_801C3100.unk0 = (s32) temp_v1->unk1C;
        D_801C3100.unk4 = (s32) temp_v1_2->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) temp_v1_2->unk8;
        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
        temp_v1_3 = arg0 + temp_s0_5;
        var_a0_2 = 0;
        if ((temp_v1_3->unk1820->unkC == 0) && (temp_v1_3->unk1828->unkC == 0)) {
            var_a0_2 = temp_v1_3->unk1830->unkC == 0;
        }
        if (var_a0_2 != 0) {
            (arg0 + arg1)->unk1850 = 0;
            (arg0 + (arg1 * 2))->unk1840 = 0;
            D_801C31CC.unk8 = 0x40;
            D_801C31CC.unkC = 0x40;
            func_8013BEA8(D_801C34F4);
        }
    } else {
        (arg0 + arg1)->unk1850 = 0;
        temp_a1->unk1840 = 0U;
        D_801C31CC.unk8 = 0x40;
        D_801C31CC.unkC = 0x40;
        func_8013BEA8(D_801C34F4, temp_a1);
        var_s1 = arg1 * 4;
        do {
            temp_s3_2 = (arg0 + var_s1)->unk1820;
            if (temp_s3_2->unkC != 0) {
                temp_s0_6 = temp_s3_2 + 0x1C;
                func_8013CAE0(D_801C34F4, 0xE, temp_s0_6);
                func_8011BC6C(temp_s0_6, 0, 0xF, 5, 0, 0);
                temp_s3_2->unkC = 0U;
            }
            var_s4 += 1;
            var_s1 += 8;
        } while (var_s4 < 3);
    }
}
