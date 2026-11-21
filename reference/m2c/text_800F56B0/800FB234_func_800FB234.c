/* m2c reference for func_800FB234 @ 800FB234 (215 words). Generated; not compiled or validated. */
? func_800FFB58(void *, ?);                         /* extern */
? func_80144150(void *);                            /* extern */
? func_80144FF8(void *, s16);                       /* extern */
? func_80147778(void *, void *, s32, s32);          /* extern */
? func_80147A6C(void *, ?);                         /* extern */
s32 func_80147B88(void *);                          /* extern */
? func_80147DD0(void *);                            /* extern */
? func_8016408C(s32 *);                             /* extern */
s16 func_80178A1C();                                /* extern */
static void *D_801C34EC = NULL;

s32 func_800FB234(void *arg0) {
    s32 sp10;
    s32 temp_a2;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a3;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    void *var_a0;

    var_a0 = NULL;
    if (arg0->unk933 != 0) {
        arg0->unk933 = 0U;
        arg0->unk8D = 0;
        arg0->unk533 = 0;
        if (arg0 != NULL) {
            var_a0 = arg0 + 4;
        }
        func_800FFB58(var_a0, -1);
        arg0->unk68 = 0;
        func_80147DD0(arg0);
        if (arg0->unk73 != 0) {
            arg0->unk760 = (s32) (((func_80178A1C() * 0x3CF) / 1000) << 6);
            arg0->unk764 = (s32) ((s32) (arg0->unk760 << 6) / (s32) arg0->unkD0);
        }
    }
    var_s2 = 0;
    if (func_80147B88(arg0) == 0) {
        func_80144FF8(arg0, (s16) arg0->unk20);
        var_s2 = 1;
        if (arg0->unk6B != 0) {
            sp10 = arg0->unk1F8 - (s16) arg0->unk20;
            func_8016408C(&sp10);
            var_v0 = sp10;
            if (var_v0 < 0) {
                var_v0 = -var_v0;
            }
            if (var_v0 >= 0x156) {
                arg0->unk84 = 1;
            }
        }
    }
    if (arg0->unk822 != 0) {
        arg0->unkAD = 0;
        var_s2 = 0;
        arg0->unk38 = (s32) arg0->unk34;
    } else if (arg0->unk760 < arg0->unk20C) {
        arg0->unkAD = 1;
    } else if (arg0->unk20C < ((s32) arg0->unk760 >> 1)) {
        arg0->unkAA = 1;
    }
    if (var_s2 == 0) {
        arg0->unk930 = (u8) arg0->unk936;
        arg0->unk77C = 0x1A4;
        arg0->unk874 = 0;
        func_80147DD0(arg0);
        arg0->unk82C = 0;
        if (D_801C34EC->unk12688 == 3) {
            var_a0_2 = 0;
            if (((s16) arg0->unk5C == 0x77) || ((s16) arg0->unk5C == 0x7D)) {
                var_a0_2 = 1;
            }
            if (var_a0_2 != 0) {
                arg0->unk82C = 1;
                return var_s2;
            }
            var_a3 = 0;
            if ((u32) (arg0->unk5C - 0x7B) < 2U) {
                var_a0_3 = 0;
                var_v1 = 0xB788;
                temp_a2 = D_801C34EC->unk12728;
loop_26:
                if (var_a0_3 < temp_a2) {
                    var_v1 += 0x8B8;
                    if ((D_801C34EC + var_v1)->unk1EC < 0x1F41) {
                        var_a0_3 += 1;
                        goto loop_26;
                    }
                    var_a3 = 1;
                }
                if (var_a3 == 0) {
                    func_80147778(arg0, D_801C34EC, temp_a2, var_a3);
                    arg0->unkA1 = 0;
                    arg0->unk1E4 = (s32) (0x3FF - (rand() & 0x7FF));
                    arg0->unk1E8 = (s32) (0x3FF - (rand() & 0x7FF));
                    arg0->unk1EC = 0x640;
                    if (arg0->unkF4 != 0) {
                        arg0->unkF4 = 0x64;
                        func_80144150(arg0);
                    }
                    func_80147A6C(arg0, 0x960);
                    func_80147DD0(arg0);
                    arg0->unk82C = 0;
                }
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return var_s2;
        }
    }
    return var_s2;
}
