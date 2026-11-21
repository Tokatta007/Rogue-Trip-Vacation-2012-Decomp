/* m2c reference for main @ 80133EC0 (459 words). Generated; not compiled or validated. */
s32 func_80132090();                                /* extern */
? func_80132EBC();                                  /* extern */
s32 func_80132F8C();                                /* extern */
s32 func_80133040();                                /* extern */
s32 func_801345EC(s32);                             /* extern */
s32 func_801347A0(s32 *, s32);                      /* extern */
s32 func_80134DF4(s32);                             /* extern */
s32 func_80135260(s32);                             /* extern */
s32 func_801355CC();                                /* extern */
s32 func_80135A84(s32);                             /* extern */
s32 func_8013689C();                                /* extern */
? func_80136C58();                                  /* extern */
? func_80136CFC();                                  /* extern */
? func_80136EA4(s32);                               /* extern */
s32 func_801387F0(s32);                             /* extern */
s32 func_8013B28C(? *, ?, ?, ? *);                  /* extern */
s32 func_8013B584();                                /* extern */
s32 func_8013B594(s32, s32, s32);                   /* extern */
? func_8013B5A4(?);                                 /* extern */
? func_8013B928(? *);                               /* extern */
? func_8013BED8(? *, ?);                            /* extern */
? func_8013C120(? *, ?, ? *);                       /* extern */
s32 func_8013C958(? *, u8);                         /* extern */
s32 func_8013C98C(? *, u8);                         /* extern */
? func_801549A8();                                  /* extern */
? func_8015BF70(?);                                 /* extern */
? func_8015FB30(?, ?);                              /* extern */
? func_8015FB80(?, s16, s16);                       /* extern */
? func_80170388(? *);                               /* extern */
? func_8017C9F4(? *);                               /* extern */
s32 func_801F5A0C(?, ?);                            /* extern */
s32 func_801F82C0(s32 *, s32, ?);                   /* extern */
s32 func_801F8658(s32 *, s32, ?);                   /* extern */
? func_801F8A78(s32);                               /* extern */
s32 func_801F8F70(?, ?, ?);                         /* extern */
extern ? D_801B3960;
extern s32 D_801C3838;
extern s32 D_801C3844;
extern ? D_801CC820;
extern ? D_801DF010;
extern ? D_801DF7F0;
extern ? D_801DFAB0;
extern ? func_8013B1FC;
static s32 D_801C32F8 = 0;
static s32 D_801C32FC = 0;
static s32 D_801C3470 = 0;
static ? D_801C3478;                                /* unable to generate initializer: unknown type */
static ? *D_801C34E8 = NULL;
static ? *D_801C34EC = NULL;
static ? *D_801C34F0 = NULL;
static ? *D_801C34F4 = NULL;
static ? *D_801C34F8 = NULL;
static s32 D_801C34FC = 0;
static s32 D_801C3504 = 0;
static s32 D_801C3508 = 0;
static s32 D_801C36C0 = 0;
static s32 D_801C36CC = 0;
static s32 D_801C36D8 = 0;
static s32 D_801C36DC = 0;
static ? D_800F3980;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3998;                                /* unable to generate initializer: unknown type; const */
static ? D_800F39B0;                                /* unable to generate initializer: unknown type; const */

