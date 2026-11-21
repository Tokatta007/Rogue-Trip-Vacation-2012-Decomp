/* m2c reference for func_80159508 @ 80159508 (36 words). Generated; not compiled or validated. */
extern ? D_801B3E18;
extern ? D_801B4E18;

s16 func_80159508(s32 arg0) {
    if (arg0 < 0x801) {
        if (arg0 < 0x401) {
            return *(&D_801B4E18 + (arg0 * 2));
        }
        return *(&D_801B4E18 + ((0x800 - arg0) * 2));
    }
    if (arg0 >= 0xC01) {
        return -*(&D_801B4E18 + ((0x1000 - arg0) * 2));
    }
    return -*(&D_801B3E18 + (arg0 * 2));
}
