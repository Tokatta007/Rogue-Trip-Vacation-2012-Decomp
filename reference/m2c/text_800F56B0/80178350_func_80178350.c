/* m2c reference for func_80178350 @ 80178350 (86 words). Generated; not compiled or validated. */
? func_80177B1C(s32, void *, u32, s32, s32);        /* extern */

void func_80178350(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_v1;
    u32 temp_s3;
    void *var_s0;

    temp_v1 = (s32) (arg0->unk4 - arg1->unk4) >> arg1->unk14;
    temp_a0 = (s32) (arg0->unk8 - arg1->unk8) >> arg1->unk14;
    temp_a1 = (s32) (arg0->unkC - arg1->unkC) >> arg1->unk14;
    var_s1 = 0;
    var_a0 = 1;
    temp_s3 = (temp_v1 * temp_v1) + (temp_a0 * temp_a0) + (temp_a1 * temp_a1);
    if (arg0->unk3 & 0x7F) {
        var_s0 = arg0;
loop_2:
        if (var_a0 != 0) {
            var_v1 = 0;
            if (temp_s3 >= (u32) var_s0->unk14) {
                var_v1 = temp_s3 < (u32) var_s0->unk10;
            }
            if (var_v1 != 0) {
                func_80177B1C(var_s0->unk18, arg1 + 4, (u16) arg1->unk10 >> 4, arg1->unk12 & 0xFF, arg1->unk14);
                var_a0 = 0;
            }
            var_s0 += 0xC;
            var_s1 += 1;
            if (var_s1 < (arg0->unk3 & 0x7F)) {
                goto loop_2;
            }
        }
    }
}
