/* m2c reference for func_80133B08 @ 80133B08 (238 words). Generated; not compiled or validated. */
? func_80125130(void *, s32 *, s32);                /* extern */
s32 func_801594CC(s32);                             /* extern */
s32 func_8015959C(s32);                             /* extern */
? func_8015A05C(s16 *, void *, ? *, s32);           /* extern */
? func_801683EC(void *, ? *, ?, void *, s32 *);     /* extern */
extern ? D_801CC590;
extern ? D_801CC620;

void func_80133B08(void *arg0) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    ? sp30;
    ? *temp_a2;
    ? *var_v1;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_s5;
    void *temp_s0;
    void *temp_s1;
    void *var_a0_3;
    void *var_s2;

    temp_s6 = (s32) arg0->unk7C0 >> 4;
    temp_a1 = temp_s6 * 8;
    *((arg0->unk78 * 4) + temp_a1 + &D_801CC620) = arg0->unk1EC - 0x1C0;
    var_s2 = NULL;
    if (*((arg0->unk78 * 4) + temp_a1 + &D_801CC590) != 0) {
        var_a0 = 0;
        temp_s1 = *((arg0->unk78 * 4) + temp_a1 + &D_801CC590);
        if ((arg0->unk9D != 0) || (arg0->unk829 == 0)) {
            var_a0 = 1;
        }
        if (var_a0 == 0) {
            if (arg0->unk91 != 0) {
                temp_s1->unk1C = (s32) arg0->unk1E4;
                temp_s1->unk20 = (s32) arg0->unk1E8;
                temp_s1->unk24 = (s32) arg0->unk1EC;
                temp_s0 = temp_s1 + 0x28;
                sp20 = temp_s1->unk1C;
                sp24 = temp_s1->unk20;
                sp28 = temp_s1->unk24 + 0x1C0;
                temp_s1->unk18 = 0;
                temp_s1->unk14 = 0;
                temp_s1->unk16 = 0;
                var_s5 = 0;
                func_8015A05C(temp_s1 + 0x14, temp_s0);
                func_801683EC(temp_s1, &sp30, 1, temp_s0, &sp20);
                var_a2 = 0;
                if (0 == 0) {
                    var_a0_2 = 4;
                    var_v1 = &sp30;
loop_8:
                    if (var_a2 < temp_s1->unk48) {
                        if (var_v1->unk4 != 0) {
                            var_s2 = &sp30 + var_a0_2;
                        }
                        var_s5 -= 0x40;
                        var_a0_2 += 0x20;
                        var_v1 += 0x20;
                        var_a2 += 1;
                        if (var_s2 == NULL) {
                            goto loop_8;
                        }
                    }
                    if (var_s2 != NULL) {
                        goto block_13;
                    }
                    goto block_19;
                }
block_13:
                if (var_s2->unkC < -0x960) {
                    if (var_s2->unkC > 0) {
                        var_s2->unkC = (s32) -var_s2->unkC;
                        var_s2->unk10 = (s32) (var_s2->unk10 - 0x60);
                        var_a0_3 = var_s2 + 4;
                        if (var_s2->unk10 < 0) {
                            var_s2->unk10 = 0;
                            goto block_17;
                        }
                    } else {
block_17:
                        var_a0_3 = var_s2 + 4;
                    }
                    func_80125130(var_a0_3, &sp20, var_a2);
                    sp20 -= 0x400;
                    temp_s0_2 = sp28 - arg0->unk1F8;
                    sp18 = (s16) ((s32) (func_8015959C(temp_s0_2) * sp20) >> 0xC);
                    sp1A = (s16) ((s32) (-func_801594CC(temp_s0_2) * sp20) >> 0xC);
                    sp1C = (s16) arg0->unk1F8;
                    temp_s1->unk24 = (s32) (arg0->unk1EC - (-var_s5 - var_s2->unk10));
                    temp_s1->unk24 = (s32) (temp_s1->unk24 + 8);
                    *((arg0->unk78 * 4) + (temp_s6 * 8) + &D_801CC620) = temp_s1->unk24;
                    func_8015A05C(&sp18, temp_s1 + 0x28, &D_801CC620);
                    temp_s1->unk8 = (s32) arg0->unk738->unk8;
                    temp_s1->unkC = 1;
                    return;
                }
                goto block_19;
            }
            temp_s1->unkC = 1;
            temp_a2 = arg0->unk648;
            temp_a3 = arg0->unk5F4;
            sp18 = (s16) arg0->unk1F0;
            sp1A = (s16) arg0->unk1F4;
            temp_s0_3 = (s32) (((s32) (arg0->unk54C + temp_a2) >> 1) + ((s32) (arg0->unk5A0 + temp_a3) >> 1)) >> 1;
            sp1C = (s16) arg0->unk1F8;
            func_8015A05C(&sp18, temp_s1 + 0x28, temp_a2, temp_a3);
            temp_s1->unk1C = (s32) arg0->unk1E4;
            temp_s1->unk20 = (s32) arg0->unk1E8;
            temp_s1->unk24 = temp_s0_3;
            *((arg0->unk78 * 4) + (temp_s6 * 8) + &D_801CC620) = temp_s1->unk24;
            temp_s1->unk8 = (s32) arg0->unk738->unk8;
        } else {
block_19:
            temp_s1->unkC = 0;
        }
    }
}
