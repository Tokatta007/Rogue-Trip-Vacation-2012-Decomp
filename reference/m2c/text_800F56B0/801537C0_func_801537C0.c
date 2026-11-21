/* m2c reference for func_801537C0 @ 801537C0 (216 words). Generated; not compiled or validated. */
? func_8011B994(s32);                               /* extern */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
void *func_801244FC(void *, s32);                   /* extern */
void *func_80124CBC(void *);                        /* extern */
s32 func_801250C8(s32, void *);                     /* extern */
? func_8012A154(s32, ?, ?, ?, s32, s32);            /* extern */
? func_8013CEBC(s32, void *, ?);                    /* extern */
? func_801547DC(s32, void *);                       /* extern */
? func_801548C8(s32, void *);                       /* extern */
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;
static s32 D_801C34F4 = 0;

void func_801537C0(s32 arg0) {
    s32 temp_s6;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s5;
    u16 temp_v0;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    void *temp_s3;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v0_3;

    var_s5 = 0x1478;
    var_s1 = arg0;
    temp_s4 = D_801C34EC + 0x10FF4;
    temp_s6 = D_801C34EC->unk1270C;
loop_1:
    var_s2 = 0;
    if (var_s1 < (arg0 + 0x1E0)) {
        if (var_s1->unk1478 != 0) {
            temp_v0 = var_s1->unk147A;
            var_s1->unk147A = (u16) (temp_v0 + 1);
            if ((s16) temp_v0 >= 0x3C) {
                var_s1->unk1478 = 0U;
                var_s5 += 0x10;
            } else {
                var_s2_2 = 0;
                func_8013CEBC(D_801C34F4 + 0x8C, var_s1 + 0x147C, 0);
                if (temp_s6 > 0) {
                    do {
                        temp_v0_2 = func_801244FC(D_801C34EC, var_s2_2);
                        if ((temp_v0_2->unk8C == 0) && (func_801250C8(arg0 + var_s5 + 4, temp_v0_2 + 0x1E4) < 0x118)) {
                            if (temp_v0_2->unk89 != 0) {
                                func_801548C8(arg0, temp_v0_2);
                            }
                            func_801547DC(arg0, temp_v0_2);
                        }
                        var_s2_2 += 1;
                    } while (var_s2_2 < temp_s6);
                }
                goto block_12;
            }
        } else {
block_12:
            var_s5 += 0x10;
        }
        var_s1 += 0x10;
        goto loop_1;
    }
loop_14:
    if (var_s2 < temp_s6) {
        temp_v0_3 = func_801244FC(D_801C34EC, var_s2);
        temp_s3 = temp_v0_3 + 0x1E4;
        if (temp_v0_3->unk88 != 0) {
            func_8013CEBC(D_801C34F4 + 0x8C, temp_s3, 0);
            if (temp_v0_3->unk89 != 0) {
                func_801548C8(arg0, temp_v0_3);
            }
            var_s1_2 = 0;
            if ((rand() & 0xF) == 0xF) {
                var_s1_2 = temp_v0_3->unk10C >= 6;
            }
            if (var_s1_2 != 0) {
                func_80124CBC(D_801C34EC)->unkC = temp_s3;
                func_8012A154(D_801C34F0, 0, 1, 0x1D, temp_v0_3->unk7C4, 0);
            }
            temp_v0_4 = temp_v0_3->unk182;
            var_a0 = 0;
            temp_v0_3->unk182 = (u16) (temp_v0_4 + 1);
            if (((s16) temp_v0_4 >= 0xC8) || (temp_v0_3->unk8B != 0) || (temp_v0_3->unk7D != 0)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                temp_v0_3->unk88 = 0U;
                func_8011BC6C(temp_v0_3 + 0x1E4, 0, 0xA, 8, 0, 0);
                func_8011B994(temp_v0_3->unk740);
            }
            if (temp_v0_3->unk8C != 0) {
                temp_v0_3->unk88 = 0U;
                func_8011B994(temp_v0_3->unk740);
            }
        }
        if (temp_v0_3->unk89 != 0) {
            temp_v0_5 = temp_v0_3->unk184;
            temp_v0_3->unk184 = (u16) (temp_v0_5 + 1);
            if ((s16) temp_v0_5 >= 0x64) {
                temp_v0_3->unk89 = 0U;
                temp_v0_3->unk184 = 0U;
                func_8011B994(temp_v0_3->unk740);
            }
        }
        if (temp_s4->unk88 != 0) {
            temp_v0_6 = temp_s4->unkB0;
            temp_s4->unkB0 = (u16) (temp_v0_6 + 1);
            if ((s16) temp_v0_6 >= 0x64) {
                temp_s4->unk88 = 0U;
                temp_s4->unkB0 = 0U;
                func_8011B994(temp_s4->unk158);
            }
        }
        var_s2 += 1;
        goto loop_14;
    }
}
