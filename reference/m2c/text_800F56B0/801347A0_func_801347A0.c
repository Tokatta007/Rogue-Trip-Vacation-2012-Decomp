/* m2c reference for func_801347A0 @ 801347A0 (405 words). Generated; not compiled or validated. */
s32 func_8012CF84(?);                               /* extern */
s32 func_8012D058();                                /* extern */
? func_8012D130();                                  /* extern */
? func_8012D1AC(u32 *, ?, ?);                       /* extern */
s32 func_8012D290(u32 *, ?);                        /* extern */
? func_801351F4(?);                                 /* extern */
? func_80138370(?, s32, ?, ?);                      /* extern */
? func_8013841C(?, ? *, ? *);                       /* extern */
s32 func_80139DB8(?, ? *, ?, ?, s32 *);             /* extern */
? func_80139F20(? *, ?, ?, s32 *);                  /* extern */
? func_80154AFC(? *, ? *, u8);                      /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80167228(?, ?, ?, ? *);                      /* extern */
? func_8016C070(?, u8);                             /* extern */
s32 func_8016C088(?);                               /* extern */
u32 func_801F8420(?, s32 *, s32 *, ? *);            /* extern */
extern ? D_801B378C;
extern s32 D_801B38E4;
extern ? D_801B38F4;
extern s32 D_801B393C;
extern ? D_801B394C;
extern ? D_801B3960;
extern s8 D_801B3965;
extern u8 D_801B3966;
extern s8 D_801B3967;
extern s8 D_801B399F;
extern ? D_801B39B0;
extern s32 D_801DFF40;
static s32 D_801C32E8 = 0;
static s32 D_801C3470 = 0;
static void *D_801C34EC = NULL;
static s32 D_801C34FC = 0;
static ? D_800F39F8;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3A08;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3A18;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3A34;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3A50;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3A60;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3A80;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3AA0;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3AAC;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3AB8;                                /* unable to generate initializer: unknown type; const */
static s8 D_800F3AC4[0x24] = {
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
    0x4D,
    0x41,
    0x53,
    0x54,
    0x45,
    0x52,
    0x20,
    0x25,
    0x64,
    0x20,
    0xA,
    0,
    0,
}; /* const */

s32 func_801347A0(u32 *arg0, ? arg1) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    ? sp38;
    s32 sp48;
    u32 sp4C;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s4;
    s32 var_s6;
    s32 var_v1;
    u32 *var_v0;
    u32 temp_v0;
    u32 temp_v1;
    u8 temp_v0_2;
    u8 temp_v1_2;

    var_s4 = 7;
    var_v1 = 0;
    var_a0 = &D_801DFF40;
    sp18 = D_800F39F8.unk0;
    sp1C = D_800F39F8.unk4;
    sp20 = D_800F39F8.unk8;
    sp24 = D_800F39F8.unkC;
    sp28 = D_800F3A08.unk0;
    sp2C = D_800F3A08.unk4;
    sp30 = D_800F3A08.unk8;
    sp34 = D_800F3A08.unkC;
    sp48 = 1;
    D_801B399F = 0;
    do {
        *(var_v1 + &D_801B3960) = 1;
        *var_a0 = 0;
        var_v1 += 1;
        var_a0 += 4;
    } while (var_v1 < 4);
    D_801B3965 = 0;
    func_80138370(1, D_801B39B0.unk0, 0x20, 0);
    if (func_8012CF84(0x1FA400) == 0) {
        var_s0 = 0;
        do {
            func_80139F20(&D_800F3A18, 0x30, 0xC4, &sp48);
            func_8015EBDC(0);
            var_s0 += 1;
        } while (var_s0 < 0xB4);
        goto block_17;
    }