void main(void) {
    ? sp10;
    s32 sp20;
    ? var_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a1;
    s32 var_a1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u8 var_a1_2;
    u8 var_v0;
    void *temp_v0;
    void *temp_v0_3;

    func_801549A8();
    func_8017C9F4(&sp10);
    D_801C34EC = &D_801CC820;
    D_801C34F0 = &D_801DF010;
    D_801C34F4 = &D_801DF7F0;
    D_801C34E8 = &D_801DFAB0;
    D_801C34F8 = &sp10;
    func_80136C58();
    func_80136CFC();
    var_s0 = 1;
    temp_s3 = func_80132F8C();
    func_8015BF70(0);
    D_801C3504 = 0xC;
    D_801C3844 = 0;
    D_801C3838 = 0xB;
    D_801C3508 = 1;
    if ((func_8013B28C(&D_800F3980, 0x76, 1, &func_8013B1FC) != 0x800) && (func_8013B28C(&D_800F3998, 0xB2, 1, &func_8013B1FC) != 0x800)) {
        func_801F8A78(temp_s3);
        func_8013B28C(&D_800F39B0, 0x7D9, 1, &func_8013B1FC);
    } else {
        func_801F8A78(temp_s3);
    }
loop_5:
    D_801C34FC = 0;
    if (var_s0 != 0xB) {
        func_8013C120(D_801C34F4, 1, "RTSHELL");
    }
loop_8:
    if (var_s0 != 0xB) {
        switch (var_s0) {                           /* switch 1 */
        case 1:                                     /* switch 1 */
            D_801C34FC = 0;
            D_801B3960.unk7 = 0U;
            var_s0 = func_801345EC(temp_s3);
            break;
        case 2:                                     /* switch 1 */
            var_s0 = func_801F82C0(&sp20, temp_s3, 0x801B399C);
            break;
        case 3:                                     /* switch 1 */
            var_s0 = func_801F8658(&sp20, temp_s3, 0x801B399C);
            break;
        case 4:                                     /* switch 1 */
            var_s0 = func_801347A0(&sp20, temp_s3);
            break;
        case 5:                                     /* switch 1 */
            var_s0 = func_80135260(temp_s3);
            break;
        case 6:                                     /* switch 1 */
            var_s0 = func_801F5A0C(0x800201D0, 0x801B399C);
            break;
        case 7:                                     /* switch 1 */
            var_a0 = 1;
            var_a1 = 0;
            if ((D_801C34EC->unk7D8 == 1) || (D_801C34EC->unk7D8 == 3)) {
                var_a1 = 1;
            }
            if (var_a1 != 0) {
                var_a0 = 0;
                D_801C3470 = 0;
            }
            if (D_801B3960.unk7 == 2) {
                var_a0 = 0;
            }
            var_s0 = func_801F8F70(var_a0, 0x800201D0, 0x801B399C);
            break;
        case 8:                                     /* switch 1 */
            var_s0 = func_80135A84(sp20);
            break;
        case 10:                                    /* switch 1 */
            var_s0 = func_80134DF4(temp_s3);
            break;
        case 9:                                     /* switch 1 */
            var_s0 = func_8013689C();
            break;
        case 13:                                    /* switch 1 */
            var_s0 = func_801355CC();
            break;
        default:                                    /* switch 1 */
            var_s0 = 1;
            break;
        }
        goto loop_8;
    }
    var_s1 = 9;
    func_80136EA4(sp20);
    switch (D_801B3960.unk4) {                      /* switch 2 */
    case 0:                                         /* switch 2 */
        var_s1 = 2;
    default:                                        /* switch 2 */
        break;
    case 1:                                         /* switch 2 */
        var_s1 = 3;
        break;
    case 2:                                         /* switch 2 */
        var_s1 = 4;
        break;
    case 3:                                         /* switch 2 */
        var_s0_2 = 0;
        if (func_80133040() != 0) {
            var_s0_2 = (D_801C34EC + 0xB96C)->unk8 >= 0x1F41;
        }
        var_s1 = 5;
        if (var_s0_2 != 0) {
            var_s1 = 0xE;
        }
        break;
    case 4:                                         /* switch 2 */
        var_s1 = 0x10;
        break;
    case 5:                                         /* switch 2 */
        var_v0 = D_801B3960.unkA;
        var_s1 = 7;
block_47:
        if (var_v0 != 0) {
            var_s1 = 0xF;
        }
        break;
    case 6:                                         /* switch 2 */
        var_s1 = 8;
        break;
    case 7:                                         /* switch 2 */
        var_s1 = 9;
        break;
    case 8:                                         /* switch 2 */
        var_s1 = 0xA;
        break;
    case 9:                                         /* switch 2 */
        var_s1 = 0xB;
        break;
    case 10:                                        /* switch 2 */
        var_s1 = 0xC;
        break;
    case 11:                                        /* switch 2 */
        var_v0 = D_801B3960.unkB;
        var_s1 = 0xD;
        goto block_47;
    }
    func_8015FB30(0x5F, 0x5F);
    if (var_s1 == 0xF) {
        temp_s0 = func_8013B584();
        var_a0_2 = D_801C36D8;
        temp_v1 = ((temp_s0 & 0xFF) * func_8013C958(D_801C34F4, 0xDU)) / 127;
        if (temp_v1 < var_a0_2) {
            var_a0_2 = temp_v1;
        }
        var_v1 = temp_v1;
        D_801C36CC = var_a0_2;
        if (var_v1 < D_801C36DC) {
            var_v1 = D_801C36DC;
        }
        D_801C36CC = var_v1;
        var_v0_2 = func_8013B594(var_a0_2, D_801C36DC, temp_v1);
        var_a1_2 = 0xD;
    } else if (var_s1 == 0xE) {
        temp_s0_2 = func_8013B584();
        var_a0_3 = D_801C36D8;
        var_v1_2 = ((temp_s0_2 & 0xFF) * func_8013C958(D_801C34F4, 0xCU)) / 127;
        if (var_v1_2 < var_a0_3) {
            var_a0_3 = var_v1_2;
        }
        D_801C36CC = var_a0_3;
        if (var_v1_2 < D_801C36DC) {
            var_v1_2 = D_801C36DC;
        }
        D_801C36CC = var_v1_2;
        var_v0_2 = func_8013B594(var_a0_3, D_801C36DC);
        var_a1_2 = 0xC;
    } else {
        temp_s0_3 = func_8013B584();
        var_a0_4 = D_801C36D8;
        var_v1_3 = ((temp_s0_3 & 0xFF) * func_8013C958(D_801C34F4, D_801B3960.unk4)) / 127;
        if (var_v1_3 < var_a0_4) {
            var_a0_4 = var_v1_3;
        }
        D_801C36CC = var_a0_4;
        if (var_v1_3 < D_801C36DC) {
            var_v1_3 = D_801C36DC;
        }
        D_801C36CC = var_v1_3;
        var_v0_2 = func_8013B594(var_a0_4, D_801C36DC);
        var_a1_2 = D_801B3960.unk4;
    }
    var_a0_5 = D_801C36D8;
    var_v1_4 = ((var_v0_2 & 0xFF) * func_8013C98C(D_801C34F4, var_a1_2)) / 127;
    if (var_v1_4 < var_a0_5) {
        var_a0_5 = var_v1_4;
    }
    D_801C36C0 = var_a0_5;
    if (var_v1_4 < D_801C36DC) {
        var_v1_4 = D_801C36DC;
    }
    D_801C36C0 = var_v1_4;
    func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
    var_s0 = 0xC;
    temp_v0 = D_801C34F8->unk8;
    (temp_v0 + 0x10)->unk4(D_801C34F8 + (s16) temp_v0->unk10, var_s1);
    func_80132EBC();
loop_72:
    if (var_s0 == 0xC) {
        D_801C32F8 = 1;
        D_801C32FC = 0;
        temp_v0_2 = func_80132090();
        D_801C32F8 = 0;
        var_s0 = func_801387F0(temp_v0_2);
        goto loop_72;
    }
    func_8013BED8(D_801C34F4, 0);
    if (var_s0 != 0xB) {
        func_8013B5A4(1);
    }
    temp_v0_3 = D_801C34F8->unk8;
    (temp_v0_3 + 0x18)->unk4(D_801C34F8 + (s16) temp_v0_3->unk18, 2);
    var_v1_5 = D_801C36D8;
    if (var_v1_5 > 0) {
        var_v1_5 = 0;
    }
    D_801C36C0 = var_v1_5;
    var_a1_3 = 0;
    if (D_801C36DC > 0) {
        var_a1_3 = D_801C36DC;
    }
    D_801C36C0 = var_a1_3;
    func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
    func_8013B928(D_801C34F4);
    func_80170388(D_801C34E8);
    goto loop_5;
}
