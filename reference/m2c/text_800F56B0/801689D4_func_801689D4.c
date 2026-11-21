/* m2c reference for func_801689D4 @ 801689D4 (264 words). Generated; not compiled or validated. */
s32 func_80169F08(void *, s32 *, s32, s16 *, s16 *); /* extern */
? func_8016F9A8(s32, s32, s32 *);                   /* extern */
extern s32 D_801C3880;
extern MATRIX *D_801F2E78;
static s32 D_801C3640 = 3;
static void *D_801C3648 = (void *)0x1F800000;

void func_801689D4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s16 sp38;
    s16 sp40;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    MATRIX **var_s1;
    MATRIX **var_s1_2;
    MATRIX *temp_a0;
    s16 var_v1;
    s32 temp_s4;
    s32 var_a0;
    s32 var_lo;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a1;
    void *temp_a0_2;
    void *temp_v1;

    var_s3 = 0;
    temp_s4 = D_801C3648->unk8;
loop_1:
    temp_a1 = var_s3 & 0xFFFF;
    if (temp_a1 < (u16) *(u16 *)0x1F800010) {
        if ((D_801C3880 + (temp_a1 << 5))->unk4 == 0) {
            func_8016F9A8(temp_s4 + 0x28, temp_s4 + ((temp_a1 * 8) + 0x4C), &sp18);
            var_s0 = 0;
            if (D_801C3648->unk28 > 0) {
                var_s1 = &D_801F2E78;
                do {
                    sp28 = sp18;
                    sp2C = sp1C;
                    sp30 = sp20;
                    mathMulVec(*var_s1, (VECTOR *) &sp28, (VECTOR *) &sp18);
                    var_s0 += 1;
                    var_s1 += 4;
                } while (var_s0 < D_801C3648->unk28);
            }
            var_a0 = D_801C3648->unk24 - D_801C3640;
            if (var_a0 < 0) {
                if (var_a0 < 0) {
                    var_a0 = -var_a0;
                }
                sp18 = sp18 >> var_a0;
                sp20 = sp20 >> var_a0;
                var_v0 = sp1C >> var_a0;
                goto block_12;
            }
            if (var_a0 > 0) {
                sp18 <<= var_a0;
                sp20 <<= var_a0;
                var_v0 = sp1C << var_a0;
block_12:
                sp1C = var_v0;
            }
            sp18 += arg1;
            sp20 += arg3;
            sp1C += arg2;
            if (func_80169F08(arg0, &sp18, D_801C3648->unk24, &sp38, &sp40) != 0) {
                if (!(arg0->unk4->unk12 & 1)) {
                    var_lo = sp3C * sp20;
                    sp48 = (s32) sp38;
                    sp4C = (s32) sp3A;
                    sp50 = (s32) sp3C;
                    var_v1 = sp3E;
                    var_v0_2 = (sp38 * sp18) + (sp3A * sp1C);
                    goto block_18;
                }
                sp48 = (s32) sp38;
                sp4C = (s32) sp3A;
                sp50 = (s32) sp3C;
                var_s2 = ((s32) ((sp38 * sp18) + (sp3A * sp1C) + (sp3C * sp20)) >> 0xC) + sp3E;
                if (var_s2 >= 0) {
                    var_lo = sp44 * sp20;
                    sp48 = (s32) sp40;
                    sp4C = (s32) sp42;
                    sp50 = (s32) sp44;
                    var_v1 = sp46;
                    var_v0_2 = (sp40 * sp18) + (sp42 * sp1C);
block_18:
                    var_s2 = ((s32) (var_v0_2 + var_lo) >> 0xC) + var_v1;
                    if (var_s2 < 0) {
                        goto block_19;
                    }
                } else {
block_19:
                    if ((-0x1E << D_801C3648->unk24) < var_s2) {
                        temp_v1 = D_801C3880 + ((var_s3 & 0xFFFF) << 5);
                        temp_v1->unk4 = 1;
                        temp_v1->unk18 = (s32) D_801C3648->unkAC;
                        temp_v1->unk22 = (s16) D_801C3648->unk30;
                        temp_v1->unk20 = (s16) D_801C3648->unk34;
                        temp_v1->unk1C = (s16) (arg0->unkB & 0xFF);
                        var_s0_2 = D_801C3648->unk28 - 1;
                        var_s1_2 = &(&D_801F2E78)[var_s0_2];
loop_21:
                        if (var_s0_2 >= 0) {
                            var_s0_2 -= 1;
                            sp58 = sp48;
                            sp5C = sp4C;
                            sp60 = sp50;
                            temp_a0 = *var_s1_2;
                            var_s1_2 -= 4;
                            mathMulTransVec(temp_a0, (VECTOR *) &sp58, (VECTOR *) &sp48);
                            goto loop_21;
                        }
                        temp_a0_2 = D_801C3880 + ((var_s3 & 0xFFFF) << 5);
                        temp_a0_2->unk8 = (s32) -sp48;
                        temp_a0_2->unkC = (s32) -sp4C;
                        temp_a0_2->unk10 = (s32) -sp50;
                        temp_a0_2->unk14 = (s32) -var_s2;
                    }
                }
            }
        }
        var_s3 += 1;
        goto loop_1;
    }
}
