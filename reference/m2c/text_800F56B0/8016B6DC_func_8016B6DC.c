/* m2c reference for func_8016B6DC @ 8016B6DC (183 words). Generated; not compiled or validated. */
s32 func_8016B9B8(s32, u8);                         /* extern */
s32 func_8016BDC0(u8);                              /* extern */
s32 func_8016C10C(u8);                              /* extern */
extern ? D_801BC218;
extern ? D_801C38B4;
extern u8 D_801C38B8;
extern ? D_801C38CC;
extern s32 D_801C38D4;
extern ? D_801F3208;
extern ? D_801F3298;

s32 func_8016B6DC(s32 arg0, u8 arg1) {
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 var_s1;
    void *temp_v1;

    var_s0 = arg0;
    var_s1 = arg1;
    if (var_s1 == 5) {
        if ((func_8016B6DC(0) & 0xFF) || (func_8016B6DC(var_s0, 1U) & 0xFF)) {
            return 1;
        }
        /* Duplicate return node #53. Try simplifying control flow for better match */
        return 0;
    }
    if (D_801C38D4 != 0) {
        if (func_8016C10C(var_s1) != 0) {
            if (D_801C38B8 == 1) {
                var_s1 = *(var_s1 + &D_801C38B4);
            }
            if (D_801C38B8 == 0) {
                if (*((var_s1 * 4) + &D_801C38CC) == 0) {
                    var_s2 = 0;
                    if ((func_8016BDC0(var_s1) == 5) || (func_8016BDC0(var_s1) == 7)) {
                        var_s2 = 1;
                    }
                    var_v0 = var_s1 * 8;
                    if (var_s2 != 0) {
                        var_v0_2 = var_s1 * 4;
                        if (func_8016B9B8(var_s0, var_s1) != 0) {
                            goto block_50;
                        }
                        goto block_46;
                    }
                    goto block_47;
                }
                /* Duplicate return node #53. Try simplifying control flow for better match */
                return 0;
            }
            if (*((var_s1 * 4) + &D_801F3298) != 0) {
                var_a2 = -1;
                switch (var_s0) {                   /* irregular */
                case 0x1:
                    var_a2 = 0;
                    break;
                case 0x2:
                    var_a2 = 1;
                    break;
                case 0x4:
                    var_a2 = 2;
                    break;
                case 0x8:
                    var_a2 = 3;
                    break;
                case 0x10:
                    var_a2 = 4;
                    break;
                case 0x20:
                    var_a2 = 5;
                    break;
                case 0x40:
                    var_a2 = 6;
                    break;
                case 0x80:
                    var_a2 = 7;
                    break;
                }
                var_v1 = 0;
                if (var_a2 >= 0) {
                    var_a1 = 1;
                    var_a0 = var_s1 * 0x24;
loop_42:
                    if (var_a1 != 0) {
                        if (*(var_a0 + &D_801F3208) == var_a2) {
                            var_s0 = 1 << var_v1;
                            var_a1 = 0;
                        }
                        var_v1 += 1;
                        var_a0 += 4;
                        if (var_v1 < 8) {
                            goto loop_42;
                        }
                    }
                }
            }
block_46:
            var_v0 = var_s1 * 8;
block_47:
            temp_v1 = ((var_v0 + var_s1) * 4) + &D_801BC218;
            if ((temp_v1->unk0 == 0) && (~((temp_v1->unk2 << 8) | temp_v1->unk3) & var_s0)) {
                var_v0_2 = var_s1 * 4;
                if (D_801C38B8 == 0) {
block_50:
                    *(var_v0_2 + &D_801C38CC) = 1;
                }
                return 1;
            }
            /* Duplicate return node #53. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #53. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
