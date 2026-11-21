/* m2c reference for func_80130430 @ 80130430 (341 words). Generated; not compiled or validated. */
? func_8010B62C(s32, ?, ?);                         /* extern */
? func_801110B0(s32);                               /* extern */
? func_80111528(s32);                               /* extern */
? func_80111AC4(s32);                               /* extern */
? func_80111EC4(s32);                               /* extern */
? func_801122A0(s32, void *);                       /* extern */
? func_801122D0(void *, s32);                       /* extern */
? func_80112308(void *);                            /* extern */
? func_80112338(void *, s32, ?);                    /* extern */
? func_8011FE34(s32, s32, u8);                      /* extern */
? func_8012BCB0(void *, ?);                         /* extern */
? func_8012BFD0(void *, s32);                       /* extern */
? func_80130C14(void *, u8);                        /* extern */
? func_80147934(void *, s32, ?);                    /* extern */
static s32 D_801C34EC = 0;

void func_80130430(void *arg0) {
    ? var_a1_2;
    ? var_a1_3;
    ? var_a1_4;
    ? var_a1_5;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a1_6;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    void *temp_a0_2;
    void *var_a0;
    void *var_a1;
    void *var_v0;

    temp_s0 = arg0 + 0x830;
    func_801110B0(temp_s0);
    func_80111528(temp_s0);
    func_80111AC4(temp_s0);
    func_80111EC4(temp_s0);
    temp_v1 = arg0->unk830;
    if (temp_v1 != -1) {
        var_a1 = (void *)1;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_a1 = arg0 + 0x264;
            var_a0 = arg0 + 0x830;
            if (var_a1->unk28 >= 0x14E) {
                arg0->unk8B = 1;
                arg0->unk192 = 0xF0;
                var_a1->unk42 = 0x33;
                arg0->unkB8 = 1;
block_18:
                func_801122A0(temp_s0, var_a1);
                goto block_19;
            }
            break;
        case 1:                                     /* switch 1 */
            (arg0 + 0x264)->unk42 = 0x34;
            arg0->unkB8 = 1;
            goto block_18;
        case 2:                                     /* switch 1 */
            (arg0 + 0x264)->unk42 = 0x35;
            arg0->unkB8 = 1;
            goto block_18;
        case 3:                                     /* switch 1 */
            (arg0 + 0x264)->unk42 = 0x35;
            arg0->unkB8 = 1;
            arg0->unkBA = 1;
            goto block_18;
        case 4:                                     /* switch 1 */
            (arg0 + 0x264)->unk42 = 0x36;
            arg0->unkB8 = 1;
            goto block_18;
        case 5:                                     /* switch 1 */
            if (arg0->unk91 == 0) {
                arg0->unk97 = 1;
                arg0->unk99 = 1;
            }
            goto block_18;
        default:                                    /* switch 1 */
            var_a0 = arg0 + 0x830;
            if (temp_v1 == 6) {
                if (arg0->unk91 == 0) {
                    arg0->unk97 = 1;
                    arg0->unk99 = 0;
                }
                goto block_18;
            }
            break;
        }
    } else {
block_19:
        var_a0 = arg0 + 0x830;
    }
    temp_v1_2 = var_a0->unk4;
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        arg0->unk19D = (u8) (arg0->unk19D ^ 1);
        func_801122D0(var_a0, temp_v1_2);
        func_8011FE34(D_801C34EC, arg0->unk7D0, arg0->unk19D);
        var_a1_2 = 0x3C;
        if (arg0->unk19D != 0) {
            var_a1_2 = 0x37;
        }
        func_8010B62C(D_801C34EC + 0x6220, var_a1_2, 1);
        var_v0 = arg0 + 0x830;
        break;
    case 0:                                         /* switch 2 */
        arg0->unk19E = (u8) (arg0->unk19E ^ 1);
        func_801122D0(var_a0, temp_v1_2);
        temp_a1 = arg0->unk19E;
        temp_a0 = arg0->unk7D0;
        (D_801C34EC + temp_a0)->unk127B6 = (s8) (temp_a1 == 0);
        ((temp_a0 * 0x8B8) + D_801C34EC + 0xB788)->unk19E = (s8) (temp_a1 != 0);
        var_a1_3 = 0x38;
        if (arg0->unk19E != 0) {
            var_a1_3 = 0x3D;
        }
        func_8010B62C(D_801C34EC + 0x6220, var_a1_3, 1);
