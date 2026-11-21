/* m2c reference for func_80132090 @ 80132090 (458 words). Generated; not compiled or validated. */
? func_8010B5BC(void *, ?);                         /* extern */
? func_8011305C();                                  /* extern */
? func_80113D0C(s32 *);                             /* extern */
? func_8011AE24();                                  /* extern */
? func_8011DDD0(s16);                               /* extern */
? func_8011E990(s32 *);                             /* extern */
? func_8011EE48(void *);                            /* extern */
? func_80120F68(void *);                            /* extern */
? func_801277B4();                                  /* extern */
? func_80127F18(?);                                 /* extern */
? func_80129E1C(void *, ?, s32 *);                  /* extern */
? func_8012D1AC(s32 *, ?);                          /* extern */
? func_8012D290(s32 *, ?);                          /* extern */
? func_8012D3D0();                                  /* extern */
? func_8012D45C();                                  /* extern */
? func_8012D78C();                                  /* extern */
? func_8012D80C();                                  /* extern */
? func_8012E7D4();                                  /* extern */
? func_80132060();                                  /* extern */
? func_801327B8(s32 *, ? *);                        /* extern */
? func_80132D60();                                  /* extern */
s32 func_80132DA0();                                /* extern */
? func_80132EA4(s16);                               /* extern */
s32 func_8013A06C();                                /* extern */
? func_8013AA08(?, s32 *);                          /* extern */
? func_8013ACCC();                                  /* extern */
? func_8013E2D0(s32 *);                             /* extern */
? func_8013ED18();                                  /* extern */
? func_80140564();                                  /* extern */
? func_80140720(s32 *);                             /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C4F4(s32, ?);                            /* extern */
? func_8015C5FC(s32);                               /* extern */
? func_8015C66C(s32 *);                             /* extern */
? func_8015C838(s32 *);                             /* extern */
? func_8015EBDC(?);                                 /* extern */
s32 func_8015F94C(s32);                             /* extern */
? func_80163B54();                                  /* extern */
? func_80164EA0();                                  /* extern */
? func_80164EC0(s32 *, ?);                          /* extern */
? func_801667BC(?);                                 /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167620(?, ?, ?, ? *, s32 *);               /* extern */
? func_8016BB9C();                                  /* extern */
? func_8016BE08(?);                                 /* extern */
? func_8016D098();                                  /* extern */
? func_8016D968();                                  /* extern */
? func_8016DA7C(s32 *, ?);                          /* extern */
? func_801701E4(s16);                               /* extern */
? func_80176E9C(s16);                               /* extern */
s32 func_801788E4();                                /* extern */
? func_80178910();                                  /* extern */
s16 func_80178A1C();                                /* extern */
? func_80178A80(?);                                 /* extern */
s32 func_80178AC8(s32);                             /* extern */
? func_80179064(?);                                 /* extern */
? func_801F550C(s16);                               /* extern */
? func_801F8374(s16);                               /* extern */
extern s32 *D_801C380C;
extern s32 *D_801C3810;
extern s32 D_801C3814;
extern s32 D_801C3818;
extern s32 D_801C381C;
extern s32 D_801CBB78;
extern s32 D_801CBC78;
extern ? D_801CBD78;
static s32 D_801C32F8 = 0;
static s32 D_801C3374 = 0;
static s32 D_801C3378 = 0;
static s32 D_801C337C = 0x14;
static ? D_801C3380;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;

