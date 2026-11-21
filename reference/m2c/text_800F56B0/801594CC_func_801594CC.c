/* m2c reference for func_801594CC @ 801594CC (15 words). Generated; not compiled or validated. */
s32 func_80159508(s32);                             /* extern */

s32 func_801594CC(s32 arg0) {
    if (arg0 >= 0) {
        return func_80159508(arg0 & 0xFFF);
    }
    return -func_80159508(-arg0 & 0xFFF);
}
