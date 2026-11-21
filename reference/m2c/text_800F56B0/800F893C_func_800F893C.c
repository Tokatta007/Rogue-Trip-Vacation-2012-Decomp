/* m2c reference for func_800F893C @ 800F893C (96 words). Generated; not compiled or validated. */
s16 func_800FF828(s32, s32);                        /* extern */
s32 func_801250C8(s32, s32);                        /* extern */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */

void func_800F893C(void *arg0) {
    ? var_a1;
    s32 temp_s1;
    s32 var_a0;
    s32 var_a0_2;

    temp_s1 = arg0 + 0x1E4;
    arg0->unk794 = func_801250C8(temp_s1, arg0->unk34);
    var_a0 = 0;
    if (arg0->unk794 < arg0->unk18) {
        var_a0 = arg0->unk6F != 0;
    }
    if (var_a0 != 0) {
        if (arg0->unk825 == 0) {
            arg0->unk8E8 = 0;
        }
        arg0->unk825 = 1U;
        if (arg0->unk508 == 0) {
            arg0->unk8E8 = (s32) (arg0->unk8E8 + 1);
            if (arg0->unk8E8 >= 3) {
                arg0->unk780 = (s32) (arg0->unk784 - 0x384);
                arg0->unk8 = 1;
                arg0->unk58 = 5;
                arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
                arg0->unk8B0 = 0;
                arg0->unk64 = func_800FF828(arg0->unk44, temp_s1);
                goto block_17;
            }
        }
    } else if (arg0->unk825 != 0) {
        var_a0_2 = 0;
        if ((arg0->unk85C < arg0->unk794) || (arg0->unk6F == 0)) {
            var_a0_2 = 1;
        }
        if (var_a0_2 != 0) {
            var_a1 = 0x960;
            if ((u8) arg0->unk8D >= 2U) {
                var_a1 = -0x320;
            }
            func_80147A6C(arg0, var_a1);
            func_80147DD0(arg0);
block_17:
            arg0->unk825 = 0U;
        }
    }
}
