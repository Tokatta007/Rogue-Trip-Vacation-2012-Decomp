/* m2c reference for func_80122904 @ 80122904 (220 words). Generated; not compiled or validated. */
? func_8012277C(void *, void *, void *, s32);       /* extern */
? func_80124FC8(void *, VECTOR *, VECTOR *);        /* extern */
s32 func_80125094(void *, VECTOR *);                /* extern */
s32 func_801250C8(void *, void *);                  /* extern */
? func_801253C8(void *, void *);                    /* extern */

void func_80122904(void *arg0, void *arg1) {
    VECTOR sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1;
    void *var_a0_2;
    void *var_a2;
    void *var_s1;

    if (arg0->unk12754 < 2) {
        if (arg0->unk124D8 == NULL) {
            var_s0 = 0;
            if (arg0->unk12750 > 0) {
                var_a2 = arg0;
                var_a3 = 0;
                var_a0 = 0;
loop_4:
                temp_v1 = var_a2 + 0xC8F8;
                if (temp_v1->unk8C == 0) {
                    var_a0 = temp_v1->unk82A == 0;
                }
                var_a2 += 0x958;
                if (var_a0 == 0) {
                    var_a3 += 0x958;
                    var_s0 += 1;
                    var_a0 = 0;
                    if (var_s0 >= arg0->unk12750) {

                    } else {
                        goto loop_4;
                    }
                } else {
                    arg0->unk124DC = (void *) (arg0 + (var_a3 + 0xC8F8));
                    func_8012277C(arg0, arg1, var_a2, var_a3);
                    arg0->unk124DC = NULL;
                }
            }
        }
    } else {
        temp_s1 = arg1 + 0x1E4;
        if (arg0->unk124DC == NULL) {
            var_v0 = 1;
        } else {
            temp_s0 = arg0 + 0x7C8;
            var_v0 = 0;
            if (func_801250C8(temp_s1, temp_s0) >= 0x321) {
                func_801253C8(temp_s0, temp_s1);
                var_v0 = 1;
            }
        }
        if (var_v0 != 0) {
            sp20 = 0;
            sp28 = 0;
            if (arg1->unkCC < arg1->unk7A4) {
                sp24 = 0x960;
            } else {
                sp24 = 0x320;
            }
            var_s5 = 0x7FFFFFFF;
            var_s4 = -1;
            mathMulTransVec(arg1->unk738 + 0x28, (VECTOR *) &sp20, &sp10);
            func_80124FC8(arg1 + 0x1E4, &sp10, &sp10);
            var_s0_2 = 0;
            if (arg0->unk12750 > 0) {
                var_s2 = 0xC8F8;
                var_s1 = arg0;
                var_a0_2 = var_s1 + 0xC8F8;
                do {
                    if ((var_a0_2->unk7C0 < 0xD0) && (arg1->unk7C8 != var_a0_2->unk7C8) && (var_a0_2->unk8C == 0)) {
                        var_v1 = 0x7FFF;
                        if (var_a0_2->unk82A == 0) {
                            var_v1 = 0xFA00;
                            if ((var_s1 + 0xC8FC)->unk4 != 1) {
                                var_v1_2 = 0;
                                if (arg0->unk124D8 != NULL) {
                                    var_v1_2 = arg0->unk124D8->unk7C8 == var_a0_2->unk7C8;
                                }
                                var_v1 = 0x7FFF;
                                if ((var_v1_2 == 0) && (var_a0_2->unk828 == 0)) {
                                    var_v1 = func_80125094(arg0 + var_s2 + 0x1E4, &sp10);
                                }
                            }
                        }
                        if (var_v1 < var_s5) {
                            var_s4 = var_s0_2;
                            var_s5 = var_v1;
                        }
                    }
                    var_s2 += 0x958;
                    var_s1 += 0x958;
                    var_s0_2 += 1;
                    var_a0_2 = var_s1 + 0xC8F8;
                } while (var_s0_2 < arg0->unk12750);
            }
            if (var_s4 >= 0) {
                arg0->unk124DC = (void *) (arg0 + ((var_s4 * 0x958) + 0xC8F8));
            }
        }
    }
    var_a0_3 = 0;
    if ((arg0->unk124DC != NULL) && (arg0->unk124D8 != NULL)) {
        var_a0_3 = arg0->unk124DC->unk7C0 == arg0->unk124D8->unk7C0;
    }
    if (var_a0_3 != 0) {
        arg0->unk124DC = NULL;
    }
}
