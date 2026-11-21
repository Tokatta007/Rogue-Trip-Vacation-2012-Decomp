/* m2c reference for func_8012C64C @ 8012C64C (428 words). Generated; not compiled or validated. */
s32 func_80123940(s32, void *, s32, void *, s16 *); /* extern */
? func_80124FC8(void *, VECTOR *, ? *);             /* extern */
? func_80125050(? *, s32, VECTOR *);                /* extern */
s32 func_801250C8(void *, s32);                     /* extern */
? func_80125130(VECTOR *, ? *);                     /* extern */
? func_801253F4(s16 *, ? *);                        /* extern */
? func_80125464(s16 *, void *);                     /* extern */
? func_801254DC(VECTOR *, s32, ?, s32);             /* extern */
? func_80125518(s16 *, ?, ?, s16);                  /* extern */
? func_8012B878(void *);                            /* extern */
s32 func_80149D84(s32, s32, void *, ? *, s32, s32); /* extern */
s32 func_8014A344(s32, s32, ? *, s16 *, s32, s32, s32, s32); /* extern */
extern ? D_801CB950;
static s32 D_801C34EC = 0;

u16 func_8012C64C(void *arg0, u8 arg1) {
    VECTOR sp20;
    VECTOR sp30;
    ? sp40;
    s16 sp50;
    u16 sp52;
    s16 sp54;
    u8 sp58;
    u16 sp60;
    s32 sp68;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v1_10;
    s32 var_fp;
    s32 var_fp_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_s7;
    s32 var_v0;
    s8 temp_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    sp58 = arg1;
    temp_a1 = arg1 - 1;
    sp60 = 0;
    switch (temp_a1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        var_s4 = 0;
        break;
    case 2:                                         /* switch 1 */
        var_s4 = 2;
        break;
    case 3:                                         /* switch 1 */
        var_s4 = 3;
        break;
    case 4:                                         /* switch 1 */
        var_s4 = 4;
        break;
    case 5:                                         /* switch 1 */
        var_s4 = 5;
        break;
    case 6:                                         /* switch 1 */
        var_s4 = 6;
        break;
    case 7:                                         /* switch 1 */
        var_s4 = 7;
        break;
    default:                                        /* switch 1 */
        var_s4 = 1;
        break;
    }
    temp_v1 = arg0->unk0;
    if (temp_v1->unkBA != 0) {
        sp50 = -(s16) temp_v1->unk738->unk14;
        sp52 = arg0->unk0->unk738->unk16;
        sp54 = arg0->unk0->unk738->unk18 + 0x800;
    } else {
        func_80125464(&sp50, temp_v1->unk738 + 0x14);
    }
    var_s7 = 0;
    temp_s5 = func_80123940(D_801C34EC, arg0->unk0, var_s4, arg0->unk0 + 0x1E4, &sp50);
    if (((arg0 + (s8) sp58)->unk4C != 0) || (arg0->unk0->unk1A1 != 0)) {
        var_s7 = 1;
    }
    switch (var_s4) {                               /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_s0 = 0;
        if (arg0->unk3F != 0) {
            sp68 = 3;
            var_s7 = 1;
        } else {
            sp68 = 1;
        }
        var_s2 = 0;
        if (temp_s5 != 0) {
            var_s2 = 0;
            if (func_801250C8(arg0->unk0->unk738 + 0x1C, temp_s5 + 0x1C) >= 0x641) {
                var_s0 = 1;
            }
        }
        temp_s0 = var_s0 & 0xFF;
        var_fp = 0x10;
loop_24:
        if (var_s2 < sp68) {
            D_801CB950.unk0 = -0x40;
            D_801CB950.unk4 = (s32) (arg0->unk0->unk718 + (var_s2 << 5));
            temp_s6 = var_s2 << 6;
            D_801CB950.unk8 = (s32) (arg0->unk0->unk71C + temp_s6);
            if (temp_s0 != 0) {
                temp_v1_2 = arg0->unk0->unk738;
                temp_v1_2->unk18 = (u16) (temp_v1_2->unk18 - 0xE3);
            }
            func_80149D84(D_801C34EC + 0x496C, var_s4, arg0->unk0, &D_801CB950, temp_s5, var_s7);
            temp_v1_3 = arg0->unk0;
            temp_v1_3->unk7E0 = (s32) (temp_v1_3->unk7E0 + 1);
            D_801CB950.unk0 = 0;
            D_801CB950.unk8 = (s32) (arg0->unk0->unk71C + var_fp);
            if (temp_s0 != 0) {
                temp_v1_4 = arg0->unk0->unk738;
                temp_v1_4->unk18 = (u16) (temp_v1_4->unk18 + 0xE3);
            }
            func_80149D84(D_801C34EC + 0x496C, var_s4, arg0->unk0, &D_801CB950, temp_s5, var_s7);
            temp_v1_5 = arg0->unk0;
            temp_v1_5->unk7E0 = (s32) (temp_v1_5->unk7E0 + 1);
            D_801CB950.unk0 = 0x40;
            D_801CB950.unk8 = (s32) (arg0->unk0->unk71C + temp_s6);
            if (temp_s0 != 0) {
                temp_v1_6 = arg0->unk0->unk738;
                temp_v1_6->unk18 = (u16) (temp_v1_6->unk18 + 0xE3);
            }
            sp60 = func_80149D84(D_801C34EC + 0x496C, var_s4, arg0->unk0, &D_801CB950, temp_s5, var_s7) & 0xFF;
            if (temp_s0 != 0) {
                temp_v1_7 = arg0->unk0->unk738;
                temp_v1_7->unk18 = (u16) (temp_v1_7->unk18 - 0xE3);
            }
            var_fp += 0x40;
            var_s2 += 1;
            goto loop_24;
        }
block_49:
        temp_v1_8 = arg0 + (s8) sp58;
        if (temp_v1_8->unk4C != 0) {
            temp_v1_8->unk4C = (u8) (temp_v1_8->unk4C - 1);
        }
block_51:
        temp_v1_9 = arg0->unk0;
        temp_v1_9->unk7E0 = (s32) (temp_v1_9->unk7E0 + 1);
        break;
    case 3:                                         /* switch 2 */
        if (arg0->unk3B == 0) {
            temp_a2 = arg0->unk0;
            temp_a0 = arg0 + (s8) sp58;
            sp60 = func_80149D84(D_801C34EC + 0x496C, 3, temp_a2, temp_a2 + 0x714, temp_s5, var_s7) & 0xFF;
            if (temp_a0->unk4C != 0) {
                temp_a0->unk4C = (u8) (temp_a0->unk4C - 1);
            }
            arg0->unk3B = 1U;
            goto block_51;
        }
        break;
    case 4:                                         /* switch 2 */
        var_fp_2 = 0xA;
        if (arg0->unk3D != 0) {
            var_s7 = 1;
        } else {
            var_fp_2 = 3;
        }
        var_s2_2 = 0;
        var_v0 = var_fp_2 > 0;
loop_44:
        if (var_v0 != 0) {
            temp_s0_2 = ((rand() & 0xFF) - 0x7F) * 8;
            func_801254DC(&sp20, temp_s0_2, 0x640, ((rand() & 0x1FF) + 0xC8) * 8);
            mathMulTransVec(arg0->unk0->unk738 + 0x28, &sp20, &sp30);
            func_80124FC8(arg0->unk0->unk738 + 0x1C, &sp30, &D_801CB950);
            if (temp_s5 != 0) {
                func_80125050(&D_801CB950, temp_s5 + 0x1C, &sp30);
                func_80125130(&sp30, &sp40);
                func_801253F4(&sp50, &sp40);
            } else {
                func_80125518(&sp50, 0x155, 0, (s16) arg0->unk0->unk738->unk18);
            }
            temp_v0 = arg0->unk0;
            temp_a0_2 = arg0->unk0;
            var_s2_2 += 1;
            sp60 = func_8014A344(D_801C34EC + 0x496C, var_s4, &D_801CB950, &sp50, temp_s5, temp_v0->unk7C0, temp_v0->unk7C4, var_s7) & 0xFF;
            temp_a0_2->unk7E0 = (s32) (temp_a0_2->unk7E0 + 1);
            var_v0 = var_s2_2 < var_fp_2;
            goto loop_44;
        }
        goto block_49;
    default:                                        /* switch 2 */
        temp_a2_2 = arg0->unk0;
        temp_a0_3 = arg0 + (s8) sp58;
        sp60 = func_80149D84(D_801C34EC + 0x496C, var_s4, temp_a2_2, temp_a2_2 + 0x714, temp_s5, var_s7) & 0xFF;
        if (temp_a0_3->unk4C != 0) {
            temp_a0_3->unk4C = (u8) (temp_a0_3->unk4C - 1);
            if (var_s4 == 7) {
                temp_v1_10 = arg0->unk0->unk7B8;
                if (temp_v1_10 == 1) {
                    arg0->unk3C = (s8) temp_v1_10;
                }
            }
        }
        break;
    }
    func_8012B878(arg0);
    return sp60;
}
