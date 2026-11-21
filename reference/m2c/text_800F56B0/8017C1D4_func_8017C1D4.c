/* m2c reference for func_8017C1D4 @ 8017C1D4 (353 words). Generated; not compiled or validated. */
? func_80173D9C(s16, s16, s16, s32);                /* extern */
extern s32 D_801C2478;
extern ? D_801F3AA8;
extern ? D_801F4348;
extern ? D_801F434A;
extern ? D_801F434C;
extern ? D_801F4350;
extern ? D_801F4352;
extern ? D_801F4354;
extern ? D_801F4356;
extern ? D_801F4358;
extern ? D_801F4850;
extern ? D_801F4870;
extern ? D_801F4872;
extern s16 D_801F4B20;
extern s32 D_801F4B24;
extern void *D_801F4B2C;
extern s32 D_801F4B30;
extern s8 D_801F4B34;

s16 func_8017C1D4(s16 arg0, u16 arg1, u16 arg2) {
    s16 temp_a0_2;
    s16 var_s2;
    s16 var_v0_2;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_hi_3;
    s32 temp_hi_4;
    s32 temp_hi_5;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v1_5;
    s32 var_a3;
    s32 var_v0;
    u16 temp_v0;
    u16 temp_v1;
    u16 var_a2;
    u32 temp_a1;
    u32 var_a0;
    u32 var_a1;
    u32 var_v0_3;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void *temp_a2;
    void *temp_s1;

    var_a2 = arg2;
    var_a3 = (arg0 & 0xFF) * 4;
    temp_s1 = *(&D_801F3AA8 + var_a3) + (((s32) (arg0 & 0xFF00) >> 8) * 0xB0);
    temp_s1->unk58 = arg1;
    temp_s1->unk5A = var_a2;
    if ((u16) temp_s1->unk58 >= 0x7FU) {
        temp_s1->unk58 = 0x7FU;
    }
    if ((u16) temp_s1->unk5A >= 0x7FU) {
        temp_s1->unk5A = 0x7FU;
    }
    var_s2 = 0;
    if (D_801F4B34 > 0) {
        var_v0 = 0 << 0x10;
        do {
            temp_a0 = var_v0 >> 0x10;
            var_v0_2 = var_s2 + 1;
            if (!(D_801C2478 & (1 << temp_a0))) {
                temp_s0 = temp_a0 * 0x36;
                var_v0_2 = var_s2 + 1;
                if (*(&D_801F4350 + temp_s0) == arg0) {
                    temp_a0_2 = *(&D_801F4358 + temp_s0);
                    var_v0_2 = var_s2 + 1;
                    if (temp_a0_2 == temp_s1->unk26) {
                        func_80173D9C(temp_a0_2, *(&D_801F4352 + temp_s0), (s16) var_a2, var_a3);
                        temp_a2 = (((*(&D_801F4352 + temp_s0) * 0x10) + *(&D_801F4356 + temp_s0)) << 5) + D_801F4B30;
                        temp_lo = ((D_801F4B2C->unk18 * (((*(&D_801F4348 + temp_s0) * ((*(&D_801F434C + temp_s0) * 2) + temp_s1)->unk60) / 127) * 0x3FFF)) / 16129) * ((*(&D_801F4354 + temp_s0) * 0x10) + D_801F4B24)->unk1 * temp_a2->unk2;
                        temp_hi = MULTU_HI(temp_lo, 0x040C2051);
                        temp_v0 = temp_s1->unk58;
                        temp_a1 = (u32) (temp_hi + ((u32) (temp_lo - temp_hi) >> 1)) >> 0xD;
                        temp_v1 = temp_s1->unk5A;
                        temp_hi_2 = (temp_a1 * temp_v0) / 127;
                        temp_hi_3 = (temp_a1 * temp_v1) / 127;
                        var_a0 = (u32) (temp_hi_2 + ((u32) ((temp_a1 * temp_v0) - temp_hi_2) >> 1)) >> 6;
                        temp_v1_2 = temp_a2->unk3;
                        var_a1 = (u32) (temp_hi_3 + ((u32) ((temp_a1 * temp_v1) - temp_hi_3) >> 1)) >> 6;
                        if (temp_v1_2 < 0x40U) {
                            temp_hi_4 = (var_a1 * temp_v1_2) / 63;
                            var_a1 = (u32) (temp_hi_4 + ((u32) ((var_a1 * temp_v1_2) - temp_hi_4) >> 1)) >> 5;
                        } else {
                            temp_v0_2 = 0x7F - temp_v1_2;
                            temp_hi_5 = (var_a0 * temp_v0_2) / 63;
                            var_a0 = (u32) (temp_hi_5 + ((u32) ((var_a0 * temp_v0_2) - temp_hi_5) >> 1)) >> 5;
                        }
                        temp_v1_3 = ((*(&D_801F4354 + (var_s2 * 0x36)) * 0x10) + D_801F4B24)->unk4;
                        if (temp_v1_3 < 0x40U) {
                            var_a1 = ((var_a1 & 0xFFFF) * temp_v1_3) / 63;
                        } else {
                            var_a0 = ((var_a0 & 0xFFFF) * (0x7F - temp_v1_3)) / 63;
                        }
                        temp_v1_4 = *(&D_801F434A + (var_s2 * 0x36));
                        if (temp_v1_4 < 0x40U) {
                            var_a1 = ((var_a1 & 0xFFFF) * temp_v1_4) / 63;
                        } else {
                            var_a0 = ((var_a0 & 0xFFFF) * (0x7F - temp_v1_4)) / 63;
                        }
                        var_v0_3 = var_a0 & 0xFFFF;
                        if (D_801F4B20 == 1) {
                            if (var_v0_3 < (u32) (var_a1 & 0xFFFF)) {
                                var_a0 = var_a1;
                            } else {
                                var_a1 = var_a0;
                            }
                            var_v0_3 = var_a0 & 0xFFFF;
                        }
                        temp_v1_5 = var_a1 & 0xFFFF;
                        var_a2 = (u16) var_s2;
                        temp_a1_2 = var_a2 * 0x10;
                        *(temp_a1_2 + &D_801F4870) = (var_v0_3 * var_v0_3) / 16383;
                        var_a3 = MULT_HI((temp_v1_5 * temp_v1_5), 0x80020009);
                        *(temp_a1_2 + &D_801F4872) = (temp_v1_5 * temp_v1_5) / 16383;
                        *(&D_801F4850 + var_a2) = *(&D_801F4850 + var_a2) | 3;
                        var_v0_2 = var_s2 + 1;
                    }
                }
            }
            var_s2 = var_v0_2;
            var_v0 = var_s2 << 0x10;
        } while (var_v0_2 < D_801F4B34);
    }
    return arg0;
}
