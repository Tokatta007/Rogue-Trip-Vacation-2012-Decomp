/* m2c reference for func_8017AF04 @ 8017AF04 (232 words). Generated; not compiled or validated. */
? func_8017C1D4(s16, s32, s32, ?);                  /* extern */
? func_8017C758(s16, u16 *, u16 *, s32);            /* extern */
extern ? D_801F3AA8;

void func_8017AF04(s32 arg0, s16 arg1) {
    u16 sp10;
    u16 sp12;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 var_a0_2;
    s32 *temp_s3;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a2;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u16 temp_v1_2;
    void *temp_s0;
    void *temp_v0_6;
    void *temp_v1_3;
    void *var_v0;
    void *var_v0_2;

    temp_s3 = ((s32) (arg0 << 0x10) >> 0xE) + &D_801F3AA8;
    temp_s2 = arg1 * 0xB0;
    temp_s0 = *temp_s3 + temp_s2;
    temp_v0 = temp_s0->unkA0 - 1;
    temp_s0->unkA0 = temp_v0;
    if (temp_v0 < 0) {
        var_v0 = temp_s2 + *temp_s3;
        goto block_29;
    }
    temp_a2 = temp_s0->unk4C;
    if (temp_a2 > 0) {
        var_a0 = arg1 << 8;
        if ((temp_v0 % temp_a2) == 0) {
            temp_v0_2 = temp_s0->unk4A - 1;
            temp_s0->unk4A = temp_v0_2;
            if (!(temp_v0_2 & 0x8000)) {
                temp_v0_3 = arg0 | (arg1 << 8);
                func_8017C758(temp_v0_3, &sp10, &sp12, arg0);
                temp_a2_2 = (s16) temp_s0->unk4A;
                temp_a1 = sp10 - 1;
                if ((temp_a1 >= (sp10 - temp_a2_2)) || ((sp12 - 1) >= (sp12 - temp_a2_2))) {
                    if ((sp10 == 0) || (var_a0_2 = temp_v0_3, (sp12 == 0))) {
                        var_v0_2 = temp_s2 + *temp_s3;
                        goto block_21;
                    }
                    var_a1 = temp_a1 & 0xFFFF;
                    var_a2 = sp12 - 1;
                    goto block_23;
                }
            } else {
                goto block_24;
            }
            goto block_25;
        }
    } else {
        var_a0 = arg1 << 8;
        if (temp_a2 < 0) {
            temp_v0_4 = temp_s0->unk4A + (u16) temp_s0->unk4C;
            temp_s0->unk4A = temp_v0_4;
            if (!(temp_v0_4 & 0x8000)) {
                temp_v0_5 = arg0 | (arg1 << 8);
                func_8017C758(temp_v0_5, &sp10, &sp12, arg0);
                temp_v1 = temp_s0->unk4C;
                if (((sp10 + temp_v1) <= 0) && ((sp12 + temp_v1) <= 0)) {
                    func_8017C1D4(temp_v0_5, 0, 0, 1);
                    temp_v0_6 = temp_s2 + *temp_s3;
                    temp_v0_6->unk98 = (s32) (temp_v0_6->unk98 & ~0x20);
                }
                temp_v1_2 = (u16) temp_s0->unk4C;
                if (((temp_s0->unk9C - temp_s0->unkA0) * -temp_s0->unk4C) < temp_s0->unk48) {
                    var_a0_3 = arg0 << 0x10;
                    if (sp10 != 0) {
                        if (sp12 == 0) {
                            var_a0_3 = arg0 << 0x10;
                            goto block_20;
                        }
                        var_a0_2 = arg0 | (arg1 << 8);
                        var_a1 = (sp10 + temp_v1_2) & 0xFFFF;
                        var_a2 = sp12 + temp_v1_2;
block_23:
                        func_8017C1D4(var_a0_2, var_a1, var_a2 & 0xFFFF, 1);
                    } else {
block_20:
                        var_v0_2 = (arg1 * 0xB0) + *(&D_801F3AA8 + (var_a0_3 >> 0xE));
block_21:
                        var_v0_2->unk98 = (s32) (var_v0_2->unk98 & ~0x20);
                    }
                }
            } else {
block_24:
                func_8017C1D4((s16) (arg0 | (arg1 << 8)), 0, 0, 1);
                temp_v1_3 = temp_s2 + *temp_s3;
                temp_v1_3->unk98 = (s32) (temp_v1_3->unk98 & ~0x20);
            }
block_25:
            var_a0_4 = arg0 << 0x10;
            if (temp_s0->unkA0 != 0) {
                var_a0 = arg1 << 8;
                if ((s16) temp_s0->unk4A <= 0) {
                    var_a0_4 = arg0 << 0x10;
                    goto block_28;
                }
            } else {
block_28:
                var_v0 = (arg1 * 0xB0) + *(&D_801F3AA8 + (var_a0_4 >> 0xE));
block_29:
                var_v0->unk98 = (s32) (var_v0->unk98 & ~0x20);
                var_a0 = arg1 << 8;
            }
        }
    }
    func_8017C758((s16) (arg0 | var_a0), temp_s0 + 0x5C, temp_s0 + 0x5E);
}
