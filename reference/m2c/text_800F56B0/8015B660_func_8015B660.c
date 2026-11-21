/* m2c reference for func_8015B660 @ 8015B660 (16 words). Generated; not compiled or validated. */
extern ? (*D_801BAD44)(? *, s32, u32);
static ? D_800F4BDC;                                /* unable to generate initializer: unknown type; const */

void func_8015B660(s32 arg0) {
    D_801BAD44(&D_800F4BDC, (arg0 & 0x3F) * 0x10, (u32) (arg0 & 0xFFFF) >> 6);
}