loop_7:
    if (func_8012D058() < 0) {
        var_s4 = func_80139DB8(0x3C, &D_800F3A34, 0x30, 0xC4, &sp48);
        if (var_s4 != 0) {
            func_8012D130();
            return var_s4;
        }
        goto loop_7;
    }
    if (D_801C32E8 != 0) {
        D_801B3967 = 1;
        *arg0 = func_801F8420(0, &sp18, &sp28, &D_801B378C);
        temp_v1 = *arg0;
        var_s4 = 7;
        switch (temp_v1) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            D_801B3966 = 2;
            D_801C34EC->unk7D8 = 2;
block_21:
            temp_v0 = (sp4C & 0xFFFF00FF) | 0x100;
            sp4C = temp_v0;
            sp4C = (temp_v0 & 0xFF00FFFF) | (D_801B3966 << 0x10);
            func_8012D1AC(&sp4C, 4, 0xFF00FFFF);
            goto block_50;
        case 1:                                     /* switch 1 */
            D_801C34EC->unk7D8 = 5;
            D_801B3966 = 3;
        default:                                    /* switch 1 */
block_20:
            goto block_21;
        case 2:                                     /* switch 1 */
            D_801C34EC->unk7D8 = 5;
            D_801B3966 = 4;
            goto block_20;
        case 16:                                    /* switch 1 */
            func_801351F4(0);
block_17:
            temp_a0 = D_801C34FC - 1;
            D_801C34FC = temp_a0;
            return *((temp_a0 * 4) + &D_801B394C);
        case 17:                                    /* switch 1 */
            func_801351F4(1);
            goto block_19;
        }
    } else {
        var_s6 = 1;
        var_s2 = 0;
        func_8013841C(arg1, &D_800F3A50, &D_801B39B0);
        sp48 = 1;
loop_23:
        if (var_s6 != 0) {
            func_80138370(1, D_801B39B0.unk0, 0x20, 0);
            temp_s3 = func_8016C088(2);
            temp_s0 = func_8016C088(3);
            if (var_s2 <= 0) {
                func_80167228(1, 0x30, 0xC4, &D_800F3A60);
            } else {
                func_80167228(1, 0x30, 0xC4, &sp38);
                var_s2 -= 1;
            }
            if (func_8012D290(&sp4C, 4) != 0) {
                temp_v1_2 = sp4C.unk1;
                switch (temp_v1_2) {                /* switch 2 */
                case 0:                             /* switch 2 */
                    func_8015C008(0);
                    func_8015EBDC(0);
                    var_s0_2 = 0;
                    func_80138370(1, D_801B39B0.unk39B0, 0, 0);
                    do {
                        func_80139F20(&D_800F3A80, 0x30, 0xC4, &sp48);
                        func_8015EBDC(0);
                        var_s0_2 += 1;
                    } while (var_s0_2 < 0xB4);
                    D_801C34FC -= 1;
                    func_8012D130();
                    if (sp4C.unk2 == 0) {
                        return *((D_801C34FC * 4) + &D_801B394C);
                    }
block_19:
                    return 1;
                case 1:                             /* switch 2 */
                    D_801B3960.unk6 = (u8) sp4C.unk2;
                    *arg0 = sp4C.unk2 - 2;
                    var_s2 = 0xA;
                    func_80154AFC(&sp38, &D_800F3AA0, D_801B3960.unk6);
                    if (D_801B3960.unk6 == 4) {
                        D_801C34EC->unk7D8 = 5;
                    } else {
                        D_801C34EC->unk7D8 = 2;
                    }
                    goto loop_23;
                case 2:                             /* switch 2 */
                    temp_v0_2 = sp4C.unk2;
                    var_s2 = 0xA;
                    D_801C3470 = (s32) temp_v0_2;
                    func_80154AFC(&sp38, &D_800F3AAC, temp_v0_2 + 1);
                    goto loop_23;
                case 3:                             /* switch 2 */
                    var_a2 = 0;
                    if (D_801B3960.unk6 != 0) {
                        var_a1 = &D_801B393C;
                        var_a0_2 = &D_801B38E4;
                        do {
                            temp_v1_3 = *var_a0_2;
                            if (temp_v1_3 == sp4C.unk3) {
                                *((temp_v1_3 * 4) + &D_801B38F4) = 1;
                                *var_a1 = 1;
                            }
                            var_a1 += 4;
                            var_a2 += 1;
                            var_a0_2 += 4;
                        } while (var_a2 < (s32) D_801B3960.unk6);
                    }
                    (&D_801B38E4)[sp4C.unk2] = (s32) sp4C.unk3;
                    var_s2 = 0xA;
                    func_80154AFC(&sp38, &D_800F3AB8, sp4C.unk2 + 1);
                    goto loop_23;
                case 6:                             /* switch 2 */
                    if (sp4C.unk2 == 2) {
                        var_v0 = ((sp4C >> 0x16) & 0x3C) + temp_s3;
                    } else {
                        var_v0 = ((sp4C >> 0x16) & 0x3C) + temp_s0;
                    }
                    *var_v0 = sp4C >> 0x1C;
                    func_8016C070(1, sp4C.unk2);
                    goto loop_23;
                case 4:                             /* switch 2 */
                    D_801B3960.unk7 = 2;
                    var_s4 = 7;
                    var_s6 = 0;
                    goto loop_23;
                default:                            /* switch 2 */
                    printf(D_800F3AC4, sp4C.unk1);
                    goto loop_23;
                }
            } else {
                goto loop_23;
            }
        } else {
block_50:
            *arg0 += 3;
            return var_s4;
        }
    }
}
