/* m2c reference for func_80135260 @ 80135260 (25 words). Generated; not compiled or validated. */
? func_80133658();                                  /* extern */
? func_8013B478(?, ?);                              /* extern */
? func_8013B5A4(?);                                 /* extern */
s32 func_801F725C(? *, s32, ?);                     /* extern */
extern ? D_801B2F1C;
static s32 D_801C34EC = 0;

s32 func_80135260(void) {
    func_8013B5A4(2);
    if (func_801F725C(&D_801B2F1C, D_801C34EC, 0) == 0) {
        func_8013B5A4(1);
        return 1;
    }
    func_80133658();
    func_8013B478(0, 0x64);
    return 0xB;
}
