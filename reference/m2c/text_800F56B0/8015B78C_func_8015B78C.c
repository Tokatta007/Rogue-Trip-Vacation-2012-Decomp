/* m2c reference for func_8015B78C @ 8015B78C (10 words). Generated; not compiled or validated. */
void func_8015B78C(void *arg0, s32 arg1) {
    u8 var_v0;

    if (arg1 != 0) {
        var_v0 = arg0->unk7 | 2;
    } else {
        var_v0 = arg0->unk7 & 0xFD;
    }
    arg0->unk7 = var_v0;
}
