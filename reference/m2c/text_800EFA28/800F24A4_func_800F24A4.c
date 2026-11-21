/* m2c reference for func_800F24A4 @ 800F24A4 (121 words). Generated; not compiled or validated. */
void func_800F24A4(void) {
    s32 *temp_s7_2;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v1;
    u16 var_s3;
    u16 var_s4;
    u16 var_s5;
    u8 var_s4_2;
    u8 var_s4_3;
    u8 var_s5_2;
    u8 var_s5_3;
    u8 var_v1;
    u8 var_v1_2;
    u8 var_v1_3;
    u8 var_v1_4;

    temp_v1 = M2C_ERROR(/* Read from unset register $t0 */)->unk84;
    temp_s7 = saved_reg_s1 & 0x80;
    if (M2C_ERROR(/* Read from unset register $v0 */) == 1) {
        if (temp_s7 == 0) {
            var_s3 = M2C_ERROR(/* Read from unset register $t7 */)->unk4;
            var_s5 = M2C_ERROR(/* Read from unset register $t7 */)->unk10;
            var_s4 = M2C_ERROR(/* Read from unset register $t8 */)->unk4;
            if (saved_reg_s2 != 0) {
                var_s4 = M2C_ERROR(/* Read from unset register $t8 */)->unk10;
            }
        } else if (temp_v1 == 3) {
            var_s3 = M2C_ERROR(/* Read from unset register $t0 */)->unk20;
            var_s5 = M2C_ERROR(/* Read from unset register $t0 */)->unk22;
            var_s4 = M2C_ERROR(/* Read from unset register $t0 */)->unk26;
            if (saved_reg_s2 != 0) {
                var_s4 = M2C_ERROR(/* Read from unset register $t0 */)->unk24;
            }
        } else if (1 == 0) {
            var_s3 = (M2C_ERROR(/* Read from unset register $t7 */)->unk5 << 8) | M2C_ERROR(/* Read from unset register $t0 */)->unk20;
            var_s5 = (M2C_ERROR(/* Read from unset register $t7 */)->unk11 << 8) | M2C_ERROR(/* Read from unset register $t0 */)->unk22;
            var_s4_2 = M2C_ERROR(/* Read from unset register $t8 */)->unk5;
            var_v1 = M2C_ERROR(/* Read from unset register $t0 */)->unk26;
            if (saved_reg_s2 != 0) {
                var_s4_2 = M2C_ERROR(/* Read from unset register $t8 */)->unk11;
                var_v1 = M2C_ERROR(/* Read from unset register $t0 */)->unk24;
            }
            var_s4 = (var_s4_2 << 8) | var_v1;
        } else {
            var_s3 = (u16) M2C_ERROR(/* Read from unset register $t7 */)->unk10;
            var_s5 = (M2C_ERROR(/* Read from unset register $t0 */)->unk23 << 8) | M2C_ERROR(/* Read from unset register $t7 */)->unk4;
            var_s4_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk27;
            var_v1_2 = M2C_ERROR(/* Read from unset register $t8 */)->unk4;
            if (saved_reg_s2 != 0) {
                var_s4_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk25;
                var_v1_2 = M2C_ERROR(/* Read from unset register $t8 */)->unk10;
            }
            var_s4 = (var_s4_3 << 8) | var_v1_2;
        }
    } else if (temp_s7 == 0) {
        var_s3 = M2C_ERROR(/* Read from unset register $t8 */)->unk4;
        var_s4 = M2C_ERROR(/* Read from unset register $t8 */)->unk10;
        var_s5 = M2C_ERROR(/* Read from unset register $t7 */)->unk10;
        if (saved_reg_s2 != 0) {
            var_s5 = M2C_ERROR(/* Read from unset register $t7 */)->unk4;
        }
    } else if (temp_v1 == 3) {
        var_s3 = M2C_ERROR(/* Read from unset register $t0 */)->unk26;
        var_s4 = M2C_ERROR(/* Read from unset register $t0 */)->unk24;
        var_s5 = M2C_ERROR(/* Read from unset register $t0 */)->unk22;
        if (saved_reg_s2 != 0) {
            var_s5 = M2C_ERROR(/* Read from unset register $t0 */)->unk20;
        }
    } else if (1 == 0) {
        var_s4 = (u16) M2C_ERROR(/* Read from unset register $t8 */)->unk11;
        var_s3 = (((M2C_ERROR(/* Read from unset register $t8 */)->unk5 << 8) | M2C_ERROR(/* Read from unset register $t0 */)->unk26) << 8) | M2C_ERROR(/* Read from unset register $t0 */)->unk24;
        var_s5_2 = M2C_ERROR(/* Read from unset register $t7 */)->unk11;
        var_v1_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk22;
        if (saved_reg_s2 != 0) {
            var_s5_2 = M2C_ERROR(/* Read from unset register $t7 */)->unk5;
            var_v1_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk20;
        }
        var_s5 = (var_s5_2 << 8) | var_v1_3;
    } else {
        var_s4 = (u16) M2C_ERROR(/* Read from unset register $t0 */)->unk25;
        var_s3 = (((M2C_ERROR(/* Read from unset register $t0 */)->unk27 << 8) | M2C_ERROR(/* Read from unset register $t8 */)->unk4) << 8) | M2C_ERROR(/* Read from unset register $t8 */)->unk10;
        var_s5_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk23;
        var_v1_4 = M2C_ERROR(/* Read from unset register $t7 */)->unk10;
        if (saved_reg_s2 != 0) {
            var_s5_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk21;
            var_v1_4 = M2C_ERROR(/* Read from unset register $t7 */)->unk4;
        }
        var_s5 = (var_s5_3 << 8) | var_v1_4;
    }
    temp_v0 = M2C_ERROR(/* Read from unset register $t0 */)->unk90;
    M2C_ERROR(/* Read from unset register $t2 */)->unkC = (s32) (var_s3 | (M2C_ERROR(/* Read from unset register $t0 */)->unk46 << 0x10));
    temp_s7_2 = M2C_ERROR(/* Read from unset register $t2 */) + 0xC + temp_v0;
    *temp_s7_2 = var_s4 | (M2C_ERROR(/* Read from unset register $t0 */)->unk44 << 0x10);
    *(temp_s7_2 + temp_v0) = (s32) var_s5;
}
