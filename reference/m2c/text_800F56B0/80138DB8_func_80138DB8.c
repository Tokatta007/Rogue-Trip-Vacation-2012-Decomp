/* m2c reference for func_80138DB8 @ 80138DB8 (95 words). Generated; not compiled or validated. */
? func_80133708(? *);                               /* extern */
? func_801369BC(?, ? *);                            /* extern */
? func_80139D54();                                  /* extern */
? func_80139F20(? *, ?, ?, s32 *);                  /* extern */
? func_8013AF7C(?, ?);                              /* extern */
? func_8013AFF8();                                  /* extern */
? func_8015C008(?);                                 /* extern */
s32 func_8016B6DC(?, ?);                            /* extern */
? func_8016BB9C();                                  /* extern */
s32 func_8017D580(?);                               /* extern */
? func_8017DE0C();                                  /* extern */
extern ? D_801B3960;
extern u8 D_801B399C;
extern s32 D_801C3838;
static void *D_801C34EC = NULL;
static ? D_800F3D08;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3D1C;                                /* unable to generate initializer: unknown type; const */

s32 func_80138DB8(void) {
    s32 sp10;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    sp10 = 0;
    if (D_801B3960.unk4 == D_801C3838) {
        if (D_801B3960.unkB != 0) {
            func_80133708(&D_801B3960);
            func_8013AFF8();
            func_80139D54();
            return 1;
        }
        goto block_4;
    }
block_4:
    var_v0 = 0;
    if (D_801B3960.unk4 == 5) {
        if (D_801B3960.unkA != 0) {
            var_v0 = 0;
            if (D_801B399C == 0) {
                func_80133708(&D_801B3960);
                func_801369BC(0x800201D0, &D_800F3D08);
loop_8:
                if (var_s0 == 0) {
                    func_8015C008(0);
                    func_80139F20(&D_800F3D1C, 0x6E, 0xC8, &sp10);
                    func_8016BB9C();
                    if (func_8016B6DC(0x40, 0) & 0xFF) {
                        func_8013AF7C(0x4A, 1);
                        var_s0 = 1;
                    }
                    if ((D_801C34EC->unk7D8 == 3) && (func_8016B6DC(0x40, 1) & 0xFF)) {
                        func_8013AF7C(0x4A, 1);
                        var_s0 = 1;
                    }
                    func_8017DE0C();
                    goto loop_8;
                }
loop_15:
                var_v0 = 1;
                if (func_8017D580(0x19) > 0) {
                    func_8017DE0C();
                    goto loop_15;
                }
            }
        } else {
            var_v0 = 0;
        }
    }
    return var_v0;
}
