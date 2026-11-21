/* m2c reference for func_80102F48 @ 80102F48 (224 words). Generated; not compiled or validated. */
? func_80124FC8(void *, VECTOR *, VECTOR *);        /* extern */
? func_80125050(VECTOR *, VECTOR *, s32 *);         /* extern */
s32 func_80125094(VECTOR *, s32 *);                 /* extern */
? func_80125130(s32 *, ? *);                        /* extern */
? func_801253F4(s32, ? *, s32);                     /* extern */
? func_80125464(void *, s32);                       /* extern */
? func_8015A05C(void *, void *);                    /* extern */
u16 func_80176C1C(s16, s16, s32);                   /* extern */
s32 func_80176CBC(s32, s32, s32);                   /* extern */
static void *D_801C34EC = NULL;

void func_80102F48(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    ? sp30;
    VECTOR *temp_fp;
    VECTOR *temp_s0;
    s32 temp_s0_3;
    s32 temp_s6;
    s32 var_s2;
    s32 var_s2_2;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s3;
    void *temp_s4;
    void *var_s0;

    temp_s1 = arg0 + (arg1 * 4);
    temp_s4 = temp_s1->unk390;
    temp_s3 = temp_s1->unk3A0;
    sp10 = 0;
    sp14 = 0x50;
    sp18 = 0;
    mathMulTransVec(temp_s3->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
    func_80124FC8(temp_s3->unk738 + 0x1C, &sp20, &sp20);
    temp_fp = temp_s4 + 0x1C;
    func_80125050(temp_fp, &sp20, &sp10);
    func_80125130(&sp10, &sp30);
    sp10 = (s32) (((s32) temp_s3->unk21C >> 3) * temp_s1->unk3BC) / (s32) temp_s3->unkE0;
    temp_s0 = arg0 + ((arg1 * 0xC) + 0x338);
    sp14 = temp_s1->unk3AC;
    sp18 = temp_s1->unk3B4;
    temp_s6 = func_80125094(temp_s0, &sp10);
    if ((arg0 + arg1)->unk3F2 != 0) {
        if (temp_s6 >= 0x191) {
            var_s2 = 1;
        } else {
            var_s2 = 6 - (temp_s6 / 80);
        }
        if (D_801C34EC->unk7D8 == 0) {
            func_801253F4(arg0 + ((arg1 * 8) + 0x380), &sp30, var_s2);
            var_s2_2 = var_s2 + 2;
        } else {
            temp_s0_2 = arg0 + (arg1 * 8);
            temp_s0_2->unk380 = func_80176C1C((s16) temp_s0_2->unk380, (s16) temp_s3->unk738->unk14, var_s2);
            temp_s0_2->unk384 = func_80176C1C((s16) temp_s0_2->unk384, (s16) temp_s3->unk738->unk18, var_s2);
            temp_s0_2->unk382 = func_80176C1C((s16) temp_s0_2->unk382, 0, var_s2);
            var_s2_2 = var_s2 + 2;
        }
        temp_s0_3 = arg1 * 0xC;
        temp_s1_2 = arg0 + temp_s0_3;
        temp_s1_2->unk338 = func_80176CBC(temp_s1_2->unk338, sp10, var_s2_2);
        temp_s1_2->unk33C = func_80176CBC(temp_s1_2->unk33C, sp14, var_s2_2);
        temp_s1_2->unk340 = func_80176CBC(temp_s1_2->unk340, sp18, var_s2_2);
        mathMulTransVec(temp_s3->unk738 + 0x28, arg0 + (temp_s0_3 + 0x338), &sp20);
        func_80124FC8(temp_s3->unk738 + 0x1C, &sp20, temp_s4 + 0x1C);
        if (temp_s6 < 0x10) {
            (arg0 + arg1)->unk3F2 = 0;
        }
    } else {
        func_801253F4(arg0 + ((arg1 * 8) + 0x380), &sp30);
        func_80125050(temp_s3->unk738 + 0x1C, temp_fp, &sp10);
        mathMulVec(temp_s3->unk738 + 0x28, (VECTOR *) &sp10, temp_s0);
    }
    if (temp_s3->unkA0 != 0) {
        var_s0 = temp_s4 + 0x14;
        if (temp_s4->unk24 < ((arg0 + (arg1 * 0xC))->unk370 + 0x4B0)) {
            temp_s4->unk24 = (s32) (temp_s4->unk24 + 0x18);
            goto block_13;
        }
    } else {
block_13:
        var_s0 = temp_s4 + 0x14;
    }
    func_80125464(var_s0, arg0 + ((arg1 * 8) + 0x380));
    func_8015A05C(var_s0, temp_s4 + 0x28);
}
