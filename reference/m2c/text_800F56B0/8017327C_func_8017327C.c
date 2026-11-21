/* m2c reference for func_8017327C @ 8017327C (352 words). Generated; not compiled or validated. */
? func_80174FFC(s32, u32, ? *, u32);                /* extern */
extern s32 D_801C2478;
extern ? D_801F3AA8;
extern u16 D_801F4330;
extern u16 D_801F4332;
extern u16 D_801F4334;
extern u16 D_801F4336;
extern s16 D_801F4338;
extern s16 D_801F433A;
extern ? D_801F4344;
extern ? D_801F435D;
extern ? D_801F4850;
extern ? D_801F4870;
extern ? D_801F4872;
extern u16 D_801F4A38;
extern u16 D_801F4A3A;
extern s16 D_801F4B20;
extern void *D_801F4B2C;
extern s8 D_801F4B34;
extern s8 D_801F4B3D;
extern s8 D_801F4B43;
extern u8 D_801F4B4C;
extern ? D_801F4B4E;

void func_8017327C(s32 arg0) {
    s16 var_a1_2;
    s16 var_a2_2;
    s16 var_a3_2;
    s16 var_v0_2;
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_hi_10;
    s32 temp_hi_11;
    s32 temp_hi_2;
    s32 temp_hi_3;
    s32 temp_hi_4;
    s32 temp_hi_5;
    s32 temp_hi_6;
    s32 temp_hi_7;
    s32 temp_hi_8;
    s32 temp_hi_9;
    s32 temp_lo;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_v0;
    u16 temp_a0_2;
    u16 temp_v0;
    u16 temp_v1_2;
    u16 temp_v1_5;
    u32 temp_s0;
    u32 var_a1;
    u32 var_a2;
    u32 var_a3;
    u32 var_s1;
    u32 var_s2;
    void *temp_v1;

    temp_lo = ((D_801F4B4E.unk-12 * (D_801F4B2C->unk18 * 0x3FFF)) / 16129) * D_801F4B4E.unk-C * D_801F4B4E.unk-9;
    temp_hi = MULTU_HI(temp_lo, 0x040C2051);
    var_a1 = (D_801F4B4E.unk0 & 0xFF) * 4;
    var_a2 = (u32) (temp_hi + ((u32) (temp_lo - temp_hi) >> 1)) >> 0xD;
    temp_v1 = *(&D_801F3AA8 + var_a1) + (((s32) ((s16) D_801F4B4E.unk0 & 0xFF00) >> 8) * 0xB0);
    var_a3 = var_a2;
    if ((s16) D_801F4B4E.unk0 != 0x21) {
        temp_v0 = temp_v1->unk58;
        temp_v1_2 = temp_v1->unk5A;
        temp_v1_3 = var_a2 * temp_v1_2;
        temp_hi_2 = (var_a2 * temp_v0) / 127;
        temp_hi_3 = (var_a2 * temp_v1_2) / 127;
        var_a1 = temp_hi_2 + ((u32) ((var_a2 * temp_v0) - temp_hi_2) >> 1);
        var_a3 = var_a1 >> 6;
        var_a2 = (u32) (temp_hi_3 + ((u32) (temp_v1_3 - temp_hi_3) >> 1)) >> 6;
    }
    if ((u32) D_801F4B4E.unk-8 < 0x40U) {
        temp_hi_4 = (var_a2 * D_801F4B4E.unk-8) / 63;
        var_s2 = var_a3;
        var_s1 = (u32) (temp_hi_4 + ((u32) ((var_a2 * D_801F4B4E.unk-8) - temp_hi_4) >> 1)) >> 5;
    } else {
        temp_v0_2 = 0x7F - D_801F4B4E.unk-8;
        temp_hi_5 = (var_a3 * temp_v0_2) / 63;
        var_s1 = var_a2;
        var_s2 = (u32) (temp_hi_5 + ((u32) ((var_a3 * temp_v0_2) - temp_hi_5) >> 1)) >> 5;
    }
    if ((u32) D_801F4B43 < 0x40U) {
        temp_hi_6 = (var_s1 * D_801F4B43) / 63;
        var_s1 = (u32) (temp_hi_6 + ((u32) ((var_s1 * D_801F4B43) - temp_hi_6) >> 1)) >> 5;
    } else {
        temp_v0_3 = 0x7F - D_801F4B43;
        temp_hi_7 = (var_s2 * temp_v0_3) / 63;
        var_s2 = (u32) (temp_hi_7 + ((u32) ((var_s2 * temp_v0_3) - temp_hi_7) >> 1)) >> 5;
    }
    if ((u32) D_801F4B3D < 0x40U) {
        temp_hi_8 = (D_801F4B3D * var_s1) / 63;
        var_s1 = (u32) (temp_hi_8 + ((u32) ((D_801F4B3D * var_s1) - temp_hi_8) >> 1)) >> 5;
    } else {
        temp_v0_4 = 0x7F - D_801F4B3D;
        temp_hi_9 = (var_s2 * temp_v0_4) / 63;
        var_s2 = (u32) (temp_hi_9 + ((u32) ((var_s2 * temp_v0_4) - temp_hi_9) >> 1)) >> 5;
    }
    if (D_801F4B20 == 1) {
        if (var_s2 < var_s1) {
            var_s2 = var_s1;
        } else {
            var_s1 = var_s2;
        }
    }
    if ((s16) D_801F4B4E.unk0 != 0x21) {
        temp_hi_10 = (var_s2 * var_s2) / 16383;
        temp_hi_11 = (var_s1 * var_s1) / 16383;
        var_s2 = (u32) (temp_hi_10 + ((u32) ((var_s2 * var_s2) - temp_hi_10) >> 1)) >> 0xD;
        var_a1 = (u32) ((var_s1 * var_s1) - temp_hi_11) >> 1;
        var_s1 = (u32) (temp_hi_11 + var_a1) >> 0xD;
    }
    func_80174FFC((D_801F4B4E.unk-14 - D_801F4B4E.unk-6) & 0x3F, var_a1, &D_801F4B4E, var_a3);
    temp_s0 = arg0 & 0xFF;
    temp_v1_4 = temp_s0 * 0x10;
    *(&D_801F4872 + temp_v1_4) = (s16) var_s1;
    *(&D_801F4870 + temp_v1_4) = (s16) var_s2;
    *(&D_801F4850 + temp_s0) = *(&D_801F4850 + temp_s0) | 3;
    if (temp_s0 < 0x10U) {
        var_a3_2 = 1 << temp_s0;
        var_a2_2 = 0;
    } else {
        var_a3_2 = 0;
        var_a2_2 = 1 << (temp_s0 - 0x10);
    }
    *(&D_801F4344 + ((arg0 & 0xFF) * 0x36)) = 0xA;
    var_a1_2 = 0;
    if (D_801F4B34 > 0) {
        var_v0 = 0 << 0x10;
        do {
            temp_a0 = var_v0 >> 0x10;
            var_v0_2 = var_a1_2 + 1;
            if (!(D_801C2478 & (1 << temp_a0))) {
                temp_v0_5 = temp_a0 * 0x36;
                *(&D_801F435D + temp_v0_5) = *(&D_801F435D + temp_v0_5) & 1;
                var_v0_2 = var_a1_2 + 1;
            }
            var_a1_2 = var_v0_2;
            var_v0 = var_a1_2 << 0x10;
        } while (var_v0_2 < D_801F4B34);
    }
    *(&D_801F435D + ((arg0 & 0xFF) * 0x36)) = 2;
    temp_v1_5 = D_801F4330 | var_a3_2;
    temp_a0_2 = D_801F4332 | var_a2_2;
    D_801F4330 = temp_v1_5;
    D_801F4332 = temp_a0_2;
    D_801F4A38 &= ~temp_v1_5;
    D_801F4A3A &= ~temp_a0_2;
    if (D_801F4B4C & 4) {
        D_801F4334 |= var_a3_2;
        D_801F4336 |= var_a2_2;
    } else {
        D_801F4334 &= ~var_a3_2;
        D_801F4336 &= ~var_a2_2;
    }
    D_801F4338 = var_a3_2;
    D_801F433A = var_a2_2;
}
