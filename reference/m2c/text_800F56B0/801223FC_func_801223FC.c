/* m2c reference for func_801223FC @ 801223FC (224 words). Generated; not compiled or validated. */
? func_800F7E84(void *);                            /* extern */
s32 func_800FD498(void *);                          /* extern */
s16 func_800FF828(s32, void *);                     /* extern */
? func_8012277C(void *, s32);                       /* extern */
? func_80122904(void *, s32);                       /* extern */
? func_80122C74(void *);                            /* extern */
s32 func_80122E88();                                /* extern */
s16 func_80178A1C();                                /* extern */

void func_801223FC(void *arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0_2;

    temp_v0 = func_80122E88();
    if (temp_v0 != 0) {
        var_s1 = 0;
        if (arg0->unk124D8 != NULL) {
            if (func_800FD498(arg0->unk124D8) != 0) {
                arg0->unk1279C = 0;
            } else {
                arg0->unk1279C = (s32) (arg0->unk1279C + func_80178A1C());
            }
            var_a0 = 0;
            if ((arg0->unk124D8->unk8C != 0) || (temp_v0_2 = arg0->unk124D8, ((temp_v0_2->unk91C < temp_v0_2->unk918) != 0))) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                var_s1 = 1;
                arg0->unk124D8->unk918 = 0;
            } else if (arg0->unk124D8->unk8F8 == 0) {
                var_v1 = 0;
                if ((arg0->unk12754 >= 2) && (arg0->unk124DC != NULL)) {
                    var_v1 = arg0->unk124D8->unk7C0 < 0xD0;
                }
                if (var_v1 != 0) {
                    var_a1 = 0;
                    if ((arg0->unk124DC->unk945 != 0) || (arg0->unk124DC->unk788 < (arg0->unk124D8->unk788 + 0x320))) {
                        var_a1 = 1;
                    }
                    if (var_a1 == 0) {
                        if (arg0->unk124D8->unk8 != 1) {
                            arg0->unk124D8->unk8 = 1;
                            arg0->unk124D8->unk58 = 4;
                            arg0->unk124D8->unk780 = 0;
                        }
                    } else {
                        goto block_23;
                    }
                }
            } else if ((arg0->unk12684 < arg0->unk124D8->unk788) && (arg0->unk1279C >= 0x259)) {
                goto block_23;
            }
        } else {
block_23:
            var_s1 = 1;
        }
        if (var_s1 != 0) {
            var_v1_2 = 0;
            if (arg0->unk124D8 != NULL) {
                var_v1_2 = arg0->unk124D8->unk7C0 < 0xD0;
            }
            if (var_v1_2 != 0) {
                arg0->unk124D8->unk942 = 0;
                if (arg0->unk124D8->unk58 >= 0x10) {
                    arg0->unk124D8->unk8 = 1;
                    arg0->unk124D8->unk58 = 2;
                    arg0->unk124D8->unk780 = 0;
                    arg0->unk124D8->unk64 = func_800FF828(arg0->unk124D8->unk44, arg0->unk124D8 + 0x1E4);
                    func_800F7E84(arg0->unk124D8);
                }
            }
            arg0->unk124D8 = NULL;
            func_8012277C(arg0, temp_v0);
            arg0->unk1279C = 0;
            if (arg0->unk124D8 != NULL) {
                arg0->unk12684 = (s32) (arg0->unk124D8->unk788 + 0x640);
            }
        }
        if ((arg0->unk124D8 != NULL) && ((arg0->unk124D8->unk788 + 0xC80) < arg0->unk12684)) {
            arg0->unk12684 = (s32) (arg0->unk124D8->unk788 + 0xC80);
        }
        func_80122904(arg0, temp_v0);
        func_80122C74(arg0);
    }
}
