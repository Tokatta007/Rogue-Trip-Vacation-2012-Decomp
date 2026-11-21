/* m2c reference for func_800F8ABC @ 800F8ABC (78 words). Generated; not compiled or validated. */
s32 func_801250C8(void *, s32);                     /* extern */
s32 func_8012BD30(void *);                          /* extern */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */

void func_800F8ABC(void *arg0) {
    ? var_a1;
    s32 var_a0;
    s32 var_s1;

    if ((s16) arg0->unk506 < 0x12C) {
        if (arg0->unk827 != 0) {
            func_80147A6C((void *)-0x320);
            goto block_17;
        }
    } else {
        arg0->unk79C = func_801250C8(arg0 + 0x1E4, arg0->unk34);
        var_a0 = 0;
        if (arg0->unk79C < arg0->unk18) {
            var_a0 = arg0->unk6F != 0;
        }
        if (var_a0 != 0) {
            arg0->unk827 = 1U;
            return;
        }
        if (arg0->unk827 != 0) {
            var_s1 = 0;
            if ((arg0->unk85C < arg0->unk79C) || (arg0->unk6F == 0) || (func_8012BD30(arg0 + 0x264) <= 0)) {
                var_s1 = 1;
            }
            if (var_s1 != 0) {
                var_a1 = 0x960;
                if ((u8) arg0->unk8D >= 2U) {
                    var_a1 = -0x320;
                }
                func_80147A6C(arg0, var_a1);
                func_80147DD0(arg0);
block_17:
                arg0->unk827 = 0U;
            }
        }
    }
}
