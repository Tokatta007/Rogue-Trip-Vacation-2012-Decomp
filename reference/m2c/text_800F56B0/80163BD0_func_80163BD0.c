/* m2c reference for func_80163BD0 @ 80163BD0 (84 words). Generated; not compiled or validated. */
? func_80167B00(void *, s32, s32, s32);             /* extern */

void func_80163BD0(void *arg0) {
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a3;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0_2;

    arg0->unkC = (s32) (arg0->unkC + 1);
    if (arg0->unk14 < arg0->unkC) {
        if (arg0->unk18 != 0) {
            var_a1 = 0;
            if (arg0->unk1C > 0) {
                var_a0 = 1;
                do {
                    (arg0 + (var_a0 * 2))->unk38 = (u16) (arg0 + (var_a1 * 2))->unk24;
                    var_a1 = var_a0;
                    var_a0 = var_a1 + 1;
                } while (var_a1 < arg0->unk1C);
            }
            temp_v0 = arg0->unk20;
            arg0->unk38 = (u16) (arg0 + (arg0->unk1C * 2))->unk24;
            var_a1_2 = temp_v0->unk8;
            var_a2 = temp_v0->unkC;
            var_a3 = temp_v0->unk10;
            var_a0_2 = arg0 + 0x38;
        } else {
            var_a1_3 = 0;
            if (arg0->unk1C > 0) {
                var_a0_3 = 1;
                do {
                    (arg0 + (var_a0_3 * 2))->unk24 = (u16) (arg0 + (var_a1_3 * 2))->unk38;
                    var_a1_3 = var_a0_3;
                    var_a0_3 = var_a1_3 + 1;
                } while (var_a1_3 < arg0->unk1C);
            }
            temp_v0_2 = arg0->unk20;
            arg0->unk24 = (u16) (arg0 + (arg0->unk1C * 2))->unk38;
            var_a1_2 = temp_v0_2->unk8;
            var_a2 = temp_v0_2->unkC;
            var_a3 = temp_v0_2->unk10;
            var_a0_2 = arg0 + 0x24;
        }
        func_80167B00(var_a0_2, var_a1_2, var_a2, var_a3);
        arg0->unk18 = (s32) (arg0->unk18 == 0);
        arg0->unkC = 0;
    }
}
