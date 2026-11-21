/* m2c reference for func_801355CC @ 801355CC (302 words). Generated; not compiled or validated. */
? func_80133658();                                  /* extern */
s32 func_80133934(s32);                             /* extern */
s32 func_80133958(s32);                             /* extern */
s32 func_801352C4(?, ?, s32, s32);                  /* extern */
? func_80138370(s32, s32, s32, s32);                /* extern */
? func_8013841C(?, ? *, ? *);                       /* extern */
? func_80138F34(?);                                 /* extern */
? func_80139D54();                                  /* extern */
? func_80139FC4(?);                                 /* extern */
s32 func_8013A440(?, ?);                            /* extern */
? func_8013AF34(?);                                 /* extern */
? func_8013B478(?, ?, ?);                           /* extern */
? func_8013B5A4(?);                                 /* extern */
? func_80154AFC(? *, ? *, s32);                     /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C66C(s32);                               /* extern */
? func_8015C838(s32);                               /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_801670B4(?);                                 /* extern */
? func_80167228(?, s32, ?, ? *);                    /* extern */
? func_801F5864(? *, void *, ?);                    /* extern */
extern ? D_801B2F1C;
extern ? D_801B3960;
extern u8 D_801B3964;
extern ? D_801B39B0;
extern s32 D_801B39B4;
extern ? D_801B3A14;
extern s32 D_801C3838;
static ? D_801C3480;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;
static ? D_800F39D8;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3B3C;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3B4C;                                /* unable to generate initializer: unknown type; const */

s32 func_801355CC(void) {
    ? sp10;
    ? var_a0;
    ? var_a1;
    ? var_a2;
    s32 *temp_s2;
    s32 temp_a3;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;

    var_s1 = 0;
    var_s3 = 0;
    var_s4 = 0;
    var_s2 = 0;
    func_8013841C(0x800BECE0, &D_800F39D8, &D_801B3A14);
    if ((D_801B3960.unk4 == 5) && (D_801B3960.unkA == 0) && ((D_801C34EC + 0xB788)->unk7C0 != 0xE0)) {
        if (((u8) D_801B3960.unk6 < 2U) || ((D_801C34EC + 0xC040)->unk7C0 != 0xE0)) {
            var_s2 = 1;
            D_801B3960.unkA = 1U;
        }
    } else if ((D_801B3960.unk4 == 0xB) && (D_801B3960.unkB == 0)) {
        var_s2 = 1;
        D_801B3960.unkB = 1U;
    }
    if (0 == 0) {
        do {
            func_8015C008(0);
            func_8015EBDC(0);
            func_80133658();
            if ((u8) D_801B3960.unk4 < 6U) {
                func_8013841C(0x800201D0, &D_800F3B3C, &D_801B39B0);
                var_s4 = D_801B3960.unk4 + 4;
            } else {
                func_8013841C(0x800201D0, &D_800F3B4C, &D_801B39B0);
                var_s4 = D_801B3960.unk4 - 2;
            }
            var_a1 = 0;
            if ((u8) D_801B3960.unk6 >= 2U) {
                var_a1 = 5;
            }
            var_s1 = func_801352C4(3, var_a1, var_s4, var_s3);
            if (var_s1 == 0) {
                if (var_s2 == 0) {
                    D_801B3960.unk4 = (u8) (D_801B3960.unk4 + 1);
                }
                func_8013B5A4(2);
                var_a2 = 0;
                if ((u8) D_801B3960.unk6 >= 2U) {
                    var_a2 = 5;
                }
                func_801F5864(&D_801B2F1C, D_801C34EC, var_a2);
                func_8013B5A4(1);
                var_s3 = 1;
                if (var_s2 == 0) {
                    D_801B3960.unk4 = (u8) (D_801B3960.unk4 - 1);
                }
            } else if (var_s1 == 2) {
                var_a0 = 0;
                if ((u8) D_801B3960.unk6 >= 2U) {
                    var_a0 = 5;
                }
                if (func_8013A440(var_a0, 0) == 0) {
                    var_s1 = 0;
                }
            }
        } while (var_s1 == 0);
    }
    if (var_s1 == 2) {
        func_80139D54();
        return 1;
    }
    if (var_s2 != 0) {
        func_80138F34(1);
    } else {
        D_801B3960.unk4 = (u8) (D_801B3960.unk4 + 1);
        func_80138370(1, D_801B39B0.unk0, 0, 0);
        func_80139FC4(1);
        temp_s2 = ((var_s4 + 1) * 4) + &D_801B39B0;
        func_80138370(1, *temp_s2, 0x49, 0xC);
        if ((D_801B3960.unk4 == 4) || (D_801B3960.unk4 == 0xA)) {
            var_s0 = 0;
            var_s1_2 = 0;
            do {
                func_8015EBDC(0);
                var_s0 = var_s0 == 0;
                func_8015C66C(func_80133934(var_s0));
                func_8015C838(func_80133958(var_s0));
                func_80138370(var_s0, D_801B39B0.unk0, 0, 0);
                func_80138370(var_s0, *temp_s2, 0x49, 0xC);
                temp_a3 = var_s1_2 + 0x13;
                var_s1_2 += 1;
                func_80138370(var_s0, D_801B39B0.unkC, 0x2A, temp_a3);
            } while (var_s1_2 < 0xDC);
            func_80133658();
            func_80138370(1, D_801B39B0.unk0, 0, 0);
            func_80138370(1, *(((var_s4 + 1) * 4) + &D_801B39B0), 0x49, 0xC);
        }
        func_80138370(1, D_801B39B4, (D_801B3960.unk4 * 0x14) + 0x28, 0x9E);
        func_8013AF34(0x2F);
        var_s1_3 = 0;
        if (D_801C3838 >= 0) {
            do {
                if (var_s1_3 != D_801B3960.unk4) {
                    func_801670B4(1);
                }
                temp_s0 = var_s1_3 + 1;
                func_80154AFC(&sp10, "%d", temp_s0);
                func_80167228(1, (var_s1_3 * 0x14) + 0x30, 0xA8, &sp10);
                var_s1_3 = temp_s0;
            } while (D_801C3838 >= var_s1_3);
        }
    }
    D_801C34EC->unk12688 = (s32) D_801B3964;
    func_8013B478(0, 0xAA, 0x10000);
    return 0xB;
}
