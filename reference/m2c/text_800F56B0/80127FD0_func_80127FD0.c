/* m2c reference for func_80127FD0 @ 80127FD0 (725 words). Generated; not compiled or validated. */
? func_8010FEB8(void *, s32);                       /* extern */
? func_8011B994(s32);                               /* extern */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
s32 func_801233B4(void *, s16);                     /* extern */
s32 func_801244FC(void *, s32);                     /* extern */
s32 func_801250C8(void *, void *);                  /* extern */
? func_80125130(void *, s32 *);                     /* extern */
? func_801253C8(void *, void *);                    /* extern */
? func_801254DC(s32, ?, ?, ?);                      /* extern */
? func_80128E80(void *, void *);                    /* extern */
? func_80128EF0(void *);                            /* extern */
? func_8012EEE8(void *, ?, s32, ?);                 /* extern */
? func_80133B08(void *);                            /* extern */
? func_8013F050(void *);                            /* extern */
? func_8013FD30(void *, ?, ?, ?);                   /* extern */
? func_80144BC8(void *, ?, ?);                      /* extern */
s32 func_8015959C(s32);                             /* extern */
? func_8016FD98(void *, void *, ?);                 /* extern */
s16 func_80178A1C(s16);                             /* extern */
s32 func_80178A70(s32);                             /* extern */
? func_801F7F00(void *);                            /* extern */
static void *D_801C34EC = NULL;

