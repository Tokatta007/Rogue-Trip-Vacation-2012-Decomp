/* m2c reference for func_8016FEF8 @ 8016FEF8 (33 words). Generated; not compiled or validated. */
void func_8016FEF8(u16 *arg0, u16 *arg1, u32 arg2) {
    s32 temp_a2;

    temp_a2 = (arg2 >> 7) & 3;
    switch (temp_a2) {                              /* irregular */
    case 0:
        *arg0 = (u16) ((s32) (*arg0 << 0x10) >> 0x12);
        *arg1 = (u16) ((s32) (*arg1 << 0x10) >> 0x12);
        return;
    case 1:
        *arg0 = (u16) ((s32) (*arg0 << 0x10) >> 0x11);
        *arg1 = (u16) ((s32) (*arg1 << 0x10) >> 0x11);
        return;
    }
}
