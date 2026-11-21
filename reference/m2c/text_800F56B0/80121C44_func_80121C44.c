/* m2c reference for func_80121C44 @ 80121C44 (139 words). Generated; not compiled or validated. */
? func_800F6D3C(void *, s32);                       /* extern */
? func_800FF9C8(void *);                            /* extern */
s16 func_801004E4(void *);                          /* extern */
? func_80121E70(void *, void *, ?);                 /* extern */

void func_80121C44(void *arg0) {
    s16 temp_v0;
    s32 var_a0;
    s32 var_s4;
    s32 var_s5;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s1;
    void *var_a0_2;
    void *var_a0_3;
    void *var_s3;
    void *var_v0;
    void *var_v1;

    arg0->unk127DF = 0;
    arg0->unk127E6 = 0;
    temp_a1 = (arg0 + 0x10A64)->unk330;
    var_a0 = 0;
    if (temp_a1 != NULL) {
        if ((temp_a1->unk7B8 == 1) || (arg0->unk7D8 == 0)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            func_80121E70(arg0, temp_a1, 0x12);
            return;
        }
        var_s5 = 0;
        var_s4 = 0xC8F8;
        var_s3 = arg0;
loop_7:
        temp_a0 = var_s3 + 0xC8F8;
        if (var_s5 < arg0->unk12750) {
            if (temp_a0->unk7C0 < 0xD0) {
                if (temp_a0->unk82A != 0) {
                    if ((s8) arg0->unk12355 == -1) {
                        (var_s3 + 0xC8FC)->unk54 = 0;
                        var_v0 = var_s3 + 0xC8F8;
                    } else {
                        temp_s1 = var_s3 + 0xC8FC;
                        temp_s1->unk30 = (s32) (arg0->unk122C8 + 0x1C);
                        var_v1 = NULL;
                        temp_s0 = arg0 + var_s4;
                        temp_a0->unk81C = (u16) arg0->unk122C8->unk18;
                        temp_s1->unk4 = 3;
                        temp_s1->unk54 = 0xC;
                        temp_a0->unk780 = 0;
                        if (temp_s0 != NULL) {
                            var_v1 = temp_s0 + 4;
                        }
                        var_v1->unk6C = 0;
                        var_a0_2 = NULL;
                        if (temp_s0 != NULL) {
                            var_a0_2 = temp_s0 + 4;
                        }
                        temp_v0 = func_801004E4(var_a0_2);
                        if (temp_v0 != (s16) temp_s1->unk58) {
                            temp_s1->unk5C = temp_v0;
                            var_a0_3 = NULL;
                            if (temp_s0 != NULL) {
                                var_a0_3 = temp_s0 + 4;
                            }
                            func_800FF9C8(var_a0_3);
                        }
                        var_v0 = var_s3 + 0xC8F8;
                    }
                    var_v0->unk824 = 0;
                    var_s4 += 0x958;
                } else {
                    func_800F6D3C(arg0 + var_s4, arg0->unk127A0);
                    arg0->unk127A0 = (s32) (arg0->unk127A0 + 1);
                    if (arg0->unk127A0 >= 4) {
                        arg0->unk127A0 = 0;
                    }
                    var_s3->unkD23F = 0;
                    goto block_25;
                }
            } else {
block_25:
                var_s4 += 0x958;
            }
            var_s3 += 0x958;
            var_s5 += 1;
            goto loop_7;
        }
    }
}
