/* m2c reference for func_8011AC14 @ 8011AC14 (116 words). Generated; not compiled or validated. */
? func_8016FD98(void *, void *, u32);               /* extern */
extern ? D_801C7030;

void func_8011AC14(void *arg0, void *arg1) {
    ? *var_s1;
    s32 var_s2;
    s32 var_s6;
    s32 var_s7;
    s32 var_v1;
    u32 temp_a2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *var_s3;

    var_v1 = 0;
    var_s6 = 0;
    var_s7 = 0;
    var_s1 = &D_801C7030;
loop_1:
    if ((var_s7 < 5) && (var_v1 == 0)) {
        if ((var_s1->unk103 == 0) && ((u32) (arg0->unk10->unk3 & 0x7F) >= 4U)) {
            var_s1->unk104 = (s32) arg1->unk0;
            temp_s0 = var_s1 + 0xD0;
            var_s1->unk108 = (s32) arg1->unk4;
            var_s1->unk10C = (s32) arg1->unk8;
            func_8016FD98(temp_s0, arg0->unk14, 9U);
            arg0->unk10->unk18 = temp_s0;
            arg0->unk10->unk4 = 3;
            var_s1->unk101 = 0;
            var_s1->unk102 = 0;
            var_s1->unk103 = 2U;
            var_s1->unkF4 = (void *) arg0->unk10;
            var_s3 = arg0->unk14->unkC;
            var_s2 = 0;
            var_s1->unkDC = var_s1;
loop_6:
            if (var_s2 < (s32) arg0->unk14->unk12) {
                temp_s0_2 = var_s1 + (var_s6 * 4);
                temp_a2 = (u8) var_s3->unk1 >> 4;
                func_8016FD98(temp_s0_2, var_s3, temp_a2);
                temp_v0 = temp_s0_2 + 0xC;
                if (var_s2 == arg0->unk14->unk2) {
                    var_s1->unkFA = (u16) temp_v0->unk2;
                    temp_v0->unk2 = (u16) var_s1->unkF8;
                }
                var_s6 += temp_a2;
                var_s2 += 1;
                var_s3 += ((u8) var_s3->unk1 >> 4) * 4;
                if (var_s2 < 4) {
                    goto loop_6;
                }
            }
            var_v1 = 1;
        }
        var_s1 += 0x110;
        var_s7 += 1;
        goto loop_1;
    }
}
