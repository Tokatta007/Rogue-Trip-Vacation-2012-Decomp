/* m2c reference for func_80175C0C @ 80175C0C (101 words). Generated; not compiled or validated. */
? func_801605B4(?, ? *, u32);                       /* extern */
s32 func_8017519C(s32);                             /* extern */
extern s32 D_801BC01C;
extern s32 D_801BC028;
extern s32 D_801BC038;
extern s32 D_801C2660;
extern ? D_801C26C4;
extern ? D_801C2AD8;

s32 func_80175C0C(u32 arg0) {
    s32 sp10;
    s32 *temp_s1;
    s32 temp_a0;
    s32 temp_s4;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    u32 var_s0;
    u32 var_s1;

    sp10 = 0;
    var_s5 = 0;
    if ((arg0 >= 0xAU) || (temp_s1 = (arg0 * 4) + &D_801C2AD8, (func_8017519C(*temp_s1) != 0))) {
        return -1;
    }
    if (arg0 == 0) {
        var_s1 = 0x10 << D_801BC028;
        var_s2 = 0xFFF0 << D_801BC028;
    } else {
        temp_a0 = *temp_s1;
        var_s1 = (0x10000 - temp_a0) << D_801BC028;
        var_s2 = temp_a0 << D_801BC028;
    }
    temp_s4 = D_801BC01C;
    if (temp_s4 == 1) {
        D_801BC01C = 0;
        var_s5 = 1;
    }
    var_s3 = 1;
    if (D_801BC038 != 0) {
        sp10 = D_801BC038;
        D_801BC038 = 0;
    }
    var_v0 = var_s1 < 0x401U;
    do {
        var_s0 = 0x400;
        if (var_v0 != 0) {
            var_s0 = var_s1;
            var_s3 = 0;
        }
        func_801605B4(2, (? *) var_s2);
        func_801605B4(1);
        func_801605B4(3, &D_801C26C4, var_s0);
        var_s1 -= 0x400;
        var_s2 += 0x400;
        WaitEvent(D_801C2660);
        var_v0 = var_s1 < 0x401U;
    } while (var_s3 != 0);
    if (var_s5 != 0) {
        D_801BC01C = temp_s4;
    }
    if (sp10 != 0) {
        D_801BC038 = sp10;
    }
    return 0;
}
