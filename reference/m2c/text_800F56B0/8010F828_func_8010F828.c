/* m2c reference for func_8010F828 @ 8010F828 (306 words). Generated; not compiled or validated. */
? func_8010FCFC(void *);                            /* extern */
? func_8010FDC4(void *, s32 *, s32);                /* extern */
? func_80125130(?, ? *);                            /* extern */
? func_8012EEE8(void *, ?, s32, ?);                 /* extern */
? func_8016408C(s32 *);                             /* extern */

void func_8010F828(void *arg0, ? arg1, void *arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    ? sp20;
    s32 sp30;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 var_v0_2;
    void *temp_v1;

    sp10 = -arg2->unk0;
    sp14 = -arg2->unk4;
    sp18 = -arg2->unk8;
    if (arg0->unk7B8 == 2) {
        func_8010FCFC(arg2);
    }
    var_a1 = 0;
    if (sp18 < -0x7D0) {
        var_a0 = 0x544;
        do {
            temp_v1 = arg0 + var_a0;
            if ((temp_v1->unk4C != 0) && ((s16) temp_v1->unk36 >= -9)) {
                temp_v1->unk36 = -0xAU;
            }
            var_a1 += 1;
            var_a0 += 0x54;
        } while (var_a1 < 4);
    }
    func_80125130(arg1, &sp20);
    arg0->unk204 = sp28;
    temp_v0 = arg0->unk204 - arg0->unk1F8;
    sp30 = temp_v0;
    if (arg0->unk20C < 0) {
        sp30 = temp_v0 + 0x800;
    }
    func_8016408C(&sp30);
    var_s1 = (s32) (arg0->unk7A4 * 0x28) / (s32) ((s32) arg0->unkD0 >> 2);
    var_v1 = sp30;
    if (sp30 < 0) {
        var_v1 = -var_v1;
    }
    temp_lo = var_s1 * var_v1;
    if (var_v1 >= 0x401) {
        if (sp30 > 0) {
            sp30 -= 0x400;
            var_v0 = arg0->unk204 - 0x400;
        } else {
            sp30 += 0x400;
            var_v0 = arg0->unk204 + 0x400;
        }
        arg0->unk204 = var_v0;
        func_8016408C(&sp30);
        func_8016408C(arg0 + 0x204);
        arg0->unk20C = 0;
    } else {
        temp_v0_2 = temp_lo;
        var_s1 = temp_v0_2 >> 0xB;
        if (temp_v0_2 < 0) {
            var_s1 = (s32) (temp_v0_2 + 0x7FF) >> 0xB;
        }
    }
    if ((arg2->unk8 < -0x960) && ((sp10 != 0) || (sp14 != 0))) {
        var_a2 = var_s1;
    } else {
        sp18 = 0;
        var_a2 = 0x28;
    }
    func_8010FDC4(arg0, &sp10, var_a2);
    var_s2 = sp30;
    if (sp30 < 0) {
        var_s2 = -var_s2;
    }
    var_a0_2 = 0;
    if (((arg0->unkAF != 0) && (sp30 < 0)) || ((arg0->unkAE != 0) && (sp30 > 0))) {
        var_a0_2 = 1;
    }
    if (var_a0_2 != 0) {
        func_8010FDC4(arg0, &sp10, 0x20);
        sp30 = 0;
        arg0->unk20C = (s32) (arg0->unk20C - ((s32) arg0->unk20C >> 2));
    }
    var_s1_2 = 0x64;
    if (arg0->unk7A4 < ((s32) arg0->unkD0 >> 2)) {
        var_s1_2 = (s32) (arg0->unk7A4 * 0x64) / (s32) ((s32) arg0->unkD0 >> 2);
    }
    temp_v0_3 = (sp30 * var_s1_2) / 100;
    sp30 = temp_v0_3;
    if (temp_v0_3 != 0) {
        arg0->unk537 = 1;
        arg0->unk50C = 0;
        arg0->unk450 = (s32) (arg0->unk1F8 + sp30);
    }
    var_v0_2 = 0x6E;
    if (arg0->unkF4 != 0x64) {
        var_v0_2 = -0x38 - ((arg0->unkF4 * 0x5A) / 100);
    }
    arg0->unk532 = var_v0_2;
    temp_v1_2 = ((0xC8 - (s8) arg0->unk532) * arg0->unk20C) / 100;
    temp_lo_2 = var_s2 * temp_v1_2;
    if (var_s2 >= 0x801) {
        var_a0_3 = temp_v1_2;
    } else {
        var_a0_3 = temp_lo_2 >> 0xB;
        if (temp_lo_2 < 0) {
            var_a0_3 = (s32) (temp_lo_2 + 0x7FF) >> 0xB;
        }
    }
    arg0->unk20C = (s32) (arg0->unk20C - var_a0_3);
    arg0->unk260 = 0;
    arg0->unk86 = 1;
    var_v1_2 = 0;
    if ((s16) arg0->unk508 >= 0x3D) {
        var_v1_2 = arg0->unk7B8 == 1;
    }
    if (var_v1_2 != 0) {
        temp_a0 = arg0->unk23C - arg0->unk20C;
        var_v1_3 = temp_a0;
        if (temp_a0 < 0) {
            var_v1_3 = -var_v1_3;
        }
        func_8012EEE8(arg0, 0, ((s32) (var_v1_3 * 0xFF) / (s32) arg0->unk25C) & 0xFF, 0x3C);
    }
}
