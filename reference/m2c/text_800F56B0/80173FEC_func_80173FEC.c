/* m2c reference for func_80173FEC @ 80173FEC (243 words). Generated; not compiled or validated. */
s32 func_8017450C(s32, s32, s32 *, s32);            /* extern */
? func_801761BC(?);                                 /* extern */
s32 func_801761E4();                                /* extern */
extern ? D_801F4A58;
extern ? D_801F4A98;
extern ? D_801F4AE0;
extern s16 D_801F4B22;
extern ? D_801F4B58;
extern ? D_801F4B70;
extern u16 D_801F4BB0;
extern ? D_801F4BB8;

s16 func_80173FEC(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    s32 sp10;
    s16 var_a1;
    s16 var_s1;
    s16 var_v0;
    s16 var_v0_3;
    s32 *var_a0;
    s32 *var_a2_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_a3_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0_2;
    s32 var_v0_4;
    u16 *var_a3;
    u16 temp_v1;
    u32 temp_a1;
    u32 var_v1_2;
    u8 temp_s3;
    void *temp_a3;
    void *temp_a3_2;
    void *var_v1;

    var_s1 = 0x10;
    var_v0 = -1;
    if (func_801761E4() != 1) {
        func_801761BC(1);
        if (arg1 < 0x10) {
            var_a1 = 0;
            if (arg1 == -1) {
loop_3:
                if (*(&D_801F4B58 + var_a1) != 0) {
                    var_a1 += 1;
                    if (var_a1 >= 0x10) {
                        var_a2 = 0x10;
                    } else {
                        goto loop_3;
                    }
                } else {
                    *(&D_801F4B58 + var_a1) = 1;
                    var_s1 = var_a1;
                    goto block_9;
                }
            } else {
                var_v0_2 = 0x10 << 0x10;
                if (*(&D_801F4B58 + arg1) == 0) {
                    *(&D_801F4B58 + arg1) = 1;
                    var_s1 = arg1;
block_9:
                    D_801F4BB0 += 1;
                    var_v0_2 = var_s1 << 0x10;
                }
                var_a2 = var_v0_2 >> 0x10;
            }
            if (var_a2 >= 0x10) {
                goto block_12;
            }
            *(&D_801F4A98 + (var_a2 * 4)) = arg0;
            temp_a1 = arg0->unk0;
            temp_a3 = arg0 + 0x20;
            if ((temp_a1 >> 8) != 0x564142) {
                *(&D_801F4B58 + var_a2) = 0;
                goto block_37;
            }
            var_v0_3 = 0x40;
            if ((temp_a1 & 0xFF) == 0x70) {
                var_v0_3 = 0x40;
                if (arg0->unk4 >= 5) {
                    var_v0_3 = 0x80;
                }
            }
            D_801F4B22 = var_v0_3;
            if (D_801F4B22 >= (s32) arg0->unk12) {
                *(&D_801F4A58 + ((s32) (var_s1 << 0x10) >> 0xE)) = temp_a3;
                temp_a3_2 = temp_a3 + (D_801F4B22 * 0x10);
                var_a1_2 = 0;
                var_s0 = 0;
                if (D_801F4B22 > 0) {
                    var_v1 = temp_a3;
                    do {
                        var_v1->unk8 = var_s0;
                        if (var_v1->unk0 != 0) {
                            var_s0 += 1;
                        }
                        var_a1_2 += 1;
                        var_v1 += 0x10;
                    } while (var_a1_2 < D_801F4B22);
                }
                var_s0_2 = 0;
                var_a1_3 = 0;
                var_a2_2 = &sp10;
                *(&D_801F4AE0 + ((s32) (var_s1 << 0x10) >> 0xE)) = temp_a3_2;
                temp_s3 = arg0->unk16;
                var_a3 = temp_a3_2 + (arg0->unk12 << 9);
                do {
                    if ((temp_s3 & 0xFF) >= var_a1_3) {
                        temp_v1 = *var_a3;
                        var_v0_4 = temp_v1 * 4;
                        if (arg0->unk4 >= 5) {
                            var_v0_4 = temp_v1 * 8;
                        }
                        *var_a2_2 = var_v0_4;
                        var_s0_2 += *var_a2_2;
                    }
                    var_a3 += 2;
                    var_a1_3 += 1;
                    var_a2_2 += 4;
                } while (var_a1_3 < 0x100);
                var_a3_2 = arg3;
                if ((arg2 << 0x10) == 0) {
                    var_a3_2 = func_8017450C(var_s0_2, var_a1_3, var_a2_2, var_a3_2);
                    var_v1_2 = var_a3_2 + var_s0_2;
                    if (var_a3_2 == -1) {
                        goto block_36;
                    }
                    goto block_34;
                }
                var_v1_2 = var_a3_2 + var_s0_2;
block_34:
                var_s0_3 = 0;
                if (var_v1_2 > 0x80000U) {
                    goto block_35;
                }
                *(&D_801F4BB8 + ((s32) (var_s1 << 0x10) >> 0xE)) = var_a3_2;
                temp_v1_2 = temp_s3 & 0xFF;
                var_a1_4 = 0;
                if (temp_v1_2 >= 0) {
                    var_a0 = &sp10;
                    do {
                        var_s0_3 += *var_a0;
                        temp_v1_3 = var_a1_4 / 2;
                        if (!(var_a1_4 & 1)) {
                            ((temp_v1_3 * 0x10) + temp_a3)->unkC = (s16) ((u32) (var_a3_2 + var_s0_3) >> 3);
                        } else {
                            ((((s32) (var_a1_4 + temp_v1_3) >> 1) * 0x10) + temp_a3)->unkE = (s16) ((u32) (var_a3_2 + var_s0_3) >> 3);
                        }
                        var_a1_4 += 1;
                        var_a0 += 4;
                    } while (temp_v1_2 >= var_a1_4);
                }
                var_v0 = var_s1;
                *(&D_801F4B70 + (var_v0 * 4)) = var_s0_3;
                *(&D_801F4B58 + var_v0) = 2;
                /* Duplicate return node #45. Try simplifying control flow for better match */
                return var_v0;
            }
block_35:
block_36:
            *(&D_801F4B58 + var_s1) = 0;
block_37:
            func_801761BC(0);
            D_801F4BB0 -= 1;
            return -1;
        }
block_12:
        func_801761BC(0);
        return -1;
    }
    return var_v0;
}
