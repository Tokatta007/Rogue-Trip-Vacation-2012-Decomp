/* m2c reference for func_8011FA30 @ 8011FA30 (255 words). Generated; not compiled or validated. */
? func_8011D8AC(void *, void *);                    /* extern */
? func_8011FE2C(void *);                            /* extern */
? func_80126250(void *);                            /* extern */
? func_80132CF4(?, ?);                              /* extern */
s32 func_8013A06C();                                /* extern */
s32 func_8016BF3C(?);                               /* extern */
s16 func_80178A1C(s32, void *);                     /* extern */

void func_8011FA30(void *arg0) {
    ? var_a0_2;
    ? var_a0_4;
    ? var_a0_5;
    ? var_a1;
    ? var_a1_3;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_a1_4;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_v1;
    void *var_s0;

    if (arg0->unk127E2 != 0) {
        var_a0 = 0;
        if (arg0->unk12750 != 0) {
            var_a0 = arg0->unk12754 < 1;
        }
        if (var_a0 != 0) {
            func_8011D8AC(arg0 + 0xB96C, arg0 + 0xB92C);
        }
    } else {
        temp_v1 = arg0->unk7D8;
        switch (temp_v1) {
        case 0:
            var_a0_2 = 3;
            if (func_8016BF3C(0) & 0xFF) {
                var_a1 = 0xA;
block_49:
                func_80132CF4(var_a0_2, var_a1);
                arg0->unk127E2 = 1U;
                return;
            }
            func_80126250(arg0);
            return;
        case 1:
        case 2:
            if (func_8013A06C() == 0) {
                if (arg0->unk1272C <= 0) {
                    func_80132CF4(1, 0x12C);
                    arg0->unk127E2 = 1U;
                }
                var_v1 = 0;
                if (arg0->unk12750 != 0) {
                    var_v1 = arg0->unk12754 < 1;
                }
                var_a1_2 = 0;
                if (var_v1 != 0) {
                    if (arg0->unk11D2C == 0) {
                        func_80132CF4(4, 0x12C);
                        arg0->unk127E2 = 1U;
                        var_a1_2 = 0;
                    }
                }
                if ((arg0->unk12688 == 0xB) && (arg0->unk1106D != 0)) {
                    var_a1_2 = arg0->unk1106E != 0;
                }
                if (var_a1_2 != 0) {
                    func_80132CF4(4, 0x12C);
                    arg0->unk127E2 = 1U;
                }
                var_a0_3 = 0;
                if ((arg0->unk127E2 == 0) && (arg0->unk7D8 == 1)) {
                    var_a0_3 = arg0->unk12688 == 4;
                }
                if (var_a0_3 != 0) {
                    var_s0 = arg0 + 0x10000;
                    arg0->unk12680 = (s32) (arg0->unk12680 - func_80178A1C(var_a0_3, arg0 + 0x10000));
                    var_a0_4 = 8;
                    if (arg0->unk12680 <= 0) {
                        var_a1_3 = 0x3C;
                        arg0->unk12680 = 0;
block_57:
                        func_80132CF4(var_a0_4, var_a1_3);
                        var_s0->unk27E2 = 1;
                    }
                }
                return;
            }
block_51:
            func_8011FE2C(arg0);
            return;
        case 3:
            var_s0 = arg0 + 0x10000;
            if (arg0->unk12688 == 4) {
                arg0->unk12680 = (s32) (arg0->unk12680 - func_80178A1C());
                var_a0_4 = 8;
                if (arg0->unk12680 <= 0) {
                    var_a1_3 = 0x3C;
                    arg0->unk12680 = 0;
                    goto block_57;
                }
            } else {
                if ((arg0->unk1272C < 2) && (arg0->unk11D2C == 0)) {
                    var_a0_5 = 1;
                    if (arg0->unkB894 > 0) {
                        var_a0_5 = 2;
                    }
                    func_80132CF4(var_a0_5, 0x12C);
                    arg0->unk127E2 = 1U;
                }
                var_v1_2 = 0;
                if (arg0->unk12750 != 0) {
                    var_v1_2 = arg0->unk12754 < 1;
                }
                var_a1_4 = 0;
                if (var_v1_2 != 0) {
                    if (arg0->unk11D2C == 0) {
                        func_80132CF4(4, 0x12C);
                        arg0->unk127E2 = 1U;
                        var_a1_4 = 0;
                    }
                }
                if ((arg0->unk12688 == 0xB) && (arg0->unk1106D != 0)) {
                    var_a1_4 = arg0->unk1106E != 0;
                }
                var_a0_2 = 4;
                if (var_a1_4 != 0) {
                    var_a1 = 0x12C;
                    goto block_49;
                }
            }
            break;
        default:
            if (func_8013A06C() != 0) {
                goto block_51;
            }
            var_s0 = arg0 + 0x10000;
            if ((arg0->unk1272C < 2) && (arg0->unk11D2C == 0)) {
                var_a0_4 = 1;
                if (arg0->unkB894 > 0) {
                    var_a0_4 = 2;
                }
                var_a1_3 = 0x12C;
                goto block_57;
            }
            break;
        }
    }
}
