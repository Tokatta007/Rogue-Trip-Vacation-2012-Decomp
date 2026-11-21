/* m2c reference for func_800F840C @ 800F840C (165 words). Generated; not compiled or validated. */
? func_800F86A0(void *);                            /* extern */
? func_800F8774(void *);                            /* extern */
? func_800F8858(void *);                            /* extern */
? func_800F893C(void *);                            /* extern */
? func_800F8ABC(void *);                            /* extern */
? func_800F8BF4(void *);                            /* extern */
? func_800F9178(void *, s32);                       /* extern */
s32 func_8012BD30(void *);                          /* extern */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */
static void *D_801C34EC = NULL;

void func_800F840C(void *arg0) {
    ? var_a1;
    s32 var_s1;
    s32 var_v1;
    void *temp_v1;

    switch (arg0->unk58) {                          /* irregular */
    case 5:
        arg0->unk8B0 = (s32) (arg0->unk8B0 + arg0->unk7D4);
        if (arg0->unk8B0 >= 0x385) {
            arg0->unk58 = 0;
        }
        break;
    case 11:
        func_800F86A0(arg0);
        break;
    case 12:
        func_800F893C(arg0);
        break;
    case 8:
        func_800F8774(arg0);
        break;
    case 10:
        func_800F8ABC(arg0);
        break;
    case 1:
        func_800F8858(arg0);
        break;
    default:
        if (arg0->unk824 != 0) {
            var_a1 = 0x960;
            if ((u8) arg0->unk8D >= 2U) {
                var_a1 = -0x320;
            }
            func_80147A6C(arg0, var_a1);
            func_80147DD0(arg0);
            arg0->unk824 = 0U;
        }
        break;
    }
    if (arg0->unk827 != 0) {
        var_v1 = 0;
        if (D_801C34EC->unk123F8 != 0) {
            var_v1 = D_801C34EC->unk12408 == (s32) arg0;
        }
        var_s1 = 0;
        if (var_v1 != 0) {
            if ((func_8012BD30(arg0 + 0x264) <= 0) || (arg0->unk7DC < 0x3E8)) {
                var_s1 = 1;
            }
            if ((var_s1 != 0) && (D_801C34EC->unk60A8->unkC == 0)) {
                arg0->unk58 = 0;
            }
            if (arg0->unk8E4 == 0) {
                func_800F9178(arg0, arg0->unk58);
                if (arg0->unk894 == -1) {
                    arg0->unk58 = 0;
                    arg0->unk780 = 0;
                    arg0->unk827 = 0U;
                }
            }
            arg0->unk8E4 = (s32) (arg0->unk8E4 + arg0->unk7D4);
            temp_v1 = arg0 + 0x264;
            if (((s16) arg0->unk17A < arg0->unk8E4) && (temp_v1->unk33 != 0)) {
                temp_v1->unk41 = (s8) arg0->unk894;
                arg0->unkB8 = 1;
                goto block_34;
            }
        } else {
block_34:
            arg0->unk8E4 = 0;
        }
    } else {
        func_800F8BF4(arg0);
    }
}
