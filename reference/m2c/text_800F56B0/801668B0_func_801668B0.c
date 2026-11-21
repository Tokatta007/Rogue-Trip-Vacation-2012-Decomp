/* m2c reference for func_801668B0 @ 801668B0 (12 words). Generated; not compiled or validated. */
extern ? D_801F2E40;

s32 func_801668B0(s32 arg0) {
    u8 **temp_a0;
    u8 *temp_v1;

    temp_a0 = ((arg0 & 3) * 4) + &D_801F2E40;
    temp_v1 = *temp_a0;
    *temp_a0 = temp_v1 + 1;
    return *temp_v1 & 0xFF;
}
