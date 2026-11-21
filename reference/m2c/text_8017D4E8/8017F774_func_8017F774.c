/* m2c reference for func_8017F774 @ 8017F774 (32 words). Generated; not compiled or validated. */
extern s32 D_801C321C;
extern ? D_801F5330;
extern ? D_801F5370;
static s8 D_800F5694[0x1C] = {
    0x6C,
    0x69,
    0x62,
    0x6D,
    0x63,
    0x72,
    0x64,
    0x3A,
    0x20,
    0x65,
    0x76,
    0x65,
    0x6E,
    0x74,
    0x20,
    0x6F,
    0x76,
    0x65,
    0x72,
    0x66,
    0x6C,
    0x6F,
    0x77,
    0xA,
    0,
    0,
    0,
    0,
}; /* const */

void func_8017F774(s32 arg0) {
    s32 *var_a1;
    s32 temp_a3;
    s32 var_a2;

    temp_a3 = D_801C321C + 1;
    if (temp_a3 >= 4) {
        printf(D_800F5694, temp_a3);
        return;
    }
    var_a2 = 3;
    var_a1 = (temp_a3 * 0x10) + &D_801F5330 + 0xC;
    D_801C321C = temp_a3;
    *((temp_a3 * 4) + &D_801F5370) = arg0;
    do {
        *var_a1 = 0;
        var_a2 -= 1;
        var_a1 -= 4;
    } while (var_a2 >= 0);
}
