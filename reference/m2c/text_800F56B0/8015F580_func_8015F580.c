/* m2c reference for func_8015F580 @ 8015F580 (11 words). Generated; not compiled or validated. */
extern ? D_801BBF88;

void func_8015F580(s32 arg0, s32 arg1) {
    s32 *temp_a0;

    temp_a0 = (arg0 * 4) + &D_801BBF88;
    if (arg1 != *temp_a0) {
        *temp_a0 = arg1;
    }
}
