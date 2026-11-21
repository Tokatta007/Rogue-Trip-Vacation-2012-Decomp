/* m2c reference for func_80148704 @ 80148704 (191 words). Generated; not compiled or validated. */
? func_801640EC(void *);                            /* extern */
s32 func_80176C1C(s32, ?, ?);                       /* extern */

void func_80148704(void *arg0) {
    ? var_a1;
    ? var_a1_2;
    ? var_a1_3;
    s16 var_v0_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    var_a1 = 0;
    if (arg0->unk97 != 0) {
        arg0->unk6C2 = 0x400;
        if ((arg0->unk98 == 0) && (arg0->unk7A4 >= arg0->unkC8)) {
            var_v1 = 0;
            if (arg0->unk91 != 0) {
                var_v1 = (arg0->unk6C4 << 0x10) > 0xF0000;
            }
            if (var_v1 != 0) {
                goto block_6;
            }
            var_a1 = 0x38E;
            if (arg0->unk99 != 0) {
                arg0->unk5CC = 0;
                arg0->unk620 = 0;
                arg0->unk5E2 = 0;
                arg0->unk636 = 0;
            } else {
                var_a1 = -0x38E;
                arg0->unk578 = 0;
                arg0->unk674 = 0;
                arg0->unk58E = 0;
                arg0->unk68A = 0;
            }
        } else {
block_6:
            arg0->unk97 = 0U;
        }
        arg0->unk1F4 = func_80176C1C(arg0->unk1F4, var_a1, 5);
        var_v0 = arg0->unk1F4;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 >= 0x239) {
            arg0->unk97 = 0U;
            arg0->unk98 = 1U;
        }
    } else if (arg0->unk98 != 0) {
        var_v0_2 = arg0->unk1F4;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 < 0x155) {
            arg0->unk98 = 0U;
        } else {
            var_v1_2 = 0;
            if (arg0->unk91 != 0) {
                var_v1_2 = (arg0->unk6C4 << 0x10) > 0xF0000;
            }
            if ((var_v1_2 == 0) && (arg0->unk7A4 >= arg0->unkC8)) {
                if (arg0->unk99 != 0) {
                    if ((arg0->unkE0 - arg0->unkD8) >= arg0->unk21C) {
                        if ((-((s32) arg0->unkE0 >> 1) < arg0->unk21C) && ((var_a1_2 = 0x31C, (arg0->unkAF != 0)) || (var_a1_2 = 0x2AA, ((arg0->unk1F4 < 0x1C8) == 0)))) {
                            arg0->unk1F4 = func_80176C1C(arg0->unk1F4, var_a1_2, 5);
                            arg0->unk5CC = 0;
                            arg0->unk620 = 0;
                        }
                    } else {
                        goto block_30;
                    }
                } else if ((arg0->unkD8 - arg0->unkE0) >= arg0->unk21C) {
block_30:
                    arg0->unk9A = 1U;
                } else if ((arg0->unk21C < ((s32) arg0->unkE0 >> 1)) && ((var_a1_3 = -0x31C, (arg0->unkAE != 0)) || (var_a1_3 = -0x2AA, ((arg0->unk1F4 < -0x1C7) != 0)))) {
                    arg0->unk1F4 = func_80176C1C(arg0->unk1F4, var_a1_3, 5);
                    arg0->unk578 = 0;
                    arg0->unk674 = 0;
                }
            }
        }
        if (arg0->unk9A != 0) {
            arg0->unk18E = (s16) arg0->unk204;
            if (arg0->unk21C > 0) {
                arg0->unk218 = 1;
                var_v0_3 = arg0->unk204 + 0x400;
            } else {
                arg0->unk218 = -1;
                var_v0_3 = arg0->unk204 - 0x400;
            }
            arg0->unk190 = var_v0_3;
            func_801640EC(arg0 + 0x190);
            arg0->unk18C = 0;
            arg0->unk98 = 0U;
        }
    }
}
