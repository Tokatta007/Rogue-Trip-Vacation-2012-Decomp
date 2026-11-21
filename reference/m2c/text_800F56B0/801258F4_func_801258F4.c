/* m2c reference for func_801258F4 @ 801258F4 (39 words). Generated; not compiled or validated. */
s16 func_80178A1C();                                /* extern */

s32 func_801258F4(u32 arg0) {
    s32 var_s0;

    switch (arg0) {
    case 1:
        var_s0 = 0x48;
        break;
    case 2:
        var_s0 = 0x3C;
        break;
    case 4:
        var_s0 = 0x2E;
        break;
    case 6:
        var_s0 = 0x10;
        break;
    case 0:
    case 7:
        var_s0 = 0x35;
        break;
    case 8:
    case 13:
        var_s0 = 0x5D;
        break;
    default:
        var_s0 = 0;
        break;
    }
    if (var_s0 == 0) {
        var_s0 = 0x2E;
    }
    return var_s0 * func_80178A1C();
}
