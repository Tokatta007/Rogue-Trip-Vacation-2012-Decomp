/* m2c reference for func_80168840 @ 80168840 (101 words). Generated; not compiled or validated. */
s32 func_801596CC(s32);                             /* extern */
? func_801597FC(s32 *, s32 *, s32, s32);            /* extern */
? func_8016F9A8(void *, void *, s32 *);             /* extern */
extern ? D_801BC1F8;

void func_80168840(void *arg0, void *arg1, void *arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp30;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    void *var_s1;

    var_s2 = 0;
    if (arg0->unk48 > 0) {
        var_s1 = arg2;
        do {
            if (var_s1->unk4 == 0) {
                func_8016F9A8(arg0 + 0x28, arg0 + ((var_s2 * 8) + 0x4C), &sp10);
                temp_v0 = sp10 + arg1->unk0;
                temp_a2 = temp_v0 - D_801BC1F8.unk10;
                sp10 = temp_v0;
                temp_v0_2 = sp14 + arg1->unk4;
                temp_a1 = temp_v0_2 - D_801BC1F8.unk14;
                temp_lo = temp_a1 * temp_a1;
                sp14 = temp_v0_2;
                temp_a0 = sp18 + arg1->unk8;
                temp_v0_3 = temp_a0 - D_801BC1F8.unk18;
                sp20 = temp_a2;
                sp24 = temp_a1;
                sp18 = temp_a0;
                sp28 = temp_v0_3;
                temp_s0 = (temp_a2 * temp_a2) + temp_lo + (temp_v0_3 * temp_v0_3);
                if (D_801BC1F8.unk1C < temp_s0) {
                    var_s1->unk4 = 1;
                    var_s1->unk18 = 0;
                    var_s1->unk22 = (u16) D_801BC1F8.unkE;
                    var_s1->unk20 = 0;
                    var_s1->unk1C = (s16) D_801BC1F8.unkD;
                    func_801597FC(&sp20, &sp30, temp_a2, temp_lo);
                    var_s1->unk8 = sp30;
                    var_s1->unkC = sp34;
                    var_s1->unk10 = sp38;
                    temp_s0_2 = func_801596CC(temp_s0);
                    var_s1->unk14 = (s32) (temp_s0_2 - func_801596CC(D_801BC1F8.unk1C));
                }
            }
            var_s1 += 0x20;
            var_s2 += 1;
        } while (var_s2 < arg0->unk48);
    }
}
