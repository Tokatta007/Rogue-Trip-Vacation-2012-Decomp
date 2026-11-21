/* m2c reference for func_8015B714 @ 8015B714 (15 words). Generated; not compiled or validated. */
void func_8015B714(s32 *arg0, s32 arg1, s32 *arg2) {
    *arg2 = (*arg2 & 0xFF000000) | (*arg0 & 0xFFFFFF);
    *arg0 = (*arg0 & 0xFF000000) | (arg1 & 0xFFFFFF);
}
