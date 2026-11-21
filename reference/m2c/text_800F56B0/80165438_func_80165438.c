/* m2c reference for func_80165438 @ 80165438 (871 words). Generated; not compiled or validated. */
? func_8015CE18(?, s32, s32, s32, void *);          /* extern */
? func_801661D4(s32 *, s32);                        /* extern */
? func_801665B0(s32, void *, s32);                  /* extern */
? func_8016668C(s16 *, s32 *, ? *, ? *);            /* extern */
? func_801666BC(s16 *, s16 *, s16 *, void *, s32, s32, ? *, ? *); /* extern */
? func_8016671C(s16 *, s16 *, s16 *, s16 *, void *, void *, void *, void *, ? *, ? *); /* extern */
void *func_8016F210(?);                             /* extern */
void *func_801793C0(?);                             /* extern */
s32 func_801797B4(?);                               /* extern */

void func_80165438(void *arg0, void *arg1, ? arg2) {
    ? sp28;
    s16 sp88;
    s16 sp8A;
    s16 sp8C;
    s16 sp90;
    s16 sp92;
    s16 sp94;
    s16 sp98;
    s16 sp9A;
    s16 sp9C;
    s16 spA0;
    s16 spA2;
    s16 spA4;
    MATRIX spA8;
    ? spC8;
    ? spCC;
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    s32 spE0;
    s32 spE4;
    s32 spE8;
    void *spEC;
    void *spF0;
    s32 spF4;
    s32 spF8;
    s32 spFC;
    s32 sp100;
    ? *sp104;
    void *sp108;
    s32 sp110;
    ? *var_a3;
    s32 *temp_s3_2;
    s32 *temp_s3_3;
    s32 *temp_s3_4;
    s32 *temp_s3_5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_fp;
    s32 temp_s0_4;
    s32 temp_s2;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 *temp_s6;
    u16 *var_s2_2;
    u32 var_s7;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s3;
    void *temp_s7;
    void *temp_s7_2;
    void *temp_t3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *var_a1;
    void *var_a2;
    void *var_s0;
    void *var_s5;

    sp104 = &sp28;
    sp100 = 0;
    spFC = 0;
    var_s7 = arg0->unk8;
    temp_s0 = arg0 + 0x1C;
    func_8015CE18(0x1F800060, arg0->unk27 & 0xFF, arg0->unk26 & 0xFF, arg0->unk24 & 0xFFFF, temp_s0);
    func_8015CE18(0x1F80006C, arg0->unk27 & 0xFF, 1, arg0->unk24 & 0xFFFF, temp_s0);
    temp_v0 = func_801793C0(arg2);
    spEC = temp_v0;
    SetRotMatrix(temp_v0 + 0x14);
    temp_v0_2 = func_8016F210(0);
    SetLightMatrix(temp_v0_2 + 0x2C);
    SetColorMatrix(temp_v0_2 + 0xC);
    SetBackColor(temp_v0_2->unk0, temp_v0_2->unk4, temp_v0_2->unk8);
    spA8.t[0] = 0;
    spA8.t[1] = 0;
    spA8.t[2] = 0;
    SetTransMatrix(&spA8);
    sp108 = arg1;
loop_1:
    var_t0 = 0;
    if (spFC < arg1->unk4) {
        var_a3 = sp104;
        var_a2 = arg1;
        do {
            var_a3->unk0 = (s32) (sp108->unkDC + spEC->unk8 + var_a2->unk70);
            var_t0 += 1;
            var_a3->unk4 = (s32) (sp108->unkE0 + spEC->unkC + var_a2->unk74);
            temp_v0_3 = var_a2->unk78;
            var_a2 += 0xC;
            var_a3->unk8 = (s32) (sp108->unkE4 + spEC->unk10 + temp_v0_3);
            var_a3 += 0xC;
        } while (var_t0 < 8);
        spF8 = 0;
        temp_t3 = sp108->unkD8;
        spF0 = temp_t3;
        spF4 = sp108->unkE8;
        temp_fp = temp_t3->unk4;
        spE8 = temp_t3->unk8;
        var_s5 = temp_t3->unkC;
loop_5:
        if (spF8 < (s32) spF0->unk12) {
            if ((u32) arg0->unkC >= var_s7) {
                temp_s3 = var_s7 + 8;
                if (((arg1 + ((((u8) var_s5->unk3 >> 4) & 7) * 0xC))->unk78 + sp108->unkE4) >= (-spEC->unk10 - 0x1F4)) {
                    temp_s1 = var_s5 + 4;
                    temp_s2 = var_s5->unk0 & 0xF;
                    var_t0_2 = ((u8) var_s5->unk0 >> 4) & 3;
                    temp_t1 = *(sp104 + ((((u8) var_s5->unk3 >> 4) & 7) * 0xC));
                    temp_t2 = (sp104 + ((((u8) var_s5->unk3 >> 4) & 7) * 0xC))->unk4;
                    temp_v1 = (sp104 + ((((u8) var_s5->unk3 >> 4) & 7) * 0xC))->unk8;
                    switch (temp_s2) {              /* switch 1; irregular */
                    case 0:                         /* switch 1 */
                        sp88 = *((var_s5->unk4 * 8) + temp_fp) + temp_t1;
                        sp8A = ((var_s5->unk4 * 8) + temp_fp)->unk2 + temp_t2;
                        sp8C = ((var_s5->unk4 * 8) + temp_fp)->unk4 + temp_v1;
                        sp90 = *((temp_s1->unk2 * 8) + temp_fp) + temp_t1;
                        sp92 = ((temp_s1->unk2 * 8) + temp_fp)->unk2 + temp_t2;
                        sp94 = ((temp_s1->unk2 * 8) + temp_fp)->unk4 + temp_v1;
                        sp98 = *((temp_s1->unk4 * 8) + temp_fp) + temp_t1;
                        sp9A = ((temp_s1->unk4 * 8) + temp_fp)->unk2 + temp_t2;
                        sp110 = var_t0_2;
                        sp9C = ((temp_s1->unk4 * 8) + temp_fp)->unk4 + temp_v1;
                        func_801666BC(&sp88, &sp90, &sp98, temp_s3, temp_s3 + (var_t0_2 * 4), temp_s3 + (var_t0_2 * 8), &spC8, &spCC);
                        gteStoreSZ3(&spD0, &spD4, &spD8);
                        var_a0 = spD0;
                        if (var_a0 < spD4) {
                            var_a0 = spD4;
                        }
                        var_v1 = spD8;
                        if ((var_a0 >= var_v1) && (var_v1 = spD0, ((var_v1 < spD4) != 0))) {
                            spDC = spD4;
                        } else {
                            spDC = var_v1;
                        }
                        var_v0 = spDC >> spF4;
block_28:
                        spDC = var_v0;
                        func_801661D4(&spDC, spD4);
                        var_t0_2 = sp110;
                    default:                        /* switch 1 */
block_41:
                        if ((u32) (spDC - 1) < 0xFFFU) {
                            var_s0 = var_s5 + 0xC;
                            if (var_s5->unk0 & 0x40) {
                                temp_a0 = var_t0_2 * 4;
                                temp_s3_2 = var_s7 + 0xC + temp_a0;
                                var_s7->unkC = (s32) var_s5->unkC;
                                sp100 = (s32) (s16) (var_s5 + 0x10)->unk2;
                                *temp_s3_2 = var_s5->unk10;
                                temp_s3_3 = temp_s3_2 + temp_a0;
                                *temp_s3_3 = var_s5->unk14;
                                if (temp_s2 != 0) {
                                    *(temp_s3_3 + temp_a0) = (s32) (s16) (var_s5 + 0x14)->unk2;
                                }
                                var_s0 = var_s5 + 0x18;
                            }
                            temp_v1_2 = var_s5->unk2 & 3;
                            var_s3 = var_s7 + 4;
                            switch (temp_v1_2) {    /* switch 2; irregular */
                            case 0:                 /* switch 2 */
                                var_s7->unk4 = (s32) var_s0->unk0;
                                break;
                            case 2:                 /* switch 2 */
                                temp_s0_2 = var_s0 + 4;
                                temp_v1_3 = var_t0_2 * 4;
                                temp_s3_4 = var_s3 + temp_v1_3;
                                var_s7->unk4 = (s32) var_s0->unk0;
                                *temp_s3_4 = var_s0->unk4;
                                temp_s3_5 = temp_s3_4 + temp_v1_3;
                                *temp_s3_5 = temp_s0_2->unk4;
                                if (temp_s2 != 0) {
                                    *(temp_s3_5 + temp_v1_3) = (temp_s0_2 + 4)->unk4;
                                }
                                break;
                            case 1:                 /* switch 2 */
                                var_s2 = 1;
                                if (var_s5->unk0 & 0x40000) {
                                    var_s2 = 3;
                                    if (var_s5->unk0 & 1) {
                                        var_s2 = 4;
                                    }
                                }
                                var_s1 = 0;
                                temp_s6 = var_s0 + (var_s2 * 4);
                                if (var_s2 != 0) {
                                    var_a1 = var_s0;
                                    do {
                                        temp_a2 = var_s3;
                                        var_s0 += 4;
                                        var_s3 += var_t0_2 * 4;
                                        var_s1 += 1;
                                        func_801665B0(spE8 + (*temp_s6 * 8), var_a1, temp_a2);
                                        var_a1 = var_s0;
                                    } while (var_s1 < var_s2);
                                }
                                break;
                            default:                /* switch 2 */
                                var_v1_2 = 1;
                                if (var_s5->unk0 & 0x40000) {
                                    var_v1_2 = 3;
                                    if (var_s5->unk0 & 1) {
                                        var_v1_2 = 4;
                                    }
                                }
                                var_s4 = 3;
                                if (var_s5->unk0 & 1) {
                                    var_s4 = 4;
                                }
                                var_s2_2 = var_s0 + (var_v1_2 * 4);
                                var_s1_2 = 0;
                                if (var_s4 != 0) {
                                    do {
                                        func_801665B0(spE8 + (*var_s2_2 * 8), var_s0, var_s3);
                                        if (var_s5->unk0 & 0x40000) {
                                            var_s0 += 4;
                                        }
                                        var_s3 += var_t0_2 * 4;
                                        var_s1_2 += 1;
                                        var_s2_2 += 2;
                                    } while (var_s1_2 < var_s4);
                                }
                                break;
                            }
                            if (spF0->unk10 != 0) {
                                spDC = (s32) spF0->unk10;
                            }
                            if (var_s5->unk0 & 0x80) {
                                temp_s0_3 = var_s7 + ((var_s5->unk1 & 0xF) * 4);
                                temp_s0_3->unk4 = (s32) *(s32 *)0x1F800060;
                                temp_s7 = temp_s0_3 + 4;
                                temp_s7->unk4 = (s32) *(s32 *)0x1F800064;
                                temp_s7->unk8 = (s32) *(s32 *)0x1F800068;
                                AddPrim(arg0->unk0 + (spDC * 4), temp_s7);
                                var_s7->unk3 = (s8) (var_s5->unk1 & 0xF);
                                AddPrim(arg0->unk0 + (spDC * 4), (void *) var_s7);
                                temp_s0_3->unk10 = (s32) *(void *)0x1F800060;
                                temp_s7_2 = temp_s0_3 + 0x10;
                                temp_s7_2->unk4 = (s32) *(void *)0x1F800064;
                                temp_s7_2->unk8 = (s32) *(void *)0x1F800068;
                                temp_s7_2->unk8 = (s32) (var_s5 + (((u8) var_s5->unk1 >> 4) * 4))->unk-4;
                                var_s7 = (u32) (temp_s0_3 + 0x1C);
                                temp_s7_2->unk4 = (u8) sp100;
                                AddPrim(arg0->unk0 + (spDC * 4), temp_s7_2);
                            } else {
                                var_s7->unk3 = (s8) (var_s5->unk1 & 0xF);
                                AddPrim(arg0->unk0 + (spDC * 4), (void *) var_s7);
                                var_s7 = var_s7 + ((var_s5->unk1 & 0xF) * 4) + 4;
                            }
                        }
                        break;
                    case 3:                         /* switch 1 */
                        sp88 = *((var_s5->unk4 * 8) + temp_fp) + temp_t1;
                        sp8A = ((var_s5->unk4 * 8) + temp_fp)->unk2 + temp_t2;
                        sp8C = ((var_s5->unk4 * 8) + temp_fp)->unk4 + temp_v1;
                        sp90 = *((temp_s1->unk2 * 8) + temp_fp) + temp_t1;
                        sp92 = ((temp_s1->unk2 * 8) + temp_fp)->unk2 + temp_t2;
                        sp94 = ((temp_s1->unk2 * 8) + temp_fp)->unk4 + temp_v1;
                        sp98 = *((temp_s1->unk4 * 8) + temp_fp) + temp_t1;
                        sp9A = ((temp_s1->unk4 * 8) + temp_fp)->unk2 + temp_t2;
                        sp9C = ((temp_s1->unk4 * 8) + temp_fp)->unk4 + temp_v1;
                        spA0 = *((temp_s1->unk6 * 8) + temp_fp) + temp_t1;
                        spA2 = ((temp_s1->unk6 * 8) + temp_fp)->unk2 + temp_t2;
                        spA4 = ((temp_s1->unk6 * 8) + temp_fp)->unk4 + temp_v1;
                        sp110 = var_t0_2;
                        func_8016671C(&sp88, &sp90, &sp98, &spA0, temp_s3, temp_s3 + (var_t0_2 * 4), temp_s3 + (var_t0_2 * 8), temp_s3 + (var_t0_2 * 0xC), &spC8, &spCC);
                        gteStoreSZ4(&spD0, &spD4, &spD8, &spE0);
                        var_a0_2 = spD0;
                        if (var_a0_2 < spD4) {
                            var_a0_2 = spD4;
                        }
                        if (var_a0_2 < spD8) {
                            var_a0_2 = spD8;
                        }
                        var_v1_3 = spE0;
                        if (var_a0_2 >= var_v1_3) {
                            var_v0_2 = spD0 < spD8;
                            if (spD0 < spD4) {
                                var_v0_2 = spD4 < spD8;
                            }
                            var_v1_3 = spD8;
                            if (var_v0_2 == 0) {
                                var_v1_3 = spD4;
                                if (spD0 >= var_v1_3) {
                                    var_v1_3 = spD0;
                                }
                            }
                        }
                        var_v0 = var_v1_3 >> spF4;
                        goto block_28;
                    case 7:                         /* switch 1 */
                    case 5:                         /* switch 1 */
                        sp88 = *((var_s5->unk4 * 8) + temp_fp) + temp_t1;
                        sp8A = ((var_s5->unk4 * 8) + temp_fp)->unk2 + temp_t2;
                        sp110 = var_t0_2;
                        sp8C = ((var_s5->unk4 * 8) + temp_fp)->unk4 + temp_v1;
                        func_8016668C(&sp88, &spE4, &spC8, &spCC);
                        gteStoreSZ4(&spD0, &spD4, &spD8, &spE0);
                        spDC = spE0 >> spF4;
                        func_801661D4(&spDC);
                        if ((u32) (spDC - 1) < 0xFFFU) {
                            var_s0_2 = (s32) (temp_s1->unk2 * func_801797B4(0)) / spE0;
                            var_t0_2 = sp110;
                            var_a0_3 = (s32) (temp_s1->unk4 * func_801797B4(0)) / spE0;
                            if (var_s0_2 <= 0) {
                                var_s0_2 = 1;
                            }
                            if (var_a0_3 <= 0) {
                                var_a0_3 = 1;
                            }
                            if (var_s0_2 >= 0x1F5) {
                                var_s0_2 = 0x1F4;
                            }
                            if (var_a0_3 >= 0x1F5) {
                                var_a0_3 = 0x1F4;
                            }
                            var_s7->unk8 = spE4;
                            var_s7->unk8 = (s16) ((u16) var_s7->unk8 - var_s0_2);
                            temp_v1_4 = (var_t0_2 * 4) + temp_s3;
                            temp_s3->unk2 = (u16) (temp_s3->unk2 - var_a0_3);
                            temp_s0_4 = var_s0_2 * 2;
                            temp_v1_4->unk0 = (s16) ((u16) var_s7->unk8 + temp_s0_4);
                            temp_v1_4->unk2 = (u16) temp_s3->unk2;
                            temp_v1_5 = (var_t0_2 * 8) + temp_s3;
                            temp_v1_5->unk0 = (u16) var_s7->unk8;
                            temp_a0_2 = var_a0_3 * 2;
                            temp_v1_5->unk2 = (s16) (temp_s3->unk2 + temp_a0_2);
                            temp_v1_6 = (var_t0_2 * 0xC) + temp_s3;
                            temp_v1_6->unk0 = (s16) ((u16) var_s7->unk8 + temp_s0_4);
                            temp_v1_6->unk2 = (s16) (temp_s3->unk2 + temp_a0_2);
                            goto block_41;
                        }
                        break;
                    }
                }
                var_s5 += ((u8) var_s5->unk1 >> 4) * 4;
                spF8 += 1;
                goto loop_5;
            }
        } else {
            sp108 += 0x14;
            spFC += 1;
            goto loop_1;
        }
    }
    arg0->unk8 = var_s7;
}
