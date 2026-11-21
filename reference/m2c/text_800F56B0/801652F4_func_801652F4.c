/* m2c reference for func_801652F4 @ 801652F4 (81 words). Generated; not compiled or validated. */
extern ? D_801F25E0;

void func_801652F4(void) {
    ? *var_a0;
    ? *var_a0_2;
    ? *var_a1;
    s32 var_a2;
    s32 var_a2_2;

    var_a1 = &D_801F25E0;
    do {
        if (var_a1->unk0 != 0) {
            var_a2 = 0;
            var_a0 = var_a1;
            do {
                var_a0->unk70 = (s32) (var_a0->unk70 + var_a0->unk10);
                var_a0->unk74 = (s32) (var_a0->unk74 + var_a0->unk14);
                var_a0->unk78 = (s32) (var_a0->unk78 + var_a0->unk18);
                var_a0->unk18 = (s32) (var_a0->unk18 - 5);
                if (var_a1->unkC < var_a1->unk8) {
                    var_a1->unk0 = 0;
                    var_a1->unk4 = 0;
                }
                var_a2 += 1;
                var_a0 += 0xC;
            } while (var_a2 < 8);
            var_a2_2 = 0;
            if (var_a1->unk4 > 0) {
                var_a0_2 = var_a1;
                do {
                    var_a2_2 += 1;
                    var_a0_2->unkDC = (s32) (var_a0_2->unkDC + (s16) var_a1->unkD0);
                    var_a0_2->unkE0 = (s32) (var_a0_2->unkE0 + (s16) var_a1->unkD2);
                    var_a0_2->unkE4 = (s32) (var_a0_2->unkE4 + (s16) var_a1->unkD4);
                    var_a0_2 += 0x14;
                } while (var_a2_2 < var_a1->unk4);
            }
            var_a1->unk8 = (s32) (var_a1->unk8 + 1);
        }
        var_a1 += 0x218;
    } while ((s32) var_a1 < (s32) (&D_801F25E0 + 0x860));
}
