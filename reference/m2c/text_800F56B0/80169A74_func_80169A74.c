/* m2c reference for func_80169A74 @ 80169A74 (38 words). Generated; not compiled or validated. */
? func_8016939C(?, ?, ?);                           /* extern */

void func_80169A74(void) {
    s32 temp_s3;
    s32 var_s5;
    void **var_s6;
    void *temp_a2;

    var_s5 = saved_reg_s5;
    var_s6 = saved_reg_s6;
loop_1:
    if (var_s5 > 0) {
        temp_a2 = *var_s6;
        GTE_RT11RT12 = temp_a2->unk0;
        GTE_RT13RT21 = temp_a2->unk4;
        GTE_RT22RT23 = temp_a2->unk8;
        GTE_RT31RT32 = temp_a2->unkC;
        GTE_RT33 = temp_a2->unk10;
        func_8016939C(M2C_ERROR(/* Read from unset register $v0 */), M2C_ERROR(/* Read from unset register $v1 */), M2C_ERROR(/* Read from unset register $a3 */));
        var_s5 -= 1;
        var_s6 += 4;
        goto loop_1;
    }
    temp_s3 = (M2C_ERROR(/* Read from unset register $t4 */) & 0xF) - saved_reg_s0->unk12;
    if (temp_s3 < 0) {
        return;
    }
    if (temp_s3 > 0) {

    }
}
