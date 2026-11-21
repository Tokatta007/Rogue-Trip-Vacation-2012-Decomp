/* m2c reference for func_80126250 @ 80126250 (404 words). Generated; not compiled or validated. */
? func_800F56B0(void *, s32, s32, s32, void *, s32); /* extern */
? func_800F5E1C(void *, s32);                       /* extern */
s16 func_800FF828(s32, void *);                     /* extern */
? func_800FF9C8(void *);                            /* extern */
s16 func_801004E4(void *);                          /* extern */
? func_801033D8(void *, ?);                         /* extern */
? func_80121A00(void *);                            /* extern */
? func_80121C44(void *);                            /* extern */
? func_8012208C(void *, void *, s32 *, s32 *);      /* extern */
? func_80123058(void *, ?, s32, s32);               /* extern */
s32 func_80125094(void *, void *);                  /* extern */
s32 func_801250C8(s32, s32);                        /* extern */
? func_801268A0(void *, ?);                         /* extern */
? func_8012AF9C(void *, ?, ?);                      /* extern */
? func_80132CF4(?, ?);                              /* extern */
s16 func_80178A1C();                                /* extern */
extern s32 D_801C37AC;
extern s32 D_801C37B4;
extern s32 D_801C37B8;
extern s32 D_801C37BC;
extern s32 D_801C37C4;

