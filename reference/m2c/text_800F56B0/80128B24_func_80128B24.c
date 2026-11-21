/* m2c reference for func_80128B24 @ 80128B24 (215 words). Generated; not compiled or validated. */
? func_80124FC8(void *, VECTOR *, VECTOR *);        /* extern */
? func_80125130(void *, s32 *);                     /* extern */
? func_801253F4(s32, void *);                       /* extern */
? func_80128E80(void *, void *);                    /* extern */
? func_80133B08(void *);                            /* extern */
s32 func_801594CC(s32);                             /* extern */
s32 func_8015959C(s32);                             /* extern */
? func_8015A05C(s32, s32);                          /* extern */
? func_8016408C(s32 *);                             /* extern */
s16 func_80178A1C(s16);                             /* extern */

void func_80128B24(void *arg0) {
    s32 sp10;
    s32 sp20;
    VECTOR *var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v1;
    u16 temp_a0;
    void *temp_s4;
    void *var_s0;

    var_v1 = 0;
    arg0->unk90 = 0;
    arg0->unk91 = 0;
    temp_s4 = arg0 + 0x2C8;
    if ((arg0->unk2C8 != 0) && (temp_s4->unkC < -0x960)) {
        var_v1 = (u32) ((s16) temp_s4->unk1E ^ 0x460) > 0U;
    }
    var_s0 = arg0 + 0x544;
    if (var_v1 != 0) {
        if (temp_s4->unk10 >= 4) {
            arg0->unk1E4 = (s32) (arg0->unk1E4 + ((s32) (-temp_s4->unk4 * temp_s4->unk10) >> 0xC));
            arg0->unk1E8 = (s32) (arg0->unk1E8 + ((s32) (-temp_s4->unk8 * temp_s4->unk10) >> 0xC));
            arg0->unk1EC = (s32) ((arg0->unk1EC + (s16) arg0->unk16C + ((s32) (-temp_s4->unkC * temp_s4->unk10) >> 0xC)) - (s16) arg0->unk16C);
        }
        var_s1 = 0;
        var_s2 = 0x544;
        do {
            var_s0 = arg0 + var_s2;
            if (var_s0->unk4C != 0) {
                func_80128E80(arg0, var_s0);
                var_s0->unk4C = 0U;
            }
            var_s1 += 1;
            var_s2 += 0x54;
        } while (var_s1 < 4);
        func_80125130(temp_s4 + 4, &sp10);
        sp10 -= 0x400;
        func_8016408C(&sp10);
        sp20 = arg0->unk1F8 - sp18;
        func_8016408C(&sp20);
        arg0->unk1F4 = (s32) ((s32) (sp10 * func_801594CC(sp20)) >> 0xC);
        arg0->unk1F0 = (s32) ((s32) (sp10 * func_8015959C(sp20)) >> 0xC);
    } else if (var_s0->unk4C == 0) {
        var_s1_2 = 0;
        do {
            func_80128E80(arg0, var_s0);
            var_s1_2 += 1;
        } while (var_s1_2 < 4);
    }
    if (var_s0->unk4C != 0) {
        temp_a0 = var_s0->unk34;
        var_s0->unk3C = (u16) (var_s0->unk36 + ((s32) (func_80178A1C() * -((s16) temp_a0 * 0x12) * (s16) var_s0->unk34) >> 0xC));
        if ((s16) var_s0->unk34 < 0x258) {
            var_s0->unk34 = (u16) (var_s0->unk34 + func_80178A1C((s16) temp_a0));
        }
    }
    if (arg0->unkF4 == 0) {
        var_s0->unk3C = 0U;
    }
    var_s1_3 = 0;
    arg0->unk1EC = (s32) (arg0->unk1EC + (s16) var_s0->unk3C);
    arg0->unk9E = 0;
    var_s2_2 = 0x544;
    func_801253F4(arg0->unk738 + 0x14, arg0 + 0x1F0);
    func_8015A05C(arg0->unk738 + 0x14, arg0->unk738 + 0x28);
    var_s0_2 = arg0 + 0x544;
    do {
        var_s2_2 += 0x54;
        mathMulTransVec(arg0->unk738 + 0x28, var_s0_2 + 0x24, var_s0_2);
        func_80124FC8(arg0 + 0x1E4, var_s0_2, var_s0_2);
        var_s1_3 += 1;
        var_s0_2->unk3E = (s16) var_s0_2->vz;
        var_s0_2 = arg0 + var_s2_2;
    } while (var_s1_3 < 4);
    func_80133B08(arg0);
}
