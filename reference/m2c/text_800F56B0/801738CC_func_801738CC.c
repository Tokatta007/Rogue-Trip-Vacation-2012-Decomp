/* m2c reference for func_801738CC @ 801738CC (308 words). Generated; not compiled or validated. */
extern ? D_801F3AA8;
extern u16 D_801F4330;
extern u16 D_801F4332;
extern u16 D_801F4334;
extern u16 D_801F4336;
extern u16 D_801F4338;
extern u16 D_801F433A;
extern ? D_801F4344;
extern ? D_801F4850;
extern ? D_801F4870;
extern ? D_801F4872;
extern ? D_801F4874;
extern u16 D_801F4A38;
extern u16 D_801F4A3A;
extern s16 D_801F4B20;
extern void *D_801F4B2C;
extern u8 D_801F4B3D;
extern u8 D_801F4B43;
extern u8 D_801F4B4C;
extern ? D_801F4B4E;
extern ? D_801F4B52;

void func_801738CC(s16 arg1) {
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
    s32 var_a1_2;
    s32 var_a2_2;
    s32 var_v1;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u32 var_a0;
    u32 var_a1;
    u32 var_a2;
    u32 var_a3;
    void *temp_v1;

    temp_lo = ((D_801F4B52.unk-16 * (D_801F4B2C->unk18 * 0x3FFF)) / 16129) * D_801F4B52.unk-10 * D_801F4B52.unk-D;
    temp_hi = MULTU_HI(temp_lo, 0x040C2051);
    var_a2 = (u32) (temp_hi + ((u32) (temp_lo - temp_hi) >> 1)) >> 0xD;
    temp_v1 = *(&D_801F3AA8 + ((D_801F4B52.unk-4 & 0xFF) * 4)) + (((s32) ((s16) D_801F4B52.unk-4 & 0xFF00) >> 8) * 0xB0);
    var_a3 = var_a2;
    if ((s16) D_801F4B52.unk-4 != 0x21) {
        temp_v0 = temp_v1->unk58;
        temp_v1_2 = temp_v1->unk5A;
        temp_hi_2 = (var_a2 * temp_v0) / 127;
        temp_hi_3 = (var_a2 * temp_v1_2) / 127;
        var_a3 = (u32) (temp_hi_2 + ((u32) ((var_a2 * temp_v0) - temp_hi_2) >> 1)) >> 6;
        var_a2 = (u32) (temp_hi_3 + ((u32) ((var_a2 * temp_v1_2) - temp_hi_3) >> 1)) >> 6;
    }
    if ((u8) D_801F4B52.unk-C < 0x40U) {
        temp_hi_4 = (var_a2 * D_801F4B52.unk-C) / 63;
        var_a0 = var_a3;
        var_a1 = (u32) (temp_hi_4 + ((u32) ((var_a2 * D_801F4B52.unk-C) - temp_hi_4) >> 1)) >> 5;
    } else {
        temp_v0_2 = 0x7F - D_801F4B52.unk-C;
        temp_hi_5 = (var_a3 * temp_v0_2) / 63;
        var_a1 = var_a2;
        var_a0 = (u32) (temp_hi_5 + ((u32) ((var_a3 * temp_v0_2) - temp_hi_5) >> 1)) >> 5;
    }
    if ((u8) D_801F4B43 < 0x40U) {
        temp_hi_6 = (var_a1 * D_801F4B43) / 63;
        var_a1 = (u32) (temp_hi_6 + ((u32) ((var_a1 * D_801F4B43) - temp_hi_6) >> 1)) >> 5;
    } else {
        temp_v0_3 = 0x7F - D_801F4B43;
        temp_hi_7 = (var_a0 * temp_v0_3) / 63;
        var_a0 = (u32) (temp_hi_7 + ((u32) ((var_a0 * temp_v0_3) - temp_hi_7) >> 1)) >> 5;
    }
    if ((u8) D_801F4B3D < 0x40U) {
        temp_hi_8 = (var_a1 * D_801F4B3D) / 63;
        var_a1 = (u32) (temp_hi_8 + ((u32) ((var_a1 * D_801F4B3D) - temp_hi_8) >> 1)) >> 5;
    } else {
        temp_v0_4 = 0x7F - D_801F4B3D;
        temp_hi_9 = (var_a0 * temp_v0_4) / 63;
        var_a0 = (u32) (temp_hi_9 + ((u32) ((var_a0 * temp_v0_4) - temp_hi_9) >> 1)) >> 5;
    }
    if (D_801F4B20 == 1) {
        if (var_a0 < var_a1) {
            var_a0 = var_a1;
        } else {
            var_a1 = var_a0;
        }
    }
    if (D_801F4B4E.unk0 != 0x21) {
        temp_hi_10 = (var_a0 * var_a0) / 16383;
        temp_hi_11 = (var_a1 * var_a1) / 16383;
        var_a0 = (u32) (temp_hi_10 + ((u32) ((var_a0 * var_a0) - temp_hi_10) >> 1)) >> 0xD;
        var_a1 = (u32) (temp_hi_11 + ((u32) ((var_a1 * var_a1) - temp_hi_11) >> 1)) >> 0xD;
    }
    temp_v0_5 = ((D_801F4B52.unk0 * 8) & 0xFFFF) * 2;
    *(&D_801F4874 + temp_v0_5) = arg1;
    *(&D_801F4870 + temp_v0_5) = (s16) var_a0;
    *(&D_801F4872 + temp_v0_5) = (s16) var_a1;
    *(&D_801F4850 + D_801F4B4E.unk4) = *(&D_801F4850 + D_801F4B4E.unk4) | 7;
    *(&D_801F4344 + (D_801F4B4E.unk4 * 0x36)) = arg1;
    if (D_801F4B4E.unk4 < 0x10) {
        var_a2_2 = 1 << D_801F4B4E.unk4;
        var_a1_2 = 0;
    } else {
        var_a2_2 = 0;
        var_a1_2 = 1 << (D_801F4B4E.unk4 - 0x10);
    }
    if (D_801F4B4C & 4) {
        D_801F4334 |= var_a2_2;
        D_801F4336 |= var_a1_2;
        var_v1 = ~var_a2_2;
    } else {
        D_801F4334 &= ~var_a2_2;
        D_801F4336 &= ~var_a1_2;
        var_v1 = ~var_a2_2;
    }
    D_801F4338 &= var_v1;
    temp_a0 = D_801F4332 | var_a1_2;
    D_801F4332 = temp_a0;
    D_801F433A &= ~var_a1_2;
    temp_v1_3 = D_801F4330 | var_a2_2;
    D_801F4330 = temp_v1_3;
    D_801F4A38 &= ~temp_v1_3;
    D_801F4A3A &= ~temp_a0;
}
