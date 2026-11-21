/* m2c reference for func_80127230 @ 80127230 (21 words). Generated; not compiled or validated. */
extern ? D_8018456C;
static u8 D_801C32D4 = 0;

u8 func_80127230(s32 arg0, s32 arg1) {
    u8 *temp_a0;

    temp_a0 = (arg0 * 0x12) + (arg1 + &D_8018456C);
    if (*temp_a0 == 0xFF) {
        *temp_a0 = D_801C32D4;
        D_801C32D4 = (s32) ((s32) D_801C32D4 + 1);
    }
    return *temp_a0;
}
