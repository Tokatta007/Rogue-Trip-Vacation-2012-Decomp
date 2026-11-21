/* m2c reference for func_800F9108 @ 800F9108 (28 words). Generated; not compiled or validated. */
s32 func_80178A70();                                /* extern */

void func_800F9108(void *arg0) {
    s32 var_v0;

    if ((0x1F4 - (func_80178A70() & 0x7F)) >= (arg0 + 0x264)->unk8) {
        var_v0 = arg0->unk870;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < arg0->unk880) {
            arg0->unkB9 = 1;
        }
    }
}
