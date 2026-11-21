/* m2c reference for func_8015B7B4 @ 8015B7B4 (10 words). Generated; not compiled or validated. */
void func_8015B7B4(void *arg0, s32 arg1) {
    u8 var_v0;

    if (arg1 != 0) {
        var_v0 = arg0->unk7 | 1;
    } else {
        var_v0 = arg0->unk7 & 0xFE;
    }
    arg0->unk7 = var_v0;
}
