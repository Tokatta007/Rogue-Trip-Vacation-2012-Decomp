/* m2c reference for func_8010BCB0 @ 8010BCB0 (250 words). Generated; not compiled or validated. */
? func_80124FC8(void *, VECTOR *, VECTOR *);        /* extern */
? func_801253C8(void *, VECTOR *);                  /* extern */
? func_80125464(s32, void *);                       /* extern */
? func_80125518(s32, ?, ?, s16);                    /* extern */
? func_8016408C(s32 *, s32);                        /* extern */

void func_8010BCB0(void *arg0) {
    s32 sp10;
    VECTOR *var_s0;
    s32 temp_a1;
    s32 var_a0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    void *temp_s1;

    temp_s1 = arg0->unk738;
    var_s4 = arg0->unk478;
    var_v0 = 4;
    if (arg0->unk19C != 0) {
        if (arg0->unk829 == 0) {
            if (var_s4 != 8) {
                var_s4 = 8;
                func_80125518(temp_s1 + 0x4C, 0, 0, (s16) arg0->unk16C);
                func_80125518(temp_s1 + 0x54, 0, 0, (s16) (arg0->unk16C + 0x20));
                var_v0 = 2;
                goto block_37;
            }
        } else {
            if (var_s4 == 8) {
                func_80125464(temp_s1 + 0x4C, arg0 + 0x47C);
                func_80125464(temp_s1 + 0x54, arg0 + 0x484);
            }
            temp_a1 = arg0->unk1F8 - arg0->unk204;
            sp10 = temp_a1;
            if ((arg0->unk20C + arg0->unk260) < 0) {
                sp10 = temp_a1 + 0x800;
            }
            func_8016408C(&sp10, temp_a1);
            var_v1 = sp10;
            if (sp10 < 0) {
                var_v1 = -var_v1;
            }
            if (var_v1 < 0x105) {
                if (var_s4 != 0) {
                    func_80125464(temp_s1 + 0x6C, arg0 + 0x49C);
                    func_80125464(temp_s1 + 0x74, arg0 + 0x4A4);
                    func_80125464(temp_s1 + 0x7C, arg0 + 0x4AC);
                    func_80125464(temp_s1 + 0x84, arg0 + 0x4B4);
                    var_s4 = 0;
                }
            } else if (var_v1 < 0x2FA) {
                if (sp10 > 0) {
                    if (var_s4 != 7) {
                        func_80125464(temp_s1 + 0x6C, arg0 + 0x4E4);
                        func_80125464(temp_s1 + 0x74, arg0 + 0x4F4);
                        func_80125464(temp_s1 + 0x7C, arg0 + 0x49C);
                        func_80125464(temp_s1 + 0x84, arg0 + 0x4B4);
                        var_s4 = 7;
                    }
                } else if (var_s4 != 1) {
                    func_80125464(temp_s1 + 0x6C, arg0 + 0x49C);
                    func_80125464(temp_s1 + 0x74, arg0 + 0x4B4);
                    func_80125464(temp_s1 + 0x7C, arg0 + 0x4BC);
                    func_80125464(temp_s1 + 0x84, arg0 + 0x4CC);
                    var_s4 = 1;
                }
            } else if (var_v1 < 0x505) {
                if (sp10 > 0) {
                    if (var_s4 != 6) {
                        func_80125464(temp_s1 + 0x6C, arg0 + 0x4E4);
                        func_80125464(temp_s1 + 0x74, arg0 + 0x4EC);
                        func_80125464(temp_s1 + 0x7C, arg0 + 0x4F4);
                        func_80125464(temp_s1 + 0x84, arg0 + 0x49C);
                        var_s4 = 6;
                    }
                } else if (var_s4 != 2) {
                    func_80125464(temp_s1 + 0x6C, arg0 + 0x4B4);
                    func_80125464(temp_s1 + 0x74, arg0 + 0x4BC);
                    func_80125464(temp_s1 + 0x7C, arg0 + 0x4C4);
                    func_80125464(temp_s1 + 0x84, arg0 + 0x4CC);
                    var_s4 = 2;
                }
            } else if (var_v1 < 0x705) {
                if (sp10 > 0) {
                    if (var_s4 != 5) {
                        func_80125464(temp_s1 + 0x6C, arg0 + 0x4CC);
                        func_80125464(temp_s1 + 0x74, arg0 + 0x4E4);
                        func_80125464(temp_s1 + 0x7C, arg0 + 0x4EC);
                        func_80125464(temp_s1 + 0x84, arg0 + 0x49C);
                        var_s4 = 5;
                    }
                } else if (var_s4 != 3) {
                    func_80125464(temp_s1 + 0x6C, arg0 + 0x4B4);
                    func_80125464(temp_s1 + 0x74, arg0 + 0x4C4);
                    func_80125464(temp_s1 + 0x7C, arg0 + 0x4CC);
                    func_80125464(temp_s1 + 0x84, arg0 + 0x4E4);
                    var_s4 = 3;
                }
            } else if (var_s4 != 4) {
                func_80125464(temp_s1 + 0x6C, arg0 + 0x4CC);
                func_80125464(temp_s1 + 0x74, arg0 + 0x4D4);
                func_80125464(temp_s1 + 0x7C, arg0 + 0x4DC);
                func_80125464(temp_s1 + 0x84, arg0 + 0x4E4);
                var_s4 = 4;
            }
            var_a0 = 0;
            if (arg0->unk7C0 == 0xE0) {
                var_a0 = arg0->unkC4 < arg0->unk7A4;
            }
            var_v0 = 0xA;
            if (var_a0 == 0) {
                var_v0 = 8;
            }
            goto block_37;
        }
    } else {
block_37:
        temp_s1->unk48 = var_v0;
    }
    var_s3 = 0;
    var_s2 = 0x544;
    var_s0 = arg0 + 0x544;
    do {
        func_801253C8(var_s0 + 0xC, var_s0);
        mathMulTransVec(temp_s1 + 0x28, var_s0 + 0x24, var_s0);
        func_80124FC8(arg0 + 0x1E4, var_s0, var_s0);
        var_s2 += 0x54;
        var_s3 += 1;
        var_s0->unk30 = (s32) var_s0->vz;
        var_s0 = arg0 + var_s2;
    } while (var_s3 < 4);
    func_801253C8(arg0 + 0x250, arg0 + 0x1E4);
    temp_s1->unk24 = (s32) (temp_s1->unk24 - 8);
    arg0->unk478 = var_s4;
}
