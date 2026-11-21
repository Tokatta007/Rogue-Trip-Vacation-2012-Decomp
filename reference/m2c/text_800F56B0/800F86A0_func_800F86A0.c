/* m2c reference for func_800F86A0 @ 800F86A0 (53 words). Generated; not compiled or validated. */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */

void func_800F86A0(void *arg0) {
    ? var_a1;
    s32 var_a0;
    s32 var_a0_2;

    var_a0 = 0;
    if (arg0->unk790 < arg0->unk85C) {
        var_a0 = arg0->unk6F != 0;
    }
    if (var_a0 != 0) {
        arg0->unk824 = 1U;
        return;
    }
    if (arg0->unk824 != 0) {
        var_a0_2 = 0;
        if ((arg0->unk85C < arg0->unk790) || (arg0->unk6F == 0)) {
            var_a0_2 = 1;
        }
        if (var_a0_2 != 0) {
            var_a1 = 0x960;
            if ((u8) arg0->unk8D >= 2U) {
                var_a1 = -0x320;
            }
            func_80147A6C(arg0, var_a1);
            func_80147DD0(arg0);
            arg0->unk824 = 0U;
        }
    }
}
