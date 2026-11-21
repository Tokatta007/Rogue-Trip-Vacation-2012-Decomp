/* m2c reference for func_8011BB04 @ 8011BB04 (90 words). Generated; not compiled or validated. */
? func_8011B93C(?, void *, s32);                    /* extern */
extern ? D_801834D8;

s32 func_8011BB04(void *arg0, ? arg1) {
    s32 temp_a3;
    s32 temp_t0;
    void *var_v0;

    temp_a3 = arg0->unk8 - arg0->unk18;
    if (temp_a3 < arg0->unk30) {
        temp_t0 = arg0->unk8 + arg0->unk18;
        if (arg0->unk30 >= temp_t0) {
            func_8011B93C(arg1, arg0, temp_a3);
            return 0;
        }
        arg0->unk28 = (s16) ((s32) (temp_t0 - arg0->unk30) >> 5);
        arg0->unk20 = (s16) ((s32) (arg0->unk8 + ((s32) (arg0->unk30 - temp_a3) >> 1)) >> 4);
        if (arg0->unk24 & 0x1000) {
            var_v0 = ((arg0->unk4F + arg0->unk46) * 0xC) + &D_801834D8;
        } else {
            var_v0 = (arg0->unk47 * 0xC) + &D_801834D8;
        }
        arg0->unk54 = (s8) ((s32) (var_v0->unk3 * (arg0->unk30 - temp_a3)) / (s32) (temp_t0 - temp_a3));
        return 1;
    }
    arg0->unk20 = (s16) ((s32) arg0->unk8 >> 4);
    arg0->unk28 = (s16) ((s32) arg0->unk18 >> 4);
    arg0->unk54 = 0;
    return 1;
}
