/* m2c reference for func_80174D3C @ 80174D3C (175 words). Generated; not compiled or validated. */
extern ? *D_801BC000;
extern s32 D_801C2690;
extern s32 D_801C2AC4;
extern ? D_801EC7C8;

s32 func_80174D3C(s32 arg0, u16 arg1, s32 arg2, s32 arg3) {
    ? *var_a0;
    s32 temp_v1;
    s32 temp_v1_4;
    s32 temp_v1_7;
    s32 var_t2;
    u16 *temp_a0;
    u16 *temp_a0_2;
    u16 *temp_a0_3;
    u16 *temp_a0_4;
    u16 *temp_v1_2;
    u16 *temp_v1_3;
    u16 *temp_v1_5;
    u16 *temp_v1_6;

    var_a0 = &D_801EC7C8;
    if (!(D_801C2AC4 & 1)) {
        var_a0 = D_801BC000;
    }
    var_t2 = *((arg2 * 2) + var_a0) | ((*((arg3 * 2) + var_a0) & 0xFF) << 0x10);
    switch (arg0) {                                 /* irregular */
    case 1:
        temp_v1 = arg2 * 2;
        if (D_801C2AC4 & 1) {
            temp_v1_2 = temp_v1 + &D_801EC7C8;
            temp_a0 = (arg3 * 2) + &D_801EC7C8;
            *temp_v1_2 |= arg1;
            *temp_a0 |= (arg1 >> 0x10) & 0xFF;
            D_801C2690 |= 1 << ((s32) (arg2 - 0xC6) >> 1);
        } else {
            temp_v1_3 = temp_v1 + D_801BC000;
            temp_a0_2 = (arg3 * 2) + D_801BC000;
            *temp_v1_3 |= arg1;
            *temp_a0_2 |= (arg1 >> 0x10) & 0xFF;
        }
        var_t2 |= arg1 & 0xFFFFFF;
        break;
    case 0:
        temp_v1_4 = arg2 * 2;
        if (D_801C2AC4 & 1) {
            temp_v1_5 = temp_v1_4 + &D_801EC7C8;
            temp_a0_3 = (arg3 * 2) + &D_801EC7C8;
            *temp_v1_5 &= ~arg1;
            *temp_a0_3 &= ~((arg1 >> 0x10) & 0xFF);
            D_801C2690 |= 1 << ((s32) (arg2 - 0xC6) >> 1);
        } else {
            temp_v1_6 = temp_v1_4 + D_801BC000;
            temp_a0_4 = (arg3 * 2) + D_801BC000;
            *temp_v1_6 &= ~arg1;
            *temp_a0_4 &= ~((arg1 >> 0x10) & 0xFF);
        }
        var_t2 &= ~(arg1 & 0xFFFFFF);
        break;
    case 8:
        temp_v1_7 = arg3 * 2;
        if (D_801C2AC4 & 1) {
            *((arg2 * 2) + &D_801EC7C8) = arg1;
            *(temp_v1_7 + &D_801EC7C8) = (arg1 >> 0x10) & 0xFF;
            D_801C2690 |= 1 << ((s32) (arg2 - 0xC6) >> 1);
        } else {
            *((arg2 * 2) + D_801BC000) = arg1;
            *(temp_v1_7 + D_801BC000) = (arg1 >> 0x10) & 0xFF;
        }
        var_t2 = arg1 & 0xFFFFFF;
        break;
    }
    return var_t2 & 0xFFFFFF;
}
