/* m2c reference for func_8013A654 @ 8013A654 (145 words). Generated; not compiled or validated. */
? func_8013A898(?, ?, ?, ?);                        /* extern */
? func_8013AF7C(?, ?);                              /* extern */
? func_80167020(?, ?, s32, ? *);                    /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167104(?);                                 /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
? func_8016BB9C();                                  /* extern */
s32 func_8017D580(?);                               /* extern */
? func_8017DE0C();                                  /* extern */
extern ? *D_801B38A8;
static ? D_801C34BC;                                /* unable to generate initializer: unknown type */
static ? D_800F3F10;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3F24;                                /* unable to generate initializer: unknown type; const */

s32 func_8013A654(s32 arg0, s32 arg1) {
    ? **var_s0;
    ? *var_a3;
    ? *var_a3_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;

    var_s5 = 0;
    var_s3 = 1;
    do {
        var_s1 = 0x78;
        func_8016BB9C();
        func_8013A898(0x46, 0x50, 0xB4, 0x46);
        func_80167104(0);
        if (arg1 == 1) {
            var_a3 = "SORRY";
            goto block_5;
        }
        if (arg1 == 4) {
            var_a3 = &D_800F3F10;
block_5:
            func_80167020(0, 0xA0, 0x55, var_a3);
        }
        func_80167088(1, 0x64, 0x64, 0x14);
        func_80167020(1, 0xA0, 0x69, &D_800F3F24);
        var_s2 = 0;
        if (D_801B38A8 != NULL) {
            var_s0 = &D_801B38A8;
            do {
                if (var_s2 == var_s3) {
                    func_80167088(1, 0xC8, 0xC8, 0x32);
                    var_a3_2 = (&D_801B38A8)[var_s3];
                } else {
                    func_80167088(1, 0x50, 0x50, 0x32);
                    var_a3_2 = *var_s0;
                }
                func_80167020(1, 0xA0, var_s1, var_a3_2);
                var_s1 += 0xF;
                var_s0 += 4;
                var_s2 += 1;
            } while (*var_s0 != NULL);
        }
        if (func_8016B6DC(0x4000, arg0) & 0xFF) {
            var_s3 += 1;
            if (var_s3 == var_s2) {
                var_s3 = 0;
            }
            func_8013AF7C(0x48, 1);
        }
        if (func_8016B6DC(0x1000, arg0) & 0xFF) {
            var_s3 -= 1;
            if (var_s3 < 0) {
                var_s3 = var_s2 - 1;
            }
            func_8013AF7C(0x48, 1);
        }
        if (func_8016B6DC(0x40, arg0) & 0xFF) {
            var_s5 = 1;
            func_8013AF7C(0x4A, 1);
        }
        func_8017DE0C();
    } while (var_s5 == 0);
loop_23:
    if (func_8017D580(0x19) > 0) {
        func_8017DE0C();
        goto loop_23;
    }
    return var_s3;
}
