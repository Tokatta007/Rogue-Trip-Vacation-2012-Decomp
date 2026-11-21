/* m2c reference for func_8013C824 @ 8013C824 (61 words). Generated; not compiled or validated. */
? func_8013CEBC(s32, ?, s32);                       /* extern */

void func_8013C824(s32 arg0, u32 arg1, ? arg2, s32 arg3) {
    s32 var_a0;
    s32 var_a2;
    s32 var_t0;

    var_t0 = -1;
    switch (arg1) {
    case 0:
        var_t0 = 2;
        break;
    case 1:
        var_t0 = 1;
        break;
    case 3:
        var_t0 = 5;
        break;
    case 4:
        var_t0 = 3;
        break;
    case 2:
    case 5:
        var_t0 = 0;
        break;
    case 7:
        var_t0 = 4;
        break;
    case 10:
        var_t0 = 6;
        break;
    case 13:
        var_t0 = 7;
        break;
    case 15:
        var_t0 = 9;
        break;
    case 19:
        var_t0 = 0xA;
        break;
    case 14:
        var_t0 = 8;
        break;
    case 22:
        var_t0 = 0xB;
        break;
    case 23:
        var_t0 = 0xC;
        break;
    }
    if (var_t0 == 3) {
        var_a0 = arg0 + 0xFC;
        var_a2 = (arg3 + 1) & 0xFFFF;
        goto block_19;
    }
    if (var_t0 != -1) {
        var_a0 = arg0 + ((var_t0 * 0x1C) + 0xA8);
        var_a2 = arg3 & 0xFFFF;
block_19:
        func_8013CEBC(var_a0, arg2, var_a2);
    }
}
