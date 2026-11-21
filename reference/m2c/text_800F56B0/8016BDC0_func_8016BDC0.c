/* m2c reference for func_8016BDC0 @ 8016BDC0 (18 words). Generated; not compiled or validated. */
extern ? D_801BC218;
extern ? D_801C38B4;
extern u8 D_801C38B8;

u32 func_8016BDC0(u8 arg0) {
    u8 var_a0;

    var_a0 = arg0;
    if (D_801C38B8 == 1) {
        var_a0 = *(var_a0 + &D_801C38B4);
    }
    return (u8) ((var_a0 * 0x24) + &D_801BC218)->unk1 >> 4;
}
