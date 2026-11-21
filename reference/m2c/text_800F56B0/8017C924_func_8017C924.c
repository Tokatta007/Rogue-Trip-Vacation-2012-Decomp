/* m2c reference for func_8017C924 @ 8017C924 (12 words). Generated; not compiled or validated. */
extern s8 D_801F4B34;

s8 func_8017C924(s8 arg0) {
    if ((u32) ((arg0 - 1) & 0xFF) < 0x18U) {
        D_801F4B34 = arg0;
        return arg0;
    }
    return -1;
}
