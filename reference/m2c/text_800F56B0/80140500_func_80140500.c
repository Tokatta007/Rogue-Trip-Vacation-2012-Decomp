/* m2c reference for func_80140500 @ 80140500 (25 words). Generated; not compiled or validated. */
? func_8014002C(void *);                            /* extern */
? func_80140444(void *);                            /* extern */
s32 func_8015A000(s32);                             /* extern */

void func_80140500(void *arg0) {
    s8 var_a0;

    var_a0 = 8;
    arg0->unkB2 = (s8) (0x20 - func_8015A000(rand() & 0xFF));
    if (arg0->unkAF == 0x11) {
        var_a0 = 0x18;
    }
    arg0->unkB3 = var_a0;
    func_80140444(arg0);
    func_8014002C(arg0);
}
