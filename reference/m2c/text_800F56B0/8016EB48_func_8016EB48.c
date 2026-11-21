/* m2c reference for func_8016EB48 @ 8016EB48 (68 words). Generated; not compiled or validated. */
? func_8016DE54();                                  /* extern */

void func_8016EB48(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ? **var_v1;
    ? *temp_s6;
    ? *temp_s7;
    ? *temp_t1;
    ? *var_v0;
    s32 var_s5;

    temp_t1 = *(s32 **)0x1F800054;
    temp_t1->unk0 = saved_reg_s0;
    temp_t1->unk4 = (s32) saved_reg_s1;
    temp_t1->unk8 = (s32) saved_reg_s2;
    temp_t1->unkC = (s32) saved_reg_s3;
    temp_t1->unk10 = (s32) saved_reg_s4;
    temp_t1->unk14 = (s32) saved_reg_s5;
    temp_t1->unk18 = (s32) saved_reg_s6;
    temp_t1->unk1C = (s32) saved_reg_s7;
    temp_t1->unk20 = arg0;
    temp_t1->unk24 = arg1;
    temp_t1->unk28 = arg2;
    temp_t1->unk2C = arg3;
    *(s32 **)0x1F80007C = saved_reg_fp;
    *(s32 **)0x1F800080 = saved_reg_gp;
    *(s32 **)0x1F800084 = sp;
    temp_t1->unk3C = (s32) saved_reg_ra;
    *(s32 **)0x1F80003C = -1;
    *(s32 **)0x1F80003E = -1;
    *(s32 **)0x1F800040 = -1;
    *(s32 **)0x1F800042 = -1;
    *(s32 **)0x1F800014 = NULL;
    *(s32 **)0x1F80005C = NULL;
    if (arg0->unk0 != 0) {
        temp_s6 = *(s32 **)0x1F800018;
        var_s5 = 5;
        var_v0 = temp_s6;
        var_v1 = arg0 + 0x28;
loop_2:
        if (var_s5 > 0) {
            temp_s7 = *var_v1;
            var_v1 += 4;
            *var_v0 = temp_s7;
            var_s5 -= 1;
            var_v0 += 4;
            goto loop_2;
        }
        **(? **)0x1F800004 = temp_s6;
        func_8016DE54();
    }
}
