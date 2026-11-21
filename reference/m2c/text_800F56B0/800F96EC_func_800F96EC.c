/* m2c reference for func_800F96EC @ 800F96EC (144 words). Generated; not compiled or validated. */
s32 func_80123940(void *, void *, ?, void *, s32);  /* extern */
? func_8012AF9C(void *, s8, ?);                     /* extern */
static void *D_801C34EC = NULL;

void func_800F96EC(void *arg0) {
    s32 var_a0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 var_s0;
    void *temp_a0;
    void *temp_s0;
    void *temp_s2;
    void *var_v0;

    temp_s0 = arg0 + 0x264;
    if ((arg0->unk824 == 0) && (temp_s0->unk33 != 0) && ((D_801C34EC + 0x496C)->unk1754 < 3)) {
        var_a0 = 1;
        if (func_80123940(D_801C34EC, arg0, 7, arg0 + 0x1E4, arg0->unk738 + 0x14) != 0) {
            var_s0 = (s8) temp_s0->unk41;
            if ((arg0->unk820 != 0) && ((var_s0 == 1) || (var_s0 == 8) || (var_s0 == 3))) {
                var_a0 = 0;
            }
            var_v0 = arg0 + 0x264;
            if (var_a0 != 0) {
                var_s0 = 1;
                if ((rand() & 5) != 1) {
                    var_s0 = 3;
                    var_v0 = arg0 + 0x264;
                    if ((rand() & 0xF) == 1) {
                        var_s0 = 8;
                        goto block_13;
                    }
                } else {
block_13:
                    var_v0 = arg0 + 0x264;
                }
            }
            if (((var_v0 + var_s0)->unk4C == 0) && ((var_s0 == 1) || (var_s0 == 8) || (var_s0 == 3))) {
                temp_s2 = arg0 + 0x264;
                temp_a0 = arg0 + 0x2A7;
                if (arg0->unk820 == 0) {
                    if ((s8) *(temp_a0 + var_s0) < 3) {
                        func_8012AF9C(temp_s2, var_s0, 1);
                    }
                    goto block_23;
                }
                if (*(temp_a0 + var_s0) != 0) {
block_23:
                    temp_s2->unk41 = var_s0;
                    arg0->unkB8 = 1;
                    arg0->unk82D = 1U;
                }
                if (arg0->unk82D != 0) {
                    if (arg0->unk94B != 0) {
                        var_v0_2 = arg0->unk868;
                        if (var_v0_2 < 0) {
                            var_v0_2 = -var_v0_2;
                        }
                        if (var_v0_2 < 0x400) {
                            goto block_35;
                        }
                    } else if (D_801C34EC->unk12688 >= 6) {
                        var_v0_3 = arg0->unk868;
                        if (var_v0_3 < 0) {
                            var_v0_3 = -var_v0_3;
                        }
                        if ((var_v0_3 < 0x400) && ((rand() & 7) == 1)) {
block_35:
                            arg0->unk82D = 0U;
                        }
                    }
                }
            }
        }
    }
}
