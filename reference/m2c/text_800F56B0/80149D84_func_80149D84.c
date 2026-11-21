/* m2c reference for func_80149D84 @ 80149D84 (368 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, ?, s32, ?, s32, s32);       /* extern */
? func_80124FC8(void *, VECTOR *, void *);          /* extern */
? func_801253C8(s32 *, VECTOR *);                   /* extern */
? func_80125464(s32, s32);                          /* extern */
? func_801254DC(s32 *, ?, ?, ?);                    /* extern */
? func_80130A58(void *);                            /* extern */
? func_801493A0(void *, void *);                    /* extern */
s32 func_8014A5F8(void *, void *);                  /* extern */
? func_8014D1F8(void *, void *);                    /* extern */
? func_8014D260(void *, void *);                    /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_80164274(void *, s32);                       /* extern */
? func_8016B504(void *, s32, void *);               /* extern */
? func_8016B574(void *, s32, void *);               /* extern */
s16 func_80178A1C();                                /* extern */
static void *D_801C34EC = NULL;
static s32 D_801C35D8 = 0;

s32 func_80149D84(void *arg0, s32 arg1, void *arg2, VECTOR *arg3, s32 arg4, s32 arg5) {
    s32 sp18;
    s32 sp20;
    VECTOR sp28;
    s16 temp_s7;
    s32 *var_a1;
    s32 temp_s3;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    void *temp_a1;
    void *temp_s1;
    void *var_a0_2;

    var_s0 = 0;
    if ((D_801C34EC->unk11D2C == 0) || (var_v0 = 0, (arg1 != 7))) {
        temp_s7 = func_80178A1C();
        temp_s3 = arg0->unk1750;
        if (temp_s3 != -1) {
            func_8016B574(arg0 + 0x1298, temp_s3, arg0 + 0x1750);
            func_8016B504(arg0 + 0x10B8, temp_s3, arg0 + 0x174C);
            temp_s1 = arg0 + ((temp_s3 * 0x68) + 0x10);
            temp_s1->unk20 = arg1;
            temp_s1->unk1C = arg2;
            temp_s1->unk18 = arg4;
            temp_s1->unk2C = -1;
            temp_s1->unk5E = 0U;
            temp_s1->unk64 = 0;
            temp_s1->unk0 = 0;
            temp_s1->unk4 = 0;
            temp_s1->unk8 = 0;
            temp_s1->unk61 = (u8) arg5;
            if (temp_s1->unk18 != 0) {
                func_8014D1F8(arg0, temp_s1);
            }
            var_a0 = 0;
            temp_s1->unk4C = 0;
            temp_s1->unk5C = 0;
            if ((temp_s1->unk20 == 3) || (temp_s1->unk20 == 0xE) || (temp_s1->unk20 == 0xB)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                temp_s1->unk32 = 0U;
                var_a0_2 = arg2 + 0x1E4;
            } else {
                temp_s1->unk32 = 0x14U;
                var_a0_2 = arg2 + 0x1E4;
            }
            temp_s1->unk58 = (s16) temp_s3;
            temp_s1->unk5A = (s16) D_801C35D8;
            D_801C35D8 += 1;
            func_80124FC8(var_a0_2, arg2 + 0x244, temp_s1->unk14 + 0x1C);
            func_80125464(temp_s1->unk14 + 0x14, arg2->unk738 + 0x14);
            if (arg2->unkF4 != 0) {
                temp_a1 = temp_s1->unk14;
                temp_a1->unk14 = (u16) (temp_a1->unk14 - (arg2->unk6F0 + arg2->unk704));
            }
            if (arg2->unkBA != 0) {
                temp_s1->unk14->unk14 = (u16) -(s32) temp_s1->unk14->unk14;
                temp_s1->unk14->unk18 = (u16) (temp_s1->unk14->unk18 + 0x800);
            }
            func_8015A05C(temp_s1->unk14 + 0x14, temp_s1->unk14 + 0x28);
            if (arg2 != NULL) {
                if (temp_s1->unk20 == 0xF) {
                    func_801253C8(&sp18, arg3);
                    var_v0_2 = -0x18;
                    if (arg0->unk1760 == 0) {
                        var_v0_2 = 0x18;
                    }
                    sp18 = var_v0_2;
                    sp20 += 0x10;
                    mathMulTransVec(temp_s1->unk14 + 0x28, (VECTOR *) &sp18, &sp28);
                    func_80124FC8(temp_s1->unk14 + 0x1C, &sp28, temp_s1->unk14 + 0x1C);
                    func_8011BC6C(temp_s1->unk14 + 0x1C, 0, 7, 0x23, 0, 0);
                } else {
                    if (temp_s1->unk20 == 0xB) {
                        func_801254DC(&sp18, 0, -0x78, -0x10);
                        var_a1 = &sp18;
                    } else {
                        var_a1 = &arg3->vx;
                    }
                    mathMulTransVec(temp_s1->unk14 + 0x28, (VECTOR *) var_a1, &sp28);
                    func_80124FC8(temp_s1->unk14 + 0x1C, &sp28, temp_s1->unk14 + 0x1C);
                }
                temp_s1->unk50 = (s16) arg2->unk7C0;
                temp_s1->unk52 = (s16) arg2->unk7C4;
            }
            temp_s1->unk5F = 0;
            temp_s1->unk60 = 0;
            if (temp_s1->unk5E != 0) {
                var_v1 = 0;
                if ((temp_s1->unk61 == 0) && (arg2 != NULL)) {
                    var_v1 = arg2->unk7B8 == 2;
                }
                if ((var_v1 != 0) && (arg2->unk82D != 0)) {
                    temp_s1->unk60 = 1;
                    temp_s1->unk5F = 1;
                }
            }
            var_s0 = func_8014A5F8(arg0, temp_s1);
            if (arg2 != NULL) {
                var_v0_3 = var_s0 & 0xFF;
                if (temp_s1->unk20 != 0xB) {
                    var_v0_3 = var_s0 & 0xFF;
                    if (arg2->unk20C > 0) {
                        temp_s1->unk32 = (u16) (temp_s1->unk32 + ((s32) ((s32) arg2->unk20C / temp_s7) >> 6));
                        goto block_37;
                    }
                }
            } else {
block_37:
                var_v0_3 = var_s0 & 0xFF;
            }
            var_a0_3 = 0;
            if (var_v0_3 != 0) {
                if (temp_s1->unk20 != 3) {
                    var_a0_3 = (u32) (temp_s1->unk20 ^ 0xE) > 0U;
                }
                var_a0_4 = 0;
                if (var_a0_3 != 0) {
                    if (temp_s1->unk20 == 8) {
                        var_a0_4 = temp_s1->unk61 == 2;
                    }
                    if (var_a0_4 != 0) {
                        var_a1_2 = arg0->unk1738;
                    } else {
                        var_a1_2 = (arg0 + ((temp_s1->unk61 * 4) + (temp_s1->unk20 * 8)))->unk1658;
                    }
                    func_80164274(temp_s1->unk14, var_a1_2);
                    if (temp_s1->unk14->unk0 != 0) {
                        temp_s1->unk14->unkC = 1;
                    }
                }
                if (temp_s1->unk20 == 6) {
                    func_8011BC6C(temp_s1->unk14 + 0x1C, 0, ((s32) temp_s1->unk1C->unk280 >> 1) & 0xFFFF, 0xD, 0, 0);
                }
                func_8014D260(arg0, temp_s1);
                return var_s0 & 0xFF;
            }
            func_8016B574(arg0 + 0x10B8, temp_s3, arg0 + 0x174C);
            func_8016B504(arg0 + 0x1298, temp_s3, arg0 + 0x1750);
            if (arg2 != NULL) {
                func_801493A0(arg2, temp_s1);
                var_a0_5 = 0;
                if ((temp_s1->unk1C != NULL) && (temp_s1->unk20 == 7)) {
                    var_a0_5 = temp_s1->unk1C->unk7B8 == 1;
                }
                var_v0 = var_s0 & 0xFF;
                if (var_a0_5 != 0) {
                    func_80130A58(temp_s1->unk1C);
                    goto block_58;
                }
            } else {
                goto block_58;
            }
            /* Duplicate return node #59. Try simplifying control flow for better match */
            return var_v0;
        }
block_58:
        var_v0 = var_s0 & 0xFF;
        /* Duplicate return node #59. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
