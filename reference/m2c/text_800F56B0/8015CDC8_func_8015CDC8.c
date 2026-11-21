/* m2c reference for func_8015CDC8 @ 8015CDC8 (10 words). Generated; not compiled or validated. */
void func_8015CDC8(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    arg0->unk3 = 2;
    var_v1 = 0xE6000000;
    if (arg1 != 0) {
        var_v1 = 0xE6000002;
    }
    arg0->unk4 = (s32) (var_v1 | (arg2 != 0));
    arg0->unk8 = 0;
}
