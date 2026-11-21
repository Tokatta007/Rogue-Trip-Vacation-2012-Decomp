/* m2c reference for func_8016EE30 @ 8016EE30 (100 words). Generated; not compiled or validated. */
s16 func_801594CC(s32, s16);                        /* extern */
s32 func_8015959C(s32);                             /* extern */
extern ? D_801F37C8;

void func_8016EE30(s32 arg0, s32 arg1, s16 arg2, s16 arg3) {
    s16 temp_s0;
    s16 temp_v0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s5;
    s32 var_s0;
    s32 var_s0_2;
    void *temp_v1;
    void *temp_v1_2;

    if ((arg0 < 5) && (arg1 < 3)) {
        temp_s5 = arg0 * 0x70;
        temp_v1 = (arg1 * 0xC) + temp_s5 + &D_801F37C8;
        temp_v1->unk4C = (s32) arg3;
        temp_v1->unk50 = 0;
        temp_v1->unk54 = (s32) arg2;
        temp_s3 = (arg2 << 0xC) / 360;
        temp_s0 = func_801594CC(temp_s3, arg2);
        temp_s1 = (arg3 << 0xC) / 360;
        var_s0 = -(temp_s0 * func_8015959C(temp_s1));
        if (var_s0 < 0) {
            var_s0 += 0xFFF;
        }
        temp_s0_2 = func_8015959C(temp_s3);
        var_s0_2 = -(temp_s0_2 * func_8015959C(temp_s1));
        if (var_s0_2 < 0) {
            var_s0_2 += 0xFFF;
        }
        temp_v1_2 = (arg1 * 6) + temp_s5 + &D_801F37C8;
        temp_v0 = -func_801594CC((arg3 * -0x1000) / 360);
        temp_v1_2->unk2C = (s16) -(var_s0 >> 0xC);
        temp_v1_2->unk2E = (s16) -(var_s0_2 >> 0xC);
        temp_v1_2->unk30 = temp_v0;
    }
}
