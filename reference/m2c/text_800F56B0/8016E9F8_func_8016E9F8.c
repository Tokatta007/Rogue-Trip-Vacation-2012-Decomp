/* m2c reference for func_8016E9F8 @ 8016E9F8 (34 words). Generated; not compiled or validated. */
s32 func_8016E62C();                                /* extern */

void func_8016E9F8(void) {
    s32 temp_ret;
    s32 temp_s2;
    s32 var_v0;
    u32 var_v1;

    GTE_RT11RT12 = saved_reg_s5->unk0;
    GTE_RT13RT21 = saved_reg_s5->unk4;
    GTE_RT22RT23 = saved_reg_s5->unk8;
    GTE_RT31RT32 = saved_reg_s5->unkC;
    GTE_RT33 = saved_reg_s5->unk10;
    temp_ret = func_8016E62C();
    var_v0 = temp_ret;
    var_v1 = (u32) (u64) temp_ret;
    temp_s2 = M2C_ERROR(/* Read from unset register $a3 */) + saved_reg_fp;
    if (temp_s2 >= 0) {
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < (temp_s2 + ((u32) saved_reg_fp >> 2))) {
            if ((s32) var_v1 < 0) {
                var_v1 = (u32) -(s32) var_v1;
            }
            if ((s32) var_v1 >= (s32) ((u32) (temp_s2 * 3) >> 2)) {

            }
        }
    }
}
