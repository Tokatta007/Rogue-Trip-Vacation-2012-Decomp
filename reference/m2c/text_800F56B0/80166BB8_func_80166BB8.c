/* m2c reference for func_80166BB8 @ 80166BB8 (19 words). Generated; not compiled or validated. */
s32 func_801555F8(?, ? *, ?);                       /* extern */
? func_8015735C(? *, s32);                          /* extern */
? func_80166E5C();                                  /* extern */
extern ? D_801F2E60;

s32 func_80166BB8(s32 arg0) {
    func_8015735C(&D_801F2E60, arg0);
    do {
        func_80166E5C();
    } while (func_801555F8(0x15, &D_801F2E60, 0) == 0);
    return 0;
}
