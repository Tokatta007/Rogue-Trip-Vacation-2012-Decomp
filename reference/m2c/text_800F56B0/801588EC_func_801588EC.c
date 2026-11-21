/* m2c reference for func_801588EC @ 801588EC (583 words). Generated; not compiled or validated. */
s32 func_801555B0(?, u8 *);                         /* extern */
? func_8015859C();                                  /* extern */
? func_801587CC(s32, s32);                          /* extern */
? func_80159208(u16 *, s32, ?, ?);                  /* extern */
? func_80159234(?, u16 *, ?, ?, s32, s32, s32);     /* extern */
extern s8 *D_801B4DC8;
extern u8 *D_801B4DD0;
extern s8 *D_801B4DD4;
extern s32 *D_801B4DD8;
extern s32 *D_801B4DDC;
extern s32 *D_801B4DE8;
extern s32 *D_801B4DF8;
extern s32 D_801B4E10;
extern u32 D_801E4730;
extern s16 D_801E4734;
extern s32 D_801E4738;
extern s32 D_801E473C;
extern s32 D_801E4740;
extern s32 D_801E4744;
extern s32 D_801E4748;
extern s32 D_801E474C;
extern s32 D_801E4750;
extern s32 D_801E4754;
extern s32 D_801E4758;
extern s32 D_801E4760;
extern u32 D_801E4764;
extern s32 D_801E4768;
extern u16 *D_801E476C;
extern u16 *D_801E4770;
extern s32 D_801E4774;
extern s32 D_801E47A8;
extern ? (*D_801E6BC4)(u16 *, ?);
extern u16 *D_801E6BC8;