s32 func_80132090(void) {
    ? sp18;
    s32 sp28;
    s32 sp2C;
    ? var_a0;
    ? var_a1;
    ? var_a1_2;
    s32 *temp_s1;
    s32 *var_s2;
    s32 *var_v0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_3;
    void *temp_s0;
    void *temp_s0_2;

    memset(&sp18, 0, 0x10);
    var_s3 = 1;
    temp_v0 = func_8013A06C();
    var_s5 = 0x10;
    sp2C = 0;
    D_801C3818 = 0;
    D_801C381C = 0x14;
    func_8016BE08(1);
    var_s6 = func_801788E4();
    D_801C380C = &D_801CBB78;
    if (D_801C3378 != 0) {
        D_801C3810 = &D_801CBC78;
    }
    func_80132D60();
    func_80178A80(1);
    func_8011EE48(D_801C34EC);
    func_8016D098();
    if (temp_v0 != 0) {
        D_801C32F8 = 0;
        if (temp_v0 == 1) {
            sp28 = (sp28 & 0xFFFF00FF) | 0x400;
            func_8012D1AC(&sp28, 4);
            func_8012D290(&sp28, 4);
        } else {
            func_8012D290(&sp28, 4);
            sp28.unk1 = 4;
            func_8012D1AC(&sp28, 4);
        }
        D_801C32F8 = 1;
    }
    var_v0 = 0x14;
    if (D_801C34EC->unk7D8 == 3) {
        var_v0 = 0xF;
    }
    D_801C337C = var_v0;
loop_10:
    if (func_80132DA0() == 0) {
        var_s2 = &D_801CBB78;
        if (D_801C380C == &D_801CBB78) {
            var_s2 = &D_801CBB78 + 0x80;
        }
        var_s2->unk8 = (s32) var_s2->unk4;
        D_801C380C = var_s2;
        func_8015C4F4(var_s2->unk0, 0x600);
        func_8016BB9C();
        if (temp_v0 != 0) {
            func_8012D80C();
            func_8013ACCC();
            func_8013AA08(0, var_s2);
        }
        if (D_801C3818 != 0) {
            if ((D_801C3378 != 0) && ((D_801C34EC + 0x6220)->unk3A8 == 1)) {
                func_80167088(1, 0xC8, 0xC8, 0x32);
                var_a0 = 1;
                var_a1 = 0x50;
            } else {
                func_80167088(0, 0xC8, 0xC8, 0x32);
                var_a0 = 0;
                var_a1 = 0xA0;
            }
            func_80167620(var_a0, var_a1, 0x64, &D_801CBD78, D_801C380C);
            D_801C3818 = 0;
        }
        func_8011EE48(D_801C34EC);
        D_801C3814 = func_8015F94C(0x1F8003FC);
        func_80164EA0();
        func_8011DDD0(func_80178A1C());
        func_8011305C();
        func_80140564();
        func_80176E9C(func_80178A1C());
        func_8013ED18();
        func_801277B4();
        temp_v1 = D_801C34EC->unk12688;
        if (temp_v1 != 4) {
            if (temp_v1 == 7) {
                func_801F8374(func_80178A1C());
            }
        } else {
            func_801F550C(func_80178A1C());
        }
        func_80179064(0);
        func_8010B5BC(D_801C34EC + 0x6220, 0);
        func_80164EC0(var_s2, 0);
        func_8015F94C(D_801C3814);
        func_801667BC(0);
        func_80127F18(0);
        func_8011E990(var_s2);
        func_80140720(var_s2);
        func_80113D0C(var_s2);
        temp_s0 = D_801C34EC;
        func_80129E1C(temp_s0 + 0x12380, 0, var_s2);
        func_80129E1C(temp_s0 + 0x1239C, 0, var_s2);
        func_8013E2D0(var_s2);
        func_8016D968();
        func_8016DA7C(var_s2, 0);
        func_8012E7D4();
        if (D_801C3378 != 0) {
            var_v0_2 = &D_801CBC78;
            if (D_801C3810 == &D_801CBC78) {
                var_v0_2 = &D_801CBC78 + 0x80;
            }
            D_801C3810 = var_v0_2;
            func_8015C4F4(*var_v0_2, 0x600);
            D_801C3814 = func_8015F94C(0x1F8003FC);
            func_80179064(1);
            D_801C3810->unk8 = (s32) var_s2->unk8;
            if (func_8013A06C() != 0) {
                func_8013AA08(1, D_801C3810);
            }
            func_8010B5BC(D_801C34EC + 0x6220, 1);
            func_80164EC0(D_801C3810, 1);
            func_8015F94C(D_801C3814);
            func_801667BC(1);
            func_80127F18(1);
            func_8011E990(D_801C3810);
            func_80140720(D_801C3810);
            func_80113D0C(D_801C3810);
            temp_s0_2 = D_801C34EC;
            temp_s1 = D_801C3810;
            func_80129E1C(temp_s0_2 + 0x12380, 1, temp_s1);
            func_80129E1C(temp_s0_2 + 0x1239C, 1, temp_s1);
            func_8013E2D0(D_801C3810);
            func_8016DA7C(D_801C3810, 1);
        }
        if (D_801C34EC->unk7D8 == 0) {
            var_s5 -= 1;
            var_v0_3 = var_s5 < 8;
            if (var_s5 <= 0) {
                var_s5 = 0x10;
                var_v0_3 = 0x10 < 8;
            }
            if (var_v0_3 != 0) {
                var_a1_2 = 0xFF;
            } else {
                var_a1_2 = 0x64;
            }
            func_80167088(0, var_a1_2, 0x32, 0x32);
            func_80167620(0, 0xA0, 0x28, "DEMO", var_s2);
        }
        if (temp_v0 != 0) {
            var_s3 += 1;
            if (var_s3 >= 4) {
                var_s3 = -0xFA0;
            }
            if (temp_v0 == 1) {
                func_8012D78C();
                func_8012D45C();
            } else {
                func_8012D45C();
                func_8012D78C();
            }
        }
        func_8015C008(0);
        func_801701E4(func_80178A1C());
        func_801788E4();
        if (D_801C34EC->unk7D8 != 0) {
            func_801327B8(&sp2C, &sp18);
        }
        func_8015EBDC(0);
        if ((temp_v0 != 0) && (var_s3 == 3)) {
            func_8012D3D0();
        }
loop_50:
        if (D_801C337C < func_80178AC8(func_801788E4() - var_s6)) {
            func_8015EBDC(0);
            goto loop_50;
        }
        func_80132EA4(func_80178A1C());
        func_80178910();
        var_s6 = func_801788E4();
        func_8011AE24();
        func_80163B54();
        func_8015C66C(var_s2 + 0x10);
        func_8015C838(var_s2 + 0x6C);
        func_8015C5FC(var_s2->unk0 + 0x17FC);
        if ((D_801C3378 == 1) || ((D_801C3378 >= 2) && (D_801C3378 == 2))) {
            func_8015C66C(D_801C3810 + 0x10);
            func_8015C5FC(D_801C3810->unk0 + 0x17FC);
        }
        goto loop_10;
    }
    func_80120F68(D_801C34EC);
    func_80132060();
    return D_801C3374;
}
