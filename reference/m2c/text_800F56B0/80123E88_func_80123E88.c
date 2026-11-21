/* m2c reference for func_80123E88 @ 80123E88 (201 words). Generated; not compiled or validated. */
? func_80125050(? *, ? *, s32 *);                   /* extern */
s32 func_80125094(s32 *, ?);                        /* extern */
? func_8012538C(s32, ? *);                          /* extern */
? func_801597FC(s32 *, ? *);                        /* extern */

s32 func_80123E88(void *arg0, ? *arg1, s32 arg2, void *arg3, s32 arg4) {
    ? sp10;
    ? sp20;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    void *sp40;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s4;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v1;
    void *var_s0;
    void *var_s2;

    var_s7 = 0x7FFFFFFF;
    var_s4 = 0;
    var_s6 = 0;
    if (arg0->unk12760 > 0) {
        sp40 = arg0 + 0x10000;
        var_s2 = arg0;
        var_s0 = var_s2 + 0x10000;
        do {
            if (var_s0->unk2458->unkC != 0) {
                func_80125050(arg1, var_s0->unk2458 + 0x1C, &sp30);
                var_s1 = func_80125094(&sp30, 0);
                if (arg4 != 0) {
                    var_s1 *= 0x10;
                } else if ((*var_s0->unk2458->unk0 & 0xFFF0) != 0x2120) {
                    if ((arg0 + var_s4)->unk127CA != 0) {
                        var_s1 *= 2;
                    } else {
                        var_s1 *= 4;
                    }
                }
                if (arg3->unk4 >= var_s1) {
                    if (((u32) (sp30 + 0x3FFF) >= 0x7FFFU) || (sp34 >= 0x4000) || (sp34 < -0x3FFF) || (sp38 >= 0x4000) || (sp38 < -0x3FFF)) {
                        do {
loop_15:
                            temp_v0 = sp30 >> 2;
                            temp_v1 = sp34 >> 2;
                            temp_a0 = sp38 >> 2;
                            sp30 = temp_v0;
                            sp34 = temp_v1;
                            sp38 = temp_a0;
                            if ((u32) (temp_v0 + 0x3FFF) >= 0x7FFFU) {
                                goto loop_15;
                            }
                            if (temp_v1 >= 0x4000) {
                                goto loop_15;
                            }
                            if (temp_v1 < -0x3FFF) {
                                goto loop_15;
                            }
                            if (temp_a0 >= 0x4000) {
                                goto loop_15;
                            }
                        } while (temp_a0 < -0x3FFF);
                    }
                    func_801597FC(&sp30, &sp10);
                    func_8012538C(arg2, &sp20);
                    func_80125050(&sp10, &sp20, &sp30);
                    var_v0 = sp34;
                    var_v1 = sp38;
                    if (var_v0 < 0) {
                        var_v0 = -var_v0;
                    }
                    var_a0 = var_v0;
                    if (var_v1 < 0) {
                        var_v1 = -var_v1;
                    }
                    sp34 = var_a0;
                    sp38 = var_v1;
                    var_a1 = sp30;
                    if (sp30 < 0) {
                        var_a1 = -var_a1;
                    }
                    sp30 = var_a1;
                    if (var_a1 >= var_a0) {
                        var_a0 = var_a1;
                    }
                    if (var_a0 < var_v1) {
                        var_a0 = var_v1;
                    }
                    temp_v1_2 = (s32) (arg3->unk0 * 3) >> 2;
                    if (var_a0 < temp_v1_2) {
                        temp_v1_3 = var_s1 + ((s32) (var_s1 * var_a0) / temp_v1_2);
                        if (temp_v1_3 < var_s7) {
                            var_s7 = temp_v1_3;
                            var_s6 = var_s2->unk12458;
                        }
                    }
                }
            }
            var_s2 += 4;
            var_s4 += 1;
            var_s0 = var_s2 + 0x10000;
        } while (var_s4 < sp40->unk2760);
    }
    return var_s6;
}
