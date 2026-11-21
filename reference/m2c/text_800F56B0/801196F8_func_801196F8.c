/* m2c reference for func_801196F8 @ 801196F8 (213 words). Generated; not compiled or validated. */
? func_80119BBC(void *, s32, void *);               /* extern */
s32 func_80122F24(s32, s32, ?, s32 *);              /* extern */
? func_80125130(void *, s32 *);                     /* extern */
s32 func_801594CC(s32);                             /* extern */
s32 func_8015959C(s32);                             /* extern */
? func_8016408C(s32 *);                             /* extern */
s16 func_80178A1C(s32);                             /* extern */
? func_801F80A8(void *);                            /* extern */
static s32 D_801C34EC = 0;

void func_801196F8(void *arg0) {
    s32 sp10;
    s32 sp20;
    s32 sp24;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    void *temp_a2;
    void *temp_s1;
    void *var_a0;

    temp_s1 = arg0->unk38;
    if ((arg0->unk315 != 0) && (func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0x2EE0, &sp20) == 0) && (sp20 >= 0x961)) {
        arg0->unk38->unkC = 1;
        arg0->unk315 = 0U;
    }
    var_s2 = 0;
    if (arg0->unk315 == 0) {
        var_v1 = 0;
        temp_a2 = arg0 + 0xBC;
        if (arg0->unkBC != 0) {
            var_v1 = temp_a2->unkC < -0x960;
        }
        if (var_v1 != 0) {
            if ((u32) (temp_a2->unk1E - 0x334) < 9U) {
                var_s2 = 1;
            }
            arg0->unk2D0 = (s32) (s16) temp_a2->unk1E;
            temp_a1 = temp_s1->unk24 + (s16) arg0->unk2E6 + ((s32) (-temp_a2->unkC * temp_a2->unk10) >> 0xC);
            if (temp_a2->unk10 >= 4) {
                temp_s1->unk1C = (s32) (temp_s1->unk1C + ((s32) (-temp_a2->unk4 * temp_a2->unk10) >> 0xC));
                temp_s1->unk20 = (s32) (temp_s1->unk20 + ((s32) (-temp_a2->unk8 * temp_a2->unk10) >> 0xC));
                temp_s1->unk24 = (s32) (temp_a1 - (s16) arg0->unk2E6);
            }
            var_a0 = arg0 + 0xC0;
            if (arg0->unk309 != 0) {
                func_80119BBC(arg0, temp_a1, temp_a2);
                arg0->unk309 = 0U;
                var_a0 = arg0 + 0xC0;
            }
            func_80125130(var_a0, &sp10);
            sp10 -= 0x400;
            func_8016408C(&sp10);
            sp24 = (s16) temp_s1->unk18 - sp18;
            func_8016408C(&sp24);
            arg0->unk2F6 = (s16) ((s32) (sp10 * func_801594CC(sp24)) >> 0xC);
            arg0->unk2F8 = (s16) ((s32) (sp10 * func_8015959C(sp24)) >> 0xC);
        } else if (arg0->unk309 == 0) {
            func_80119BBC(arg0);
        }
        if (arg0->unk309 != 0) {
            temp_a0 = arg0->unk2AC;
            arg0->unk2B4 = (s32) (arg0->unk2B8 + ((s32) (func_80178A1C() * -(temp_a0 * 0x12) * arg0->unk2AC) >> 0xC));
            if (arg0->unk2AC < 0x258) {
                arg0->unk2AC = (s32) (arg0->unk2AC + func_80178A1C(temp_a0));
            }
        }
        temp_s1->unk24 = (s32) (temp_s1->unk24 + arg0->unk2B4);
        if (arg0->unk310 != 0) {
            var_v0 = temp_s1->unkA * (s16) arg0->unk2E6;
            if (var_v0 < 0) {
                var_v0 += 0x7F;
            }
            temp_s1->unk24 = (s32) (temp_s1->unk24 + ((s16) arg0->unk2E6 - (var_v0 >> 7)));
        }
        if (var_s2 != 0) {
            func_801F80A8(arg0);
        }
    }
}
