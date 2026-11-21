/* m2c reference for func_801446DC @ 801446DC (315 words). Generated; not compiled or validated. */
? func_800F5EBC(void *);                            /* extern */
? func_80108D60(void *, s32, void *, s32, s32);     /* extern */
s8 func_80122F24(s32, void *, ?, void *);           /* extern */
? func_801253C8(void *, void *);                    /* extern */
? func_8012A5F0(void *);                            /* extern */
? func_8012F320(void *);                            /* extern */
s32 func_8013A06C(?);                               /* extern */
? func_80144150(void *);                            /* extern */
? func_80144EC0(void *);                            /* extern */
? func_801451E0(void *);                            /* extern */
? func_80146040(void *);                            /* extern */
? func_8014645C(void *);                            /* extern */
? func_80146E4C(void *);                            /* extern */
? func_801476C0(void *);                            /* extern */
? func_80148420(void *, s32);                       /* extern */
? func_80148704(void *);                            /* extern */
? func_80148DB0(void *);                            /* extern */
? func_80149628(void *);                            /* extern */
s16 func_80178A1C();                                /* extern */
s32 func_80178A2C();                                /* extern */
s32 func_80178A70();                                /* extern */
s32 func_801793F8(s32);                             /* extern */
? func_80179414(s32, s32);                          /* extern */
static s32 D_801C34EC = 0;

void func_801446DC(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u8 temp_s2;
    void *temp_a0;
    void *temp_a0_2;

    arg0->unk7D4 = (s32) func_80178A1C();
    if (arg0->unk8C != 0) {
        var_a0 = 0;
        if ((arg0->unk820 != 0) && (arg0->unkA0 == 0) && (*(D_801C34EC + 0x6220 + (arg0->unk7CC * 4)) != 3)) {
            var_a0 = func_8013A06C(0) == 0;
        }
        if (var_a0 != 0) {
            temp_v0 = func_801793F8(arg0->unk7CC);
            if (temp_v0 >= 0xA1) {
                var_v0 = (s32) (0xDF - temp_v0) >> 1;
            } else {
                var_v0 = (s32) (temp_v0 - 0x5D) >> 3;
            }
            var_a0_2 = temp_v0 - var_v0;
            if (var_a0_2 < 0x96) {
                var_a0_2 = 0x96;
            }
            func_80179414(var_a0_2, arg0->unk7CC);
        }
    } else {
        if (func_80178A2C() != arg0->unk754) {
            func_80144150(arg0);
        }
        if (arg0->unk820 != 0) {
            arg0->unk829 = 1;
            arg0->unk7AC = 1;
        } else {
            arg0->unk829 = func_80122F24(D_801C34EC, arg0 + 0x1E4, 0x12C0, arg0 + 0x7AC);
        }
        temp_s2 = arg0->unk96;
        if (arg0->unk87 != 0) {
            func_801476C0(arg0);
            arg0->unk810 = 0;
        } else if (arg0->unk10C > 0) {
            arg0->unkB2 = (u8) arg0->unkAE;
            arg0->unkB3 = (u8) arg0->unkAF;
            arg0->unkB4 = (u8) arg0->unkB0;
            arg0->unkB5 = (u8) arg0->unkB1;
            arg0->unk810 = (s32) (arg0->unk810 + arg0->unk7D4);
            var_v1 = 0;
            if ((arg0->unk9A != 0) || (arg0->unk9B != 0)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                func_80144EC0(arg0);
                func_80148DB0(arg0);
            } else {
                arg0->unk82D = 0;
                if (arg0->unk7B8 == 1) {
                    func_8012F320(arg0);
                } else if (arg0->unk7B8 == 2) {
                    func_800F5EBC(arg0);
                }
            }
            if (arg0->unkF4 != 0) {
                arg0->unkB1 = 0U;
                arg0->unkB0 = (u8) arg0->unkB1;
            }
            var_v1_2 = 0;
            if ((arg0->unk82A != 0) && ((s16) arg0->unk81E < 0x3E8)) {
                var_v1_2 = func_80178A70() & 1;
            }
            if (var_v1_2 != 0) {
                arg0->unk81E = (u16) (arg0->unk81E + 1);
                arg0->unk7DC = (s32) (arg0->unk7DC + 1);
            }
        }
        var_v1_3 = 0;
        if ((arg0->unkAF != 0) || (arg0->unkAE != 0) || (arg0->unkB0 != 0) || (arg0->unkB1 != 0)) {
            var_v1_3 = 1;
        }
        if (var_v1_3 != 0) {
            arg0->unk80 = 1;
        } else {
            arg0->unk80 = 0;
        }
        var_v1_4 = 0;
        if ((arg0->unkAC != 0) || (arg0->unkAA != 0)) {
            var_v1_4 = 1;
        }
        if (var_v1_4 != 0) {
            arg0->unk7C = 1;
        } else {
            arg0->unk7C = 0;
        }
        temp_s0 = arg0->unk20C;
        func_801451E0(arg0);
        func_80146E4C(arg0);
        arg0->unkF8 = (s32) ((s32) (arg0->unk20C - temp_s0) / (s32) arg0->unk7D4);
        func_80148420(arg0, temp_s2 & 0xFF);
        func_80148704(arg0);
        func_8014645C(arg0);
        func_80149628(arg0);
        var_s0 = 0;
        if (arg0->unk86 != 0) {
            func_80146040(arg0);
            var_s0 = 0;
        }
loop_52:
        temp_a0 = D_801C34EC + 0x6220;
        if (var_s0 < temp_a0->unk3CC) {
            var_v1_5 = 1;
            if (arg0->unk820 != 0) {
                var_v1_5 = var_s0 != arg0->unk7CC;
            }
            if (var_v1_5 != 0) {
                func_80108D60(temp_a0, arg0->unk7C0, arg0 + 0x1E4, var_s0, (s32) arg0->unk82A);
            }
            var_s0 += 1;
            goto loop_52;
        }
        if (arg0->unk8C == 0) {
            temp_a0_2 = arg0 + 0x264;
            temp_a0_2->unk35 = (u8) arg0->unkB6;
            temp_a0_2->unk36 = (u8) arg0->unkB7;
            arg0->unk29B = (u8) arg0->unkB8;
            temp_a0_2->unk38 = (u8) arg0->unkB9;
            func_8012A5F0(temp_a0_2);
            func_801253C8(arg0 + 0x238, arg0 + 0x208);
        }
    }
    if (arg0->unk7DC > 0x1869F) {
        arg0->unk7DC = 0x1869F;
    }
}
