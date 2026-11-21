/* m2c reference for func_8017D4E8 @ 8017D4E8 (19 words). Generated; not compiled or validated. */
? func_80171998(s32, ?);                            /* extern */
? func_8017DD9C(s32);                               /* extern */
? func_8017DDC8();                                  /* extern */
static s32 D_801C34E8 = 0;

void func_8017D4E8(void) {
    s32 var_s0;

    func_8017DDC8();
    var_s0 = 0;
    do {
        func_8017DD9C(var_s0);
        var_s0 += 1;
    } while (var_s0 < 0x18);
    func_80171998(D_801C34E8, -1);
}
