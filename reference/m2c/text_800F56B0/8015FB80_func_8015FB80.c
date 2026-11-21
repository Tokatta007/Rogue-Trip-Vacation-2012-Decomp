/* m2c reference for func_8015FB80 @ 8015FB80 (65 words). Generated; not compiled or validated. */
? func_8015FC90(s32 *, s16);                        /* extern */

void func_8015FB80(s8 arg0, s16 arg1, s16 arg2) {
    s32 sp10;
    s16 sp20;
    s16 sp22;
    s16 sp2C;
    s16 sp2E;
    s16 var_a3;
    s16 var_t0;

    var_a3 = arg1;
    var_t0 = arg2;
    if ((arg0 << 0x18) == 0) {
        sp10 = 0xC0;
        if (arg1 >= 0x80) {
            var_a3 = 0x7F;
        }
        if (arg2 >= 0x80) {
            var_t0 = 0x7F;
        }
        sp20 = var_a3 * 0x102;
        sp22 = var_t0 * 0x102;
    }
    if (arg0 == 1) {
        sp10 = 0xC00;
        if (var_a3 >= 0x80) {
            var_a3 = 0x7F;
        }
        if (var_t0 >= 0x80) {
            var_t0 = 0x7F;
        }
        sp2C = var_a3 * 0x102;
        sp2E = var_t0 * 0x102;
    }
    func_8015FC90(&sp10, var_a3);
}
