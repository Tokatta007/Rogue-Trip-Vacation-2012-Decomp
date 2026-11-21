/* m2c reference for func_800F0220 @ 800F0220 (7 words). Generated; not compiled or validated. */
void func_800F0220(void *arg0, s32 arg1) {
    u16 temp_v0;
    u16 var_v1;

    temp_v0 = arg0->unk36;
    var_v1 = temp_v0 & 0xFDFF;
    if (arg1 != 0) {
        var_v1 = temp_v0 | 0x200;
    }
    arg0->unk36 = var_v1;
}
