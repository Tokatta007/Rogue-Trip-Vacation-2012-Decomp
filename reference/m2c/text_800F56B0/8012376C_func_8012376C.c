/* m2c reference for func_8012376C @ 8012376C (67 words). Generated; not compiled or validated. */
void func_8012376C(void *arg0, s32 **arg1, s8 arg2) {
    s32 var_v1;
    s32 var_v1_2;
    void *var_a0;
    void *var_a0_2;
    void *var_v0;
    void *var_v0_2;

    var_v1 = 0;
    if (arg0->unk12760 > 0) {
        var_a0 = arg0;
        var_v0 = var_a0 + 0x10000;
loop_2:
        var_a0 += 4;
        if (arg1 != var_v0->unk2458) {
            var_v1 += 1;
            var_v0 = var_a0 + 0x10000;
            if (var_v1 >= arg0->unk12760) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v1_2 = 0;
        if (arg0->unk1270C > 0) {
            var_a0_2 = arg0;
            var_v0_2 = var_a0_2 + 0x10000;
loop_6:
            if ((arg1 != var_v0_2->unk241C) || ((**arg1 & 0xFFF0) == 0x2120)) {
                var_a0_2 += 4;
                var_v1_2 += 1;
                var_v0_2 = var_a0_2 + 0x10000;
                if (var_v1_2 >= arg0->unk1270C) {
                    goto block_9;
                }
                goto loop_6;
            }
        } else {
block_9:
            (arg0 + (arg0->unk12760 * 4))->unk12458 = arg1;
            (arg0 + arg0->unk12760)->unk127CA = arg2;
            arg0->unk12760 = (s32) (arg0->unk12760 + 1);
        }
    }
}
