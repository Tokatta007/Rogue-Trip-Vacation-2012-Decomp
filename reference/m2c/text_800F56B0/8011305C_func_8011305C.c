/* m2c reference for func_8011305C @ 8011305C (584 words). Generated; not compiled or validated. */
? func_80112484(void *, void *, u8);                /* extern */
? func_801127C0(void *, void *);                    /* extern */
? func_8011BC6C(s32 *, s32 *, ?, ?, s32, s32);      /* extern */
? func_80159C1C(void *, void *, s32, s32, void *);  /* extern */
? func_8016B504(? *, s32, ? *);                     /* extern */
? func_8016B574(? *, s32, s32 *);                   /* extern */
extern ? D_80180B3C;
extern ? D_80180C2C;
extern ? D_801834D8;
extern ? D_801C3FC0;
static s32 D_801C32A8 = 0;
static ? D_801C32AC;                                /* unable to generate initializer: unknown type */

void func_8011305C(void) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp38;
    ? var_a2;
    ? var_a3;
    s16 temp_a0_2;
    s16 temp_v0_3;
    s16 temp_v1_2;
    s16 var_a3_2;
    s32 temp_a0;
    s32 temp_a2_4;
    s32 temp_a3;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1;
    u8 temp_a2;
    u8 temp_v0_2;
    void *temp_a1;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_s0;
    void *temp_s1;
    void *var_s1;
    void *var_s4;
    void *var_v0_3;

    var_s3 = D_801C32A8;
