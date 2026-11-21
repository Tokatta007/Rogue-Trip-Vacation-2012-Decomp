/* m2c reference for func_80140D70 @ 80140D70 (320 words). Generated; not compiled or validated. */
s32 func_800FE76C(void *);                          /* extern */
? func_8010B62C(void *, s32, ?);                    /* extern */
? func_801168B4(void *, void *, ?, s32);            /* extern */
? func_80118484(void *);                            /* extern */
void *func_801244FC(void *, s32);                   /* extern */
s32 func_80124A94(void *, s32, s32 *);              /* extern */
? func_801251C0(void *, void *);                    /* extern */
? func_80125DA4(void *);                            /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
s32 func_801426A0(void *);                          /* extern */
? func_801640EC(void *);                            /* extern */
s32 func_8017D580(?);                               /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;

void func_80140D70(void *arg0, void *arg1, s32 arg3) {
    s32 sp10;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_s0;
    s32 var_s0_3;
    s32 var_s2;
    u16 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_a0_2;
    void *var_a1;
    void *var_s0_2;

    var_s2 = 1;
    if (arg0->unk334 != 1) {
        if (arg3 == 0x1D) {
            arg0->unk301 = 1;
            var_a0 = 0;
            if ((arg0->unk338 == 0) || (arg0->unk338 < (arg0->unk33C - 0x3C))) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                var_s0 = 0;
                arg0->unk33C = (s32) ((rand() % 1200) + 0x258);
                arg0->unk338 = (s32) arg0->unk33C;
                if ((func_8017D580(0x35) <= 0) && (func_8017D580(0x32) <= 0) && (func_8017D580(0x33) <= 0)) {
                    var_s0 = func_8017D580(0x34) < 1;
                }
                if (var_s0 != 0) {
                    D_801C31CC.unk8 = 0x35;
                    temp_v0 = D_801C34EC->unk12794;
                    D_801C34EC->unk12794 = (s32) (temp_v0 + 1);
                    D_801C31CC.unkC = temp_v0;
                    func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                }
                if (arg0->unk309 == 0) {
                    arg0->unk309 = 1U;
                    arg0->unk2B8 = 5;
                    arg0->unk2AC = 0;
                    temp_v1 = arg0->unk320;
                    temp_v1->unk24 = (s32) (temp_v1->unk24 + 8);
                }
            }
            var_a0_2 = arg1;
            if (arg1 != NULL) {
                var_a1 = arg0 + 0x318;
            } else {
                var_a1 = arg0 + 0x318;
                var_a0_2 = arg0->unk320 + 0x14;
            }
            func_801251C0(var_a0_2, var_a1);
            temp_s0 = (rand() & 0x3FF) + 0xFF;
            if (rand() & 1) {
                var_v0 = arg0->unk31C + temp_s0;
            } else {
                var_v0 = arg0->unk31C - temp_s0;
            }
            arg0->unk31C = var_v0;
            func_801640EC(arg0 + 0x31C);
            arg0->unk334 = 3;
            arg0->unk27C = func_801426A0(arg0);
            arg0->unk284 = (s32) arg0->unk27C;
            func_80118484(arg0);
            arg0->unk1C = (u16) arg0->unk31C;
            arg0->unk1E = (u16) arg0->unk318;
            arg0->unk14 = 0x320;
            arg0->unk344 = 0x78;
            arg0->unk328->unk4 = 0;
            if ((arg0->unk334 != 6) && (arg0->unk334 != 1)) {
                arg0->unk334 = 3;
            }
        } else {
            var_a0_3 = 0;
            if (((u32) (arg0->unk334 - 2) < 3U) || (arg0->unk334 == 6)) {
                var_a0_3 = 1;
            }
            if ((var_a0_3 != 0) && (arg3 == 1)) {
                temp_v1_2 = D_801C34EC + 0xB744;
                if (temp_v1_2->unk14 == arg3) {
                    var_s0_2 = NULL;
                    if (func_80124A94(D_801C34EC, temp_v1_2->unk18, &sp10) != 0) {
                        var_s0_2 = func_801244FC(D_801C34EC, sp10);
                    }
                    if ((var_s0_2 != NULL) && (func_800FE76C(var_s0_2) != 0)) {
                        arg0->unk334 = 1;
                        arg0->unk320->unkC = 0;
                        arg0->unk330 = var_s0_2;
                        var_s0_2->unk82A = 1;
                        var_s0_2->unk81E = 0;
                        D_801C34EC->unk127DE = 0;
                        var_s2 = 0;
                        D_801C34EC->unk12790 = 0;
                        if ((s8) D_801C34EC->unk12355 == -1) {
                            func_80125DA4(D_801C34EC);
                        }
                        temp_v1_3 = arg0->unk330;
                        if (temp_v1_3->unk820 != 0) {
                            D_801C31CC.unk8 = 0x32;
                            temp_v0_2 = D_801C34EC->unk12794;
                            D_801C34EC->unk12794 = (s32) (temp_v0_2 + 1);
                            D_801C31CC.unkC = temp_v0_2;
                            goto block_45;
                        }
                        func_8010B62C(D_801C34EC + 0x6220, ((s32) temp_v1_3->unk7C0 >> 4) + 0x26, 5);
                    } else {
                        var_s0_3 = 0;
                        if (arg0->unk334 != 4) {
                            if ((func_8017D580(0x35) <= 0) && (func_8017D580(0x32) <= 0) && (func_8017D580(0x33) <= 0)) {
                                var_s0_3 = func_8017D580(0x34) < 1;
                            }
                            if (var_s0_3 != 0) {
                                D_801C31CC.unk8 = 0x35;
                                temp_v0_3 = D_801C34EC->unk12794;
                                D_801C34EC->unk12794 = (s32) (temp_v0_3 + 1);
                                D_801C31CC.unkC = temp_v0_3;
                                temp_v1_4 = arg0->unk320;
                                temp_v1_5 = temp_v1_4 + 0x1C;
                                D_801C3100.unk0 = (s32) temp_v1_4->unk1C;
                                D_801C3100.unk4 = (s32) temp_v1_5->unk4;
                                D_801C31CC.unk0 = &D_801C3100;
                                D_801C3100.unk8 = (s32) temp_v1_5->unk8;
block_45:
                                func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                            }
                        }
                    }
                }
            }
        }
        if (var_s2 != 0) {
            func_801168B4(arg0, arg1, 0, arg3);
        }
    }
}
