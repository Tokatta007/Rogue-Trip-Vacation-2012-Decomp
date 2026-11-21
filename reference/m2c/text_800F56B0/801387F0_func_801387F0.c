/* m2c reference for func_801387F0 @ 801387F0 (370 words). Generated; not compiled or validated. */
? func_80125AF8(void *);                            /* extern */
? func_80125DA4(void *);                            /* extern */
? func_80126FA4(void *);                            /* extern */
? func_80133708(? *, ? *, void *);                  /* extern */
? func_80138788(?, ? *);                            /* extern */
s32 func_80138DB8(? *);                             /* extern */
? func_80138F8C();                                  /* extern */
? func_80139D54(? *);                               /* extern */
s32 func_8013A654(?, s32);                          /* extern */
? func_8013B28C(? *, ?, ?, ? *);                    /* extern */
? func_8013B478(?, ?);                              /* extern */
? func_8013BED8(s32, ?);                            /* extern */
? func_80147784(void *, ? *, void *);               /* extern */
? func_80154AFC(? *, ? *, u16, u16);                /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80167020(?, ?, ?, ? *);                      /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167104(?);                                 /* extern */
extern ? D_801B3960;
extern u8 D_801B3967;
extern ? func_8013B1FC;
static ? D_801C34AC;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;
static s32 D_801C3508 = 0;
static ? D_800F39B0;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3CAC;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3CBC;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3CD4;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3CE0;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3CF4;                                /* unable to generate initializer: unknown type; const */

