/* m2c reference for func_80139994 @ 80139994 (240 words). Generated; not compiled or validated. */
s32 func_80132EC8();                                /* extern */
? func_8013A898(s32, s32, ?, ?);                    /* extern */
? func_8013AECC(s32, s32 *, s32 *, s32 *);          /* extern */
? func_80154AFC(? *, ? *, s32, ?, s32);             /* extern */
? func_80167020(?, s32, s32, ? *);                  /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167104(?);                                 /* extern */
static void *D_801C34EC = NULL;
static ? D_800F3DF0;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3E00;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3E2C;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3E4C;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3E60;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3E74;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3E88;                                /* unable to generate initializer: unknown type; const */

void func_80139994(void) {
    ? sp20;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    ? var_a3;
    ? var_a3_2;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_v0;

    var_s5 = 1;
    func_80167104(0);
    func_80167020(0, 0xC8, 0x1E, &D_800F3DF0);
    var_s6 = 0;
    func_8013AECC(func_80132EC8(), &sp58, &sp5C, &sp60);
    var_a3 = 0x53;
    if (sp58 != 0) {
        if (sp58 == 1) {
            var_a3 = 0x20;
        }
        if (sp5C == 1) {

        }
        if (sp60 == 1) {
            var_v0 = 0x20;
        } else {
            var_v0 = 0x53;
        }
        func_80154AFC(&sp20, &D_800F3E00, sp58, var_a3, var_v0);
    } else if (sp5C != 0) {
        if (sp5C == 1) {
            var_a3 = 0x20;
        }
        if (sp60 == 1) {
            var_v0_2 = 0x20;
        } else {
            var_v0_2 = 0x53;
        }
        func_80154AFC(&sp20, &D_800F3E2C, sp5C, var_a3, var_v0_2);
    } else {
        var_a3_2 = 0x53;
        if (sp60 == 1) {
            var_a3_2 = 0x20;
        }
        func_80154AFC(&sp20, &D_800F3E4C, sp60, var_a3_2);
    }
    func_80167020(1, 0xC8, 0x32, &sp20);
    var_s4 = 0;
    if (D_801C34EC->unk7D8 == 3) {
        var_s5 = 2;
    }
    var_s3 = 0;
loop_23:
    if (var_s4 < var_s5) {
        var_s2 = 0x4B;
        if (var_s4 == 1) {
            var_s2 = 0x8C;
        }
        if ((var_s5 >= 2) && ((D_801C34EC + 0x6220)->unk3A8 == 1)) {
            var_s6 = 0xA;
            if (var_s4 == 0) {
                var_s6 = -0xA;
            }
        }
        temp_a0 = var_s3 + D_801C34EC + 0xB788;
        var_s0 = 0;
        if (temp_a0->unk7E8 != 0) {
            var_s0 = (s32) (temp_a0->unk7E4 * 0x64) / (s32) temp_a0->unk7E8;
        }
        func_8013A898(var_s6 + 0x54, var_s2 - 5, 0x96, 0x2F);
        func_80167088(1, 0x9F, 0x23, 0x23);
        func_80154AFC(&sp20, &D_800F3E60, var_s0);
        temp_s1 = var_s6 + 0xA0;
        func_80167020(1, temp_s1, var_s2, &sp20);
        if (var_s0 != 0) {
            temp_v0 = var_s3 + D_801C34EC + 0xB788;
            var_s0 = (s32) temp_v0->unk7F0 / (s32) temp_v0->unk7E4;
        }
        func_80167088(1, 0x9F, 0x23, 0x23);
        func_80154AFC(&sp20, &D_800F3E74, var_s0);
        func_80167020(1, temp_s1, var_s2 + 0xF, &sp20);
        if (D_801C34EC->unk127E5 != 0) {
            func_80167088(1, 0x9F, 0x23, 0x23);
            func_80154AFC(&sp20, &D_800F3E88, (var_s3 + D_801C34EC + 0xB788)->unk80C, 6);
            func_80167020(1, temp_s1, var_s2 + 0x1E, &sp20);
        }
        var_s3 += 0x8B8;
        var_s4 += 1;
        goto loop_23;
    }
}
