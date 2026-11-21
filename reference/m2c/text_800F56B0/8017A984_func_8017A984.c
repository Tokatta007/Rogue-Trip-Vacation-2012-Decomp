/* m2c reference for func_8017A984 @ 8017A984 (156 words). Generated; not compiled or validated. */
? func_801727DC();                                  /* extern */
? func_8017ABF4(s16, s32);                          /* extern */
? func_8017AF04(s16, s32);                          /* extern */
? func_8017B2A4(s16, s32);                          /* extern */
? func_8017B344(s16, s32);                          /* extern */
? func_8017BC14(s16, s32);                          /* extern */
? func_8017BC74(s16, s32);                          /* extern */
? func_8017BFA4(s16, s32);                          /* extern */
extern s32 D_801F3A9C;
extern s32 D_801F3AA0;
extern s32 D_801F3AA8;
extern s16 D_801F4328;
extern s16 D_801F432A;

void func_8017A984(void) {
    s16 var_s7;
    s32 *var_fp;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s3;
    s32 var_s6;

    if (D_801F3A9C != 1) {
        D_801F3A9C = 1;
        var_s7 = 0;
        func_801727DC();
        if (D_801F4328 > 0) {
            var_fp = &D_801F3AA8;
            do {
                if (D_801F3AA0 & (1 << var_s7)) {
                    var_s6 = 0;
                    if (D_801F432A > 0) {
                        var_s3 = 0;
                        var_s0 = 0;
                        do {
                            if ((var_s0 + *var_fp)->unk98 & 1) {
                                temp_s1 = var_s3 >> 0x10;
                                func_8017B344(var_s7, temp_s1);
                                if ((var_s0 + *var_fp)->unk98 & 0x10) {
                                    func_8017ABF4(var_s7, temp_s1);
                                }
                                if ((var_s0 + *var_fp)->unk98 & 0x20) {
                                    func_8017AF04(var_s7, temp_s1);
                                }
                                if ((var_s0 + *var_fp)->unk98 & 0x40) {
                                    func_8017BFA4(var_s7, temp_s1);
                                }
                                if ((var_s0 + *var_fp)->unk98 & 0x80) {
                                    func_8017BFA4(var_s7, temp_s1);
                                }
                            }
                            if ((var_s0 + *var_fp)->unk98 & 2) {
                                func_8017B2A4(var_s7, var_s3 >> 0x10);
                            }
                            if ((var_s0 + *var_fp)->unk98 & 8) {
                                func_8017BC14(var_s7, var_s3 >> 0x10);
                            }
                            if ((var_s0 + *var_fp)->unk98 & 4) {
                                func_8017BC74(var_s7, var_s3 >> 0x10);
                                (var_s0 + *var_fp)->unk98 = 0;
                            }
                            var_s3 += 0x10000;
                            var_s6 += 1;
                            var_s0 += 0xB0;
                        } while (var_s6 < D_801F432A);
                    }
                }
                var_s7 += 1;
                var_fp += 4;
            } while (var_s7 < D_801F4328);
        }
        D_801F3A9C = 0;
    }
}
