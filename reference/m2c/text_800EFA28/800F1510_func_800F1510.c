/* m2c reference for func_800F1510 @ 800F1510 (13 words). Generated; not compiled or validated. */
s32 func_800F1510(void) {
    s32 var_v0;

    var_v0 = (1 << (saved_reg_s4 & 0x1F)) & *(saved_reg_s3 + (((u32) saved_reg_s4 >> 5) * 4));
    if (var_v0 != 0) {
        var_v0 = 1;
    }
    return var_v0;
}
