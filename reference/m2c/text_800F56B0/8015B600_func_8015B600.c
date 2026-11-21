/* m2c reference for func_8015B600 @ 8015B600 (24 words). Generated; not compiled or validated. */
extern ? (*D_801BAD44)(? *, s32, s32, s32, s32);
static ? D_800F4BC4;                                /* unable to generate initializer: unknown type; const */

void func_8015B600(s32 arg0) {
    u32 temp_a3;

    temp_a3 = arg0 & 0xFFFF;
    D_801BAD44(&D_800F4BC4, (temp_a3 >> 7) & 3, (temp_a3 >> 5) & 3, (temp_a3 << 6) & 0x7C0, ((temp_a3 * 0x10) & 0x100) | ((temp_a3 >> 2) & 0x200));
}
