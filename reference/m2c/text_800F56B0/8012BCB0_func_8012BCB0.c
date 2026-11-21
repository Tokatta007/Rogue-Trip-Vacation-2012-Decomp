/* m2c reference for func_8012BCB0 @ 8012BCB0 (28 words). Generated; not compiled or validated. */
? func_8012BD20(void *, s32, s8);                   /* extern */

void func_8012BCB0(void *arg0, s8 arg1) {
    s32 var_s0;

    if (arg1 == -1) {
        arg0->unk28 = 0x3E8;
    }
    var_s0 = 0;
    do {
        func_8012BD20(arg0, var_s0, arg1);
        var_s0 += 1;
    } while (var_s0 < 9);
}
