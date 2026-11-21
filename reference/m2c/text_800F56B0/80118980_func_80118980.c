/* m2c reference for func_80118980 @ 80118980 (225 words). Generated; not compiled or validated. */
s32 func_801594CC(s16);                             /* extern */
? func_801640EC(void *, s32);                       /* extern */

void func_80118980(void *arg0) {
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    s16 var_v0_7;
    s16 var_v1;
    s16 var_v1_2;
    s16 var_v1_3;
    s16 var_v1_4;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1_5;
    void *temp_v1_2;

    var_a1 = 0;
    var_v0 = arg0->unk278;
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    temp_v1 = var_v0 < (arg0->unk274 * 4);
    if (arg0->unk2F4 == 0) {
        var_a1 = arg0->unk2F2 == 0;
    }
    if (var_a1 != 0) {
        arg0->unk2EE = 0U;
        arg0->unk2F0 = 0U;
    } else if (arg0->unk307 != 0) {
        if (temp_v1 != 0) {
            var_v1 = (s16) arg0->unk2F0;
            if (var_v1 < 0) {
                var_v1 = -var_v1;
            }
            var_v0_2 = (s16) arg0->unk2F4;
            if (var_v0_2 < 0) {
                var_v0_2 = -var_v0_2;
            }
            if (var_v1 < var_v0_2) {
                arg0->unk303 = 0U;
                arg0->unk2F0 = 0U;
            } else if (arg0->unk2C0 != 0x17C) {
                var_v1_2 = (s16) arg0->unk2F0;
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                var_v0_3 = (s16) arg0->unk2F4;
                if (var_v0_3 < 0) {
                    var_v0_3 = -var_v0_3;
                }
                if ((0x800 - var_v0_3) < var_v1_2) {
                    arg0->unk303 = 0U;
                    arg0->unk2F0 = 0x800U;
                }
            }
        }
        if (arg0->unk303 != 0) {
            arg0->unk2F0 = (u16) (arg0->unk2F0 + arg0->unk2F4);
            func_801640EC(arg0 + 0x2F0, var_a1);
        }
        arg0->unk2EE = (u16) ((s32) ((s16) arg0->unk2F2 * func_801594CC((s16) arg0->unk2F0)) >> 0xC);
        var_v0_4 = (s16) arg0->unk2F4;
        if (var_v0_4 < 0) {
            var_v0_4 = -var_v0_4;
        }
        if (var_v0_4 >= 0xAB) {
            arg0->unk2F4 = (u16) (arg0->unk2F4 - ((s32) (arg0->unk2F4 << 0x10) >> 0x15));
        }
    } else {
        if (temp_v1 != 0) {
            var_v1_3 = (s16) arg0->unk2EE;
            if (var_v1_3 < 0) {
                var_v1_3 = -var_v1_3;
            }
            var_v0_5 = (s16) arg0->unk2F2;
            if (var_v0_5 < 0) {
                var_v0_5 = -var_v0_5;
            }
            if (var_v1_3 < var_v0_5) {
                arg0->unk303 = 0U;
                arg0->unk2EE = 0U;
            } else if (arg0->unk2C0 != 0x17C) {
                var_v1_4 = (s16) arg0->unk2EE;
                if (var_v1_4 < 0) {
                    var_v1_4 = -var_v1_4;
                }
                var_v0_6 = (s16) arg0->unk2F2;
                if (var_v0_6 < 0) {
                    var_v0_6 = -var_v0_6;
                }
                if ((0x800 - var_v0_6) < var_v1_4) {
                    arg0->unk303 = 0U;
                    arg0->unk2EE = 0U;
                    arg0->unk2F0 = 0x800U;
                    temp_v1_2 = arg0->unk38;
                    temp_v1_2->unk18 = (u16) (temp_v1_2->unk18 + 0x800);
                }
            }
        }
        if (arg0->unk303 != 0) {
            arg0->unk2EE = (u16) (arg0->unk2EE + arg0->unk2F2);
            func_801640EC(arg0 + 0x2EE, var_a1);
        }
        arg0->unk2F0 = (u16) ((s32) ((s16) arg0->unk2F2 * func_801594CC((s16) arg0->unk2EE)) >> 0xC);
        var_v0_7 = (s16) arg0->unk2F2;
        if (var_v0_7 < 0) {
            var_v0_7 = -var_v0_7;
        }
        if (var_v0_7 >= 0xAB) {
            arg0->unk2F2 = (u16) (arg0->unk2F2 - ((s32) (arg0->unk2F2 << 0x10) >> 0x15));
        }
    }
    var_v1_5 = 0;
    if (arg0->unk2EE == 0) {
        var_v1_5 = arg0->unk2F0 == 0;
    }
    if ((var_v1_5 != 0) && (arg0->unk278 < (arg0->unk274 * 2))) {
        arg0->unk303 = 0U;
        arg0->unk300 = 0;
        arg0->unk278 = 0;
    }
}
