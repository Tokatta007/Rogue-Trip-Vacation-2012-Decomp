/* m2c reference for func_800FF594 @ 800FF594 (95 words). Generated; not compiled or validated. */
s32 func_800FF710(void *, void *, ?, ?);            /* extern */
static void *D_801C34EC = NULL;

s32 func_800FF594(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *var_s0;

    var_s2 = -1;
    var_s1 = 0;
    var_s0 = arg0;
loop_1:
    if (var_s1 < arg0->unk7C) {
        if (var_s0->unk8->unk8 < arg1->unk8) {
            if ((D_801C34EC->unk12688 == 8) && (var_s1 == 3)) {
                var_s0 += 4;
                if (func_800FF710(arg0, arg1, 3, -0x200) != 0) {
                    var_s2 = 3;
                } else {
                    goto block_15;
                }
            } else {
                temp_a0 = var_s0->unk8->unk0;
                var_v1 = 0;
                if (temp_a0 < arg1->unk0) {
                    var_v1 = (temp_a0 + var_s0->unk8->unkC) >= arg1->unk0;
                }
                if (var_v1 != 0) {
                    temp_a0_2 = var_s0->unk8->unk4;
                    var_v1_2 = 0;
                    if (temp_a0_2 < arg1->unk4) {
                        var_v1_2 = (temp_a0_2 + var_s0->unk8->unk10) >= arg1->unk4;
                    }
                    var_s0 += 4;
                    if (var_v1_2 != 0) {
                        var_s2 = var_s1;
                    } else {
                        goto block_15;
                    }
                } else {
                    goto block_14;
                }
            }
        } else {
block_14:
            var_s0 += 4;
block_15:
            var_s1 += 1;
            goto loop_1;
        }
    }
    var_v0 = var_s2;
    if (var_s2 == -1) {
        var_v0 = 0;
    }
    return var_v0;
}
