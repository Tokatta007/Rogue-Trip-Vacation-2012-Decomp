/* m2c reference for func_8017F49C @ 8017F49C (44 words). Generated; not compiled or validated. */
? func_8017FC18();                                  /* extern */
s32 func_8017FDD4();                                /* extern */
extern s32 D_801F52D0;
static s8 D_800F566C[0x20] = {
    0x41,
    0x63,
    0x63,
    0x65,
    0x73,
    0x73,
    0x20,
    0x44,
    0x65,
    0x6E,
    0x69,
    0x65,
    0x64,
    0x2E,
    0x20,
    0x3A,
    0x20,
    0x73,
    0x79,
    0x73,
    0x74,
    0x65,
    0x6D,
    0x20,
    0x62,
    0x75,
    0x73,
    0x79,
    0xA,
    0,
    0,
    0,
}; /* const */

s32 func_8017F49C(s32 arg0) {
    u8 sp10;
    s8 sp8F;
    s32 var_s0;
    s32 var_s0_2;
    s8 *var_v0;

    if (D_801F52D0 != 0) {
        printf(D_800F566C);
        return -1;
    }
    var_s0 = 0x7F;
    var_v0 = &sp8F;
    do {
        *var_v0 = 0xFF;
        var_s0 -= 1;
        var_v0 -= 1;
    } while (var_s0 >= 0);
    var_s0_2 = 0;
loop_6:
    func_8017FC18();
    _new_card();
    _card_write(arg0, var_s0_2, &sp10);
    var_s0_2 += 1;
    if (func_8017FDD4() == 0) {
        if (var_s0_2 >= 0xF) {
            return 1;
        }
        goto loop_6;
    }
    return 0;
}
