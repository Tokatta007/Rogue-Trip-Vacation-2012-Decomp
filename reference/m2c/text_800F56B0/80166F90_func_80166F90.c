/* m2c reference for func_80166F90 @ 80166F90 (36 words). Generated; not compiled or validated. */
extern ? D_801BC180;

s32 func_80166F90(s32 arg0, u8 *arg1) {
    s32 var_a3;
    u32 var_v1;
    u8 *var_a1;
    u8 temp_a2;
    u8 temp_a2_2;
    void *temp_a0;

    var_a1 = arg1;
    var_a3 = 0;
    temp_a2 = *var_a1;
    temp_a0 = (arg0 * 0x28) + &D_801BC180;
    if (temp_a2 != 0) {
        var_v1 = temp_a2 - 8;
        do {
            switch (var_v1) {
            case 1:
            case 5:
                break;
            case 2:
                var_a3 = 0;
                break;
            case 0:
                var_a3 -= 1;
                break;
            default:
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
                var_a3 += temp_a0->unk2 + temp_a0->unk0;
                break;
            }
            var_a1 += 1;
            temp_a2_2 = *var_a1;
            var_v1 = temp_a2_2 - 8;
        } while (temp_a2_2 != 0);
    }
    return var_a3;
}
