/* m2c reference for func_801352C4 @ 801352C4 (194 words). Generated; not compiled or validated. */
? func_80138370(?, s32, s32, ?);                    /* extern */
? func_80139FC4(?);                                 /* extern */
? func_8013AF34(?);                                 /* extern */
? func_80154AFC(? *, ? *, s32);                     /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_801670B4(?);                                 /* extern */
? func_80167228(?, s32, ?, ? *);                    /* extern */
s32 func_8016B6DC(?, ?);                            /* extern */
? func_8016BB58();                                  /* extern */
? func_8016BB9C();                                  /* extern */
? func_8017DE0C();                                  /* extern */
extern ? *D_801B3818;
extern ? D_801B3960;
extern ? D_801B39B0;
extern s32 D_801C3838;
static ? D_801C3480;                                /* unable to generate initializer: unknown type */
static ? D_800F3B30;                                /* unable to generate initializer: unknown type; const */

s32 func_801352C4(s32 arg0, ? arg1, s32 arg2, s32 arg3) {
    ? sp10;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    ? **var_s2;
    ? *var_a3;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s5;

    var_s3 = arg3;
    sp18 = D_800F3B30.unk0;
    sp1C = D_800F3B30.unk4;
    sp20 = D_800F3B30.unk8;
    var_s5 = 0;
    func_8016BB58();
    func_80138370(1, D_801B39B0.unk0, 0, 0);
    func_80138370(1, *((arg2 * 4) + &D_801B39B0), 0x49, 0xC);
    var_s1 = 0;
    if (D_801C3838 >= 0) {
        do {
            if (var_s1 != D_801B3960.unk4) {
                func_801670B4(1);
            } else {
                func_80138370(1, D_801B39B0.unk4, (var_s1 * 0x14) + 0x28, 0x9E);
            }
            temp_s0 = var_s1 + 1;
            func_80154AFC(&sp10, "%d", temp_s0);
            func_80167228(1, (var_s1 * 0x14) + 0x30, 0xA8, &sp10);
            var_s1 = temp_s0;
        } while (D_801C3838 >= var_s1);
    }
loop_7:
    if (var_s5 == 0) {
        func_8015C008(0);
        var_s1_2 = 0;
        func_8016BB9C();
        func_80139FC4(1);
        if (D_801B3818 != NULL) {
            var_s2 = &D_801B3818;
            do {
                var_s0 = 0x45;
                if (var_s1_2 != 0) {
                    var_s0 = 0xD6;
                    if (var_s1_2 == 1) {
                        var_s0 = 0x82;
                    }
                }
                if (var_s1_2 == var_s3) {
                    var_a3 = (&D_801B3818)[var_s3];
                } else {
                    func_801670B4(1);
                    var_a3 = *var_s2;
                }
                func_80167228(1, var_s0, 0xC5, var_a3);
                var_s2 += 4;
                var_s1_2 += 1;
            } while (*var_s2 != NULL);
        }
        if (func_8016B6DC(0x2000, arg1) & 0xFF) {
            func_8013AF34(0x2C);
            var_s3 += 1;
            if (var_s3 == arg0) {
                var_s3 = 0;
            }
        }
        if (func_8016B6DC(0x8000, arg1) & 0xFF) {
            func_8013AF34(0x2C);
            var_s3 -= 1;
            if (var_s3 < 0) {
                var_s3 = arg0 - 1;
            }
        }
        if (func_8016B6DC(0x40, arg1) & 0xFF) {
            var_s5 = 1;
        }
        if (func_8016B6DC(0x800, arg1) & 0xFF) {
            var_s5 = 1;
        }
        if (var_s5 == 1) {
            func_8013AF34(0x2D);
            var_s0_2 = 0;
            do {
                func_8015EBDC(0);
                var_s0_2 += 1;
                func_80138370(1, D_801B39B0.unk8, (&sp18)[var_s3], 0xB9);
            } while (var_s0_2 < 0x1E);
        }
        func_8017DE0C();
        goto loop_7;
    }
    return var_s3;
}
