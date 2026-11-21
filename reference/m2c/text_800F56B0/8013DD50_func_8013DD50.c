/* m2c reference for func_8013DD50 @ 8013DD50 (352 words). Generated; not compiled or validated. */
? func_80124FC8(VECTOR *, VECTOR *, void *);        /* extern */
? func_80125050(VECTOR *, VECTOR *, ? *);           /* extern */
s32 func_801250C8(? *, ?);                          /* extern */
extern ? D_801DFF60;
extern ? D_801DFF6C;
extern ? D_801DFF78;
extern ? D_801DFF84;
extern ? D_801E3930;
extern ? D_801E3AC0;
extern ? D_801E3C50;
extern ? D_801E3DE0;
extern ? D_801E3EB0;

s32 func_8013DD50(void *arg0, VECTOR *arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    ? sp20;
    VECTOR sp30;
    ? *var_a1;
    ? *var_a1_3;
    ? *var_s0;
    ? *var_s0_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_s3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 *temp_v0_2;

    var_s3 = 0;
    if (arg0->unk20C == 0) {
        if (*((s16) arg1->unk48 + &D_801E3EB0) != 0) {
            var_s3 = 1;
            var_v1 = 0;
            if ((arg1->unk50 == 0) || (arg1->unk51 == 0)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                if (arg1->unk4F != 0) {
                    var_a1 = &D_801DFF84;
                } else {
                    var_a1 = &D_801DFF6C;
                }
                func_80125050(arg1, ((s16) arg1->unk48 * 0x30) + var_a1, &sp20);
                if (func_801250C8(&sp20, 0) < 0x50) {
                    sp10 = 0;
                    sp14 = 8;
                    sp18 = 0;
                    mathMulTransVec(arg0->unk3C + 0x28, (VECTOR *) &sp10, &sp30);
                    var_v1_2 = 0;
                    if (((arg1->unk4F != 0) && (arg1->unk50 == 0)) || ((arg1->unk4F == 0) && (arg1->unk51 != 0))) {
                        var_v1_2 = 1;
                    }
                    if (var_v1_2 != 0) {
                        if (*(((s32) (arg1->unk48 << 0x10) >> 0xF) + &D_801E3930) < (s16) arg0->unk70E) {
                            var_s0 = &D_801DFF60;
                            goto block_29;
                        }
                        if (arg1->unk51 == 0) {
                            var_s3 = 0;
                        }
                        arg1->unk50 = 1U;
                    } else {
                        var_v1_3 = 0;
                        if (((arg1->unk4F == 0) && (arg1->unk51 == 0)) || ((arg1->unk4F != 0) && (arg1->unk50 != 0))) {
                            var_v1_3 = 1;
                        }
                        if (var_v1_3 != 0) {
                            if ((s16) arg0->unk70E < *(((s32) (arg1->unk48 << 0x10) >> 0xF) + &D_801E3930)) {
                                var_s0 = &D_801DFF78;
block_29:
                                func_80125050(&sp30, arg1, ((s16) arg1->unk48 * 0x30) + var_s0);
                                func_80124FC8(&sp30, arg1, ((s16) arg1->unk48 * 0x30) + (var_s0 + 0xC));
                            } else {
                                if (arg1->unk50 == 0) {
                                    var_s3 = 0;
                                }
                                arg1->unk51 = 1U;
                            }
                        }
                    }
                    *(((s32) (arg1->unk48 << 0x10) >> 0xF) + &D_801E3930) = arg0->unk70E;
                }
            }
        } else {
            arg1->unk4E = 0;
            arg1->unk50 = 0U;
            arg1->unk51 = 0U;
        }
    } else {
        var_a1_2 = 0;
        if (*((s16) arg1->unk48 + &D_801E3EB0) == 0) {
            if (*(((s32) (arg1->unk48 << 0x10) >> 0xF) + &D_801E3C50) == (s16) arg1->unk4A) {
                var_a1_2 = *((s16) arg1->unk48 + &D_801E3DE0) == (arg0->unk20C > 0);
            }
            if (var_a1_2 != 0) {
                if (arg0->unk20C > 0) {
                    var_a1_3 = &D_801DFF84;
                } else {
                    var_a1_3 = &D_801DFF6C;
                }
                func_80125050(arg1, ((s16) arg1->unk48 * 0x30) + var_a1_3, &sp20);
                temp_v0 = func_801250C8(&sp20, 0);
                if (temp_v0 >= 0x50) {
                    if (temp_v0 < 0xA0) {
                        var_a0 = (s16) arg0->unk738->unk18 - *(((s32) (arg1->unk48 << 0x10) >> 0xF) + &D_801E3930);
                        temp_v0_2 = ((s32) (arg1->unk48 << 0x10) >> 0xF) + &D_801E3AC0;
                        if (var_a0 < 0) {
                            var_a0 = -var_a0;
                        }
                        *temp_v0_2 += var_a0;
                        if (*(((s32) (arg1->unk48 << 0x10) >> 0xF) + &D_801E3AC0) < 0x44) {
                            goto block_48;
                        }
                    }
                } else {
block_48:
                    var_s3 = 1;
                }
            }
        }
    }
    if (var_s3 != 0) {
        if (arg0->unk20C != 0) {
            sp14 = 0;
            sp18 = 0;
            sp10 = (s32) (arg0->unk170 << 0x10) >> 0x11;
            mathMulTransVec(arg0 + 0x1A4, (VECTOR *) &sp10, &sp30);
            if (arg0->unk20C > 0) {
                var_s0_2 = &D_801DFF60;
            } else {
                var_s0_2 = &D_801DFF78;
            }
            func_80125050(&sp30, arg1, ((s16) arg1->unk48 * 0x30) + var_s0_2);
            func_80124FC8(&sp30, arg1, ((s16) arg1->unk48 * 0x30) + (var_s0_2 + 0xC));
            *(((s32) (arg1->unk48 << 0x10) >> 0xF) + &D_801E3930) = arg0->unk738->unk18;
        }
    }
    return var_s3;
}
