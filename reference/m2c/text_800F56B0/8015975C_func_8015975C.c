/* m2c reference for func_8015975C @ 8015975C (35 words). Generated; not compiled or validated. */
extern ? D_801B57CC;

s32 func_8015975C(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v0;
    s32 var_t4;

    GTE_LZCS = arg0;
    temp_v0 = GTE_LZCR;
    if ((temp_v0 != 0x20) && (temp_v0 != 0)) {
        temp_t2 = temp_v0 & ~1;
        temp_t3 = temp_t2 - 0x18;
        if (temp_t3 >= 0) {
            var_t4 = arg0 << temp_t3;
        } else {
            var_t4 = arg0 >> (0x18 - temp_t2);
        }
        *arg2 = (s32) (0x1F - temp_t2) >> 1;
        *arg1 = (s32) *(&D_801B57CC + ((var_t4 - 0x40) * 2));
        return 1;
    }
    return -1;
}
