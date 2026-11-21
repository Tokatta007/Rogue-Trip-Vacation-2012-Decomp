/* m2c reference for func_800FFF7C @ 800FFF7C (171 words). Generated; not compiled or validated. */
? func_800FF47C(s32 *, ?, s16);                     /* extern */
? func_801241AC(s32, ?, s32, ?);                    /* extern */
? func_80124FC8(VECTOR *, ?, ?);                    /* extern */
? func_801253C8(?, s32);                            /* extern */
s32 func_8016FEA4(s32, s32);                        /* extern */
s32 func_80178A70(s16);                             /* extern */

s8 func_800FFF7C(void *arg0, ? arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    s16 var_s4;
    s16 var_v1;
    s32 *temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s2;
    s8 var_s0;
    s8 var_s5;
    s8 var_v0;
    u16 temp_v0;
    void *temp_s6;
    void *var_s1;

    temp_a0 = arg0->unk40;
    temp_s6 = *temp_a0 + ((s32) (arg0->unk58 << 0x10) >> 0xB);
    var_s5 = (s8) temp_s6->unk1D;
    if ((arg0->unk0 == 1) || (arg2 == -1)) {
        var_v1 = -1;
        var_s0 = -1;
        goto block_6;
    }
    if (var_s5 == arg2) {
        var_v1 = -1;
        var_s0 = var_s5;
    } else {
        temp_a0_2 = (temp_a0 + (var_s5 * 4))->unk8;
        var_s0 = (s8) (temp_a0_2 + arg2)->unk4E;
        var_v1 = (s16) (temp_a0_2 + (arg2 * 2))->unk14;
        if (var_s0 == -1) {
block_6:
            var_s5 = -1;
        }
    }
    if ((var_v1 >= 0) && (var_s0 >= 0)) {
        var_s2 = 0;
        if (var_v1 == (s16) arg0->unk58) {
            var_s1 = temp_s6;
            var_s4 = (s16) temp_s6->unkC;
loop_11:
            var_v1 = var_s4;
            if ((var_s2 < (s8) temp_s6->unk1E) && ((temp_v0 = var_s1->unkC, ((s8) (*arg0->unk40 + ((s16) temp_v0 << 5))->unk1D != var_s0)) || (var_s4 = (s16) temp_v0, var_s5 = var_s0, var_v1 = var_s4, ((func_80178A70((s16) temp_v0) & 1) == 0)))) {
                var_s1 += 2;
                var_s2 += 1;
                goto loop_11;
            }
        }
        var_a1 = *arg0->unk40 + (var_v1 << 5);
        goto block_25;
    }
    var_a0 = 0;
    if (arg0->unk4 == 1) {
        func_800FF47C(arg0->unk40, arg1, (s16) arg0->unk60);
        return var_s5;
    }
    arg0->unk6B = 1;
    if (arg0->unk4 == 3) {
        var_a0 = arg0->unk54 >= 0xE;
    }
    if ((var_a0 != 0) && (arg0->unk6C != 0)) {
        func_801241AC(arg0->unk38 + 0x1C, 0x28, arg0->unk3C, arg1);
        var_v0 = var_s5;
        if (func_8016FEA4(arg0->unk38 + 0x1C, arg0->unk30) >= 0xFA1) {
            sp10 = arg0->unk24;
            sp14 = arg0->unk28;
            sp18 = arg0->unk2C;
            mathMulTransVec(arg0->unk3C + 0x28, (VECTOR *) &sp10, &sp20);
            func_80124FC8(&sp20, arg1, arg1);
            return var_s5;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return var_v0;
    }
    var_a1 = arg0->unk30;
block_25:
    func_801253C8(arg1, var_a1);
    var_v0 = var_s5;
    return var_v0;
}
