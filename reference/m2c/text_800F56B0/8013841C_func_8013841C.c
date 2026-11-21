/* m2c reference for func_8013841C @ 8013841C (30 words). Generated; not compiled or validated. */
? func_80166D2C();                                  /* extern */

void func_8013841C(void *arg0, void **arg2) {
    s32 temp_a1;
    s32 var_v1;
    u32 *temp_s0_2;
    u32 var_a0;
    void **var_a2;
    void *temp_s0;
    void *var_s0;

    func_80166D2C();
    temp_s0 = arg0 + 0xC;
    temp_a1 = arg0->unkC;
    var_v1 = 0;
    var_a0 = temp_s0->unk4;
    var_s0 = temp_s0 + 4 + 4;
    if (temp_a1 > 0) {
        var_a2 = arg2;
        do {
            *var_a2 = var_s0;
            temp_s0_2 = var_s0 + ((var_a0 >> 2) * 4);
            var_a2 += 4;
            var_v1 += 1;
            var_a0 = *temp_s0_2;
            var_s0 = temp_s0_2 + 4;
        } while (var_v1 < temp_a1);
    }
}
