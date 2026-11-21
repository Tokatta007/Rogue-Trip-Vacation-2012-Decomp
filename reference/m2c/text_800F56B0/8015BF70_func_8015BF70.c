/* m2c reference for func_8015BF70 @ 8015BF70 (38 words). Generated; not compiled or validated. */
? func_8015EBAC(u8 *, ?, ?);                        /* extern */
extern void *D_801BAD40;
extern ? (*D_801BAD44)(? *, s32);
extern u8 D_801BAD4A;
static ? D_800F4D58;                                /* unable to generate initializer: unknown type; const */

void func_8015BF70(s32 arg0) {
    ? var_a0;

    if ((u8) D_801BAD4A >= 2U) {
        D_801BAD44(&D_800F4D58, arg0);
    }
    if (arg0 == 0) {
        func_8015EBAC(&D_801BAD4A + 0x6A, -1, 0x14);
    }
    var_a0 = 0x03000001;
    if (arg0 != 0) {
        var_a0 = 0x03000000;
    }
    D_801BAD40->unk10(var_a0);
}
