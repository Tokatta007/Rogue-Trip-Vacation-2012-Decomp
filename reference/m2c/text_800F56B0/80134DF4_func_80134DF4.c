/* m2c reference for func_80134DF4 @ 80134DF4 (256 words). Generated; not compiled or validated. */
? func_8012D130(? *);                               /* extern */
? func_8012D1AC(u32 *, ?);                          /* extern */
s32 func_8012D290(u32 *, ?);                        /* extern */
? func_80133658();                                  /* extern */
? func_80138370(?, s32, ?, ?);                      /* extern */
? func_8013841C(s32, ? *, s32 *);                   /* extern */
? func_80139F20(? *, ?, ?, s32 *);                  /* extern */
? func_8013B478(?, ?);                              /* extern */
? func_80154AFC(? *, ? *, s32);                     /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80167228(?, ?, ?, ? *);                      /* extern */
? func_8016C070(?, u8);                             /* extern */
s32 *func_8016C088(s32);                            /* extern */
s32 func_8016C0F0(s32);                             /* extern */
extern s32 D_801B38E4;
extern ? D_801B38F4;
extern s32 D_801B393C;
extern ? D_801B394C;
extern ? D_801B3960;
extern s32 D_801B39B0;
static s32 D_801C34FC = 0;
static ? D_800F3A50;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3A60;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3AB8;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3AE8;                                /* unable to generate initializer: unknown type; const */
static s8 D_800F3B0C[0x24] = {
    0x42,
    0x41,
    0x44,
    0x20,
    0x50,
    0x41,
    0x43,
    0x4B,
    0x45,
    0x54,
    0x20,
    0x4F,
    0x50,
    0x43,
    0x4F,
    0x44,
    0x45,
    0x20,
    0x46,
    0x52,
    0x4F,
    0x4D,
    0x20,
    0x53,
    0x4C,
    0x41,
    0x56,
    0x45,
    0x20,
    0x25,
    0x64,
    0x20,
    0xA,
    0,
    0,
    0,
}; /* const */

s32 func_80134DF4(s32 arg0) {
    ? sp10;
    u32 sp20;
    s32 sp24;
    s32 *temp_s0;
    s32 *temp_s2;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s6;
    s32 var_v0;
    u32 *var_v0_2;
    u32 temp_v0;
    u8 temp_v1_3;

    var_s6 = 1;
    var_s3 = 0;
    sp24 = 1;
    func_80133658();
    func_8013841C(arg0, &D_800F3A50, &D_801B39B0);
    var_s2 = 0;
loop_1:
    if (var_s2 < 2) {
        if (func_8016C0F0(var_s2) != 0) {
            var_s0 = 0;
            var_s1 = func_8016C088(var_s2);
            sp20 = (((sp20 & 0xFFFF00FF) | 0x600) & 0xFF00FFFF) | (((var_s2 + 2) & 0xFF) << 0x10);
            do {
                temp_v1 = var_s0 & 0xF;
                var_s0 += 1;
                temp_v0 = (sp20 & 0xF0FFFFFF) | (temp_v1 << 0x18);
                sp20 = temp_v0;
                temp_v1_2 = *var_s1;
                var_s1 += 4;
                sp20 = (temp_v0 & 0x0FFFFFFF) | (temp_v1_2 << 0x1C);
                func_8012D1AC(&sp20, 4);
                func_8015EBDC(0);
            } while (var_s0 < 8);
        }
        var_s2 += 1;
        goto loop_1;
    }
    sp20.unk1 = 4U;
    func_8012D1AC(&sp20, 4);
loop_7:
    if (var_s6 != 0) {
        func_80138370(1, D_801B39B0, 0x20, 0);
        temp_s2 = func_8016C088(2);
        temp_s0 = func_8016C088(3);
        if (var_s3 <= 0) {
            func_80167228(1, 0x30, 0xC4, &D_800F3A60);
        } else {
            func_80167228(1, 0x30, 0xC4, &sp10);
            var_s3 -= 1;
        }
        if (func_8012D290(&sp20, 4) != 0) {
            temp_v1_3 = sp20.unk1;
            switch (temp_v1_3) {                    /* irregular */
            case 0:
                func_8015C008(0);
                func_8015EBDC(0);
                var_s0_2 = 0;
                func_80138370(1, D_801B39B0, 0x20, 0);
                do {
                    func_80139F20(&D_800F3AE8, 0x30, 0xC4, &sp24);
                    func_8015EBDC(0);
                    var_s0_2 += 1;
                } while (var_s0_2 < 0xB4);
                D_801C34FC -= 1;
                func_8012D130(&D_800F3AE8);
                var_v0 = 1;
                if (sp20.unk2 == 0) {
                    return *((D_801C34FC * 4) + &D_801B394C);
                }
                /* Duplicate return node #36. Try simplifying control flow for better match */
                return var_v0;
            case 3:
                var_a2 = 0;
                if (D_801B3960.unk6 != 0) {
                    var_a1 = &D_801B393C;
                    var_a0 = &D_801B38E4;
                    do {
                        temp_v1_4 = *var_a0;
                        if (temp_v1_4 == sp20.unk3) {
                            *((temp_v1_4 * 4) + &D_801B38F4) = 1;
                            *var_a1 = 1;
                        }
                        var_a1 += 4;
                        var_a2 += 1;
                        var_a0 += 4;
                    } while (var_a2 < (s32) D_801B3960.unk6);
                }
                (&D_801B38E4)[sp20.unk2] = (s32) sp20.unk3;
                var_s3 = 0xA;
                func_80154AFC(&sp10, &D_800F3AB8, sp20.unk2 + 1);
                goto loop_7;
            case 6:
                if (sp20.unk2 == 2) {
                    var_v0_2 = ((sp20 >> 0x16) & 0x3C) + temp_s2;
                } else {
                    var_v0_2 = ((sp20 >> 0x16) & 0x3C) + temp_s0;
                }
                *var_v0_2 = sp20 >> 0x1C;
                func_8016C070(1, sp20.unk2);
                goto loop_7;
            case 4:
                var_s6 = 0;
                goto loop_7;
            default:
                printf(D_800F3B0C, sp20.unk1);
                goto loop_7;
            }
        } else {
            goto loop_7;
        }
    } else {
        func_8013B478(0, 0x64);
        var_v0 = 0xB;
        return var_v0;
    }
}
