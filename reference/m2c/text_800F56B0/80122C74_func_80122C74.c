/* m2c reference for func_80122C74 @ 80122C74 (133 words). Generated; not compiled or validated. */
? func_800F6D3C(void *, s32);                       /* extern */
s32 func_800F7F9C(void *);                          /* extern */

void func_80122C74(void *arg0) {
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1_2;
    void *temp_s0;
    void *var_s0;
    void *var_v0;
    void *var_v0_2;
    void *var_v1;

    if (arg0->unk12754 >= 2) {
        var_a0 = 0;
        var_s1 = 0;
        if (arg0->unk12750 > 0) {
            var_v1 = arg0;
            var_v0 = var_v1 + 0xC8FC;
            do {
                if (var_v0->unk54 == 8) {
                    var_a0 += 1;
                }
                var_v1 += 0x958;
                var_s1 += 1;
                var_v0 = var_v1 + 0xC8FC;
            } while (var_s1 < arg0->unk12750);
        }
        if (var_a0 == 0) {
            var_s1_2 = 0;
            if (arg0->unk12750 > 0) {
                var_s2 = 0xC8F8;
                var_s0 = arg0;
                var_v0_2 = var_s0 + 0xC8F8;
loop_9:
                if ((var_v0_2->unk10C >= 0x19) || (func_800F7F9C(arg0 + var_s2) == 0)) {
                    var_s2 += 0x958;
                    var_s0 += 0x958;
                    var_s1_2 += 1;
                    var_v0_2 = var_s0 + 0xC8F8;
                    if (var_s1_2 >= arg0->unk12750) {

                    } else {
                        goto loop_9;
                    }
                }
            }
        }
    }
    if (arg0->unk12754 >= 2) {
        var_s1_3 = 0;
        if (arg0->unk12750 > 0) {
            var_s3 = 0;
            do {
                temp_s0 = arg0 + (var_s3 + 0xC8F8);
                if (temp_s0->unk7C0 < 0xD0) {
                    var_v1_2 = 0;
                    if ((temp_s0->unk947 != 0) && (temp_s0->unk8C == 0) && (temp_s0->unk942 == 0)) {
                        var_v1_2 = (u32) (temp_s0->unk58 ^ 0x12) > 0U;
                    }
                    if (var_v1_2 != 0) {
                        func_800F6D3C(temp_s0, arg0->unk127A0);
                        arg0->unk127A0 = (s32) (arg0->unk127A0 + 1);
                        if (arg0->unk127A0 >= 4) {
                            arg0->unk127A0 = 0;
                        }
                        temp_s0->unk947 = 0U;
                    }
                }
                var_s3 += 0x958;
                var_s1_3 += 1;
            } while (var_s1_3 < arg0->unk12750);
        }
    }
}
