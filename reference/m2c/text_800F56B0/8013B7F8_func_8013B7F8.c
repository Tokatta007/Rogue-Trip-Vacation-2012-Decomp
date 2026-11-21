/* m2c reference for func_8013B7F8 @ 8013B7F8 (45 words). Generated; not compiled or validated. */
s8 func_8013B6F8(u8);                               /* extern */

void func_8013B7F8(u32 arg0, u8 *arg1) {
    s8 temp_v0;
    u32 temp_s2;
    u32 var_s0;
    u8 *var_s1;
    u8 temp_a0;

    var_s1 = arg1;
    if ((arg0 != 0) && (var_s1 != NULL)) {
        var_s0 = arg0;
        if (*var_s1 != 0) {
            temp_s2 = var_s0 + 0x40;
loop_4:
            if (var_s0 < temp_s2) {
                temp_a0 = *var_s1;
                var_s1 += 1;
                temp_v0 = func_8013B6F8(temp_a0);
                var_s0->unk0 = (s8) ((u32) (temp_v0 & 0xFFFF) >> 8);
                var_s0->unk1 = temp_v0;
                var_s0 = var_s0 + 1 + 1;
                if (*var_s1 == 0) {
                    goto block_6;
                }
                goto loop_4;
            }
        } else {
block_6:
            if (var_s0 < (u32) (arg0 + 0x40)) {
                var_s0->unk0 = 0;
                var_s0->unk1 = 0;
            }
        }
    }
}
