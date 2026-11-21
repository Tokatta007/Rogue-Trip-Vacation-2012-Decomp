/* m2c reference for func_8014B840 @ 8014B840 (673 words). Generated; not compiled or validated. */
? func_80112368(s32);                               /* extern */
s32 func_80112ECC(s32, s32, void *);                /* extern */
? func_8011BC6C(s32, ?, ?, ?, s32, s32);            /* extern */
? func_80124FC8(VECTOR *, s32, s32);                /* extern */
? func_8012CDF4(void *, ?);                         /* extern */
? func_80130A58(void *);                            /* extern */
? func_8013C61C(s32, u32, s32, ?);                  /* extern */
? func_8013C824(s32, u32, s32, ?);                  /* extern */
s32 func_8013C918(s32, u32);                        /* extern */
? func_8013CAE0(s32, s32, s32);                     /* extern */
? func_801493A0(void *, VECTOR *);                  /* extern */
? func_8014C2C4(void *, VECTOR *);                  /* extern */
? func_8014C81C(void *, VECTOR *);                  /* extern */
? func_8014CB30(void *, VECTOR *);                  /* extern */
? func_8014D250(void *, VECTOR *);                  /* extern */
? func_8014D260(void *, VECTOR *);                  /* extern */
? func_8014D2E0(void *, VECTOR *);                  /* extern */
s32 func_8014D388(void *, void *);                  /* extern */
? func_8014EAA8(void *, VECTOR *);                  /* extern */
? func_8014F1BC(void *, VECTOR *, void *);          /* extern */
? func_8014F35C(void *, s32);                       /* extern */
? func_801507E0(void *, s32);                       /* extern */
? func_80150E98(void *, s32);                       /* extern */
? func_8015112C(void *, s32);                       /* extern */
? func_80151B60(void *, s32);                       /* extern */
? func_801526E4(void *, s32);                       /* extern */
? func_80152EB0(void *, s32);                       /* extern */
? func_801532DC(void *, s32);                       /* extern */
? func_801537C0(void *);                            /* extern */
? func_80153F38(void *);                            /* extern */
? func_8015454C(void *);                            /* extern */
? func_801548C8(void *, void *);                    /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_8016B504(void *, s32, void *);               /* extern */
? func_8016B574(void *, s32, void *);               /* extern */
u16 func_80176CBC(s16, s16, s16);                   /* extern */
s16 func_80178A1C();                                /* extern */
static s32 D_801C34F4 = 0;

void func_8014B840(void *arg0) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp28;
    ? var_a3;
    ? var_a3_2;
    VECTOR *temp_s1;
    s16 temp_fp;
    s16 var_v0_2;
    s16 var_v0_3;
    s32 temp_s0;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_4;
    void *var_s1;

    temp_fp = func_80178A1C();
    arg0->unk1754 = 0;
    var_s4 = arg0->unk174C;
