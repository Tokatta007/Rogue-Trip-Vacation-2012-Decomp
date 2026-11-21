/* m2c reference for func_8013F050 @ 8013F050 (291 words). Generated; not compiled or validated. */
? func_800FE8EC(void *);                            /* extern */
s32 func_801254B0(s32, ?);                          /* extern */
? func_8013F4DC(void *);                            /* extern */
? func_8013F810(void *);                            /* extern */
? func_8015A05C(u16 *, void *);                     /* extern */
? func_801640EC(void *);                            /* extern */
s16 func_80176C1C(s16, s32, ?, ? *);                /* extern */
u16 func_80176CBC(s16, s32, ?);                     /* extern */
extern ? D_801E41F8;
extern ? D_801E4438;
extern ? D_801E4678;
extern ? D_801E46C8;

void func_8013F050(void *arg0) {
    u16 sp10;
    s16 sp12;
    u16 sp14;                                       /* compiler-managed */
    s32 *temp_a0;
    s32 *var_s0;
    s32 temp_a1;
    s32 temp_fp;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s3;
    s32 var_s7;
    s32 var_v1;
    s32 var_v1_2;
    u16 *temp_a0_2;
    u16 *temp_v0;
    u16 *temp_v0_2;
    u16 temp_v0_3;
    void *temp_s6;

    if (arg0->unkF4 == 0) {
        if (arg0->unk7C0 == 0x110) {
            temp_lo = arg0->unkF8 * (arg0->unk7D4 * 5);
            var_a1 = temp_lo - ((s32) (temp_lo * arg0->unk7A4) / (s32) arg0->unk25C);
            if (var_a1 >= 0x156) {
                var_a1 = 0x155;
            } else if (var_a1 < 0) {
                var_a1 = 0;
            }
            arg0->unk704 = func_80176CBC((s16) arg0->unk704, var_a1, 5);
            arg0->unk6F0 = 0;
        }
    } else {
        func_8013F4DC(arg0);
        func_8013F810(arg0);
        temp_fp = (s32) arg0->unk7C0 >> 4;
        var_s3 = 0;
        if (*((arg0->unk78 * 4) + (temp_fp << 5) + &D_801E41F8) != 0) {
            temp_s2 = temp_fp * 4;
            var_s7 = 0x544;
            var_v1 = 0 * 8;
            do {
                temp_a0 = *((arg0->unk78 * 4) + var_v1 + (temp_fp << 5) + &D_801E41F8);
                temp_s6 = arg0 + var_s7;
                var_s0 = temp_a0 + 0xC;
                if ((*temp_a0 & 0xF) == 5) {
                    temp_s0 = arg0->unk20C + arg0->unk260;
                    if (arg0->unk7C0 == 0x90) {
                        var_v1_2 = temp_s0;
                        if (temp_s0 < 0) {
                            var_v1_2 = -var_v1_2;
                        }
                        if (arg0->unkD0 < var_v1_2) {
                            if (temp_s0 > 0) {
                                temp_v0 = (arg0->unk78 * 2) + temp_s2 + &D_801E46C8;
                                *temp_v0 += 0x1BB;
                            } else {
                                temp_v0_2 = (arg0->unk78 * 2) + temp_s2 + &D_801E46C8;
                                *temp_v0_2 -= 0x1BB;
                            }
                        } else {
                            temp_a0_2 = (arg0->unk78 * 2) + temp_s2 + &D_801E46C8;
                            *temp_a0_2 += (s32) (temp_s0 * 0x1BB) / (s32) arg0->unkD0;
                        }
                        func_801640EC(temp_s2 + ((arg0->unk78 * 2) + &D_801E46C8));
                        sp10 = *((arg0->unk78 * 2) + temp_s2 + &D_801E46C8);
                    } else {
                        sp10 = 0;
                    }
                    sp12 = 0;
                    if (var_s3 < 2) {
                        var_a1_2 = func_801254B0((s32) (arg0->unk21C * 0x238) / (s32) arg0->unkE0, 0x238);
                    } else {
                        var_a1_2 = 0;
                    }
                    *((arg0->unk78 * 2) + temp_s2 + &D_801E4678) = func_80176C1C(*((arg0->unk78 * 2) + temp_s2 + &D_801E4678), var_a1_2, 5, &D_801E4678);
                    temp_v0_3 = *((arg0->unk78 * 2) + temp_s2 + &D_801E4678);
                    sp14 = temp_v0_3;
                    if (temp_s0 < 0) {
                        sp14 = -(s16) temp_v0_3;
                    }
                    if ((arg0->unk7C0 == 0x90) && (var_s3 & 2)) {
                        sp14 = -(s16) (u16) sp14;
                    }
                    func_8015A05C(&sp10, temp_a0 + 4);
                    var_s0 = temp_a0 + 0x20;
                }
                temp_a1 = (s16) temp_s6->unk44 + *((arg0->unk78 * 4) + (var_s3 * 8) + (temp_fp << 5) + &D_801E4438);
                if (temp_s6->unk4C != 0) {
                    *var_s0 = func_80176CBC((s16) *var_s0, temp_a1, 9);
                    var_s7 += 0x54;
                } else {
                    *var_s0 = temp_a1;
                    var_s7 += 0x54;
                }
                var_s3 += 1;
                var_v1 = var_s3 * 8;
            } while (var_s3 < 4);
        }
        if (arg0->unk7C0 == 0xD0) {
            func_800FE8EC(arg0);
        }
    }
}
