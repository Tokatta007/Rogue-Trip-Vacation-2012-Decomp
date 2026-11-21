/* m2c reference for func_8016BF3C @ 8016BF3C (74 words). Generated; not compiled or validated. */
s32 func_8016BDC0(u8);                              /* extern */
s32 func_8016C10C();                                /* extern */
extern ? D_801BC218;
extern ? D_801C38B4;
extern u8 D_801C38B8;

s32 func_8016BF3C(u8 arg0) {
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    u8 var_s0;
    void *temp_s2;
    void *var_v1_2;

    var_s0 = arg0;
    if (func_8016C10C() != 0) {
        var_v1 = var_s0 * 8;
        if (D_801C38B8 == 1) {
            var_s0 = *(var_s0 + &D_801C38B4);
            var_v1 = var_s0 * 8;
        }
        temp_s2 = ((var_v1 + var_s0) * 4) + &D_801BC218;
        var_s1 = 0;
        if (~((temp_s2->unk2 << 8) | temp_s2->unk3) & 0xFFFF) {
            goto block_4;
        }
        if ((func_8016BDC0(var_s0) == 5) || (func_8016BDC0(var_s0) == 7)) {
            var_s1 = 1;
        }
        if (var_s1 != 0) {
            var_a0 = 0;
            var_v1_2 = temp_s2;
loop_10:
            if ((0x80 - var_v1_2->unk4) >= 0) {
                var_v0 = 0x80 - var_v1_2->unk4;
            } else {
                var_v0 = var_v1_2->unk4 - 0x80;
            }
            var_a0 += 1;
            if (var_v0 < 0x79) {
                var_v1_2 = var_a0 + temp_s2;
                if (var_a0 >= 4) {
                    goto block_15;
                }
                goto loop_10;
            }
block_4:
            return 1;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return 0;
    }
block_15:
    return 0;
}
