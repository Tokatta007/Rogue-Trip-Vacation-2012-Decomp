/* m2c reference for func_8011A4AC @ 8011A4AC (467 words). Generated; not compiled or validated. */
? func_8011AC14(void *, s32 *);                     /* extern */
? func_8011BC6C(s32 *, ?, u32, ?, s32, s32);        /* extern */
? func_8011D5A0(s32 *, ?, s32, ?, s32, s32, s32, s32, s32, s32); /* extern */
? func_8012DC04(u8);                                /* extern */
s32 func_8013A06C(void *);                          /* extern */
? func_8013BDCC(s32, ?, ?);                         /* extern */
? func_8013CAE0(s32, ?, s32 *);                     /* extern */
s32 func_8015A000(s32);                             /* extern */
? func_80164F34(void *, void *, ?, ?, s32);         /* extern */
? func_8016D6BC(void *, ?);                         /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;

void func_8011A4AC(void *arg0, ? arg1, s32 arg2, s32 arg3) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    ? var_a1;
    ? var_a1_2;
    ? var_a3;
    s16 var_s1;
    s32 *var_s2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s3_2;
    s32 temp_v1;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_v1;
    u32 temp_s0_3;
    u32 temp_v0;
    u32 var_a2;
    u32 var_s0;
    void *temp_a0;
    void *temp_s3;

    var_s5 = 0;
    var_s0 = (u16) arg0->unk1E >> 3;
    var_s1 = (s16) arg0->unk1C;
    temp_s3 = D_801C34EC + 0xB744;
    if (arg3 == 0x1E) {
        var_s5 = 1;
        var_s1 = -0x29A;
    }
    var_s2 = arg0 + 4;
    if (temp_s3->unkC != NULL) {
        var_s2 = temp_s3->unkC;
    }
    if (arg3 != 0x1E) {
        if (temp_s3->unk10->unk20 == 8) {
            var_s0 = (u16) arg0->unk1E >> 5;
        } else {
            var_s0 = (u16) arg0->unk1E >> 3;
        }
    }
    var_v1 = 0;
    if (D_801C34EC->unk12688 == 0) {
        var_v1 = (arg0->unk10->unk0 & 0xFFF0) == 0x1F80;
    }
    if ((var_v1 == 0) || (D_801C34EC->unk1186C->unk4 == 1)) {
        if (var_s1 >= 0) {
            var_s1 -= arg2;
            if (var_s1 <= 0) {
                var_s5 = 1;
                var_s1 = -0x29A;
                if ((func_8013A06C(D_801C34EC + 0x10000) != 0) && (arg3 != 0x1E)) {
                    func_8012DC04(arg0->unk10->unk2);
                }
            }
            temp_s3->unk1C = (s32) var_s1;
        }
        if (arg0->unk18 != NULL) {
            arg0->unk18(var_s1, arg0->unk10);
        }
        arg0->unk1C = (u16) var_s1;
        if (var_s5 & 0xFF) {
            temp_a0 = arg0->unk10->unkC;
            temp_v1 = temp_a0->unk0 & 0xF;
            if (temp_v1 != 0) {
                var_s1_2 = 0x40;
                if (temp_v1 != 1) {

                } else {
                    var_s1_2 = temp_a0->unk10;
                }
            } else {
                var_s1_2 = temp_a0->unk20;
            }
            temp_v0 = (u16) arg0->unk10->unk0 >> 4;
            var_s0_2 = var_s1_2 >> 4;
            switch (temp_v0) {
            case 0x1F5:
            case 0x1FE:
                func_8011D5A0(var_s2, 0, (1 << (0x21 - func_8015A000(var_s0_2))) - 1, 7, var_s0_2, 7, 0xD, 0xA, 0x80, 5);
                var_a1 = 0xE;
block_49:
block_50:
                func_8013CAE0(D_801C34F4, var_a1, var_s2);
                break;
            case 0x1FA:
                func_8013CAE0(D_801C34F4, 0xE, var_s2);
                func_8011BC6C(var_s2, 0, (u16) arg0->unk1E >> 1, 5, 0, 0);
                break;
            case 0x1F7:
            case 0x200:
                var_s0_2 += 8;
                /* fallthrough */
            case 0x1F6:
            case 0x1FF:
                temp_s0 = var_s0_2 >> 2;
                func_8011D5A0(var_s2, 0, (1 << (0x21 - func_8015A000(temp_s0))) - 1, 7, temp_s0, 7, 0x49, 5, 0x80, 8);
                var_a1 = 0xE;
                if (temp_s0 < 5) {

                } else {
                    var_a1 = 0xF;
                }
                goto block_50;
            case 0x1F9:
            case 0x202:
                var_s0_2 += 8;
                /* fallthrough */
            case 0x1F8:
            case 0x201:
                var_s0_2 += 8;
                /* fallthrough */
            case 0x1F4:
                temp_s0_2 = var_s0_2 >> 2;
                func_8011D5A0(var_s2, 0, (1 << (0x21 - func_8015A000(temp_s0_2))) - 1, 0xF, temp_s0_2, 0xF, 0x48, 0x49, 0x80, 0xC);
                var_a1 = 0xF;
                if (temp_s0_2 < 5) {

                } else {
                    var_a1 = 0x10;
                }
                goto block_50;
            case 0x1FB:
                D_801C31CC.unk8 = 0xD;
                D_801C31CC.unkC = rand();
                D_801C3100.unk0 = (s32) var_s2->unk0;
                D_801C3100.unk4 = (s32) var_s2->unk4;
                D_801C31CC.unk0 = &D_801C3100;
                D_801C3100.unk8 = (s32) var_s2->unk8;
                func_8013BDCC(D_801C34F4, 0, 0);
                break;
            case 0x1FC:
                if ((u32) (temp_s3->unk10->unk20 - 3) < 2U) {
                    var_s2_2 = var_s1_2 >> 5;
                    temp_s1 = (1 << (0x1E - func_8015A000(var_s1_2))) - 1;
                    if (var_s2_2 > 0) {
                        temp_s3_2 = temp_s1 >> 1;
                        do {
                            var_s2_2 -= 1;
                            sp28 = (arg0->unk4 + (rand() & temp_s1)) - temp_s3_2;
                            sp2C = (arg0->unk8 + (rand() & temp_s1)) - temp_s3_2;
                            sp30 = arg0->unkC + (rand() & temp_s1);
                            temp_s0_3 = (arg0->unk1E - (rand() & 3)) & 0xFFFF;
                            func_8011BC6C(&sp28, 0, temp_s0_3, 0x18, (rand() & 0x3F) + 0xB4, 1);
                        } while (var_s2_2 > 0);
                    }
                    func_8011AC14(arg0, &sp28);
                } else {
                    if ((u32) (arg0->unk10->unk3 & 0x7F) >= 5U) {
                        arg0->unk10->unk4 = 4;
                        func_80164F34(arg0->unk10, arg0 + 4, arg1, 0x1E, 0x2D);
                    }
                    func_8011BC6C(var_s2, 0, (u16) arg0->unk1E >> 1, 0x48, 0, 0);
                    func_8016D6BC(arg0->unk10, 1);
                    var_a1 = 0xE;
                    goto block_49;
                }
                break;
            case 0x1FD:
                temp_s0_4 = var_s0_2 >> 2;
                func_8011D5A0(var_s2, 0, (1 << (0x21 - func_8015A000(temp_s0_4))) - 1, 0xF, temp_s0_4, 0xF, 0x48, 0x49, 0x80, 0xC);
                var_a1_2 = 0xF;
                if (temp_s0_4 < 5) {

                } else {
                    var_a1_2 = 0x10;
                }
                func_8013CAE0(D_801C34F4, var_a1_2, var_s2);
                arg0->unk1C = 5U;
                break;
            }
            if ((arg0->unk10->unk0 & 0xFFF0) != 0x1FC0) {
                func_8016D6BC(arg0->unk10, 1);
                if ((u32) (arg0->unk10->unk3 & 0x7F) >= 3U) {
                    arg0->unk10->unk4 = 2;
                    func_80164F34(arg0->unk10, arg0 + 4, arg1, 0x1E, 0x2D);
                }
                arg0->unk10->unk4 = 1;
            }
        } else if (arg3 != 1) {
            if (temp_s3->unk10->unk20 != 3) {
                var_a2 = var_s0 & 0xFFFF;
                var_a3 = 5;
                goto block_64;
            }
            if (!(rand() & 3)) {
                var_a2 = 8;
                var_a3 = 0x19;
block_64:
                func_8011BC6C(var_s2, 0, var_a2, var_a3, 0, 0);
            }
        }
    }
}
