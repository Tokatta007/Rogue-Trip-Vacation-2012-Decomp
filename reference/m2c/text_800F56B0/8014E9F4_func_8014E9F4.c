/* m2c reference for func_8014E9F4 @ 8014E9F4 (45 words). Generated; not compiled or validated. */
? func_8014EAA8(void *, void *);                    /* extern */

void func_8014E9F4(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;
    void *temp_a1;

    var_a0 = arg0->unk174C;
    if (var_a0 != -1) {
        var_v0 = var_a0 * 2;
        do {
            temp_v0 = (var_v0 + var_a0) * 4;
            temp_a1 = arg0 + (((temp_v0 + var_a0) * 8) + 0x10);
            temp_s0 = (arg0 + (temp_v0 + 0x10B8))->unk8;
            var_a0 = temp_s0;
            if ((temp_a1->unk20 == 6) && (temp_a1->unk1C == arg1)) {
                func_8014EAA8(arg0, temp_a1);
                var_a0 = temp_s0;
            }
            var_v0 = var_a0 * 2;
        } while (var_a0 != -1);
    }
}
