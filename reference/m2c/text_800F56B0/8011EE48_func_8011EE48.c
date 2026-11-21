/* m2c reference for func_8011EE48 @ 8011EE48 (532 words). Generated; not compiled or validated. */
? func_80101780(void *);                            /* extern */
? func_8011A0F4(void *);                            /* extern */
? func_8011F698(void *);                            /* extern */
? func_8011FA30(void *);                            /* extern */
? func_801217A0(void *);                            /* extern */
? func_8012313C(void *);                            /* extern */
? func_80123568(void *);                            /* extern */
? func_80123878(void *);                            /* extern */
? func_801253C8(s32, void *);                       /* extern */
? func_801253F4(s32, void *);                       /* extern */
? func_801254DC(void *, ?, ?, ?);                   /* extern */
? func_801260E4(void *);                            /* extern */
? func_801296F8(void *);                            /* extern */
s32 func_80132F10();                                /* extern */
s32 func_80132F28();                                /* extern */
? func_8013BB4C(s32);                               /* extern */
? func_80141270(void *);                            /* extern */
? func_801446DC(void *);                            /* extern */
? func_8014645C(void *);                            /* extern */
? func_8014B840(void *);                            /* extern */
? func_801F55E4(void *);                            /* extern */
? func_801F5608(void *);                            /* extern */
? func_801F5708(void *);                            /* extern */
? func_801F5750(void *);                            /* extern */
? func_801F5760(void *);                            /* extern */
? func_801F581C(void *);                            /* extern */
? func_801F5868(void *);                            /* extern */
? func_801F59F0(void *);                            /* extern */
? func_801F5B94(void *);                            /* extern */
? func_801F5C90(void *);                            /* extern */
? func_801F5F2C(void *);                            /* extern */
? func_801F5F34(void *);                            /* extern */
? func_801F5F38();                                  /* extern */
? func_801F5F44(void *);                            /* extern */
? func_801F5FFC(void *);                            /* extern */
? func_801F627C(void *);                            /* extern */
? func_801F6724(void *);                            /* extern */
? func_801F6854(void *);                            /* extern */
? func_801F6CE8(void *);                            /* extern */
? func_801F6E1C(void *);                            /* extern */
? func_801F7104(void *);                            /* extern */
? func_801F73F0(void *);                            /* extern */
? func_801F7788(void *);                            /* extern */
? func_801F77C8(void *);                            /* extern */
? func_801F8498(? *);                               /* extern */
? func_801F8A28(void *);                            /* extern */
? func_801FA008(void *);                            /* extern */
? func_801FADFC(void *);                            /* extern */
? func_801FB940(void *, s32);                       /* extern */
extern s32 D_801C37A0;
extern s32 D_801C37A8;
extern ? D_801F901C;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;

