/* m2c reference for func_8013D134 @ 8013D134 (418 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, s32 *, s32, s32, s32, s32); /* extern */
? func_801254DC(VECTOR *, s32, s32, s32);           /* extern */
s32 func_80133AE0(s32, s32);                        /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013BEA8(s32, ?);                            /* extern */
? func_8013CD5C(s32, s32, void *, ?);               /* extern */
? func_8013D7BC(void *, ?);                         /* extern */
s32 func_8013DB18(void *, void *);                  /* extern */
? func_8016408C(s32 *);                             /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
extern s32 D_801C31D4;
static s32 D_801C34F4 = 0;

void func_8013D134(void *arg0) {
    VECTOR sp18;
    VECTOR sp28;                                    /* compiler-managed */
    s32 sp38;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_a0;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_s0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_4;
    void *temp_a2;
    void *var_a0_2;
    void *var_a0_3;
    void *var_v1_3;

    var_s3 = 0;
    if (arg0->unk91 == 0) {
        var_v1 = 0;
        if ((arg0->unk86 != 0) || (arg0->unk7F != 0) || (arg0->unk96 != 0)) {
            var_v1 = 1;
        }
        var_s0 = 0;
        if (var_v1 != 0) {
            var_v1_2 = 0;
            if ((arg0->unk7F != 0) || (arg0->unk96 != 0)) {
                var_v1_2 = 1;
            }
            if (var_v1_2 != 0) {
                var_s3 = 1;
                var_s0 = 2;
            } else if (arg0->unkC8 < arg0->unk7A4) {
                sp38 = arg0->unk1F8 - arg0->unk204;
                func_8016408C(&sp38);
                var_v0 = sp38;
                if (var_v0 < 0) {
                    var_v0 = -var_v0;
                }
                if (var_v0 >= 0x72) {
                    var_s3 = 1;
                }
            }
            if ((var_s3 != 0) && (func_8013DB18(arg0, arg0 + 0x5EC) != 0)) {
                if (arg0->unk829 != 0) {
                    if (arg0->unk96 != 0) {
                        temp_s1 = (rand() & 0xF) - 7;
                        temp_s0 = (rand() & 7) - 0x50;
                        func_801254DC(&sp18, temp_s1, temp_s0, rand() & 7);
                        mathMulTransVec(arg0->unk738 + 0x28, &sp18, &sp28);
                        sp28 = ((s32) sp28 >> 1) + arg0->unk244;
                        sp28.vy = (sp28.vy >> 1) + arg0->unk248;
                        sp28.vz = (sp28.vz >> 1) + arg0->unk24C;
                    } else {
                        sp28 = (((s32) arg0->unk244 >> 1) + (rand() & 0xF)) - 7;
                        sp28.vy = (((s32) arg0->unk248 >> 1) + (rand() & 0xF)) - 7;
                        sp28.vz = ((s32) arg0->unk24C >> 1) + (rand() & 7);
                    }
                    temp_s0_2 = (rand() & 3) + 6;
                    func_8011BC6C(arg0 + 0x5EC, &sp28, temp_s0_2, (rand() & 1) + 0x21, 0, 0);
                    temp_s0_3 = (rand() & 3) + 6;
                    func_8011BC6C(arg0 + 0x640, &sp28, temp_s0_3, (rand() & 1) + 0x21, 0, 0);
                } else if (var_s0 == 0) {
                    func_8013D7BC(arg0, 0);
                    func_8013D7BC(arg0, 1);
                }
                func_8013D7BC(arg0, 2);
                func_8013D7BC(arg0, 3);
                arg0->unk9C = 1U;
            }
        }
        var_a0 = 0;
        if ((arg0->unk829 != 0) && (((s16) arg0->unk58E == 2) || ((s16) arg0->unk5E2 == 2) || (arg0->unk9F != 0))) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            temp_s1_2 = func_80133AE0(arg0->unk7C0, arg0->unk78);
            temp_s0_4 = ((s32) arg0->unk7A4 >> 8) + 0xC;
            if (((s32) arg0->unk7C0 >> 4) != 0x10) {
                sp28 = ((s32) arg0->unk244 >> 2) - ((s32) arg0->unk248 >> 4);
                sp28.vz = 0;
                sp28.vy = ((s32) arg0->unk248 >> 2) + ((s32) arg0->unk244 >> 4);
                var_a0_2 = arg0 + 0x544;
                if (!(rand() & 1)) {
                    var_a0_2 = arg0 + 0x640;
                }
                func_8011BC6C(var_a0_2, &sp28, temp_s0_4 & 0xFFFF, 0x30, temp_s1_2, 0);
                sp28 = ((s32) arg0->unk244 >> 2) + ((s32) arg0->unk248 >> 4);
                sp28.vz = 0;
                sp28.vy = ((s32) arg0->unk248 >> 2) - ((s32) arg0->unk244 >> 4);
                if (rand() & 1) {
                    var_a0_3 = arg0 + 0x598;
                } else {
                    var_a0_3 = arg0 + 0x5EC;
                }
                func_8011BC6C(var_a0_3, &sp28, temp_s0_4 & 0xFFFF, 0x30, temp_s1_2, 0);
            }
        }
        var_a0_4 = 0;
        if (((s16) arg0->unk58E == 2) || ((s16) arg0->unk5E2 == 2) || ((s16) arg0->unk636 == 2) || ((s16) arg0->unk68A == 2) || (arg0->unk9F != 0)) {
            var_a0_4 = 1;
        }
        if (var_a0_4 != 0) {
            func_8013CD5C(D_801C34F4, (s32) (arg0->unk7A4 * 0x7F) / (s32) arg0->unk25C, arg0 + 0x1E4, 0xA);
        }
    }
    if (var_s3 == 0) {
        var_a0_5 = 0;
        if (arg0->unk9C != 0) {
            var_v1_3 = arg0;
            do {
                var_v1_3->unk58C = -1;
                var_v1_3->unk592 = 0;
                var_v1_3->unk594 = 0;
                var_v1_3->unk595 = 0;
                var_a0_5 += 1;
                var_v1_3 += 0x54;
            } while (var_a0_5 < 4);
            D_801C31CC.unk8 = 3;
            D_801C31CC.unkC = (s32) arg0->unk7C4;
            func_8013BEA8(D_801C34F4, -1);
            arg0->unk9C = 0U;
        }
    }
    if (arg0->unk9C != 0) {
        var_a0_6 = 0;
        if ((arg0->unk58E == 0) || ((s16) arg0->unk58E == 6) || (arg0->unk5E2 == 0) || ((s16) arg0->unk5E2 == 6) || (arg0->unk636 == 0) || ((s16) arg0->unk636 == 6) || (arg0->unk68A == 0) || ((s16) arg0->unk68A == 6)) {
            var_a0_6 = 1;
        }
        if (var_a0_6 != 0) {
            var_v1_4 = 3;
            if (arg0->unk96 != 0) {
                var_v1_4 = 4;
            }
            D_801C31D4 = var_v1_4;
            temp_a2 = arg0 + 0x1E4;
            D_801C31CC.unkC = (s32) arg0->unk7C4;
            D_801C3100.unk0 = (s32) arg0->unk1E4;
            D_801C3100.unk4 = (s32) temp_a2->unk4;
            D_801C31CC.unk0 = &D_801C3100;
            D_801C3100.unk8 = (s32) temp_a2->unk8;
            func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
        }
    }
}
