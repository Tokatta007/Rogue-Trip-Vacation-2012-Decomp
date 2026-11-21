/* m2c reference for func_8011D5A0 @ 8011D5A0 (89 words). Generated; not compiled or validated. */
s32 func_8011BC6C(s32, s32 *, s32, s32, s32, s32);  /* extern */

void func_8011D5A0(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s1;

    temp_s3 = (arg2 * 2) + 1;
    var_s1 = arg9;
loop_1:
    sp18 = (rand() & temp_s3) - arg2;
    sp1C = (rand() & temp_s3) - arg2;
    sp20 = (rand() & ((arg3 * 2) + 1)) - arg3;
    temp_s0 = arg4 + (rand() & arg5);
    if (arg1 != NULL) {
        sp18 += arg1->unk0;
        sp1C += arg1->unk4;
        sp20 += arg1->unk8;
    }
    var_a3 = arg7;
    if ((rand() & 0xFF) < arg8) {
        var_a3 = arg6;
    }
    var_s1 -= 1;
    temp_v1 = func_8011BC6C(arg0, &sp18, temp_s0 & 0xFFFF, var_a3, 0, 0);
    if ((var_s1 != 0) && (temp_v1 != -1)) {
        goto loop_1;
    }
}
