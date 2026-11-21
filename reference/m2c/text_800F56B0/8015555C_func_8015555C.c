/* m2c reference for func_8015555C @ 8015555C (13 words). Generated; not compiled or validated. */
extern ? D_801B4A98;
static ? D_800F4664;                                /* unable to generate initializer: unknown type; const */

? *func_8015555C(s32 arg0) {
    u32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 < 7U) {
        return *(&D_801B4A98 + (temp_a0 * 4));
    }
    return &D_800F4664;
}
