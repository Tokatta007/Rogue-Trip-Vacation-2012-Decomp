/* m2c reference for func_8012E0C8 @ 8012E0C8 (174 words). Generated; not compiled or validated. */
? func_800203E8(s32, ?);                            /* extern */
? func_80020464(s32, s32);                          /* extern */
? func_80020520(?);                                 /* extern */
? func_8012DC10(? *, s32, s32, s32, s32, s32, s32, s32); /* extern */
? func_8012DCA0(u8 *, ? *);                         /* extern */
? func_8012DE04(? *, s32);                          /* extern */
? func_8012DFD8(? *, ?);                            /* extern */
? func_8012E380();                                  /* extern */
? func_801555E4(?);                                 /* extern */
? func_80155A14(?);                                 /* extern */
s32 func_8015735C(u8 *, s32);                       /* extern */
? func_8015AEC4(?);                                 /* extern */
? func_8015BF70(?);                                 /* extern */
? func_8015C838(s32, u8);                           /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_8015FA70(?, ?, ?);                           /* extern */
? func_8015FB80(?, ?, ?);                           /* extern */
extern u8 D_801C37CC;
extern u8 D_801C37D0;
extern u8 D_801C37D1;
extern u8 D_801C37D2;
extern s32 D_801C37D4;
extern s32 D_801C37D8;
extern ? D_801CB960;
extern ? func_8012DD0C;
static s32 D_801C333C = 0;

s32 func_8012E0C8(s32 arg0, s32 (*arg1)(s32, s32, u8), u8 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, u8 *arg12) {
    u8 sp20;
    u8 sp38;
    ? var_s5;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s6;
    s32 var_v0;
    u32 temp_lo;
    u8 temp_a1;

    var_s2 = 0;
    var_s6 = 0;
    var_s5 = 2;
    temp_s1 = arg3 & 0xFF;
    D_801C37CC = arg3;
    sp38 = arg2;
    if (temp_s1 != 0) {
        var_s5 = 3;
    }
    func_8012E380();
    if (func_8015735C(&sp20, arg0) == 0) {
        return 0;
    }
    D_801C37D8 = 0x800401D0;
    func_8015FA70(0, 0, 1);
    func_8015FB80(0, 0x4B, 0x4B);
    do {
        D_801C37D0 = sp20;
        D_801C37D1 = sp21;
        D_801C37D2 = sp22;
        func_8012DC10(&D_801CB960, *arg12 & 0xFF, arg5, arg6, arg7, arg8, arg9, arg10);
        func_8012DCA0(&D_801C37D0, &func_8012DD0C);
        func_8012DE04(&D_801CB960, arg4);
loop_6:
        if (var_s2 == 0) {
            func_800203E8(*((D_801CB960.unk8 * 4) + &D_801CB960), var_s5);
            temp_lo = D_801CB960.unk28 * D_801CB960.unk2A;
            func_80020464(D_801CB960.unkC, (s32) (temp_lo + (temp_lo >> 0x1F)) >> 1);
            func_8012DE04(&D_801CB960, arg4);
            func_8012DFD8(&D_801CB960, 0);
            func_8015EBDC(0);
            temp_a1 = D_801CB960.unk20 == 0;
            *arg12 = temp_a1;
            if (temp_s1 != 0) {
                ((temp_a1 * 0x14) + arg11)->unk11 = (u8) D_801C37CC;
            }
            func_8015C838(arg11 + (temp_a1 * 0x14), temp_a1);
            func_8015BF70(1);
            if (temp_s1 == 0) {
                func_8015AEC4(-1);
            }
            if (D_801C37D4 != 1) {
                if (arg1 != NULL) {
                    var_s2 = arg1(D_801C333C, arg4, temp_a1);
                }
                goto loop_6;
            }
            if ((var_s2 != 0) || (D_801C37D4 == 0) || (var_v0 = var_s6 & 0xFF, (sp38 == 0))) {
                goto block_17;
            }
        } else {
block_17:
            var_s6 = 1;
            var_v0 = 1 & 0xFF;
        }
    } while (var_v0 == 0);
    func_8015FB80(0, 0, 0);
    func_80020520(0);
    func_80155A14(0);
    func_801555E4(0);
    return var_s2;
}
