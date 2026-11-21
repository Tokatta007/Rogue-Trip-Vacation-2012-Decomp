/* m2c reference for func_80138788 @ 80138788 (26 words). Generated; not compiled or validated. */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80167020(?, ?, ?, ?);                        /* extern */
? func_80167104(?);                                 /* extern */

void func_80138788(s32 arg0, ? arg1) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 > 0) {
        do {
            func_8015C008(0);
            func_8015EBDC(0);
            func_80167104(0);
            func_80167020(0, 0xA0, 0x28, arg1);
            var_s0 -= 1;
        } while (var_s0 > 0);
    }
}
