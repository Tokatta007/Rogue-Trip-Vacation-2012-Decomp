/* m2c reference for func_8013A440 @ 8013A440 (133 words). Generated; not compiled or validated. */
? func_8013A898(?, ?, ?, ?);                        /* extern */
? func_8013AF34(?);                                 /* extern */
? func_8013AF7C(?, ?);                              /* extern */
? func_80167020(?, ?, s32, ? *);                    /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
? func_8016BB9C();                                  /* extern */
? func_8017DE0C();                                  /* extern */
extern ? *D_801B38A8;
static ? D_800F3F04;                                /* unable to generate initializer: unknown type; const */

s32 func_8013A440(s32 arg0, s32 arg1) {
    ? **var_s0;
    ? *var_a3;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;

    var_s5 = 0;
    var_s1 = 0;
    do {
        var_s2 = 0x78;
        func_8016BB9C();
        func_8013A898(0x50, 0x55, 0xA0, 0x46);
        func_80167088(0, 0x82, 0x82, 0x14);
        func_80167020(0, 0xA0, 0x5A, &D_800F3F04);
        var_s3 = 0;
        if (D_801B38A8 != NULL) {
            var_s0 = &D_801B38A8;
            do {
                if (var_s3 == var_s1) {
                    func_80167088(1, 0xC8, 0xC8, 0x32);
                    var_a3 = (&D_801B38A8)[var_s1];
                } else {
                    func_80167088(1, 0x50, 0x50, 0x32);
                    var_a3 = *var_s0;
                }
                func_80167020(1, 0xA0, var_s2, var_a3);
                var_s2 += 0xF;
                var_s0 += 4;
                var_s3 += 1;
            } while (*var_s0 != NULL);
        }
        if (func_8016B6DC(0x4000, arg0) & 0xFF) {
            if (arg1 != 0) {
                func_8013AF7C(0x48, 0);
                var_s1 += 1;
            } else {
                func_8013AF34(0x2C);
                var_s1 += 1;
            }
            if (var_s1 == var_s3) {
                var_s1 = 0;
            }
        }
        if (func_8016B6DC(0x1000, arg0) & 0xFF) {
            if (arg1 != 0) {
                func_8013AF7C(0x48, 0);
                var_s1 -= 1;
            } else {
                func_8013AF34(0x2C);
                var_s1 -= 1;
            }
            if (var_s1 < 0) {
                var_s1 = var_s3 - 1;
            }
        }
        if (func_8016B6DC(0x40, arg0) & 0xFF) {
            if (arg1 != 0) {
                func_8013AF7C(0x4A, 0);
                var_s5 = 1;
            } else {
                func_8013AF34(0x2D);
                var_s5 = 1;
            }
        }
        func_8017DE0C();
    } while (var_s5 == 0);
    return var_s1;
}
