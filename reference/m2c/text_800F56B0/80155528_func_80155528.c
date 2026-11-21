/* m2c reference for func_80155528 @ 80155528 (13 words). Generated; not compiled or validated. */
extern ? D_801B4A18;
static ? D_800F4664;                                /* unable to generate initializer: unknown type; const */

? *func_80155528(s32 arg0) {
    u32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 < 0x1CU) {
        return *(&D_801B4A18 + (temp_a0 * 4));
    }
    return &D_800F4664;
}
