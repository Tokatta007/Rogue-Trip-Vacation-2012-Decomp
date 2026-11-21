/* m2c reference for func_801596CC @ 801596CC (33 words). Generated; not compiled or validated. */
extern ? D_801B5638;

u32 func_801596CC(s32 arg0) {
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v0;
    s32 var_t4;

    GTE_LZCS = arg0;
    temp_v0 = GTE_LZCR;
    if (temp_v0 != 0x20) {
        temp_t2 = temp_v0 & ~1;
        temp_t3 = temp_t2 - 0x18;
        if (temp_t3 >= 0) {
            var_t4 = arg0 << temp_t3;
        } else {
            var_t4 = arg0 >> (0x18 - temp_t2);
        }
        return (u32) (*(&D_801B5638 + ((var_t4 - 0x40) * 2)) << ((s32) (0x1F - temp_t2) >> 1)) >> 0xC;
    }
    return 0U;
}