s32 func_801387F0(s32 arg0) {
    ? sp10;
    ? *var_a0;
    ? var_a0_3;
    ? var_a1;
    ? var_a2;
    s32 temp_v1;
    s32 var_a0_2;
    s32 var_v1;
    s32 var_v1_2;
    u32 var_v0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    func_8013BED8(D_801C34F4, 1);
    if (D_801C34EC->unk7D8 == 0) {
        func_80133708();
        func_80167088(0, 0xFF, 0x32, 0x32);
        func_80167020(0, 0xA0, 0x78, &D_800F3CAC);
        func_8015C008(0);
        func_8015EBDC(0);
        temp_v0 = D_801B3960.unk4 + 1;
        D_801B3960.unk4 = temp_v0;
        if ((u32) (temp_v0 & 0xFF) >= 0xCU) {
            D_801C3508 = 1;
            func_8013B28C(&D_800F39B0, 0x7D9, 1, &func_8013B1FC);
            D_801B3960.unk4 = 0U;
        }
        /* Duplicate return node #73. Try simplifying control flow for better match */
        return 1;
    }
    var_a0 = (? *)3;
    if (arg0 != 3) {
        if (arg0 == 9) {
            func_80139D54((? *)3);
            func_80133708();
            func_80138788(0x12C, &D_800F3CBC);
            return 1;
        }
        temp_v1 = D_801C34EC->unk7D8;
        switch (temp_v1) {                          /* irregular */
        case 1:
            if ((arg0 == temp_v1) || (arg0 == 8)) {
                if ((D_801B3960.unk4 != 0xA) && (D_801B3960.unk4 != 4)) {
                    temp_v0_2 = D_801B3960.unk0 - 1;
                    D_801B3960.unk0 = temp_v0_2;
                    if (!(temp_v0_2 & 0xFF)) {
                        func_80139D54(&D_801B3960);
                        func_80133708();
                        func_80138788(0xF0, &D_800F3CD4);
                        return 1;
                    }
                    var_a0_2 = 0;
                    if ((D_801C34EC->unk12754 != 0) || (D_801C34EC->unk12750 == 0)) {
                        var_a0_2 = 1;
                    }
                    var_a0 = (? *)0xB788;
                    if (var_a0_2 != 0) {
block_70:
                        func_80147784(D_801C34EC + var_a0);
                        return 0xC;
                    }
                    goto block_25;
                }
                goto block_49;
            }
block_25:
            if (arg0 != 4) {
                var_a0 = D_801C34EC + 0x10000;
                var_v1 = 0;
                if (D_801C34EC->unk12750 != 0) {
                    var_v1 = D_801C34EC->unk12754 == 0;
                }
                if (var_v1 != 0) {
                    goto block_48;
                }
                goto block_71;
            }
block_48:
            if (func_80138DB8(var_a0) == 0) {
block_49:
                func_80138F8C();
                return 0xD;
            }
            goto block_71;
        case 3:
            var_a0 = &D_801B3960;
            if ((u32) (arg0 - 1) >= 2U) {
                var_v0 = arg0 - 4;
                if (arg0 == 8) {
                    goto block_33;
                }
                goto block_46;
            }
block_33:
            if ((D_801B3960.unk4 != 0xA) && (D_801B3960.unk4 != 4)) {
                temp_v0_3 = D_801B3960.unk0 - 1;
                D_801B3960.unk0 = temp_v0_3;
                D_801B3960.unk1 = (u8) (D_801B3960.unk1 - 1);
                if (!(temp_v0_3 & 0xFF)) {
                    func_80133708(&D_801B3960, &D_801B3960, D_801C34EC);
                    func_80138788(0xF0, &D_800F3CD4);
                    return 1;
                }
                var_a0 = NULL;
                if ((D_801C34EC->unk12754 != 0) || (D_801C34EC->unk12750 == 0)) {
                    var_a0 = (? *)1;
                }
                if (var_a0 != NULL) {
                    if (arg0 == 1) {
                        func_80147784(D_801C34EC + 0xB788, &D_801B3960, D_801C34EC);
                    }
                    if (arg0 != 2) {
                        return 0xC;
                    }
block_69:
                    var_a0 = (? *)0xC040;
                    goto block_70;
                }
                var_v0 = arg0 - 4;
block_46:
                if ((var_v0 < 2U) || (D_801C34EC->unk12754 == 0)) {
                    goto block_48;
                }
                goto block_71;
            }
            goto block_49;
        case 2:
            if (D_801B3967 == 0) {
                func_80133708((? *)3);
                if (func_8013A654(0, arg0) != 0) {
                    func_8013B478(0, 0x64);
                    return 0xB;
                }
            }
            goto block_71;
        case 5:
            if (D_801B3960.unk7 == 0) {
                func_80133708((? *)3);
                if (arg0 == 1) {
                    D_801B3960.unk1E = (u16) (D_801B3960.unk1E + 1);
                    D_801B3960.unk24 = (u16) (D_801B3960.unk24 + 1);
                } else if (arg0 == 2) {
                    D_801B3960.unk26 = (u16) (D_801B3960.unk26 + 1);
                    D_801B3960.unk1C = (u16) (D_801B3960.unk1C + 1);
                }
                if ((D_801C34EC + 0x6220)->unk3A8 == 2) {
                    func_80154AFC(&sp10, &D_800F3CE0, D_801B3960.unk1C, D_801B3960.unk1E);
                    func_80167104(0);
                    func_80167020(0, 0xA0, 0x3C, &sp10);
                    func_80154AFC(&sp10, &D_800F3CE0, D_801B3960.unk24, D_801B3960.unk26);
                    func_80167104(0);
                    var_a0_3 = 0;
                    var_a1 = 0xA0;
                    var_a2 = 0xB4;
                } else {
                    func_80154AFC(&sp10, &D_800F3CF4, D_801B3960.unk1C, D_801B3960.unk1E);
                    func_80167020(1, 0x50, 0x50, &sp10);
                    func_80154AFC(&sp10, &D_800F3CF4, D_801B3960.unk24, D_801B3960.unk26);
                    var_a0_3 = 1;
                    var_a1 = 0xF0;
                    var_a2 = 0x50;
                }
                func_80167020(var_a0_3, var_a1, var_a2, &sp10);
                func_80138788(0x12C, &D_801C34AC);
                if (D_801C34EC->unk127E5 != 0) {
                    func_80125AF8(D_801C34EC);
                    var_v1_2 = 0;
                    if (((D_801C34EC + 0xB788)->unk82A != 0) || ((D_801C34EC + 0xC040)->unk82A != 0)) {
                        var_v1_2 = 1;
                    }
                    if (var_v1_2 != 0) {
                        func_80125DA4(D_801C34EC);
                    }
                    func_80126FA4(D_801C34EC);
                }
                func_80147784(D_801C34EC + 0xB788);
                goto block_69;
            }
            goto block_71;
        }
    } else {
block_71:
        func_80139D54();
        return 1;
    }
}
