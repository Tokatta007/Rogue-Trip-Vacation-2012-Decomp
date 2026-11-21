/* m2c reference for func_8012BD80 @ 8012BD80 (130 words). Generated; not compiled or validated. */
void func_8012BD80(void **arg0, u32 arg1, void *arg2) {
    s32 temp_v1;
    s32 var_v0;
    u16 var_v0_2;

    arg2->unk0 = 0x960U;
    arg2->unk2 = 0x50;
    arg2->unk4 = 0x71U;
    arg2->unk6 = 0;
    arg2->unk8 = 0;
    var_v0 = arg1 < 8U;
    if ((arg0 + arg1)->unk4C != 0) {
        arg2->unk0 = (u16) ((s32) (arg2->unk0 << 0x10) >> 0x11);
        arg2->unk4 = (u16) ((s32) (arg2->unk4 << 0x10) >> 0x11);
        var_v0 = arg1 < 8U;
    }
    if (var_v0 != 0) {
        switch (arg1) {                             /* switch 1 */
        case 1:                                     /* switch 1 */
        case 3:                                     /* switch 1 */
            arg2->unk0 = (u16) (arg2->unk0 * 2);
            arg2->unk4 = (u16) (arg2->unk4 * 2);
            break;
        case 4:                                     /* switch 1 */
            arg2->unk0 = 0x280U;
            arg2->unk2 = 0xF0;
            return;
        case 5:                                     /* switch 1 */
            arg2->unk0 = 0xC80U;
            arg2->unk2 = 0x280;
            if ((arg0 + arg1)->unk4C == 0) {
                arg2->unk4 = 0x11CU;
                return;
            }
            break;
        case 7:                                     /* switch 1 */
            if ((arg0 + arg1)->unk4C != 0) {
                arg2->unk0 = 0xC80U;
                arg2->unk2 = 0x7D0;
                return;
            }
            arg2->unk0 = 0x15E0U;
            arg2->unk2 = 0x4B0;
            /* Duplicate return node #8. Try simplifying control flow for better match */
            arg2->unk4 = 0x11CU;
            return;
        case 0:                                     /* switch 1 */
            temp_v1 = (*arg0)->unk7C0;
            if (temp_v1 != 0x50) {
                if (temp_v1 < 0x51) {
                    switch (temp_v1) {              /* switch 2; irregular */
                    default:                        /* switch 2 */
                        var_v0_2 = 0x230;
                        if (temp_v1 != 0x10) {
                            return;
                        }
                        /* Duplicate return node #27. Try simplifying control flow for better match */
                        arg2->unk0 = var_v0_2;
                        arg2->unk4 = 0x2AAU;
                        return;
                    case 32:                        /* switch 2 */
                        arg2->unk0 = 0xC80U;
                        return;
                    case 48:                        /* switch 2 */
                        arg2->unk0 = 0x578U;
                        return;
                    }
                } else {
                    if (temp_v1 != 0x90) {
                        if (temp_v1 < 0x91) {
                            var_v0_2 = 0x708;
                            if (temp_v1 != 0x60) {
                                return;
                            }
                            /* Duplicate return node #27. Try simplifying control flow for better match */
                            arg2->unk0 = var_v0_2;
                            arg2->unk4 = 0x2AAU;
                            return;
                        }
                        var_v0_2 = 0x320;
                        if (temp_v1 != 0xA0) {
                            return;
                        }
                        /* Duplicate return node #27. Try simplifying control flow for better match */
                        arg2->unk0 = var_v0_2;
                        arg2->unk4 = 0x2AAU;
                        return;
                    }
                    arg2->unk0 = 0U;
                    arg2->unk2 = 0;
                    return;
                }
            } else {
                var_v0_2 = 0x4B0;
                arg2->unk0 = var_v0_2;
                arg2->unk4 = 0x2AAU;
                return;
            }
            break;
        }
    }
}
