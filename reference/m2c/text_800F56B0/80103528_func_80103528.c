/* m2c reference for func_80103528 @ 80103528 (47 words). Generated; not compiled or validated. */
? func_801640EC(s32);                               /* extern */
s16 func_80178A1C();                                /* extern */

void func_80103528(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_v0;
    void *var_a0;

    if (arg1 < 2) {
        if (arg2 != 0) {
            var_a0 = arg0 + (arg1 * 2);
            var_v0 = var_a0->unk3E8 + (func_80178A1C() * 0x16);
        } else {
            var_a0 = arg0 + (arg1 * 2);
            var_v0 = var_a0->unk3E8 - (func_80178A1C() * 0x16);
        }
        var_a0->unk3E8 = var_v0;
        func_801640EC(arg0 + ((arg1 * 2) + 0x3E8));
    }
}