loop_1:
    var_s5 = 0;
    if (var_s4 != -1) {
        temp_s1 = arg0 + ((var_s4 * 0x68) + 0x10);
        sp28 = (arg0 + ((var_s4 * 0xC) + 0x10B8))->unk8;
        if (temp_s1->unk20 != 8) {
            arg0->unk1754 = (s32) (arg0->unk1754 + 1);
        }
        if (temp_s1->unk4C != 0) {
            var_a3 = 0;
            if (temp_s1->unk1C->unk820 != 0) {
                var_a3 = 2;
            }
            func_8013C824(D_801C34F4, temp_s1->unk20, temp_s1->unk14 + 0x1C, var_a3);
        } else {
            var_a3_2 = 0;
            if (temp_s1->unk1C->unk820 != 0) {
                var_a3_2 = 2;
            }
            func_8013C61C(D_801C34F4, temp_s1->unk20, temp_s1->unk14 + 0x1C, var_a3_2);
        }
        if (temp_s1->unk20 == 3) {
            temp_v1 = temp_s1->unk1C;
            if ((temp_v1->unk29F == 0) && (temp_v1->unk7B8 == 1)) {
                temp_s1->unk4C = (u16) temp_s1->unk46;
            }
            var_a0 = 0;
            if ((temp_s1->unk1C->unk87 != 0) || (temp_s1->unk1C->unk8C != 0)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                temp_s1->unk4C = (u16) temp_s1->unk46;
            }
        }
        if (temp_s1->unk20 == 0xE) {
            temp_v1_2 = temp_s1->unk1C;
            if (((arg0 + temp_v1_2->unk78)->unk17D8 == 0) && (temp_v1_2->unk7B8 == 1)) {
                temp_s1->unk4C = (u16) temp_s1->unk46;
            }
            var_a0_2 = 0;
            if ((temp_s1->unk1C->unk87 != 0) || (temp_s1->unk1C->unk8C != 0)) {
                var_a0_2 = 1;
            }
            if (var_a0_2 != 0) {
                temp_s1->unk4C = (u16) temp_s1->unk46;
            }
        }
        temp_s1->unk4C = (u16) (temp_s1->unk4C + temp_fp);
        var_a0_3 = 0;
        if ((temp_s1->unk46 << 0x10) < (temp_s1->unk4C << 0x10)) {
            if ((temp_s1->unk20 != 8) && (temp_s1->unk20 != 3) && (temp_s1->unk20 != 9) && (temp_s1->unk20 != 0xA) && (temp_s1->unk20 != 0xE)) {
                var_a0_3 = (u32) (temp_s1->unk20 ^ 0x11) > 0U;
            }
            if (var_a0_3 != 0) {
                func_8011BC6C(temp_s1->unk14 + 0x1C, 0, 8, 0x48, 0, 0);
            }
            var_a0_4 = 0;
            if (((u32) temp_s1->unk20 < 3U) || (temp_s1->unk20 == 7)) {
                var_a0_4 = 1;
            }
            var_v0 = 1 & 0xFF;
            if (var_a0_4 != 0) {
                func_8013CAE0(D_801C34F4, func_8013C918(D_801C34F4, temp_s1->unk20), temp_s1->unk14 + 0x1C);
                var_v0 = 1 & 0xFF;
            }
        } else {
            if ((temp_s1->unk20 == 6) && ((u8) temp_s1->unk63 >= 3U)) {
                temp_s1->unk32 = func_80176CBC((s16) temp_s1->unk32, 0, 5);
                if (temp_s1->unk32 == 0) {
                    temp_s1->unk62 = 1;
                }
                if (temp_s1->unk1C->unk7B8 == 2) {
                    func_8014EAA8(arg0, temp_s1);
                }
            } else {
                temp_s1->unk32 = func_80176CBC((s16) temp_s1->unk32, (s16) temp_s1->unk38, (s16) temp_s1->unk3A);
            }
            temp_v1_3 = temp_s1->unk24;
            switch (temp_v1_3) {                    /* irregular */
            case 2:
                func_8014C81C(arg0, temp_s1);
                break;
            case 1:
                func_8014C2C4(arg0, temp_s1);
                break;
            case 3:
                temp_v0 = temp_s1->unk1C;
                if ((temp_v0 != NULL) && (temp_v0->unk7B8 == 1)) {
                    func_8014CB30(arg0, temp_s1);
                }
                break;
            }
            func_8014D260(arg0, temp_s1);
            if (temp_s1->unk32 != 0) {
                sp18 = 0;
                var_a0_5 = 0;
                sp20 = 0;
                sp1C = (s16) temp_s1->unk32 * temp_fp;
                if ((temp_s1->unk20 == 6) || (temp_s1->unk20 == 0x1A)) {
                    var_a0_5 = 1;
                }
                if ((var_a0_5 != 0) && ((temp_s1->unk32 << 0x10) > 0)) {
                    temp_s1->unk34 = (u16) (temp_s1->unk34 - 2);
                }
                temp_s0 = temp_s1->unk14 + 0x1C;
                mathMulTransVec(temp_s1->unk14 + 0x28, (VECTOR *) &sp18, temp_s1);
                temp_s1->vz += (s16) temp_s1->unk34 * temp_fp;
                func_80124FC8(temp_s1, temp_s0, temp_s0);
            }
            if (temp_s1->unk20 == 0xF) {
                temp_s1->unk3C = (u16) (temp_s1->unk3C + temp_s1->unk40);
                var_v0_2 = (s16) temp_s1->unk3C;
                if (var_v0_2 < 0) {
                    var_v0_2 = -var_v0_2;
                }
                if (var_v0_2 >= 0x17) {
                    temp_s1->unk40 = (u16) -(s32) temp_s1->unk40;
                }
                temp_s1->unk3E = (u16) (temp_s1->unk3E + temp_s1->unk42);
                var_v0_3 = (s16) temp_s1->unk3E;
                if (var_v0_3 < 0) {
                    var_v0_3 = -var_v0_3;
                }
                if (var_v0_3 >= 0x17) {
                    temp_s1->unk42 = (u16) -(s32) temp_s1->unk42;
                }
                temp_a0 = temp_s1->unk14;
                temp_a0->unk14 = (u16) (temp_a0->unk14 + temp_s1->unk3C);
                temp_a2 = temp_s1->unk14;
                temp_a2->unk18 = (u16) (temp_a2->unk18 + temp_s1->unk3E);
                func_8014F1BC(arg0, temp_s1, temp_a2);
            }
            if (temp_s1->unk20 == 0x13) {
                temp_v1_4 = temp_s1->unk14;
                temp_v1_4->unk16 = (u16) (temp_v1_4->unk16 - 0xAA);
                func_8015A05C(temp_s1->unk14 + 0x14, temp_s1->unk14 + 0x28);
            }
            func_8014D2E0(arg0, temp_s1);
            if (temp_s1->unk20 == 3) {
                var_s5 = 0;
                if (temp_s1->unk1C->unk89 != 0) {
                    func_801548C8(arg0, temp_s1->unk1C);
                    var_s5 = 0;
                }
                var_s0 = 2;
loop_84:
                if (func_80112ECC(temp_s1->pad, var_s0, temp_s1->unk14 + 0x1C) != 0) {
                    var_v0 = 0 & 0xFF;
                    if (!(func_8014D388(arg0, arg0 + ((var_s4 * 0x68) + 0x10)) & 0xFF)) {
                        var_s0 = (var_s0 + 2) - temp_s1->unk61;
                        var_v0 = 0 & 0xFF;
                        if (var_s0 >= 0xA) {

                        } else {
                            goto loop_84;
                        }
                    }
                } else {
                    goto block_95;
                }
            } else if (temp_s1->unk20 == 0xE) {
                var_s0_2 = 2;
loop_90:
                if ((func_80112ECC(temp_s1->pad, var_s0_2, temp_s1->unk14 + 0x1C) != 0) && (var_s0_2 += 2, ((func_8014D388(arg0, arg0 + ((var_s4 * 0x68) + 0x10)) & 0xFF) == 0))) {
                    var_v0 = 0 & 0xFF;
                    if (var_s0_2 >= 0xA) {

                    } else {
                        goto loop_90;
                    }
                } else {
                    goto block_95;
                }
            } else {
                var_s5 = func_8014D388(arg0, arg0 + ((var_s4 * 0x68) + 0x10));
block_95:
                var_v0 = var_s5 & 0xFF;
            }
        }
        if (var_v0 != 0) {
            temp_s1->unk14->unkC = 0;
            func_80112368(temp_s1->pad);
            func_80112368(temp_s1->unk10);
            temp_s1->unk10 = 0;
            temp_s1->pad = temp_s1->unk10;
            func_8016B574(arg0 + 0x10B8, var_s4, arg0 + 0x174C);
            func_8016B504(arg0 + 0x1298, var_s4, arg0 + 0x1750);
            if (temp_s1->unk1C != NULL) {
                func_801493A0(temp_s1->unk1C, temp_s1);
                var_a0_6 = 0;
                if ((temp_s1->unk1C != NULL) && (temp_s1->unk20 == 7)) {
                    var_a0_6 = temp_s1->unk1C->unk7B8 == 1;
                }
                if (var_a0_6 != 0) {
                    temp_a0_2 = temp_s1->unk1C;
                    if (temp_a0_2->unk890 == temp_s1) {
                        func_80130A58(temp_a0_2);
                        if (temp_s1->unk61 != 0) {
                            temp_s1->unk1C->unk192 = 0;
                        }
                    }
                }
            }
            if (temp_s1->unk24 == 3) {
                temp_v0_2 = temp_s1->unk1C;
                if ((temp_v0_2 != NULL) && (temp_v0_2->unk7B8 == 1)) {
                    func_80130A58(temp_s1->unk1C);
                }
            } else if ((temp_s1->unk20 == 6) && (temp_s1->unk1C != NULL)) {
                func_8012CDF4(temp_s1->unk1C + 0x264, 7);
                temp_s1->unk1C->unk294 = 0;
            }
            func_8014D250(arg0, temp_s1);
        }
        var_s4 = sp28;
        goto loop_1;
    }
    var_s0_3 = 0;
    var_s1 = arg0;
    do {
        if (var_s1->unk17B6 != 0) {
            func_8014F35C(arg0, var_s0_3);
        }
        if (var_s1->unk17D0 != 0) {
            func_801507E0(arg0, var_s0_3);
        }
        if (var_s1->unk17DC != 0) {
            func_80150E98(arg0, var_s0_3);
        }
        if (var_s1->unk17F8 != 0) {
            func_8015112C(arg0, var_s0_3);
        }
        if (var_s1->unk1850 != 0) {
            func_80151B60(arg0, var_s0_3);
        }
        if (var_s1->unk1872 != 0) {
            func_801526E4(arg0, var_s0_3);
        }
        if (var_s1->unk18A0 != 0) {
            func_80152EB0(arg0, var_s0_3);
        }
        if (var_s1->unk18B0 != 0) {
            func_801532DC(arg0, var_s0_3);
        }
        var_s0_3 += 1;
        var_s1 = arg0 + var_s0_3;
    } while (var_s0_3 < 2);
    func_80153F38(arg0);
    func_801537C0(arg0);
    if (arg0->unk176C != 0) {
        func_8015454C(arg0);
    }
}