void func_80126250(void *arg0) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    void *sp24;
    ? var_a1;
    s16 temp_v0_2;
    s32 temp_a3_2;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_fp;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s5_2;
    void *temp_a0;
    void *temp_a3;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s3;
    void *temp_s4;
    void *temp_s4_2;
    void *temp_s6;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0_2;
    void *var_a0_3;
    void *var_s0;
    void *var_s3;
    void *var_s3_2;
    void *var_s4;
    void *var_s5;

    sp20 = arg0->unk127DF & 0xFF;
    if (D_801C37C4 != 0) {
        D_801C37C4 = 0;
        arg0->unkBEC0->unkC = 0;
        if (arg0->unkBF48 == 0x10) {
            (arg0 + (arg0->unkB800 * 4))->unk610C->unkC = 0;
        }
        arg0->unkB825 = 1;
        var_s2 = 0;
        if (arg0->unk12750 > 0) {
            var_s4 = arg0;
            var_s3 = arg0;
            var_s1 = 0xC8F8;
            var_s0 = arg0 + 0xC8F8;
            do {
                temp_v1 = var_s3 + 0x10000;
                temp_a3 = var_s4 + 0xC8F8;
                var_s4 += 0x958;
                temp_v0 = (arg0 + (var_s3->unk12734 * 4))->unk126CC;
                var_s3 += 4;
                var_s1 += 0x958;
                func_800F56B0(var_s0, temp_v1->unk243C, var_s2, temp_a3->unk7C0, arg0 + 0x15CC, temp_v0);
                temp_s0 = var_s0 + 0x264;
                func_8012AF9C(temp_s0, 1, 2);
                func_8012AF9C(temp_s0, 8, 2);
                func_8012AF9C(temp_s0, 3, 2);
                var_s2 += 1;
                var_s0 = arg0 + var_s1;
            } while (var_s2 < arg0->unk12750);
        }
    }
    D_801C37B4 += func_80178A1C();
    D_801C37B8 += func_80178A1C();
    D_801C37BC += func_80178A1C();
    if (D_801C37B8 >= 0x12D) {
        var_s2_2 = 0;
        temp_s0_2 = rand() & 3;
loop_8:
        if (var_s2_2 < temp_s0_2) {
            func_801033D8(arg0 + 0x6220, 0);
            var_s2_2 += 1;
            goto loop_8;
        }
        D_801C37B8 = 0;
    }
    if (D_801C37B4 >= 0xA8D) {
        func_80132CF4(3, 0);
        arg0->unk127E2 = 1;
    } else if (arg0->unk127DE != 0) {
        func_80121A00(arg0);
        if (sp20 == 0) {
            func_801268A0(arg0, 0);
        }
        if (D_801C37BC >= 0x259) {
            var_a1 = 0;
            goto block_25;
        }
    } else {
        var_a0 = 0;
        if ((arg0->unk127DF != 0) || (arg0->unk122D4 == 0)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            func_80121C44(arg0);
            arg0->unk122D4 = 1;
            func_801268A0(arg0, 1);
            D_801C37BC = 0x12C;
        } else if (D_801C37BC >= 0x259) {
            var_a1 = 2;
block_25:
            func_801268A0(arg0, var_a1);
        }
    }
    func_8012208C(arg0, arg0 + ((D_801C37AC * 0x958) + 0xC8F8), &sp18, &sp1C);
    temp_s6 = (arg0 + 0x10A64)->unk330;
    if (temp_s6 != NULL) {
        if ((arg0->unk122C8 != 0) && (func_801250C8(temp_s6 + 0x1E4, arg0->unk122C8 + 0x1C) < 0x960)) {
            arg0->unk122D4 = (s32) (arg0->unk122D4 + func_80178A1C());
            if (arg0->unk122D4 >= 0x259) {
                var_s2_3 = 0;
                if (arg0->unk12750 > 0) {
                    sp24 = arg0 + 0x10000;
                    var_fp = 0xC8F8;
                    var_s5 = arg0;
                    do {
                        temp_s1 = var_s5 + 0xC8F8;
                        if (temp_s1->unk82A == 0) {
                            temp_s3 = arg0 + var_fp;
                            temp_s4 = temp_s3 + 0x1E4;
                            if (func_80125094(temp_s6 + 0x1E4, temp_s4) < 0x960) {
                                temp_s0_3 = var_s5 + 0xC8FC;
                                temp_s0_3->unk4 = 1;
                                temp_s0_3->unk54 = 3;
                                temp_s1->unk780 = (s32) (temp_s1->unk784 - 0xB4);
                                func_800F5E1C(temp_s3, temp_s6->unk738);
                                temp_s0_3->unk60 = func_800FF828(temp_s0_3->unk40, temp_s4);
                                if (var_s2_3 == D_801C37AC) {
                                    temp_a3_2 = temp_s6->unk7D0;
                                    D_801C37AC = temp_a3_2;
                                    func_80123058(arg0, 0, ((temp_a3_2 * 0x958) + arg0 + 0xC8F8)->unk7C8, temp_a3_2);
                                }
                            }
                        }
                        var_s5 += 0x958;
                        var_s2_3 += 1;
                        var_fp += 0x958;
                    } while (var_s2_3 < sp24->unk2750);
                }
            }
        }
    }
    var_s2_4 = 0;
    if (arg0->unk12750 > 0) {
        var_s3_2 = arg0;
        var_s5_2 = 0xC8F8;
        do {
            if (sp20 == 0) {
                temp_s0_4 = arg0 + var_s5_2;
                if (arg0->unk127DF != 0) {
                    var_a0_2 = NULL;
                    if (temp_s0_4 != NULL) {
                        var_a0_2 = temp_s0_4 + 4;
                    }
                    temp_v0_2 = func_801004E4(var_a0_2);
                    temp_a0 = var_s3_2 + 0xC8FC;
                    if (temp_v0_2 != (s16) temp_a0->unk58) {
                        temp_a0->unk5C = temp_v0_2;
                        var_a0_3 = NULL;
                        if (temp_s0_4 != NULL) {
                            var_a0_3 = temp_s0_4 + 4;
                        }
                        func_800FF9C8(var_a0_3);
                    }
                }
            }
            if ((var_s2_4 != D_801C37AC) && (var_s2_4 != sp18) && (var_s2_4 != sp1C)) {
                temp_s1_2 = arg0 + var_s5_2;
                temp_s4_2 = temp_s1_2 + 0x1E4;
                if (func_80125094(arg0 + ((D_801C37AC * 0x958) + 0xC8F8) + 0x1E4, temp_s4_2) < 0x960) {
                    temp_s0_5 = var_s3_2 + 0xC8FC;
                    temp_s0_5->unk4 = 1;
                    temp_v1_2 = var_s3_2 + 0xC8F8;
                    temp_s0_5->unk54 = 2;
                    temp_v1_2->unk780 = (s32) (temp_v1_2->unk784 - 0x1A4);
                    func_800F5E1C(temp_s1_2, ((D_801C37AC * 0x958) + arg0 + 0xC8F8)->unk738);
                    temp_s0_5->unk60 = func_800FF828(temp_s0_5->unk40, temp_s4_2);
                }
            }
            var_s3_2 += 0x958;
            var_s5_2 += 0x958;
            var_s2_4 += 1;
        } while (var_s2_4 < arg0->unk12750);
    }
}
