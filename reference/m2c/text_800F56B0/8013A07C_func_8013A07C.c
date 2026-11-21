/* m2c reference for func_8013A07C @ 8013A07C (241 words). Generated; not compiled or validated. */
? func_80120F68(s32);                               /* extern */
? func_8012D3D0();                                  /* extern */
? func_8012D45C();                                  /* extern */
? func_8012D78C();                                  /* extern */
? func_8012D80C();                                  /* extern */
? func_8012DB84();                                  /* extern */
s32 func_8012DB94();                                /* extern */
? func_8012DBA0();                                  /* extern */
s32 func_8012DBB0();                                /* extern */
? func_8012DBBC();                                  /* extern */
? func_80133708();                                  /* extern */
s32 func_8013A06C();                                /* extern */
s32 func_8013A440(s32, ?);                          /* extern */
? func_8013A898(?, ?, ?, ?);                        /* extern */
? func_8013AF7C(?, ?);                              /* extern */
? func_80154AFC(? *, ? *, s32);                     /* extern */
? func_80167020(?, ?, s32, ? *);                    /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_801670B4(?);                                 /* extern */
? func_80167104(?);                                 /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
? func_8016BB58();                                  /* extern */
? func_8016BB9C();                                  /* extern */
s32 func_8016BDA8(s32);                             /* extern */
? func_8016BE08(?);                                 /* extern */
s32 func_8016BE60(s32, ? *);                        /* extern */
s32 func_8016C10C(s32);                             /* extern */
? func_8017DE0C();                                  /* extern */
extern ? *D_801B389C;
extern u8 D_801B3967;
static s32 D_801C32F8 = 0;
static s32 D_801C32FC = 0;
static s32 D_801C34EC = 0;
static ? D_800F3EBC;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3ECC;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3EE4;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3EF4;                                /* unable to generate initializer: unknown type; const */

s32 func_8013A07C(s32 arg0) {
    ? sp10;
    ? **var_s0_2;
    ? *var_a3;
    ? var_a0;
    s32 temp_s5;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s6;
    s32 var_v1;

    D_801C32F8 = 0;
    D_801C32FC = 0;
    var_s3 = 0;
    func_80133708();
    var_s6 = 0;
    func_80120F68(D_801C34EC);
    if ((func_8013A06C() != 0) && (func_8016BDA8(arg0) == 0)) {
        func_80167020(0, 0xA0, 0x46, &D_800F3EBC);
        var_s0 = -1;
        do {
            func_8012D45C();
            if (func_8012DBB0() != 0) {
                var_s0 = 0;
            } else if (func_8012DB94() != 0) {
                var_s0 = 1;
            }
        } while (var_s0 == -1);
        func_8012DBBC();
        func_8012D3D0();
        D_801C32F8 = 1;
        D_801C32FC = 0;
        return var_s0;
    }
    func_8016BE08(0);
    temp_s5 = func_8016BE60(arg0);
    if (0 == 0) {
        do {
            var_s1 = 0x64;
            func_8016BB9C();
            func_8013A898(0x46, 0x46, 0xB4, 0x50);
            var_v1 = temp_s5;
            if (func_8016C10C(temp_s5) != 0) {
                var_v1 = -1;
            }
            if (var_v1 >= 0) {
                func_80154AFC(&sp10, &D_800F3ECC, func_8016BE60(arg0, &D_800F3EE4) + 1);
                var_a0 = 1;
            } else {
                func_80154AFC(&sp10, &D_800F3EE4, arg0 + 1);
                var_a0 = 0;
            }
            func_80167020(var_a0, 0xA0, 0x4B, &sp10);
            var_s2 = 0;
            if (D_801B389C != NULL) {
                var_s0_2 = &D_801B389C;
                do {
                    if (var_s2 == var_s3) {
                        func_80167104(1);
                        var_a3 = (&D_801B389C)[var_s3];
                    } else {
                        func_801670B4(1);
                        var_a3 = *var_s0_2;
                    }
                    func_80167020(1, 0xA0, var_s1, var_a3);
                    var_s1 += 0xF;
                    var_s0_2 += 4;
                    var_s2 += 1;
                } while (*var_s0_2 != NULL);
            }
            func_80167088(1, 0xC8, 0xC8, 0x32);
            func_80167020(1, 0xA0, var_s1 + 8, &D_800F3EF4);
            if (func_8016B6DC(0x4000, temp_s5) & 0xFF) {
                func_8013AF7C(0x48, 0);
                var_s3 += 1;
                if (var_s3 == var_s2) {
                    var_s3 = 0;
                }
            }
            if (func_8016B6DC(0x1000, temp_s5) & 0xFF) {
                func_8013AF7C(0x48, 0);
                var_s3 -= 1;
                if (var_s3 < 0) {
                    var_s3 = var_s2 - 1;
                }
            }
            if (func_8016B6DC(0x40, temp_s5) & 0xFF) {
                func_8013AF7C(0x4A, 0);
                var_s6 = 1;
            }
            func_8017DE0C();
        } while (var_s6 == 0);
    }
    if (var_s3 == 1) {
        var_s3 = func_8013A440(temp_s5, 1);
    }
    if ((func_8013A06C() != 0) && (func_8016BDA8(arg0) != 0)) {
        switch (var_s3) {                           /* irregular */
        case 0:
        case 2:
            func_8012DBA0();
            break;
        case 1:
            func_8012DB84();
            break;
        }
        func_8012D80C();
        func_8012D78C();
    }
    if (D_801B3967 != 0) {
        func_8012DBBC();
        func_8012D3D0();
        D_801C32F8 = 1;
        D_801C32FC = 0;
    }
    func_8016BB58();
    func_8016BE08(1);
    return var_s3;
}
