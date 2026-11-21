/* m2c reference for func_8015B9B0 @ 8015B9B0 (11 words). Generated; not compiled or validated. */
void func_8015B9B0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;
    s32 var_v1;

    arg0->unk3 = 1;
    var_v1 = 0xE1000000;
    if (arg2 != 0) {
        var_v1 = 0xE1000200;
    }
    var_v0 = arg3 & 0x9FF;
    if (arg1 != 0) {
        var_v0 |= 0x400;
    }
    arg0->unk4 = (s32) (var_v1 | var_v0);
}
