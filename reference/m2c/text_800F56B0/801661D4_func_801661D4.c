/* m2c reference for func_801661D4 @ 801661D4 (24 words). Generated; not compiled or validated. */
void func_801661D4(s32 *arg0) {
    if (*arg0 >= 0x400) {
        if (*arg0 < 0x1000) {
            *arg0 = ((s32) *arg0 >> 3) + 0x380;
            return;
        }
        *arg0 = ((s32) *arg0 >> 8) + 0x570;
    }
}
