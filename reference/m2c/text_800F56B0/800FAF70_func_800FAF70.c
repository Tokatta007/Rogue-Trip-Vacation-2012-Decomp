/* m2c reference for func_800FAF70 @ 800FAF70 (76 words). Generated; not compiled or validated. */
s32 func_800FB0A0(void *);                          /* extern */
s32 func_800FB234(void *);                          /* extern */
? func_800FCA44();                                  /* extern */
? func_8016408C(s32 *);                             /* extern */

s32 func_800FAF70(void *arg0) {
    s32 sp10;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;

    if (arg0->unk934 != 0) {
        func_800FCA44();
        arg0->unk38 = (s32) arg0->unk34;
        return 1 & 0xFF;
    }
    if (arg0->unk946 != 0) {
        if (arg0->unk21C > 0) {
            arg0->unkAF = 1;
        } else {
            arg0->unkAE = 1;
        }
        arg0->unkA9 = 1;
        arg0->unkAA = 1;
        arg0->unkAC = 1;
        var_v1 = 0;
        if ((arg0->unk874 >= 0x19C8) || (arg0->unk8D != 0)) {
            var_v1 = 1;
        }
        var_s0 = 1;
        if (var_v1 != 0) {
            sp10 = arg0->unk1F8 - (s16) arg0->unk20;
            func_8016408C(&sp10);
            var_v0 = sp10;
            if (var_v0 < 0) {
                var_v0 = -var_v0;
            }
            var_s0 = 1;
            if (var_v0 < 0x200) {
                arg0->unk946 = 0U;
                var_s0 = 1;
            }
        }
    } else {
        var_s0 = 1;
        if (func_800FB0A0(arg0) == 0) {
            var_s0 = func_800FB234(arg0);
        }
    }
    return var_s0 & 0xFF;
}
