/* m2c reference for func_8011ADE4 @ 8011ADE4 (16 words). Generated; not compiled or validated. */
extern ? D_801C7030;

void func_8011ADE4(void) {
    ? *var_v1;
    s16 var_a1;
    s32 var_a0;

    var_a0 = 0;
    var_a1 = 0x3E80;
    var_v1 = &D_801C7030;
    do {
        var_v1->unkF8 = var_a1;
        var_a1 += 0x40;
        var_v1->unkFC = 0;
        var_v1->unkFE = (s16) (var_a0 + 0xFA);
        var_v1->unk103 = 0;
        var_a0 += 1;
        var_v1 += 0x110;
    } while (var_a0 < 5);
}
