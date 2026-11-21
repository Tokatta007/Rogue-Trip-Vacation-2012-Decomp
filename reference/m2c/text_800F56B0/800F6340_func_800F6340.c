/* m2c reference for func_800F6340 @ 800F6340 (173 words). Generated; not compiled or validated. */
? func_800F5E1C(void *, s32);                       /* extern */
? func_800F65F4(void *);                            /* extern */
? func_800F6974(void *);                            /* extern */
? func_800F7A58(void *);                            /* extern */
? func_800F7EE0(void *);                            /* extern */
void *func_80122E88(void *);                        /* extern */
static void *D_801C34EC = NULL;

void func_800F6340(void *arg0) {
    s32 var_v1;
    s32 var_v1_3;
    s32 var_v1_4;
    void *temp_v0;
    void *var_v0;
    void *var_v1_2;

    if (arg0->unk7C0 >= 0xD0) {
        arg0->unk780 = (s32) (arg0->unk780 + arg0->unk7D4);
        if (arg0->unk780 >= 0x4B1) {
            arg0->unk8 = 3;
            arg0->unk58 = 0x12;
            temp_v0 = func_80122E88(D_801C34EC);
            if (temp_v0 != NULL) {
                func_800F5E1C(arg0, temp_v0->unk738);
                arg0->unk780 = 0;
            }
        }
    } else {
        if (arg0->unk82A != 0) {
            func_800F7A58(arg0);
        }
        arg0->unk780 = (s32) (arg0->unk780 + arg0->unk7D4);
        if (arg0->unk942 != 0) {
            func_800F65F4(arg0);
        } else {
            func_800F6974(arg0);
        }
        if (arg0->unk82B != 0) {
            arg0->unk808 = (s32) (arg0->unk808 - arg0->unk7D4);
            var_v1 = 0;
            if ((arg0->unk808 <= 0) || (arg0->unk73C == 0)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                arg0->unk808 = 0;
                arg0->unk82B = 0U;
                arg0->unk73C = 0;
                arg0->unk780 = (s32) (arg0->unk784 + 1);
            } else if (arg0->unk58 != 0x12) {
                arg0->unk8 = 3;
                arg0->unk58 = 0x12;
                arg0->unk34 = (s32) (arg0->unk73C + 0x1C);
                if (arg0->unk73C == arg0->unk40) {
                    var_v1_2 = NULL;
                    if (arg0 != NULL) {
                        var_v1_2 = arg0 + 4;
                    }
                    var_v1_2->unk6C = 1;
                } else {
                    var_v0 = NULL;
                    if (arg0 != NULL) {
                        var_v0 = arg0 + 4;
                    }
                    var_v0->unk6C = 0;
                }
            }
        }
    }
    var_v1_3 = 0;
    if ((arg0->unk6A == 0) && (arg0->unk822 == 0)) {
        var_v1_3 = arg0->unk6F != 0;
    }
    if (var_v1_3 != 0) {
        func_800F7EE0(arg0);
    }
    if (arg0->unk58 != arg0->unk8BC) {
        arg0->unk93B = 0;
        arg0->unk8BC = (s32) arg0->unk58;
        arg0->unk943 = 0;
    }
    arg0->unk938 = 0;
    if (D_801C34EC->unk12688 > 0) {
        var_v1_4 = 0;
        if ((arg0->unk58 >= 0xB) || (arg0->unk878 < 0xC80)) {
            var_v1_4 = 1;
        }
        if ((var_v1_4 != 0) && (arg0->unk7B0 < arg0->unk18) && ((arg0 + 0x264)->unk28 >= 0xA7)) {
            arg0->unk938 = 1;
        }
    }
}
