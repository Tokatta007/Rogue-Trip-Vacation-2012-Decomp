/* m2c reference for func_8012313C @ 8012313C (158 words). Generated; not compiled or validated. */
? func_80125050(s32 *, ? *, s32 *, void *);         /* extern */
s32 func_80125094(s32 *, s32);                      /* extern */
? func_801253C8(s32 *, ? *);                        /* extern */
? func_801597FC(s32 *, ? *);                        /* extern */

void func_8012313C(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    ? sp20;
    void *sp30;
    void *sp34;
    void *sp38;
    s32 sp3C;
    s32 *temp_s0;
    s32 *temp_s1;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_fp;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    void *var_s3;
    void *var_s5;
    void *var_s7;

    var_s4 = 0;
    if (arg0->unk1270C > 0) {
        var_s5 = arg0;
        var_fp = 0x300;
        var_s7 = var_s5;
        sp38 = arg0 + 0x10000;
        sp3C = 0x600;
        do {
            var_s1 = 0;
            if (sp38->unk270C > 0) {
                sp34 = var_s5 + 0x10000;
                var_s2 = 0;
                var_s3 = arg0;
                sp30 = arg0 + 0x10000;
                do {
                    if (var_s4 != var_s1) {
                        func_80125050(var_s3->unk1241C + 0x1C, sp34->unk241C + 0x1C, &sp10, sp34);
                        (arg0 + ((var_s1 * 4) + (var_s4 << 5)))->unk12500 = func_80125094(&sp10, 0);
                        if (((u32) (sp10 + 0x3FFF) >= 0x7FFFU) || (sp14 >= 0x4000) || (sp14 < -0x3FFF) || (sp18 >= 0x4000) || (sp18 < -0x3FFF)) {
                            do {
loop_10:
                                temp_v0 = sp10 >> 2;
                                temp_v1 = sp14 >> 2;
                                temp_a0 = sp18 >> 2;
                                sp10 = temp_v0;
                                sp14 = temp_v1;
                                sp18 = temp_a0;
                                if ((u32) (temp_v0 + 0x3FFF) >= 0x7FFFU) {
                                    goto loop_10;
                                }
                                if (temp_v1 >= 0x4000) {
                                    goto loop_10;
                                }
                                if (temp_v1 < -0x3FFF) {
                                    goto loop_10;
                                }
                                if (temp_a0 >= 0x4000) {
                                    goto loop_10;
                                }
                            } while (temp_a0 < -0x3FFF);
                        }
                        func_801597FC(&sp10, &sp20);
                        temp_s0 = var_s7 + var_s2;
                        func_80125050(temp_s0, &sp20, arg0 + var_fp + var_s2);
                        func_801253C8(temp_s0, &sp20);
                    }
                    var_s3 += 4;
                    var_s1 += 1;
                    var_s2 += 0xC;
                } while (var_s1 < sp30->unk270C);
            }
            var_fp += 0x60;
            var_s7 += 0x60;
            temp_s1 = arg0 + sp3C;
            sp3C += 0xC;
            var_s5->unk124E0 = func_80125094(temp_s1, var_s5->unk1241C + 0x1C);
            func_801253C8(temp_s1, var_s5->unk1241C + 0x1C);
            var_s5 += 4;
            var_s4 += 1;
        } while (var_s4 < sp38->unk270C);
    }
}