block_38:
        func_80130C14(arg0);
    case -1:                                        /* switch 2 */
        var_v0 = arg0 + 0x830;
        break;
    case 1:                                         /* switch 2 */
        arg0->unk19F = (u8) (arg0->unk19F ^ 1);
        if (arg0->unk19F != 0) {
            func_8012BCB0(arg0 + 0x264, -1);
            var_a1_4 = 0x39;
        } else {
            func_8012BFD0(arg0 + 0x264, temp_v1_2);
            var_a1_4 = 0x3E;
        }
        func_8010B62C(D_801C34EC + 0x6220, var_a1_4, 1);
        func_801122D0(arg0 + 0x830);
        temp_a1_2 = arg0->unk7D0;
        temp_a2 = arg0->unk19F;
        (D_801C34EC + temp_a1_2)->unk127BA = temp_a2;
        ((temp_a1_2 * 0x8B8) + D_801C34EC + 0xB788)->unk19F = temp_a2;
        goto block_38;
    default:                                        /* switch 2 */
        var_v0 = arg0 + 0x830;
        if (temp_v1_2 == 2) {
            arg0->unk1A1 = (u8) (arg0->unk1A1 ^ 1);
            var_a1_5 = 0x3F;
            if (arg0->unk1A1 != 0) {
                var_a1_5 = 0x3A;
            }
            func_8010B62C(D_801C34EC + 0x6220, var_a1_5, 1);
            func_801122D0(arg0 + 0x830);
            temp_a1_3 = arg0->unk7D0;
            temp_a2_2 = arg0->unk1A1;
            (D_801C34EC + temp_a1_3)->unk127C2 = temp_a2_2;
            ((temp_a1_3 * 0x8B8) + D_801C34EC + 0xB788)->unk1A1 = temp_a2_2;
            goto block_38;
        }
        break;
    }
    temp_v1_3 = var_v0->unk8;
    switch (temp_v1_3) {                            /* switch 3; irregular */
    case -1:                                        /* switch 3 */
        break;
    case 0:                                         /* switch 3 */
        arg0->unk10C = (s32) arg0->unk110;
    default:                                        /* switch 3 */
block_45:
        func_80112308(arg0 + 0x830);
        func_80130C14(arg0);
        break;
    case 1:                                         /* switch 3 */
        arg0->unk7DC = (s32) (arg0->unk7DC + 0x2710);
        func_8010B62C(D_801C34EC + 0x6220, 0x3B, 1);
        goto block_45;
    }
    temp_a0_2 = arg0 + 0x830;
    temp_v1_4 = temp_a0_2->unkC;
    switch (temp_v1_4) {                            /* switch 4; irregular */
    case -1:                                        /* switch 4 */
        break;
    case 1:                                         /* switch 4 */
        arg0->unk1A0 = (u8) (arg0->unk1A0 ^ 1);
        func_80112338(temp_a0_2, temp_v1_4, 1);
        var_a1_6 = arg0->unk7D0;
        temp_a2_3 = arg0->unk1A0;
        (D_801C34EC + var_a1_6)->unk127BE = temp_a2_3;
        ((var_a1_6 * 0x8B8) + D_801C34EC + 0xB788)->unk1A0 = temp_a2_3;
block_54:
        func_80130C14(arg0, (u8) var_a1_6);
        break;
    case 0:                                         /* switch 4 */
        if (arg0->unk1A2 != 0) {
            arg0->unk1A2 = 0U;
            arg0->unk1A3 = 0;
        } else {
            arg0->unk1A2 = 0x21U;
            arg0->unk1A3 = 1;
        }
        func_80147934(arg0, temp_v1_4, 1);
        func_80112338(arg0 + 0x830);
        var_a1_6 = (s32) arg0->unk1A2;
        (D_801C34EC + arg0->unk7D0)->unk127C6 = (s8) var_a1_6;
        goto block_54;
    }
}