void func_8011EE48(void *arg0) {
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_10;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_6;
    s32 var_s0_8;
    s32 var_s1;
    s32 var_s1_10;
    s32 var_s1_11;
    s32 var_s1_12;
    s32 var_s1_13;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s1_9;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_s4;
    s32 var_v0_2;
    s32 var_v0_3;
    u32 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a3;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1;
    void *var_a2;
    void *var_s0_4;
    void *var_s0_5;
    void *var_s0_7;
    void *var_s0_9;
    void *var_s2;
    void *var_v0;
    void *var_v1;

    if (D_801C37A8 != 0) {
        D_801C37A8 = 0;
        if (arg0->unk7D8 < 3) {
            var_s1 = 0;
            if (arg0->unk12688 == 0) {
                temp_s1 = arg0 + 0xB96C;
                func_801254DC(temp_s1, -0x22F0, -0x1838, 0);
                arg0->unkB980 = 0x45B;
                func_801253F4(arg0->unkBEC0 + 0x14, arg0 + 0xB978);
                func_801253C8(arg0->unkBEC0 + 0x1C, temp_s1);
                func_8014645C(arg0 + 0xB788);
                goto block_4;
            }
        } else {
block_4:
            var_s1 = 0;
        }
        temp_a3 = arg0 + 0x10FF4;
        var_a2 = arg0;
loop_6:
        var_a1 = 0;
        if (var_s1 < arg0->unk12728) {
            temp_a0 = var_a2 + 0xB788;
            if ((temp_a0->unk7C0 == 0x100) || (temp_a0->unk7C0 == 0x110)) {
                var_a1 = 1;
            }
            temp_v1 = var_a2 + 0xB788;
            if (var_a1 != 0) {
                temp_v1->unk1EC = (s32) (temp_v1->unk1EC + 0x190);
                var_a2 += 0x8B8;
            } else {
                temp_a0_2 = var_a2 + 0xB788;
                if (temp_a0_2->unk7C0 == 0xF0) {
                    temp_a3->unk78 = 1;
                    temp_a3->unk15C = temp_a0_2;
                }
                var_a2 += 0x8B8;
            }
            var_s1 += 1;
            goto loop_6;
        }
    }
    arg0->unk1272C = 0;
    var_s1_2 = 0;
    if (arg0->unk12728 > 0) {
        var_s2 = arg0;
        var_s0 = 0xB788;
        do {
            func_801446DC(arg0 + var_s0);
            if ((var_s2 + 0xB788)->unk8C == 0) {
                arg0->unk1272C = (s32) (arg0->unk1272C + 1);
            }
            var_s2 += 0x8B8;
            var_s0 += 0x8B8;
            var_s1_2 += 1;
        } while (var_s1_2 < arg0->unk12728);
    }
    func_801217A0(arg0);
    var_s1_3 = 0;
    if (arg0->unk12750 > 0) {
        var_s0_2 = 0xC8F8;
        do {
            func_801446DC(arg0 + var_s0_2);
            var_s0_2 += 0x958;
            var_s1_3 += 1;
        } while (var_s1_3 < arg0->unk12750);
    }
    arg0->unk12754 = 0;
    var_s1_4 = 0;
    if (arg0->unk12750 > 0) {
        var_v1 = arg0;
        var_v0 = var_v1 + 0xC8F8;
        do {
            if (var_v0->unk8C == 0) {
                arg0->unk12754 = (s32) (arg0->unk12754 + 1);
            }
            var_v1 += 0x958;
            var_s1_4 += 1;
            var_v0 = var_v1 + 0xC8F8;
        } while (var_s1_4 < arg0->unk12750);
    }
    func_8011A0F4(arg0 + 0x10A60);
    func_80141270(arg0 + 0x10A64);
    func_8011FA30(arg0);
    func_8011F698(arg0);
    func_80123878(arg0);
    func_80123568(arg0);
    func_8014B840(arg0 + 0x496C);
    temp_v1_2 = arg0->unk12688;
    switch (temp_v1_2) {
    case 0:
        var_s1_5 = 0;
        var_s0_3 = 0x1136C;
        D_801F901C.unk10 = -1;
        D_801F901C.unk14 = 0;
        D_801F901C.unk18 = 0;
        do {
            func_801F5FFC(arg0 + var_s0_3);
            var_s1_5 += 1;
            var_s0_3 += 0x11C;
        } while (var_s1_5 < 4);
        func_801F8498(&D_801F901C);
        if (arg0->unk117E2 != 0) {
            func_801F8A28(arg0 + 0x117DC);
        } else {
        default:
        }
        break;
    case 2:
        if (arg0->unk11A5E != 0) {
            func_801FA008(arg0 + 0x11A54);
        }
        if (arg0->unk11AC4 != 0) {
            func_801F5868(arg0 + 0x11AC0);
        }
        temp_s0 = arg0 + 0x11ADC;
        func_801F6E1C(temp_s0);
        if (arg0->unk11AE4 != 0) {
            func_801F7104(temp_s0);
        }
        func_801F7788(arg0 + 0x11B1C);
        func_801F5F44(arg0 + 0x11B70);
        break;
    case 3:
        if (arg0->unk11CE9 != 0) {
            func_801F5708(arg0 + 0x11CE4);
        }
        if (arg0->unk11CEA != 0) {
            func_801F5B94(arg0 + 0x11CE4);
        }
        if (arg0->unk11D2C != 0) {
            func_801F77C8(arg0 + 0x11D28);
        }
        break;
    case 5:
        var_s1_6 = 0;
        var_s2_2 = 0x11C6C;
        var_s0_4 = arg0;
        do {
            if (var_s0_4->unk11C71 != 0) {
                func_801F5F2C(arg0 + var_s2_2);
            }
            var_s2_2 += 0x18;
            var_s1_6 += 1;
            var_s0_4 += 0x18;
        } while (var_s1_6 < 5);
        func_801F6854(arg0 + 0x11C24);
        break;
    case 7:
        func_801F5F34(arg0 + 0x11870);
        func_801F55E4(arg0 + 0x118E4);
        var_s1_7 = 0;
        if (arg0->unk11A4D != 0) {
            func_801F6CE8(arg0 + 0x11A48);
            var_s1_7 = 0;
        }
        var_s2_3 = 0x1191C;
        var_s0_5 = arg0;
        do {
            if (var_s0_5->unk11921 != 0) {
                func_801F73F0(arg0 + var_s2_3);
            }
            var_s2_3 += 0x64;
            var_s1_7 += 1;
            var_s0_5 += 0x64;
        } while (var_s1_7 < 3);
        break;
    case 8:
        var_s1_8 = 0;
        var_s0_6 = 0x11D50;
        do {
            func_801F5608(arg0 + var_s0_6);
            var_s1_8 += 1;
            var_s0_6 += 0x70;
        } while (var_s1_8 < 2);
        var_s1_9 = 0;
        var_s2_4 = 0x11E30;
        var_s0_7 = arg0;
        do {
            if (var_s0_7->unk11E34 != 0) {
                func_801F627C(arg0 + var_s2_4);
            }
            var_s2_4 += 0x20;
            var_s1_9 += 1;
            var_s0_7 += 0x20;
        } while (var_s1_9 < 3);
        break;
    case 9:
        if (arg0->unk12175 != 0) {
            func_801F6724(arg0 + 0x12170);
        }
        if (arg0->unk121A5 != 0) {
            func_801F581C(arg0 + 0x121A0);
        } else {
            func_801F5750(arg0 + 0x121A0);
        }
        break;
    case 10:
        if (arg0->unk11E94 != 0) {
            func_801F5C90(arg0 + 0x11E90);
        }
        if (arg0->unk11EA8 != 0) {
            func_801F5760(arg0 + 0x11EA4);
        }
        func_801F5F38();
        break;
    case 11:
        var_s1_10 = 0;
        var_s4 = 0x11EB8;
        do {
            var_s0_8 = 0;
            var_v0_2 = var_s1_10 * 0x40;
loop_79:
            if ((arg0 + var_v0_2)->unk11EBC != 0) {
                func_801FB940(arg0 + var_s4, var_s0_8);
            }
            var_s0_8 += 1;
            var_v0_2 = var_s0_8 + (var_s1_10 << 6);
            if (var_s0_8 < 3) {
                goto loop_79;
            }
            var_s1_10 += 1;
            var_s4 += 0x40;
        } while (var_s1_10 < 4);
        var_s1_11 = 0;
        var_s2_5 = 0x11FB8;
        var_s0_9 = arg0;
        do {
            if (var_s0_9->unk11FBD != 0) {
                func_801FADFC(arg0 + var_s2_5);
            }
            var_s2_5 += 0x2C;
            var_s1_11 += 1;
            var_s0_9 += 0x2C;
        } while (var_s1_11 < 0xA);
        var_a0 = 0;
        if ((arg0->unk1106D != 0) || (arg0->unk1106C != 0)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            func_801F59F0(arg0 + 0x10FF4);
        }
        break;
    }
    var_s1_12 = 0;
    if (arg0->unk123F0 > 0) {
        var_s0_10 = 0x12380;
        do {
            func_801296F8(arg0 + var_s0_10);
            var_s0_10 += 0x1C;
            var_s1_12 += 1;
        } while (var_s1_12 < arg0->unk123F0);
    }
    func_801260E4(arg0);
    func_8012313C(arg0);
    func_80101780(arg0 + 0x6220);
    var_s1_13 = 0;
loop_97:
    if (var_s1_13 < (D_801C34EC + 0x6220)->unk3CC) {
        if (var_s1_13 == 0) {
            var_v0_3 = func_80132F10();
        } else {
            var_v0_3 = func_80132F28();
        }
        D_801C37A0 = var_v0_3;
        var_s1_13 += 1;
        goto loop_97;
    }
    func_8013BB4C(D_801C34F4);
}
