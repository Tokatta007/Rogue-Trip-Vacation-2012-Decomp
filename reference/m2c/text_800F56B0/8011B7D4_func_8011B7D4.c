/* m2c reference for func_8011B7D4 @ 8011B7D4 (66 words). Generated; not compiled or validated. */
s32 func_8011BC6C(void *, s32 *, s32, ?, s32, s32); /* extern */
? func_8011D3A4(s32, s32);                          /* extern */
s32 func_8015A000(s32);                             /* extern */

void func_8011B7D4(void *arg0, s32 arg1, ? arg2) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;

    temp_v0 = func_8015A000(arg1 & 0xFFFF);
    var_s0 = arg1 * 2;
    var_s3 = 0xE;
    var_s2 = 8;
    sp20 = (var_s0 & 0xFFFF) * 2;
    temp_s1 = (1 << (0x1F - temp_v0)) - 1;
    temp_s4 = temp_s1 >> 1;
loop_1:
    if (sp20 > 0) {
        var_s2 -= 1;
        sp18 = (rand() & temp_s1) - temp_s4;
        temp_a2 = var_s0 & 0xFFFF;
        var_s0 += 0x10;
        sp1C = (rand() & temp_s1) - temp_s4;
        func_8011D3A4(func_8011BC6C(arg0, &sp18, temp_a2, arg2, arg0->unk8, 0), var_s3);
        var_s3 += 4;
        sp20 -= 4;
        if (var_s2 != 0) {
            goto loop_1;
        }
    }
}
