/* m2c reference for func_80146040 @ 80146040 (263 words). Generated; not compiled or validated. */
s32 func_80145FDC(void *);                          /* extern */
s32 func_8015959C(s32);                             /* extern */
? func_8016408C(s32 *, s32);                        /* extern */

void func_80146040(void *arg0) {
    s32 sp10;
    s32 temp_hi;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;

    if ((arg0->unkF4 == 0) || (arg0->unk7A4 < (arg0->unkC4 * 2))) {
        arg0->unk86 = 0;
    } else if (arg0->unk91 != 0) {
        if (arg0->unk1FC != 0) {
            arg0->unk20C = (s32) ((s32) (arg0->unk20C * func_8015959C(arg0->unk1FC)) >> 0xC);
            arg0->unk1FC = 0;
        }
    } else {
        sp10 = arg0->unk1F8 - arg0->unk204;
        func_8016408C(&sp10);
        var_s1 = sp10;
        if (sp10 < 0) {
            var_s1 = -var_s1;
        }
        if ((var_s1 >= 0x601) && (arg0->unk20C = (s32) -arg0->unk20C, arg0->unk204 = (s32) (arg0->unk204 + 0x800), func_8016408C(arg0 + 0x204), ((var_s1 < 0x601) == 0))) {
            var_v1 = 0;
            if ((arg0->unkAC != 0) || (arg0->unkAA != 0)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                var_s2 = arg0->unkEC * 2;
            } else {
                var_s2 = arg0->unkEC;
            }
        } else {
            var_s2 = (arg0->unkEC * var_s1) / 1422;
            var_v0 = 0;
            if (func_80145FDC(arg0) == 0) {
                if (var_s1 < 0xE3) {
                    var_v0_2 = arg0->unk7D4 * 4;
                    goto block_24;
                }
                var_v1_2 = 0;
                if (arg0->unk80 == 0) {
                    var_v1_2 = arg0->unkAA == 0;
                }
                if (var_v1_2 != 0) {
                    var_v0 = arg0->unk7D4;
                } else {
                    var_v0_2 = arg0->unk7D4 * 2;
block_24:
                    var_v0 = var_v0_2 + arg0->unk7D4;
                }
            }
            temp_hi = MULT_HI((var_v0 << 0xC), 0xB60B60B7);
            var_v1_3 = (var_v0 << 0xC) / 360;
            if (arg0->unkAA != 0) {
                var_v1_3 *= 2;
                if (arg0->unkAC != 0) {
                    var_v1_3 += var_v1_3 >> 1;
                }
            }
            if ((u32) (arg0->unkF4 - 1) < 0x63U) {
                var_v1_3 = (var_v1_3 * arg0->unkF4) / 100;
            }
            if (sp10 > 0) {
                arg0->unk204 = (s32) (arg0->unk204 + var_v1_3);
                func_8016408C(arg0 + 0x204, temp_hi);
                sp10 = arg0->unk1F8 - arg0->unk204;
                func_8016408C(&sp10);
                if (sp10 >= 0) {

                } else {
                    goto block_36;
                }
            } else if (sp10 < 0) {
                arg0->unk204 = (s32) (arg0->unk204 - var_v1_3);
                func_8016408C(arg0 + 0x204, temp_hi);
                sp10 = arg0->unk1F8 - arg0->unk204;
                func_8016408C(&sp10);
                if (sp10 > 0) {
block_36:
                    sp10 = 0;
                    arg0->unk204 = (s32) arg0->unk1F8;
                }
            }
            if (sp10 == 0) {
                arg0->unk86 = 0;
            }
        }
        if (arg0->unk537 != 0) {
            temp_v0 = arg0->unk450 - arg0->unk1F8;
            var_v1_4 = temp_v0;
            if (temp_v0 < 0) {
                var_v1_4 = -var_v1_4;
            }
            if (var_v1_4 >= 0x156) {
                var_s2 = var_s2 >> 2;
            } else {
                var_s2 -= (var_s2 * var_v1_4) / 341;
            }
        }
        if (arg0->unk20C > 0) {
            arg0->unk20C = (s32) (arg0->unk20C - var_s2);
            if (arg0->unk20C >= 0) {

            } else {
                goto block_50;
            }
        } else {
            arg0->unk20C = (s32) (arg0->unk20C + var_s2);
            if (arg0->unk20C > 0) {
block_50:
                arg0->unk20C = 0;
            }
        }
    }
    var_v0_3 = arg0->unk20C;
    if (var_v0_3 < 0) {
        var_v0_3 = -var_v0_3;
    }
    arg0->unk7A4 = var_v0_3;
}
