/* m2c reference for func_80138F8C @ 80138F8C (408 words). Generated; not compiled or validated. */
? func_80126F0C(void *);                            /* extern */
? func_80133708();                                  /* extern */
? func_801395EC();                                  /* extern */
? func_801397B0();                                  /* extern */
? func_80139994();                                  /* extern */
? func_80139F20(? *, ?, ?, s32 *);                  /* extern */
? func_8013AF7C(?, ?);                              /* extern */
? func_80154AFC(? *, ? *, s32);                     /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C5A0(? *, ?);                            /* extern */
? func_80167020(?, ?, ?, ? *);                      /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167228(?, s16, s32, ? *);                  /* extern */
s32 func_8016B6DC(?, ?);                            /* extern */
? func_8016BB58();                                  /* extern */
? func_8016BB9C();                                  /* extern */
s32 func_8017D580(?);                               /* extern */
? func_8017DE0C();                                  /* extern */
extern ? D_801B3960;
extern u8 D_801B3964;
static ? D_801C3480;                                /* unable to generate initializer: unknown type */
static ? D_801C34B0;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;
static ? D_800F3D1C;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3D50;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3D64;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3D74;                                /* unable to generate initializer: unknown type; const */

void func_80138F8C(void) {
    ? sp10;
    s8 sp13;
    s8 sp14;
    s8 sp15;
    s8 sp16;
    s8 sp17;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;
    s16 sp20;
    s16 sp22;
    s16 sp24;
    s16 sp26;
    ? sp28;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_a1;
    s16 var_s0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s5;
    s32 var_a2;
    s32 var_s0;
    s32 var_s6;
    void *temp_s2;

    sp34 = 0;
    sp38 = 0;
    sp30 = 0;
    func_80133708();
    if (D_801B3964 == 4) {
        func_801395EC();
        goto block_4;
    }
    if (D_801B3964 == 0xA) {
        func_801397B0();
block_4:
        var_s6 = 0;
        func_80126F0C(D_801C34EC);
    } else {
        var_s6 = 0;
        func_80139994();
    }
    sp3C = 0;
loop_7:
    if (var_s6 < (s32) D_801B3960.unk6) {
        temp_s2 = D_801C34EC + (sp3C + 0xB788);
        temp_s1 = temp_s2->unk7DC;
        if (temp_s1 >= 0x7530) {
            if (D_801C34EC->unk7D8 == 1) {
                func_80167088(0, 0x9F, 0x23, 0x23);
                func_80167020(0, 0xA0, 0x96, &D_800F3D50);
                func_80167088(1, 0x9F, 0x23, 0x23);
                func_80167020(1, 0xA0, 0xA5, &D_800F3D64);
                temp_s0 = temp_s1 - 0x7530;
                temp_s2->unk7DC = temp_s0;
                sp13 = 5;
                sp17 = 0x28;
                sp18 = 0x12B;
                sp1A = 0x96;
                sp1C = 0x131;
                sp1E = 0x96;
                sp20 = 0x12B;
                sp22 = 0xA5;
                sp24 = 0x131;
                sp26 = 0xA5;
                sp14 = 0xA;
                sp15 = 0xA;
                sp16 = 0xA;
                D_801B3960.unk0 = (u8) (D_801B3960.unk0 + 1);
                func_8015C5A0(&sp10);
                func_80154AFC(&sp28, "%d", D_801B3960.unk0 - 1);
                func_80167228(1, 0x12D, 0x99, &sp28);
                sp18 = 0x10;
                sp1A = 0xCE;
                sp1C = 0x38;
                sp1E = 0xCE;
                sp20 = 0x10;
                sp22 = 0xD7;
                sp24 = 0x38;
                sp26 = 0xD7;
                sp14 = 0xA;
                sp15 = 0xA;
                sp16 = 0xA;
                func_8015C5A0(&sp10, 0x10);
                func_80154AFC(&sp28, "$%d", temp_s0);
                var_a1 = 0x10;
                var_a2 = 0xD0;
                goto block_24;
            }
            if (D_801C34EC->unk7D8 == 3) {
                var_s0 = 0xBE;
                if (var_s6 == 0) {
                    var_s0 = 0x5A;
                }
                if ((D_801C34EC + 0x6220)->unk3A8 == 1) {
                    sp38 = -0xA;
                    if (var_s6 != 0) {
                        sp38 = 0xA;
                        var_s0 = 0xA0;
                    }
                }
                func_80167088(1, 0xC8, 0xC8, 0x32);
                func_80167228(1, sp38 + 0x14, var_s0, &D_800F3D74);
                temp_s5 = temp_s1 - 0x7530;
                temp_s2->unk7DC = temp_s5;
                sp13 = 5;
                sp17 = 0x28;
                D_801B3960.unk0 = (u8) (D_801B3960.unk0 + 1);
                D_801B3960.unk1 = (u8) (D_801B3960.unk1 + 1);
                temp_s1_2 = (D_801C34EC + 0x6220)->unk3A8;
                if (temp_s1_2 != 1) {
                    sp14 = 0xA;
                    sp15 = 0xA;
                    sp16 = 0xA;
                    sp18 = 0x12B;
                    sp1A = 0x30;
                    sp1C = 0x131;
                    sp1E = 0x30;
                    sp20 = 0x12B;
                    sp22 = 0x3F;
                    sp24 = 0x131;
                    sp26 = 0x3F;
                    func_8015C5A0(&sp10);
                    func_80154AFC(&sp28, "%d", D_801B3960.unk1 - 1);
                    func_80167228(1, 0x12D, 0x30, &sp28);
                    sp18 = 0x12B;
                    sp1A = 0x9A;
                    sp1C = 0x131;
                    sp1E = 0x9A;
                    sp20 = 0x12B;
                    sp22 = 0xA9;
                    sp24 = 0x131;
                    sp26 = 0xA9;
                    sp14 = 0xA;
                    sp15 = 0xA;
                    sp16 = 0xA;
                    func_8015C5A0(&sp10);
                    func_80154AFC(&sp28, "%d", D_801B3960.unk0 - 1);
                    func_80167228(1, 0x12D, 0x9C, &sp28);
                    if (var_s6 == 1) {
                        var_s0 += 8;
                    }
                    temp_v0 = var_s0 + 0x10;
                    sp18 = 0xD;
                    sp1A = temp_v0;
                    sp1C = 0x33;
                    sp1E = temp_v0;
                    temp_v0_2 = var_s0 + 0x19;
                    sp20 = 0xD;
                    sp22 = temp_v0_2;
                    sp24 = 0x33;
                    sp26 = temp_v0_2;
                    sp14 = 0xA;
                    sp15 = 0xA;
                    sp16 = 0xA;
                    func_8015C5A0(&sp10, 0xD);
                    func_80154AFC(&sp28, "$%d", temp_s5);
                    var_a1 = 0x10;
                    var_a2 = var_s0 + 0x11;
                } else {
                    sp14 = 0xA;
                    sp15 = 0xA;
                    sp16 = 0xA;
                    sp18 = 0x12B;
                    sp1A = 0x96;
                    sp1C = 0x131;
                    sp1E = 0x96;
                    sp20 = 0x12B;
                    sp22 = 0xA5;
                    sp24 = 0x131;
                    sp26 = 0xA5;
                    var_s0_2 = 0xB;
                    func_8015C5A0(&sp10);
                    func_80154AFC(&sp28, "%d", D_801B3960.unk1 - 1);
                    func_80167228(1, 0x12D, 0x99, &sp28);
                    if (var_s6 == temp_s1_2) {
                        var_s0_2 = 0xAB;
                    }
                    temp_v1 = var_s0_2 + 0x28;
                    sp18 = var_s0_2;
                    sp1A = 0xD5;
                    sp1C = temp_v1;
                    sp1E = 0xD5;
                    sp20 = var_s0_2;
                    sp22 = 0xDE;
                    sp24 = temp_v1;
                    sp26 = 0xDE;
                    sp14 = 0xA;
                    sp15 = 0xA;
                    sp16 = 0xA;
                    func_8015C5A0(&sp10);
                    func_80154AFC(&sp28, "$%d", temp_s5);
                    var_a1 = var_s0_2;
                    var_a2 = 0xD5;
                }
block_24:
                func_80167228(1, var_a1, var_a2, &sp28);
            }
        }
        var_s6 += 1;
        sp3C += 0x8B8;
        goto loop_7;
    }
    func_8016BB58();
loop_28:
    if (sp34 == 0) {
        func_8015C008(0);
        func_80139F20(&D_800F3D1C, 0x6E, 0xC8, &sp30);
        func_8016BB9C();
        if (func_8016B6DC(0x40, 0) & 0xFF) {
            func_8013AF7C(0x4A, 1);
            sp34 = 1;
        }
        if ((D_801C34EC->unk7D8 == 3) && (func_8016B6DC(0x40, 1) & 0xFF)) {
            func_8013AF7C(0x4A, 1);
            sp34 = 1;
        }
        func_8017DE0C();
        goto loop_28;
    }
loop_35:
    if (func_8017D580(0x19) > 0) {
        func_8017DE0C();
        goto loop_35;
    }
}
