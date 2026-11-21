/* m2c reference for func_8013B1FC @ 8013B1FC (36 words). Generated; not compiled or validated. */
s32 func_8016B6DC(?, ?);                            /* extern */
extern s32 D_801C3850;
static s32 D_801C3508 = 0;

s32 func_8013B1FC(s32 arg0) {
    D_801C3850 = 0;
    if (D_801C3508 != 0) {
        if (arg0 >= 0x23) {
            if (func_8016B6DC(0x800, 5) & 0xFF) {
                D_801C3850 = 0x800;
            }
            if ((func_8016B6DC(0x40, 5) & 0xFF) || (func_8016B6DC(0x800, 5) & 0xFF)) {
                return 1;
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
