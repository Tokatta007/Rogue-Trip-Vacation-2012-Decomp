/* m2c reference for func_801327B8 @ 801327B8 (304 words). Generated; not compiled or validated. */
? func_8012DB5C();                                  /* extern */
? func_80132060();                                  /* extern */
s32 func_80132C78(s32, s32);                        /* extern */
? func_80132CF4(?, ?);                              /* extern */
u32 func_80132EC8();                                /* extern */
s32 func_8013A06C();                                /* extern */
s32 func_8013A07C(s32, s32);                        /* extern */
s32 func_8013B594();                                /* extern */
? func_8013BED8(s32, ?);                            /* extern */
s32 func_8013C98C(s32, s32);                        /* extern */
? func_80154AFC(? *, ? *, s32, u32);                /* extern */
? func_8015FB80(?, s16, s16);                       /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
s32 func_8016C10C(s32);                             /* extern */
s32 func_801788E4();                                /* extern */
extern s32 D_801C3818;
extern s32 D_801C381C;
extern ? D_801CBD78;
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;
static void *D_801C34F8 = NULL;
static s32 D_801C36C0 = 0;
static s32 D_801C36D8 = 0;
static s32 D_801C36DC = 0;
static ? D_800F3878;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3888;                                /* unable to generate initializer: unknown type; const */

void func_801327B8(s32 *arg0, s32 *arg1) {
    s32 sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 *var_s2;
    s32 *var_s3;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0_2;
    void *temp_v0_3;

    memset(&sp10, 0, 0x10);
    var_s6 = -1;
    var_s1 = 0;
    var_s2 = arg1;
    var_s5 = 0;
    var_s3 = &sp10;
    var_s4 = 0;
    sp20 = D_800F3878.unk0;
    sp24 = D_800F3878.unk4;
    sp28 = D_800F3878.unk8;
    sp2C = D_800F3878.unkC;
loop_1:
    if (var_s1 < D_801C34EC->unk12728) {
        if ((D_801C34EC + (var_s4 + 0xB788))->unk8C == 0) {
            if (func_8016C10C(var_s1) == 0) {
                var_s0 = 0;
                if (func_8013A06C() == 2) {
                    var_s0 = func_80132EC8() < 0x14U;
                }
                if (var_s0 == 0) {
                    (sp + var_s5)->unk20 = 1;
                    *var_s3 = 1;
                }
                goto block_19;
            }
            if (D_801C381C <= 0) {
                *var_s3 = func_8016B6DC(0x800, var_s1) & 0xFF;
            } else {
                D_801C381C -= 1;
            }
            if ((func_8016B6DC(0x100, var_s1) & 0xFF) && (*var_s3 != 0)) {
                *var_s3 = 0;
                if (*var_s2 == 0) {
                    *var_s2 = func_801788E4();
                    var_s2 += 4;
                    goto block_20;
                }
                if ((u32) (func_801788E4() - *var_s2) > 0xB71B00U) {
                    var_s2 += 4;
                    func_80132060();
                    func_80132CF4(3, 0);
                    var_s5 += 4;
                } else {
                    temp_v0 = func_801788E4() - *var_s2;
                    func_80154AFC(&D_801CBD78, &D_800F3888, ((0xB71B00 - temp_v0) / 4000000) + 1, MULTU_HI((0xB71B00 - temp_v0), 0x431BDE83));
                    D_801C3818 = 1;
                    var_s2 += 4;
                    goto block_20;
                }
            } else {
                *var_s2 = 0;
                goto block_19;
            }
        } else {
block_19:
            var_s2 += 4;
block_20:
            var_s5 += 4;
        }
        var_s3 += 4;
        var_s4 += 0x8B8;
        var_s1 += 1;
        goto loop_1;
    }
    var_s1_2 = 0;
loop_23:
    if (var_s1_2 < D_801C34EC->unk12728) {
        var_s0_2 = 0;
        if (var_s6 < 0) {
            temp_s2 = var_s1_2 * 4;
            if (func_80132C78(var_s1_2, (sp + temp_s2)->unk10) != 0) {
                var_s0_2 = *arg0 == 0;
            }
            if (var_s0_2 != 0) {
                func_8013BED8(D_801C34F4, 0);
                temp_v0_2 = D_801C34F8->unk8;
                (temp_v0_2 + 0x18)->unk4(D_801C34F8 + (s16) temp_v0_2->unk18, 0);
                var_v1 = D_801C36D8;
                if (var_v1 > 0) {
                    var_v1 = 0;
                }
                D_801C36C0 = var_v1;
                var_a1 = 0;
                if (D_801C36DC > 0) {
                    var_a1 = D_801C36DC;
                }
                D_801C36C0 = var_a1;
                func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
                var_s6 = func_8013A07C(var_s1_2, (sp + temp_s2)->unk20);
                D_801C381C = 0xA;
                if (func_8013A06C() != 0) {
                    func_8012DB5C();
                }
            }
            var_s1_2 += 1;
            goto loop_23;
        }
    }
    if (var_s6 == 0) {
        temp_v0_3 = D_801C34F8->unk8;
        (temp_v0_3 + 0x20)->unk4(D_801C34F8 + (s16) temp_v0_3->unk20, 0);
        temp_s0 = func_8013B594();
        var_a0 = D_801C36D8;
        temp_v1 = ((temp_s0 & 0xFF) * func_8013C98C(D_801C34F4, D_801C34EC->unk12688)) / 127;
        if (temp_v1 < var_a0) {
            var_a0 = temp_v1;
        }
        var_v1_2 = temp_v1;
        D_801C36C0 = var_a0;
        if (var_v1_2 < D_801C36DC) {
            var_v1_2 = D_801C36DC;
        }
        D_801C36C0 = var_v1_2;
        func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
    }
    switch (var_s6) {                               /* irregular */
    case 1:
        func_80132060();
        func_80132CF4(3, 0);
        return;
    case 2:
        *arg0 = 1;
        return;
    }
}
