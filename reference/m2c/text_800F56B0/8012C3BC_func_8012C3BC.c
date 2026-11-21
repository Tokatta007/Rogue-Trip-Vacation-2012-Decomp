/* m2c reference for func_8012C3BC @ 8012C3BC (104 words). Generated; not compiled or validated. */
? func_8012AF9C(void *, s32, s16);                  /* extern */
static void *D_801C34EC = NULL;

s32 func_8012C3BC(void *arg0, s16 arg1) {
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_v0_2;
    s8 var_v1_3;
    void *temp_a0;
    void *temp_v0;
    void *var_v0;

    var_s2 = 0;
    var_v1 = 0;
    if (arg0->unk0 != NULL) {
        var_v1 = arg0->unk0->unk7B8 == 2;
    }
    if (var_v1 != 0) {
        temp_a0 = arg0->unk0;
        var_v1_2 = 0;
        if (temp_a0 != NULL) {
            temp_v0 = temp_a0->unk850;
            if (temp_v0 != NULL) {
                var_v1_2 = (u32) temp_v0->unk80C > 0U;
            }
        }
        if ((var_v1_2 != 0) && (D_801C34EC->unk12688 >= 2) && ((s8) arg0->unk49 < ((s32) temp_a0->unk850->unk80C >> 1)) && (rand() & 1)) {
            func_8012AF9C(arg0, 6, 2);
        }
    }
    var_s0 = 0;
    var_v1_3 = 0;
    temp_a0_2 = rand() & 0x3F;
    var_v0 = arg0;
loop_12:
    temp_v0_2 = var_v1_3 + var_v0->unk55;
    var_v1_3 = temp_v0_2;
    if (temp_a0_2 < temp_v0_2) {
        var_s2 = 1;
    } else {
        var_s0 += 1;
        var_v0 = arg0 + var_s0;
        if (var_s0 < 9) {
            goto loop_12;
        }
    }
    if (var_s2 == 0) {
        var_s0 = 1;
        var_a1 = 1;
        if ((arg0->unk56 << 0x18) < (arg0->unk58 << 0x18)) {
            var_s0 = 3;
            goto block_18;
        }
    } else {
block_18:
        var_a1 = var_s0;
    }
    func_8012AF9C(arg0, var_a1, arg1);
    return var_s0;
}
