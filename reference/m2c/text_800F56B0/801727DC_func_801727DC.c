/* m2c reference for func_801727DC @ 801727DC (289 words). Generated; not compiled or validated. */
? func_80174D0C(?, s32);                            /* extern */
? func_80175BDC(?, s32);                            /* extern */
? func_80175DBC(?, s32);                            /* extern */
? func_8017627C(s32 *);                             /* extern */
? func_80176BCC(s32, ? *);                          /* extern */
extern u16 D_801F4330;
extern u16 D_801F4332;
extern u16 D_801F4334;
extern u8 D_801F4336;
extern u16 D_801F4338;
extern u8 D_801F433A;
extern ? D_801F4346;
extern s8 D_801F435D;
extern ? D_801F435E;
extern ? D_801F436A;
extern u8 D_801F4850;
extern ? (*D_801F4868)(s32);
extern u16 D_801F4870;
extern ? (*D_801F49F0)(s32);
extern s32 D_801F49F4;
extern s32 D_801F49F8;
extern u16 D_801F4A38;
extern u16 D_801F4A3A;
extern s8 D_801F4B34;
extern s8 D_801F4B68;

void func_801727DC(void) {
    s32 sp10;
    s32 sp14;
    u16 sp18;
    u16 sp1A;
    u16 sp24;
    s32 sp2C;
    u16 sp4A;
    u16 sp4C;
    ? *var_s2;
    s16 var_a1;
    s32 *temp_v0_2;
    s32 *var_v1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s2_2;
    s32 var_v0;
    s8 *var_s1_2;
    u16 *var_s2_3;
    u16 *var_s3;
    u16 *var_s4;
    u16 *var_s5;
    u16 *var_s6;
    u16 *var_s7;
    u8 *var_s1_4;

    temp_v0 = (D_801F49F4 + 1) & 0xF;
    D_801F49F4 = temp_v0;
    (&D_801F49F8)[temp_v0] = 0;
    var_s0 = 0;
    if (D_801F4B34 > 0) {
        var_s2 = &D_801F4346;
        var_s1 = 0;
        do {
            func_80176BCC(var_s0, var_s2);
            if (*(&D_801F4346 + var_s1) == 0) {
                temp_v0_2 = &(&D_801F49F8)[D_801F49F4];
                *temp_v0_2 |= 1 << var_s0;
            }
            var_s2 += 0x36;
            var_s0 += 1;
            var_s1 += 0x36;
        } while (var_s0 < D_801F4B34);
    }
    var_s0_2 = 0;
    if (D_801F4B68 == 0) {
        var_s2_2 = -1;
        var_v1 = &D_801F49F8;
        do {
            var_s0_2 += 1;
            var_s2_2 &= *var_v1;
            var_v1 += 4;
        } while (var_s0_2 < 0xF);
        var_s0_3 = 0;
        if (D_801F4B34 > 0) {
            var_s1_2 = &D_801F435D;
            do {
                var_a1 = 1 << var_s0_3;
                if (var_s2_2 & var_a1) {
                    if (*var_s1_2 == 2) {
                        var_v0 = 0;
                        if (var_s0_3 >= 0x10) {
                            var_a1 = 0;
                            var_v0 = 1 << (var_s0_3 - 0x10);
                        }
                        func_80174D0C(0, ((var_v0 & 0xFF) << 0x10) | var_a1);
                    }
                    *var_s1_2 = 0;
                }
                var_s0_3 += 1;
                var_s1_2 += 0x36;
            } while (var_s0_3 < D_801F4B34);
        }
        var_s0_2 = 0;
    }
    var_s1_3 = 0;
    D_801F4330 &= ~D_801F4A38;
    D_801F4332 &= ~D_801F4A3A;
    do {
        if (*(&D_801F435E + var_s1_3) != 0) {
            D_801F49F0(var_s0_2);
        }
        if (*(&D_801F436A + var_s1_3) != 0) {
            D_801F4868(var_s0_2);
        }
        var_s0_2 += 1;
        var_s1_3 += 0x36;
    } while (var_s0_2 < 0x18);
    var_s0_4 = 0;
    var_s1_4 = &D_801F4850;
    var_s7 = &D_801F4870 + 0xA;
    var_s6 = &D_801F4870 + 8;
    var_s5 = &D_801F4870 + 6;
    var_s4 = &D_801F4870 + 4;
    var_s3 = &D_801F4870 + 2;
    var_s2_3 = &D_801F4870;
    do {
        sp14 = 0;
        sp10 = 1 << var_s0_4;
        if (*var_s1_4 & 1) {
            sp14 = 3;
            sp18 = *var_s2_3;
            sp1A = *var_s3;
        }
        if (*var_s1_4 & 4) {
            sp14 |= 0x10;
            sp24 = *var_s4;
        }
        if (*var_s1_4 & 8) {
            sp14 |= 0x80;
            sp2C = *var_s5 * 8;
        }
        if (*var_s1_4 & 0x10) {
            sp14 |= 0x60000;
            sp4A = *var_s6;
            sp4C = *var_s7;
        }
        if (sp14 != 0) {
            func_8017627C(&sp10);
        }
        *var_s1_4 = 0;
        var_s1_4 += 1;
        var_s7 += 0x10;
        var_s6 += 0x10;
        var_s5 += 0x10;
        var_s4 += 0x10;
        var_s3 += 0x10;
        var_s0_4 += 1;
        var_s2_3 += 0x10;
    } while (var_s0_4 < 0x18);
    func_80175DBC(0, ((u8) D_801F4A3A << 0x10) | D_801F4A38);
    func_80175DBC(1, ((u8) D_801F4332 << 0x10) | D_801F4330);
    func_80175BDC(8, (D_801F4336 << 0x10) | D_801F4334);
    func_80174D0C(8, (D_801F433A << 0x10) | D_801F4338);
    D_801F4A38 = 0;
    D_801F4A3A = 0;
    D_801F4330 = 0;
    D_801F4332 = 0;
    D_801F4338 = 0;
    D_801F433A = 0;
}
