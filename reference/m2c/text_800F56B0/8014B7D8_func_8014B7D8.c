/* m2c reference for func_8014B7D8 @ 8014B7D8 (26 words). Generated; not compiled or validated. */
void func_8014B7D8(u32 arg1, void *arg2) {
    arg2->unk4 = 0x1F40;
    arg2->unk0 = 0xBB8;
    switch (arg1) {
    case 1:
    case 3:
    case 6:
        arg2->unk4 = 0x960;
        arg2->unk0 = 0x3E8;
        /* fallthrough */
    default:
        return;
    case 7:
        arg2->unk4 = 0x3E80;
        arg2->unk0 = 0x800;
        /* fallthrough */
        return;
    }
}
