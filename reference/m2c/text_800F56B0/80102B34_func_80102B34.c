/* m2c reference for func_80102B34 @ 80102B34 (213 words). Generated; not compiled or validated. */
s32 func_80120EB4(void *, s32);                     /* extern */
? func_80124FC8(s32, VECTOR *, s32);                /* extern */
s32 func_80133040();                                /* extern */
s32 func_80176CBC(s32, s32, ?);                     /* extern */
static void *D_801C34EC = NULL;

void func_80102B34(s32 arg0, s32 arg1, void *arg2) {
    VECTOR sp10;
    s32 temp_a1;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v1;
    u32 temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s1;
    void *temp_s2;
    void *temp_v1;
    void *temp_v1_2;

    temp_s2 = arg0 + (arg1 * 4);
    var_v1 = 0;
    if (temp_s2->unk390 != 0) {
        var_v1 = (u32) temp_s2->unk3A0 > 0U;
    }
    if (var_v1 != 0) {
        temp_s0 = arg1 * 0xC;
        temp_s1 = arg0 + temp_s0;
        temp_s1->unk340 = func_80176CBC(temp_s1->unk340, arg2->unk8, 5);
        temp_s1->unk338 = func_80176CBC(temp_s1->unk338, arg2->unk0, 5);
        temp_s1->unk33C = func_80176CBC(temp_s1->unk33C, arg2->unk4, 5);
        mathMulTransVec(temp_s2->unk390 + 0x28, arg0 + (temp_s0 + 0x338), &sp10);
        func_80124FC8(temp_s2->unk3A0 + 0x1E4, &sp10, temp_s2->unk390 + 0x1C);
        var_v0 = arg1 * 4;
        if (func_80133040() == 0) {
            var_a2 = 0;
            var_v0_2 = temp_s2->unk3AC;
            temp_a0 = temp_s2->unk3A0;
            if (var_v0_2 < 0) {
                var_v0_2 = -var_v0_2;
            }
            temp_a1 = var_v0_2 >> 2;
            if (temp_a0->unkF4 != 0) {
                var_v0_3 = arg1 * 4;
                if (temp_a0->unk1F0 > 0) {
                    var_a2 = temp_a1;
                    if (temp_a0->unk1F0 < 0x156) {
                        var_a2 = (temp_a0->unk1F0 * temp_a1) / 341;
                    }
                    goto block_10;
                }
            } else {
block_10:
                var_v0_3 = arg1 * 4;
            }
            temp_v1 = (arg0 + var_v0_3)->unk3A0;
            var_a0 = 0;
            if ((temp_v1->unk98 != 0) || (temp_v1->unk97 != 0) || (temp_v1->unkF4 == 0)) {
                var_a0 = 1;
            }
            var_v0_4 = 0;
            if (var_a0 == 0) {
                temp_v1_2 = (arg0 + (arg1 * 4))->unk3A0;
                var_v0_5 = temp_v1_2->unk1F4;
                if (var_v0_5 < 0) {
                    var_v0_5 = -var_v0_5;
                }
                var_v0_4 = temp_a1;
                if (var_v0_5 < 0x156) {
                    var_v0_6 = temp_v1_2->unk1F4;
                    if (var_v0_6 < 0) {
                        var_v0_6 = -var_v0_6;
                    }
                    var_v0_4 = (var_v0_6 * temp_a1) / 341;
                }
            }
            var_a1 = var_v0_4;
            if (var_a2 >= var_a1) {
                var_a1 = var_a2;
            }
            temp_s0_2 = arg0 + (arg1 * 4);
            temp_s0_2->unk3D8 = func_80176CBC(temp_s0_2->unk3D8, var_a1, 5);
            temp_a0_2 = temp_s0_2->unk390;
            temp_a0_2->unk24 = (s32) (temp_a0_2->unk24 + temp_s0_2->unk3D8);
            var_v0 = arg1 * 4;
        }
        temp_s0_3 = arg0 + var_v0;
        var_a1_2 = func_80120EB4(D_801C34EC, temp_s0_3->unk3A0 + 0x1E4);
        var_v0_7 = arg1 * 4;
        if (D_801C34EC->unk12688 == 3) {
            var_v0_7 = arg1 * 4;
            if (temp_s0_3->unk390->unk24 >= 0x1F41) {
                var_a1_2 = 0x3840;
            }
        }
        temp_s0_4 = arg0 + var_v0_7;
        temp_a2 = temp_s0_4->unk3A0;
        if (var_a1_2 < temp_a2->unk1EC) {
            var_a0_2 = 0;
            if (D_801C34EC->unk12688 == 9) {
                var_a0_2 = (u32) temp_a2->unkF4 > 0U;
            }
            if (var_a0_2 == 0) {
                temp_s0_4->unk3A0->unk1EC = var_a1_2;
                temp_s0_4->unk3A0->unk1F0 = func_80176CBC(temp_s0_4->unk3A0->unk1F0, 0xE3, 5);
            }
        }
    }
}