void func_801588EC(void) {
    u16 sp22;
    s16 sp24;
    ? sp28;
    u8 sp30;
    ? temp_a1;
    s32 temp_v0_2;
    s32 var_t0;
    u16 *temp_v1;
    u16 *var_a1;
    u16 *var_v1;
    u32 temp_v0;
    u32 var_a0;
    u32 var_a0_2;
    u32 var_a0_3;
    u8 *temp_v1_2;

    if (D_801E474C != 1) {
        if ((D_801E4738 != 0) && (*D_801B4DE8 & 0x01000000)) {
            D_801E473C = 1;
            if (D_801E4760 != 0) {
                D_801E4750 += 1;
            }
            D_801B4E10 = 1;
            return;
        }
        if (func_801555B0(1, &sp30) != 5) {
            sp22 = (u16) sp30;
            sp24 = (s16) sp31;
            if (sp30 & 4) {
                D_801B4E10 = 3;
                return;
            }
            temp_v1 = D_801E4770 + (D_801E4754 << 5);
            D_801E6BC8 = temp_v1;
            if (*temp_v1 != 0) {
                if (D_801E4760 != 0) {
                    D_801E4750 += 1;
                }
                D_801B4E10 = 4;
                return;
            }
            *D_801B4DC8 = 0;
            *D_801B4DD4 = 0;
            *D_801B4DC8 = 0;
            *D_801B4DD4 = 0x80;
            *D_801B4DD8 = 0x20943;
            *D_801B4DDC = 0x1323;
            var_a0 = 0;
            if (D_801E47A8 == 0) {
                do {
                    temp_v1_2 = &sp28 + var_a0;
                    var_a0 += 1;
                    *temp_v1_2 = *D_801B4DD0;
                } while (var_a0 < 4U);
                var_a0_2 = 0;
                do {
                    var_a0_2 += 1;
                } while (var_a0_2 < 8U);
            }
            if (D_801E4760 != 0) {
                func_80159208(D_801E6BC8, D_801E4760 + (D_801E4750 << 0xB), 8, 0);
            } else {
                func_80159234(3, D_801E6BC8, 0, 8, 0x11000000, 0, 0);
            }
            if (*D_801B4DF8 & 0x01000000) {
                do {

                } while (*D_801B4DF8 & 0x01000000);
            }
            temp_a1 = (unaligned s32) sp28;
            D_801E6BC8->unk1C = temp_a1;
            *D_801B4DD8 = 0x20843;
            *D_801B4DDC = 0x1325;
            if ((D_801E4768 == 1) && (D_801E4744 != 0)) {
                if (D_801E4744 != D_801E6BC8->unk8) {
                    D_801E6BC8->unk0 = 0;
                    if (D_801E4760 != 0) {
                        D_801E4750 += 1;
                    }
                } else {
                    D_801E4768 = 0;
                    goto block_30;
                }
            } else {
block_30:
                if ((D_801E6BC8->unk0 != 0x160) || ((((u16) D_801E6BC8->unk2 >> 0xA) & 0x1F) != D_801E4748)) {
                    if (D_801E4760 != 0) {
                        D_801E4750 = 0;
                    }
                    D_801B4E10 = 5;
                    D_801E6BC8->unk0 = 0;
                    return;
                }
                if ((D_801E4734 != D_801E6BC8->unk4) || ((D_801E4730 != 0) && (D_801E4730 != D_801E6BC8->unk8))) {
                    D_801E4730 = 0;
                    D_801E4734 = 0;
                    func_801587CC(D_801E4758, D_801E4754 - D_801E4758);
                    D_801E4754 = D_801E4758;
                    D_801E6BC8->unk0 = 0;
                    if (D_801E4760 != 0) {
                        D_801E4750 += 1;
                    }
                    D_801B4E10 = 6;
                    return;
                }
                if (D_801E6BC8->unk4 == 0) {
                    D_801E4734 = 0;
                    temp_v0 = D_801E6BC8->unk8 & 0xFFFF;
                    D_801E4730 = temp_v0;
                    if ((D_801E4764 != 0) && (temp_v0 >= (u32) D_801E4764)) {
                        D_801E4730 = 0;
                        D_801E4734 = 0;
                        func_801587CC(D_801E4758, D_801E4754 - D_801E4758);
                        D_801E4754 = D_801E4758;
                        D_801E6BC8->unk0 = 0;
                        D_801E4768 = 1;
                        if (D_801E6BC4 != NULL) {
                            D_801E6BC4();
                        }
                        if (D_801E4760 != 0) {
                            D_801E4750 += 1;
                        }
                        D_801B4E10 = 7;
                        return;
                    }
                    if ((u32) ((D_801E4774 - D_801E4754) - 1) < (u16) D_801E6BC8->unk6) {
                        if (D_801E4764 == 0) {
                            D_801E6BC8->unk0 = 1;
                            D_801E4768 = 1;
                            if (D_801E6BC4 != NULL) {
                                D_801E6BC4(D_801E6BC8, temp_a1);
                            }
                            if (D_801E4760 != 0) {
                                D_801E4750 += 1;
                            }
                            D_801B4E10 = 8;
                            return;
                        }
                        if ((s16) *D_801E4770 != 0) {
                            D_801E6BC8->unk0 = 0;
                            if (D_801E4760 != 0) {
                                D_801E4750 += 1;
                            }
                            D_801B4E10 = 9;
                            return;
                        }
                        D_801E6BC8->unk0 = 1;
                        var_a1 = D_801E4770;
                        var_v1 = D_801E6BC8;
                        var_a0_3 = 0;
                        D_801E4754 = 0;
                        do {
                            temp_v0_2 = *var_v1;
                            var_v1 += 4;
                            var_a0_3 += 1;
                            *var_a1 = temp_v0_2;
                            var_a1 += 4;
                        } while (var_a0_3 < 8U);
                        D_801E6BC8 = D_801E4770;
                        goto block_64;
                    }
block_64:
                    D_801E4758 = D_801E4754;
                    goto block_65;
                }
block_65:
                D_801B4E10 = 0xA;
                D_801E4734 = (u16) D_801E4734 + 1;
                D_801E476C = D_801E4770 + (D_801E4774 << 5) + (D_801E4754 * 0x7E0);
                var_t0 = 0x11000000;
                if (D_801E4738 != 0) {
                    *D_801B4DD8 = 0x20943;
                    *D_801B4DDC = 0x1323;
                } else {
                    var_t0 = 0x11400100;
                    *D_801B4DD8 = 0x21020843;
                }
                if ((D_801E6BC8->unk6 - 1) == D_801E6BC8->unk4) {
                    D_801E474C = 1;
                    if (D_801E4760 != 0) {
                        func_80159208(D_801E476C, D_801E4760 + (D_801E4750 << 0xB) + 0x20, 0x1F8, 1);
                        D_801E4750 += 1;
                    } else {
                        func_80159234(3, D_801E476C, 0, 0x1F8, var_t0, 1, 0);
                    }
                    D_801E4734 = 0;
                    D_801E4730 = 0;
                    D_801E4748 = D_801E4740;
                } else if (D_801E4760 != 0) {
                    func_80159208(D_801E476C, D_801E4760 + (D_801E4750 << 0xB) + 0x20, 0x1F8, 0);
                    D_801E4750 += 1;
                } else {
                    func_80159234(3, D_801E476C, 0, 0x1F8, var_t0, 0, 0);
                }
                *D_801B4DDC = 0x1325;
                D_801E6BC8->unk0 = 3;
                D_801E4754 += 1;
                if ((D_801E4760 != 0) && (D_801E474C != 0)) {
                    func_8015859C();
                }
            }
        }
    }
}
