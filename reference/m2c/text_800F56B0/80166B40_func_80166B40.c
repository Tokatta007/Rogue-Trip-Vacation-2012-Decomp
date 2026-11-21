/* m2c reference for func_80166B40 @ 80166B40 (30 words). Generated; not compiled or validated. */
s32 func_80155868(?, ? *, ?);                       /* extern */
? func_80155A58(s32, ? *);                          /* extern */
s32 func_80155B5C(? *);                             /* extern */
? func_80166E5C();                                  /* extern */
extern ? D_801F2E60;

s32 func_80166B40(s32 arg1, s32 arg2) {
    ? sp10;
    s32 temp_v0;
    s32 var_a0;

    if (arg2 != 0) {
        return -1;
    }
    temp_v0 = func_80155B5C(&D_801F2E60);
    var_a0 = arg1 >> 0xB;
    if (arg1 < 0) {
        var_a0 = (s32) (arg1 + 0x7FF) >> 0xB;
    }
    func_80155A58(temp_v0 + var_a0, &sp10);
    do {
        func_80166E5C();
    } while (func_80155868(0x15, &sp10, 0) == 0);
    return 1;
}
