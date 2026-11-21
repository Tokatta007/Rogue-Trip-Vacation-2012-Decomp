/* m2c reference for func_8016C10C @ 8016C10C (17 words). Generated; not compiled or validated. */
extern ? D_801BC218;
extern ? D_801C38B4;
extern u8 D_801C38B8;

s32 func_8016C10C(u8 arg0) {
    u8 var_a0;

    var_a0 = arg0;
    if (D_801C38B8 == 1) {
        var_a0 = *(var_a0 + &D_801C38B4);
    }
    return *((var_a0 * 0x24) + &D_801BC218) == 0;
}
