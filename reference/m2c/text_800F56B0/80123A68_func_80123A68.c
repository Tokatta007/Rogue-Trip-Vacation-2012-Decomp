/* m2c reference for func_80123A68 @ 80123A68 (264 words). Generated; not compiled or validated. */
? func_80125050(? *, ? *, s32 *);                   /* extern */
s32 func_80125094(s32 *, ?);                        /* extern */
? func_8012538C(s32, ? *);                          /* extern */
? func_801597FC(s32 *, ? *);                        /* extern */

s32 func_80123A68(void *arg0, void *arg1, ? *arg2, s32 arg3, void *arg4, s32 *arg5) {
    ? sp10;
    ? sp20;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    void *var_a1;
    void *var_s1;

    var_s7 = 0x7FFFFFFF;
    var_s6 = 0;
    sp44 = arg0 + 0xB788;
    var_s1 = arg0;
    sp40 = 0;
    sp48 = arg0 + 0xC8F8;
loop_1:
    if (var_s6 < arg0->unk1270C) {
        if (var_s1->unk1241C != 0) {
            var_a2 = 1;
            if (var_s1->unkB768 == 1) {
                var_a1 = sp44 + (var_s1->unk126EC * 0x8B8);
            } else {
                var_a1 = sp48 + (var_s1->unk126EC * 0x958);
            }
            if (var_a1->unk10C > 0) {
                if (arg1 != NULL) {
                    var_a0 = 0;
                    if ((arg1->unk7C0 == var_s1->unk1268C) && (arg1->unk78 == var_a1->unk78)) {
                        var_a2 = 0;
                    }
                    if (arg0->unk7D8 == 3) {
                        var_a0 = var_a1->unk7B8 == 1;
                    }
                    var_v0 = var_a2 & 0xFF;
                    if (var_a0 != 0) {
                        goto block_14;
                    }
                } else {
                    goto block_15;
                }
            } else {
block_14:
                var_a2 = 0;
block_15:
                var_v0 = var_a2 & 0xFF;
            }
            if (var_v0 != 0) {
                func_80125050(arg2, var_s1->unk1241C + 0x1C, &sp30);
                var_a0_2 = 0;
                temp_s2 = func_80125094(&sp30, 0);
                if (*arg5 != 0) {
                    var_a0_2 = arg4->unk4 < temp_s2;
                }
                if (var_a0_2 == 0) {
                    if (((u32) (sp30 + 0x3FFF) >= 0x7FFFU) || (sp34 >= 0x4000) || (sp34 < -0x3FFF) || (sp38 >= 0x4000) || (sp38 < -0x3FFF)) {
                        do {
loop_25:
                            temp_v0 = sp30 >> 2;
                            temp_v1 = sp34 >> 2;
                            temp_a0 = sp38 >> 2;
                            sp30 = temp_v0;
                            sp34 = temp_v1;
                            sp38 = temp_a0;
                            if ((u32) (temp_v0 + 0x3FFF) >= 0x7FFFU) {
                                goto loop_25;
                            }
                            if (temp_v1 >= 0x4000) {
                                goto loop_25;
                            }
                            if (temp_v1 < -0x3FFF) {
                                goto loop_25;
                            }
                            if (temp_a0 >= 0x4000) {
                                goto loop_25;
                            }
                        } while (temp_a0 < -0x3FFF);
                    }
                    func_801597FC(&sp30, &sp10);
                    func_8012538C(arg3, &sp20);
                    func_80125050(&sp10, &sp20, &sp30);
                    var_v0_2 = sp34;
                    var_v1 = sp38;
                    if (var_v0_2 < 0) {
                        var_v0_2 = -var_v0_2;
                    }
                    var_a1_2 = var_v0_2;
                    if (var_v1 < 0) {
                        var_v1 = -var_v1;
                    }
                    sp34 = var_a1_2;
                    sp38 = var_v1;
                    var_a0_3 = sp30;
                    if (sp30 < 0) {
                        var_a0_3 = -var_a0_3;
                    }
                    sp30 = var_a0_3;
                    if (var_a0_3 >= var_a1_2) {
                        var_a1_2 = var_a0_3;
                    }
                    var_a1_3 = var_a1_2;
                    if (var_a1_2 < var_v1) {
                        var_a1_3 = var_v1;
                    }
                    var_v1_2 = 0;
                    var_a0_4 = arg4->unk0;
                    if (var_s1->unkB768 == 1) {
                        var_v1_2 = (u32) (arg1->unk7B8 ^ 2) < 1U;
                    }
                    var_v0_3 = var_a1_3 < var_a0_4;
                    if (var_v1_2 != 0) {
                        var_v0_3 = var_a1_3 < var_a0_4;
                        if (arg0->unk7D4 == 0) {
                            var_a0_4 = var_a0_4 >> 1;
                            var_v0_3 = var_a1_3 < var_a0_4;
                        }
                    }
                    if (var_v0_3 != 0) {
                        *arg5 = 1;
                        if ((temp_s2 < arg4->unk4) && (temp_s2 < var_s7)) {
                            temp_v1_2 = temp_s2 + ((s32) (temp_s2 * var_a1_3) / var_a0_4);
                            if (temp_v1_2 < var_s7) {
                                var_s7 = temp_v1_2;
                                sp40 = var_s1->unk1241C;
                            }
                        }
                    }
                }
            }
        }
        var_s1 += 4;
        var_s6 += 1;
        goto loop_1;
    }
    return sp40;
}