loop_1:
    if (var_s3 != -1) {
        temp_s0 = (var_s3 * 0x26C) + &D_801C3FC0;
        sp38 = ((var_s3 * 0xC) + &D_80180B3C)->unk8;
        if (temp_s0->unk26A != 0) {
            temp_s0->unk26A = (u8) (temp_s0->unk26A - 1);
            if (temp_s0->unk26A == 0) {
                func_801127C0(temp_s0, temp_s0 + (((s32) (temp_s0->unk25F << 0x18) >> 0x12) + 0xC));
            }
        } else {
            temp_s0->unk254 = (s32) (temp_s0->unk254 & ~0x2000);
            temp_v1 = temp_s0->unk254;
            var_s2 = temp_v1;
            if (!(temp_v1 & 0x1000)) {
                if (temp_v1 & 0x8000) {
                    temp_s0->unk25A = (u16) (temp_s0->unk25A - ((u16) temp_s0->unk25A >> 8));
                    temp_s0->unk258 = (u16) (temp_s0->unk258 - ((s32) (temp_s0->unk258 << 0x10) >> 0x16));
                    temp_s0->unk25C = (u16) (temp_s0->unk25C - 1);
                    if (temp_s0->unk25C == 0xFFFF) {
                        temp_s0->unk254 = (s32) ((temp_s0->unk254 ^ 0x8000) | 0x800);
                        var_s2 = temp_s0->unk254;
                    }
                }
                temp_s0->unk260 = (u8) (temp_s0->unk260 - 1);
                temp_s6 = (1 << (s8) temp_s0->unk261) - 1;
                if ((s8) temp_s0->unk260 == -1) {
                    temp_s0->unk260 = (u8) (temp_s0->unk260 + ((temp_s0->unk268 + 1) << temp_s0->unk261));
                }
                temp_a0 = var_s2 & 0x800 & 0xFFFF;
                if (temp_a0 == 0) {
                    temp_s0->unk25E = (u8) temp_s0->unk260;
                }
                temp_s1 = temp_s0 + ((((s8) temp_s0->unk25E >> temp_s0->unk261) << 6) + 0xC);
                temp_v0 = temp_s6 & 0xFF;
                if (((s8) temp_s0->unk260 & temp_v0) == temp_v0) {
                    if (((s8) temp_s0->unk260 >> temp_s0->unk261) == (s8) temp_s0->unk25F) {
                        temp_s0->unk25F = (u8) (temp_s0->unk25F - 1);
                        if ((s8) temp_s0->unk25F == -1) {
                            temp_s0->unk25F = (u8) (temp_s0->unk25F + (temp_s0->unk268 + 1));
                        }
                    }
                    temp_v1_2 = (s8) temp_s0->unk25F - ((s8) temp_s0->unk25E >> temp_s0->unk261);
                    if (temp_v1_2 < 0) {
                        var_v0 = (s16) (temp_v1_2 + (temp_s0->unk268 + 1)) < 2;
                    } else {
                        var_v0 = temp_v1_2 < 2;
                    }
                    if ((var_v0 != 0) && (var_s2 & 0x800)) {
                        var_s2 = 0x1000;
                        goto block_31;
                    }
                    (temp_s0 + ((s32) (temp_s0->unk25F << 0x18) >> 0x12))->unk18 = 0;
                    var_v0_2 = var_s2 & 0x1000;
                    if (!(var_s2 & 0x800)) {
                        func_801127C0(temp_s0, temp_s1);
                        temp_s1->unkC = (s32) ((temp_s0->unk267 * 0xC) + &D_801834D8)->unk8;
                        var_v0_2 = var_s2 & 0x1000;
                        if (var_s2 & 0x400) {
                            sp28 = (s32) temp_s1->unk0 >> 5;
                            sp2C = (s32) temp_s1->unk4 >> 5;
                            sp30 = (s32) (temp_s1->unk8 - temp_s0->unk25A) >> 5;
                            sp18 = (s32) (temp_s1->unk30 << 0x10) >> 0x15;
                            sp1C = (s32) (temp_s1->unk32 << 0x10) >> 0x15;
                            sp20 = (s32) (temp_s1->unk34 << 0x10) >> 0x15;
                            if (temp_s0->unk26B == 0x40) {
                                var_a2 = 0xD;
                                var_a3 = 2;
                            } else {
                                var_a2 = 0xF;
                                var_a3 = 0x42;
                            }
                            func_8011BC6C(&sp28, &sp18, var_a2, var_a3, 0, 0);
                            var_v0_2 = var_s2 & 0x1000;
                        }
                    }
                } else {
                    var_v0_2 = var_s2 & 0x1000;
                    if (temp_a0 == 0) {
                        temp_a2 = temp_s0->unk264;
                        temp_s0->unk265 = (u8) (temp_s0->unk266 & (temp_s0->unk265 + temp_a2));
                        func_80112484(temp_s0, temp_s1, temp_a2);
block_31:
                        var_v0_2 = var_s2 & 0x1000;
                    }
                }
                if (var_v0_2 != 0) {
                    goto block_33;
                }
                if (((s8) temp_s0->unk25E - (s8) temp_s0->unk260) & 0x8000) {

                }
                temp_v1_3 = (s8) temp_s0->unk25E >> temp_s0->unk261;
                var_s3_2 = temp_v1_3;
                temp_v1_4 = (s8) temp_s0->unk25F - temp_v1_3;
                var_s5 = temp_v1_4 + 1;
                if (temp_v1_4 & 0x8000) {
                    var_s5 = temp_s0->unk268 + temp_v1_4 + 2;
                }
                var_s1 = temp_s0 + (((s32) (var_s3_2 << 0x10) >> 0xA) + 0xC);
                if (var_s2 & 0x800) {
                    var_s1->unkC = 0;
                } else {
                    var_s3_2 += 1;
                    var_s5 -= 1;
                    var_s1 += 0x40;
                }
                temp_v0_2 = temp_s0->unk261;
                temp_a3 = temp_s0->unk267 & 0xFF;
                temp_v1_5 = temp_s6 & 0xFF;
                temp_a0_2 = (temp_v1_5 + ((s8) temp_s0->unk25E & ~temp_v1_5)) - ((s8) temp_s0->unk260 - 1);
                if (temp_a0_2 < 0) {
                    var_v0_3 = ((temp_a3 + ((s16) (temp_a0_2 + ((temp_s0->unk268 + 1) << temp_s0->unk261)) >> (s8) temp_v0_2)) * 0xC) + &D_801834D8;
                } else {
                    var_v0_3 = ((temp_a3 + (temp_a0_2 >> (s8) temp_v0_2)) * 0xC) + &D_801834D8;
                }
                var_s4 = var_v0_3;
                temp_s6_2 = ((s8) temp_s0->unk260 & (temp_s6 & 0xFF)) << (0xC - (s8) temp_s0->unk261);
loop_45:
                if ((var_s5 << 0x10) != 0) {
                    if ((s32) temp_s0->unk268 < (s16) var_s3_2) {
                        var_s3_2 = 0;
                        var_s1 = temp_s0 + 0xC;
                    }
                    var_v0_4 = var_s2 & 1;
                    if (var_s2 & 0x10) {
                        var_a3_2 = 0;
                        var_v1 = 0 << 0x10;
                        do {
                            temp_v1_6 = var_v1 >> 0xD;
                            temp_a2_2 = var_s1 + (temp_v1_6 + 0x10);
                            temp_a1 = var_s1 + (temp_v1_6 + 0x20);
                            if (var_s2 & 0x20) {
                                temp_a1->unk0 = (u16) (temp_a1->unk0 - ((s16) temp_a1->unk0 >> temp_s0->unk269));
                                temp_a1->unk2 = (u16) (temp_a1->unk2 - ((s16) temp_a1->unk2 >> temp_s0->unk269));
                                temp_a1->unk4 = (u16) (temp_a1->unk4 - ((s16) temp_a1->unk4 >> temp_s0->unk269));
                            }
                            temp_a2_2->unk0 = (u16) (temp_a2_2->unk0 + temp_a1->unk0);
                            temp_v0_3 = var_a3_2 + 1;
                            var_a3_2 = temp_v0_3;
                            temp_a2_2->unk2 = (u16) (temp_a2_2->unk2 + temp_a1->unk2);
                            temp_a2_2->unk4 = (u16) (temp_a2_2->unk4 + temp_a1->unk4);
                            var_v1 = var_a3_2 << 0x10;
                        } while (temp_v0_3 < 2);
                        var_v0_4 = var_s2 & 1;
                    }
                    if (var_v0_4 != 0) {
                        temp_a2_3 = var_s1 + 0x30;
                        if (var_s2 & 2) {
                            var_s1->unk30 = (u16) (var_s1->unk30 - ((s16) var_s1->unk30 >> temp_s0->unk269));
                            temp_a2_3->unk2 = (u16) (temp_a2_3->unk2 - ((s16) temp_a2_3->unk2 >> temp_s0->unk269));
                            temp_a2_3->unk4 = (u16) (temp_a2_3->unk4 - ((s16) temp_a2_3->unk4 >> temp_s0->unk269));
                        }
                        var_s1->unk0 = (s32) (var_s1->unk0 + (s16) var_s1->unk30);
                        var_s1->unk4 = (s32) (var_s1->unk4 + (s16) temp_a2_3->unk2);
                        var_s1->unk8 = (s32) (var_s1->unk8 + (s16) temp_a2_3->unk4);
                        var_v0_5 = var_s2 & 8;
                        if (var_s2 & 0x40) {
                            temp_a2_3->unk4 = (u16) (temp_a2_3->unk4 - 6);
                            goto block_59;
                        }
                    } else {
block_59:
                        var_v0_5 = var_s2 & 8;
                    }
                    if (var_v0_5 != 0) {
                        var_s1->unk0 = (s32) (var_s1->unk0 + (s16) var_s1->unk38);
                        var_s1->unk4 = (s32) (var_s1->unk4 + (s16) var_s1->unk3A);
                        var_s1->unk8 = (s32) (var_s1->unk8 + (s16) var_s1->unk3C);
                    }
                    if (((s16) var_s3_2 != (s8) temp_s0->unk25F) && ((s16) var_s3_2 != ((s8) temp_s0->unk25E >> temp_s0->unk261))) {
                        temp_a2_4 = temp_s6_2 & 0xFFFF;
                        if (var_s2 & 0x4000) {
                            var_v0_6 = (((temp_s0->unk267 + (s16) var_s3_2) * 0xC) + &D_801834D8)->unk8;
                            goto block_69;
                        }
                        if (temp_a2_4 != 0) {
                            func_80159C1C(var_s4 + 8, var_s4 + 0x14, temp_a2_4, 0x1000 - temp_a2_4, var_s1 + 0xC);
                            var_s4 += 0xC;
                        } else {
                            var_v0_6 = var_s4->unk8;
block_69:
                            var_s1->unkC = var_v0_6;
                            var_s4 += 0xC;
                        }
                    }
                    var_s5 -= 1;
                    var_s3_2 += 1;
                    var_s1 += 0x40;
                    goto loop_45;
                }
            } else {
block_33:
                temp_s0->unk254 = 0;
                func_8016B574(&D_80180B3C, var_s3, &D_801C32A8);
                func_8016B504(&D_80180C2C, var_s3, &D_801C32AC);
            }
        }
        var_s3 = sp38;
        goto loop_1;
    }
}
