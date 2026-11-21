/* m2c reference for func_800F8BF4 @ 800F8BF4 (306 words). Generated; not compiled or validated. */
? func_800F9108(void *);                            /* extern */
? func_800F96EC(void *);                            /* extern */
s32 func_800F992C(void *, s32 *);                   /* extern */
s32 func_8012430C(void *, void *, s32, s32);        /* extern */
s32 func_801244FC(void *, s32);                     /* extern */
s32 func_801250C8(void *, s32);                     /* extern */
s32 func_80125990(void *, void *);                  /* extern */
? func_8012AF9C(void *, s32, ?);                    /* extern */
s16 func_80178A1C();                                /* extern */
static void *D_801C34EC = NULL;

void func_800F8BF4(void *arg0) {
    s32 sp10;
    s32 temp_s0_2;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    void *temp_s0;
    void *temp_s0_3;

    arg0->unk8D0 = (s32) (arg0->unk8D0 + arg0->unk7D4);
    sp10 = -1;
    if (arg0->unk914 != 0) {
        var_v0 = 3;
        if (arg0->unk914 >= 0xB) {
            var_v0 = 2;
        }
        sp10 = var_v0;
        if ((sp10 != -1) && (*(arg0 + 0x2A7 + sp10) == 0)) {
            func_8012AF9C(arg0 + 0x264, sp10, 1);
        }
        arg0->unk914 = 0;
    } else {
        var_v1 = arg0->unk21C;
        if (var_v1 < 0) {
            var_v1 = -var_v1;
        }
        if (var_v1 < ((s32) arg0->unkE0 >> 1)) {
            if ((arg0->unk58 == 0xB) && (arg0->unk93A == 0)) {
                if (arg0->unk824 != 0) {
                    temp_s0 = D_801C34EC + ((D_801C34EC->unk12730 * 0x8B8) + 0xB788);
                    temp_s1 = (D_801C34EC + 0x10A64)->unk38 + 0x1C;
                    temp_s0_2 = func_801250C8(temp_s0 + 0x1E4, temp_s1);
                    if (temp_s0_2 < func_801250C8(temp_s0 + 0x220, temp_s1)) {
                        func_800F9108(arg0);
                    }
                }
            }
            sp10 = -1;
            arg0->unk82D = 0;
            if (arg0->unk828 != 0) {
                if (arg0->unk894 != 0) {
                    arg0->unk894 = 0;
                    temp_s0_3 = arg0 + 0x264;
                    if ((*(arg0 + 0x2A7 + arg0->unk894) << 0x18) <= 0) {
                        func_8012AF9C(temp_s0_3, arg0->unk894, 1);
                    }
                    temp_s0_3->unk41 = (s8) arg0->unk894;
                }
            } else {
                if ((func_800F992C(arg0, &sp10) == 0) && (arg0->unk8AC < (arg0 + 0x264)->unk20)) {
                    func_800F96EC(arg0);
                }
                if (func_80125990(D_801C34EC, arg0) != 0) {
                    func_800F9108(arg0);
                }
                var_v1_2 = 0;
                if (arg0->unk78C < 0xC80) {
                    var_v1_2 = arg0->unk58 >= 0x11;
                }
                if (var_v1_2 != 0) {
                    var_v0_2 = arg0->unk86C;
                    if (var_v0_2 < 0) {
                        var_v0_2 = -var_v0_2;
                    }
                    if (var_v0_2 < arg0->unk880) {
                        func_800F9108(arg0);
                    }
                }
            }
        }
    }
    if ((sp10 != -1) && (*(arg0 + 0x2A7 + sp10) != 0)) {
        (arg0 + 0x264)->unk41 = (u8) sp10;
        arg0->unkB8 = 1;
        switch (sp10) {                             /* irregular */
        case 5:
        case 7:
            temp_s0_4 = func_801244FC(D_801C34EC, arg0->unk884);
            arg0->unk78C = func_8012430C(D_801C34EC, arg0, temp_s0_4, (func_80178A1C() * 0x4C2C) / 1000);
            if (arg0->unk78C >= 0x12C1) {
                arg0->unk280 = 0x28;
            } else {
                arg0->unk280 = (s32) (arg0->unk78C / 120);
            }
            break;
        case 0:
            var_v1_3 = 0;
            if (arg0->unkBA != 0) {
                var_v1_3 = arg0->unk955 == 0;
            }
            if (var_v1_3 != 0) {
                arg0->unkB8 = 0;
            }
            break;
        }
        arg0->unk93B = 0;
        if ((arg0->unk7C0 >= 0xD0) && ((s8) arg0->unk2A7 < 4)) {
            func_8012AF9C(arg0 + 0x264, 0, 2);
        }
    }
    var_v1_4 = 0;
    if ((arg0->unk94A != 0) && (arg0->unk70 != 0)) {
        var_v1_4 = arg0->unk8D0 >= 0x4B1;
    }
    if ((var_v1_4 != 0) && (arg0->unk78C < (s16) arg0->unk830)) {
        temp_v0 = func_801244FC(D_801C34EC, arg0->unk884);
        if (temp_v0 != 0) {
            arg0->unk934 = 1;
            arg0->unk854 = temp_v0;
            arg0->unk93C = 0;
            arg0->unk8CC = 0;
            arg0->unk89C = 0x1A4;
            arg0->unk8C4 = 0;
            arg0->unk8C8 = (s32) (D_801C34EC->unk7D4 * 2);
        }
    }
}
