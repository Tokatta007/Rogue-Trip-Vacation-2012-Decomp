/* m2c reference for func_800F65F4 @ 800F65F4 (224 words). Generated; not compiled or validated. */
? func_800F7F9C(void *);                            /* extern */
s32 func_800FD454(void *);                          /* extern */
s32 func_800FD498(void *);                          /* extern */
s16 func_800FF828(s32, void *);                     /* extern */
s16 func_80178A1C();                                /* extern */
static void *D_801C34EC = NULL;

void func_800F65F4(void *arg0) {
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_v0;

    temp_v0 = D_801C34EC->unk124D8;
    var_s1 = 0;
    if ((temp_v0 != NULL) && (temp_v0->unk7D0 != arg0->unk7D0) && (D_801C34EC->unk12754 >= 2)) {
        arg0->unk947 = 1;
        arg0->unk942 = 0;
        var_s1 = 0;
    }
    if ((func_800FD454(arg0) != 0) || ((rand() & 3) == 1)) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        arg0->unk8F0 = (s32) (arg0->unk8F0 + func_80178A1C());
        if ((arg0->unk8F0 >= 0x4B1) && (arg0->unk8F8 >= 2)) {
            arg0->unk8F8 = (s32) (arg0->unk8F8 - 1);
        }
    }
    if (func_800FD498(arg0) != 0) {
        var_v1 = 0;
        if (arg0->unk934 == 0) {
            var_v1 = arg0->unk788 < 0x4B0;
        }
        if (var_v1 != 0) {
            arg0->unk934 = 1U;
            arg0->unk854 = (s32) arg0->unk850;
            arg0->unk93C = 0;
            arg0->unk8CC = 0;
            arg0->unk89C = 0x1A4;
            arg0->unk8C4 = 0;
            arg0->unk8C8 = (s32) (D_801C34EC->unk7D4 + 2);
        }
        arg0->unk8 = 3;
        arg0->unk58 = 0x12U;
        arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
    } else if (arg0->unk918 < arg0->unk91C) {
        if (arg0->unk8 == 1) {
            var_v1_2 = 0;
            if (arg0->unk788 < 0x1F41) {
                if (arg0->unk788 >= 0xFA1) {
                    var_v0 = arg0->unk868;
                    if (var_v0 < 0) {
                        var_v0 = -var_v0;
                    }
                    if (var_v0 >= 0x401) {
                        goto block_24;
                    }
                }
            } else {
block_24:
                var_v1_2 = 1;
            }
            if (var_v1_2 != 0) {
                arg0->unk8 = 3;
                arg0->unk58 = 0x12U;
                arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
                arg0->unk780 = 0;
            }
        } else if (arg0->unk58 != 8) {
            var_v1_3 = 0;
            if (arg0->unk788 < 0x960) {
                var_v0_2 = arg0->unk868;
                if (var_v0_2 < 0) {
                    var_v0_2 = -var_v0_2;
                }
                if (var_v0_2 < 0x2AA) {
                    var_v0_3 = arg0->unk86C;
                    if (var_v0_3 < 0) {
                        var_v0_3 = -var_v0_3;
                    }
                    var_v1_3 = var_v0_3 >= 0x2AB;
                }
            }
            if (var_v1_3 != 0) {
                arg0->unk8 = 1;
                arg0->unk58 = 2U;
                arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
                arg0->unk780 = 0;
                arg0->unk64 = func_800FF828(arg0->unk44, arg0 + 0x1E4);
                arg0->unk8B0 = 0;
                if (arg0->unk10C < ((s32) arg0->unk110 >> 1)) {
                    func_800F7F9C(arg0);
                }
            }
        }
    }
    if (arg0->unk58 != 0x12) {
        var_a0 = 0;
        if (((u32) arg0->unk58 < 2U) || (D_801C34EC->unk12754 < 2)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            arg0->unk8 = 3;
            arg0->unk58 = 0x12U;
            arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
            arg0->unk780 = 0;
            arg0->unk918 = 0;
        }
    } else {
        arg0->unk780 = 1;
    }
}
