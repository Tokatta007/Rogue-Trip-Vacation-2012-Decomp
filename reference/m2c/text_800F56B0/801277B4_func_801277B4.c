/* m2c reference for func_801277B4 @ 801277B4 (388 words). Generated; not compiled or validated. */
s32 func_800FE044(u16, u16);                        /* extern */
? func_801274CC(void *, ? *);                       /* extern */
s32 func_801596CC(s32);                             /* extern */
? func_8015A01C(s32, ? *);                          /* extern */
? func_8015A2EC(s16, ? *);                          /* extern */
? func_8015A48C(s16, ? *);                          /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */
void *func_801793C0(s8);                            /* extern */
extern ? D_80184018;
extern ? D_8018444C;
extern u16 D_80184590;
extern u16 D_80184598;
static s32 D_801C32D4 = 0;
static s32 D_801C34EC = 0;

void func_801277B4(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s16 sp20;
    s16 sp24;
    s32 sp2C;
    s32 sp30;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    ? sp48;
    u16 sp68;                                       /* compiler-managed */
    u8 sp6A;                                        /* compiler-managed */
    u8 sp6B;                                        /* compiler-managed */
    VECTOR sp70;
    s32 sp80;
    ? *sp88;
    u16 *sp8C;
    ? *var_a3;
    s16 temp_a0_2;
    s16 temp_s2;
    s16 var_v1_4;
    s32 temp_a0;
    s32 temp_a0_4;
    s32 temp_a1_3;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_fp;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 temp_s3;
    s8 var_s3;
    s8 var_s5;
    u16 *var_s1;
    u16 *var_s1_2;
    u16 *var_s1_3;
    u16 *var_t0;
    u32 temp_s0_2;
    u8 temp_v1_2;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s4;
    void *temp_s4_2;
    void *temp_s6;
    void *temp_v0_2;
    void *temp_v0_3;

    var_fp = 0;
    var_a3 = &D_8018444C;
    var_s1 = &D_80184590;
    var_s3 = 0;
    sp80 = (D_801C34EC + 0x6220)->unk3CC;
loop_1:
    if (var_s3 < sp80) {
        sp88 = var_a3;
        temp_s6 = func_801793C0(var_s3);
        var_s5 = 0;
        var_t0 = &D_80184598;
loop_3:
        if (var_s5 < D_801C32D4) {
            temp_a1 = (var_s5 << 5) + var_a3;
            temp_s0 = temp_a1->unk18;
            sp10 = temp_s6->unk8 + temp_s0->unk1C;
            sp14 = temp_s6->unkC + temp_s0->unk20;
            temp_s4 = temp_a1 + (var_s3 * 0xC);
            sp18 = temp_s6->unk10 + temp_s0->unk24;
            var_v1 = sp10;
            temp_v0 = sp10.unk4;
            if (var_v1 < 0) {
                var_v1 = -var_v1;
            }
            var_a0 = temp_v0;
            if (temp_v0 < 0) {
                var_a0 = -var_a0;
            }
            if (var_v1 < var_a0) {
                var_v0 = var_a0 + (var_v1 >> 1);
            } else {
                var_v0 = var_v1 + (var_a0 >> 1);
            }
            var_s7 = 0;
            temp_s2 = (var_v0 >> 3) - *((temp_a1->unk1C * 2) + &D_80184018);
            if ((temp_s0->unkC != 0) && (temp_s2 < 0x96) && ((var_a0_2 = 0, (temp_a1->unk1C == 1)) || ((u16) temp_a1->unk1C >= 0xFU) || (sp88 = var_a3, sp8C = var_t0, var_a0_2 = 0, (func_800FE044(temp_a1->unk1C, temp_a1->unk1E) == 0)))) {
                temp_a2 = temp_s0->unk0;
                if ((temp_a2->unk0 & 0xF) == 1) {
                    var_a0_2 = (temp_a2->unk14 & 8) == 0;
                }
                if (var_a0_2 != 0) {
                    sp88 = var_a3;
                    sp8C = var_t0;
                    temp_s0_2 = (u32) temp_a2->unk10 >> 1;
                    mathMulVec(temp_s6 + 0x14, (VECTOR *) &sp10, &sp70);
                    var_a3 = sp88;
                    var_t0 = sp8C;
                    temp_v1 = sp70.vz + temp_s0_2;
                    if (temp_v1 >= 0) {
                        var_v1_2 = (s32) sp70;
                        temp_a0 = temp_v1 + ((s32) temp_s0_2 >> 2) + ((s32) temp_s0_2 >> 3);
                        if (var_v1_2 < 0) {
                            var_v1_2 = -var_v1_2;
                        }
                        if (temp_a0 < var_v1_2) {
                            goto block_23;
                        }
                        var_v0_2 = sp70.vy;
                        if (var_v0_2 < 0) {
                            var_v0_2 = -var_v0_2;
                        }
                        var_v1_3 = 0;
                        if (((s32) (temp_a0 * 3) >> 2) >= var_v0_2) {
                            goto block_27;
                        }
                    } else {
block_23:
                        var_v1_3 = 0;
                    }
                } else {
block_27:
                    var_v1_3 = 1;
                }
                if (var_v1_3 != 0) {
                    var_s7 = 1;
                }
            }
            if (var_s7 != 0) {
                temp_s4->unk9 = 1;
                temp_a0_2 = -temp_s2;
                if (var_fp < 2) {
                    var_s1->unk2 = var_s5;
                    var_s1->unk3 = var_s3;
                    var_s1->unk0 = (u16) temp_a0_2;
                    var_s1 += 4;
                    var_fp += 1;
                    goto block_46;
                }
                var_a1 = 0;
                var_s1_2 = &D_80184590 + 4;
                var_s2 = 1;
                var_v1_4 = (s16) D_80184590;
                do {
                    if ((s16) *var_s1_2 < var_v1_4) {
                        var_a1 = var_s2;
                        var_v1_4 = (s16) *var_s1_2;
                    }
                    var_s2 += 1;
                    var_s1_2 += 4;
                } while (var_s2 < 2);
                if (var_v1_4 < temp_a0_2) {
                    temp_s1 = (var_a1 * 4) + &D_80184590;
                    sp6A = temp_s1->unk2;
                    sp6B = temp_s1->unk3;
                    sp68 = temp_s1->unk0;
                    temp_s1->unk2 = (u8) var_s5;
                    temp_s1->unk3 = (u8) var_s3;
                    temp_s1->unk0 = (u16) temp_a0_2;
                    var_s1 = var_t0;
                } else {
                    sp6A = var_s5;
                    sp6B = var_s3;
                    sp68 = temp_a0_2;
                    var_s1 = var_t0;
                }
                if (var_fp < 3) {
                    var_s1->unk2 = (u8) sp6A;
                    var_s1->unk3 = (u8) sp6B;
                    var_fp += 1;
                    *var_t0 = (u16) sp68;
                    var_s5 += 1;
                } else {
                    temp_a0_3 = ((u8) sp6B * 0xC) + ((u8) sp6A << 5) + var_a3;
                    temp_v1_2 = temp_a0_3->unk8;
                    if ((u8) ((var_s1->unk3 * 0xC) + (var_s1->unk2 << 5) + var_a3)->unk8 < temp_v1_2) {
                        temp_v0_2 = (var_s1->unk3 * 0xC) + (var_s1->unk2 << 5) + var_a3;
                        temp_v0_2->unk8 = (u8) (temp_v0_2->unk8 + 1);
                        var_s1->unk2 = (u8) sp6A;
                        var_s1->unk3 = (u8) sp6B;
                        *var_t0 = (u16) sp68;
                        var_s5 += 1;
                    } else {
                        temp_a0_3->unk8 = (u8) (temp_v1_2 + 1);
                        goto block_46;
                    }
                }
            } else {
                temp_s4->unk9 = 0;
block_46:
                var_s5 += 1;
            }
            goto loop_3;
        }
        var_s3 += 1;
        goto loop_1;
    }
    var_s1_3 = &D_80184590;
    var_s2_2 = 0;
    if (var_fp > 0) {
        do {
            temp_s3 = var_s1_3->unk3 & 0xFF;
            temp_a1_2 = (var_s1_3->unk2 << 5) + &D_8018444C;
            temp_s4_2 = temp_a1_2 + (temp_s3 * 0xC);
            temp_s4_2->unk8 = 0;
            temp_s0_3 = temp_a1_2->unk18;
            func_8015A01C(temp_s0_3 + 0x28, &sp48);
            temp_v0_3 = func_801793C0(temp_s3);
            temp_a0_4 = temp_v0_3->unk8 + temp_s0_3->unk1C;
            sp38 = temp_a0_4;
            temp_a1_3 = temp_v0_3->unkC + temp_s0_3->unk20;
            sp3C = temp_a1_3;
            sp40 = temp_v0_3->unk10 + temp_s0_3->unk24;
            sp24 = (s16) ((s32) -func_8015A62C(-temp_a0_4, temp_a1_3) >> 1);
            temp_v0_4 = func_801596CC((sp38 * sp38) + (sp3C * sp3C));
            sp2C = temp_v0_4;
            sp30 = sp40;
            sp20 = (s16) ((s32) -func_8015A62C(sp40, temp_v0_4) >> 1);
            func_8015A48C(sp24, &sp48);
            func_8015A2EC(sp20, &sp48);
            temp_a0_5 = temp_s4_2->unk0;
            if (temp_a0_5 != NULL) {
                temp_a0_5->unk12 = (u8) temp_s4_2->unkA;
                func_801274CC(temp_a0_5, &sp48);
            }
            temp_a0_6 = temp_s4_2->unk4;
            if (temp_a0_6 != NULL) {
                temp_a0_6->unk12 = (u8) temp_s4_2->unkB;
                func_801274CC(temp_a0_6, &sp48);
            }
            var_s2_2 += 1;
            var_s1_3 += 4;
        } while (var_s2_2 < var_fp);
    }
}