void func_80127FD0(void *arg0) {
    s32 sp18;
    ? var_a1;
    s16 var_a0_5;
    s16 var_v1_7;
    s32 temp_a2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_8;
    s32 var_v1_9;
    u16 temp_v1;
    u8 temp_t0;
    void *temp_s0;
    void *temp_s2;
    void *var_a0_4;
    void *var_a0_6;

    var_s3 = 0;
    temp_t0 = arg0->unk91;
    arg0->unk90 = 0U;
    arg0->unk91 = 1U;
    temp_v1 = arg0->unk6C4;
    arg0->unk6C4 = 0x258U;
    func_801254DC(arg0 + 0x46C, 0, 0, 0);
loop_1:
    var_a0 = 0;
    if (var_s3 < 4) {
        temp_s2 = arg0 + ((var_s3 << 5) + 0x2C8);
        temp_s0 = arg0 + ((var_s3 * 0x54) + 0x544);
        if ((temp_s2->unk0 != 0) && (arg0->unkA0 != 0)) {
            var_a0 = (u32) ((s16) temp_s2->unk1E ^ 0x460) > 0U;
        }
        if ((var_a0 != 0) && (arg0->unk8C == 0)) {
            arg0->unk10C = -1;
            arg0->unk8C = 1U;
            D_801C34EC->unk1275C = 0xB4;
            func_80144BC8(arg0, 0, 0xB4);
        }
        if ((u32) (temp_s2->unk1E - 0x190) < 0x13U) {
            temp_s2->unk0 = 0;
        }
        var_v1 = 0;
        if ((temp_s2->unk0 != 0) && (temp_s2->unkC < -0x960)) {
            var_v1 = (u32) ((s16) temp_s2->unk1E ^ 0x460) > 0U;
        }
        if (var_v1 != 0) {
            if ((u32) (temp_s2->unk1E - 0x334) < 9U) {
                arg0->unk9F = 1U;
            }
            temp_s0->unk52 = 0U;
            temp_s0->unk4A = (u16) temp_s2->unk18;
            var_a0_2 = 0;
            arg0->unk6C6 = (u16) temp_s2->unk1E;
            arg0->unk6BC = 0;
            if (((s16) temp_s0->unk4A == 2) || (arg0->unk8A != 0)) {
                var_a0_2 = 1;
            }
            if ((var_a0_2 != 0) && (arg0->unk88 != 0)) {
                arg0->unk88 = 0U;
                var_v1_2 = 0;
                if (arg0->unk8A == 0) {
                    var_v1_2 = (func_80178A70(var_a0_2) & 7) == 0;
                }
                if (var_v1_2 != 0) {
                    func_8011BC6C(arg0 + 0x1E4, 0, 0x14, 0xD, 0, 0);
                }
                func_8011B994(arg0->unk740);
            }
            temp_s0->unk3E = (u16) (temp_s0->unk8 + ((s32) (-temp_s2->unkC * temp_s2->unk10) >> 0xC));
            if (temp_s2->unk10 >= 4) {
                temp_s0->unk0 = (s32) (temp_s0->unk0 + ((s32) (-temp_s2->unk4 * temp_s2->unk10) >> 0xC));
                temp_s0->unk4 = (s32) (temp_s0->unk4 + ((s32) (-temp_s2->unk8 * temp_s2->unk10) >> 0xC));
                temp_s0->unk8 = (s32) (s16) temp_s0->unk3E;
            }
            if (temp_s0->unk4C != 0) {
                if (temp_t0 & 0xFF) {
                    func_80125130(temp_s2 + 4, &sp18);
                    sp18 -= 0x400;
                    arg0->unk1FC = (s32) ((s32) (func_8015959C(sp20 - arg0->unk204) * sp18) >> 0xC);
                    if (arg0->unk7B8 == 1) {
                        var_a2 = (s16) temp_v1 * 2;
                        if ((s16) temp_v1 >= 0x81) {
                            var_a2 = 0xFF;
                        }
                        temp_a2 = var_a2 & 0xFF;
                        if (((s16) arg0->unk508 >= 0x3D) && (temp_a2 != 0)) {
                            func_8012EEE8(arg0, 0, temp_a2, 0xF);
                        }
                    }
                }
                if ((s16) temp_s0->unk34 >= 0x3D) {
                    var_v0 = arg0->unk6B4;
                    var_a1 = 4;
                } else if ((s16) temp_s0->unk34 >= 0x1F) {
                    var_v0 = arg0->unk6B4;
                    var_a1 = 3;
                } else if ((s16) temp_s0->unk34 >= 0x10) {
                    var_v0 = arg0->unk6B4;
                    var_a1 = 2;
                } else {
                    var_a1 = 1;
                    var_v0 = ((s16) temp_s0->unk34 * arg0->unk6B4) / 15;
                }
                temp_s0->unk42 = (u16) var_v0;
                func_8013FD30(arg0, var_a1, 2, 1);
                if (arg0->unk6B4 < (s16) temp_s0->unk42) {
                    temp_s0->unk42 = (u16) arg0->unk6B4;
                }
                temp_s0->unk44 = (u16) temp_s0->unk42;
                temp_s0->unk4D = 1;
                func_80128E80(arg0, temp_s0);
                temp_s0->unk4C = 0U;
            } else if ((var_s3 == 0) && ((arg0->unk6F8 << 0x10) <= 0)) {
                func_8013FD30(arg0, 1, 2, 0);
            }
            if ((u32) (temp_s2->unk1E - 0x10) < 0x110U) {
                func_8010FEB8(arg0, func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, (s16) temp_s2->unk1C)));
            }
            if (arg0->unk7A4 < arg0->unkC8) {
                func_801253C8(temp_s0 + 0x18, temp_s0);
            }
        } else {
            var_a0_3 = 0;
            if ((temp_s2->unk0 != 0) && ((s16) temp_s2->unk1E != 0x460)) {
                var_a0_3 = arg0->unk19C != 0;
            }
            if (var_a0_3 != 0) {
                temp_s0->unk52 = 1U;
                if (temp_s0->unk4C != 0) {
                    func_80128E80(arg0, temp_s0);
                    temp_s0->unk34 = 0U;
                    var_a1_2 = 0;
                    var_a0_4 = arg0;
                    do {
                        if (var_s3 != var_a1_2) {
                            var_v1_3 = 0;
                            if (var_a0_4->unk596 != 0) {
                                var_v1_3 = (temp_s0->unk34 << 0x10) < (var_a0_4->unk578 << 0x10);
                            }
                            if (var_v1_3 != 0) {
                                temp_s0->unk34 = (u16) var_a0_4->unk578;
                            }
                        }
                        var_a1_2 += 1;
                        var_a0_4 += 0x54;
                    } while (var_a1_2 < 4);
                    temp_s0->unk4C = 0U;
                    func_8013FD30(arg0, 4, 2, 2);
                }
                var_v0_2 = temp_s2->unkC;
                if (var_v0_2 < 0) {
                    var_v0_2 = -var_v0_2;
                }
                var_v1_4 = 0;
                if (var_v0_2 < 0x3E9) {
                    var_v0_3 = arg0->unk1F0;
                    if (var_v0_3 < 0) {
                        var_v0_3 = -var_v0_3;
                    }
                    if (var_v0_3 >= 0xAB) {
                        goto block_72;
                    }
                } else {
block_72:
                    if (arg0->unkF4 != 0) {
                        var_v1_4 = 1;
                    }
                }
                if (var_v1_4 != 0) {
                    arg0->unk6BC = 1;
                    func_8016FD98(arg0 + 0x694, arg0 + ((var_s3 << 5) + 0x2C8), 8);
                }
            } else if (temp_s0->unk52 != 0) {
                temp_s0->unk52 = 0U;
            }
            var_v1_5 = 0;
            if ((temp_s2->unk0 == 0) && (temp_s0->unk52 == 0)) {
                var_v1_5 = temp_s0->unk4C == 0;
            }
            if (var_v1_5 != 0) {
                func_80128E80(arg0, temp_s0);
            }
        }
        if (temp_s0->unk4C != 0) {
            if (arg0->unkF4 == 0x64) {
                var_a0_5 = (s16) temp_s0->unk34;
                var_v0_4 = (s32) (func_80178A1C() * -(var_a0_5 * 0x12) * (s16) temp_s0->unk34) >> 0xC;
            } else {
                var_a0_5 = (s16) temp_s0->unk34;
                var_v0_4 = (((s32) (func_80178A1C() * -(var_a0_5 * 0x12) * (s16) temp_s0->unk34) >> 0xC) * arg0->unkF4) / 100;
            }
            temp_s0->unk3C = (u16) var_v0_4;
            var_v1_6 = 0;
            if ((arg0->unk81 != 0) || (arg0->unk1FC == 0)) {
                var_v1_6 = 1;
            }
            if (var_v1_6 != 0) {
                temp_s0->unk3C = (u16) (temp_s0->unk3C + ((s16) temp_s0->unk36 * arg0->unk7D4));
            } else {
                temp_s0->unk36 = (u16) ((s32) arg0->unk24C / (s32) arg0->unk7D4);
            }
            if (arg0->unkF4 == 0x64) {
                var_v1_7 = (s16) temp_s0->unk3C;
                var_v0_5 = -((func_80178A1C(var_a0_5) * 0x5B68) / 1000);
                goto block_98;
            }
            if (arg0->unkF4 == 0) {
                temp_s0->unk3C = 0U;
            } else {
                var_v0_5 = -((arg0->unkF4 * ((func_80178A1C(var_a0_5) * 0x5B68) / 1000)) / 100);
                var_v1_7 = (s16) temp_s0->unk3C;
block_98:
                if (var_v0_5 < var_v1_7) {
                    temp_s0->unk34 = (u16) (temp_s0->unk34 + arg0->unk7D4);
                }
            }
            arg0->unk90 = 1U;
            temp_s0->unk3E = (u16) (temp_s0->unk8 - 0x320);
            if ((temp_s0->unk52 == 0) && ((temp_s0->unk34 << 0x10) < (arg0->unk6C4 << 0x10))) {
                arg0->unk6C4 = (u16) temp_s0->unk34;
            }
        } else {
            temp_s0->unk3C = 0U;
            arg0->unk91 = 0U;
            temp_s0->unk38 = (u16) (temp_s0->unk38 + arg0->unk7D4);
        }
        temp_s0->unk8 = (s32) (temp_s0->unk8 + (s16) temp_s0->unk3C);
        var_v1_8 = 0;
        if (temp_s0->unk4C != 0) {
            var_v1_8 = temp_s0->unk8 < ((s16) temp_s0->unk3E - 3);
        }
        if (var_v1_8 != 0) {
            temp_s0->unk8 = (s32) (s16) temp_s0->unk3E;
            func_80128E80(arg0, temp_s0);
            temp_s0->unk4C = 0U;
        }
        var_s3 += 1;
        goto loop_1;
    }
    if (arg0->unk90 == 0) {
        arg0->unk6C4 = 0U;
    }
    var_a0_6 = arg0 + 0x55C;
    if (arg0->unk90 == 0) {
        arg0->unk81 = 0U;
        arg0->unk82 = 0;
        arg0->unk83 = 0;
        if (arg0->unk7B8 == 2) {
            arg0->unk95 = 1;
        }
        arg0->unk186 = 0;
        arg0->unk188 = 0;
        var_a0_6 = arg0 + 0x55C;
    }
    if (func_801250C8(var_a0_6, arg0 + 0x544) < 8) {
        arg0->unk9E = 1;
    } else {
        arg0->unk9E = 0;
    }
    if (arg0->unk9F != 0) {
        func_801F7F00(arg0);
    }
    func_80128EF0(arg0);
    var_v1_9 = 0;
    if (arg0->unk9A == 0) {
        var_v1_9 = arg0->unk9B == 0;
    }
    if (var_v1_9 != 0) {
        func_8013F050(arg0);
    }
    func_80133B08(arg0);
}
