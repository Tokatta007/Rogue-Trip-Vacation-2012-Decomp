/* m2c reference for func_800F8774 @ 800F8774 (57 words). Generated; not compiled or validated. */
s32 func_801250C8(void *, s32);                     /* extern */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */

void func_800F8774(void *arg0) {
    ? var_a1;
    s32 var_a0;
    s32 var_a0_2;

    arg0->unk798 = func_801250C8(arg0 + 0x1E4, arg0->unk34);
    var_a0 = 0;
    if (arg0->unk798 < arg0->unk18) {
        var_a0 = arg0->unk6F != 0;
    }
    if (var_a0 != 0) {
        arg0->unk826 = 1U;
        return;
    }
    if (arg0->unk826 != 0) {
        var_a0_2 = 0;
        if ((arg0->unk85C < arg0->unk798) || (arg0->unk6F == 0)) {
            var_a0_2 = 1;
        }
        if (var_a0_2 != 0) {
            var_a1 = 0x960;
            if ((u8) arg0->unk8D >= 2U) {
                var_a1 = -0x320;
            }
            func_80147A6C(arg0, var_a1);
            func_80147DD0(arg0);
            arg0->unk826 = 0U;
        }
    }
}
