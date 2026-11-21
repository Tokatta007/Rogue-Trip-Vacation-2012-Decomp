/* m2c reference for func_800F0204 @ 800F0204 (7 words). Generated; not compiled or validated. */
void func_800F0204(void *arg0, s32 arg1) {
    u16 temp_v0;
    u16 var_v1;

    temp_v0 = arg0->unk36;
    var_v1 = temp_v0 & 0xFEFF;
    if (arg1 != 0) {
        var_v1 = temp_v0 | 0x100;
    }
    arg0->unk36 = var_v1;
}
