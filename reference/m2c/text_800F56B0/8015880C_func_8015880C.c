/* m2c reference for func_8015880C @ 8015880C (46 words). Generated; not compiled or validated. */
extern s32 D_801E475C;
extern s32 D_801E4764;
extern s32 D_801E4770;
extern s32 D_801E4774;

s32 func_8015880C(s32 *arg0, u16 **arg1) {
    s32 var_v0;
    u16 *var_a2;

    var_a2 = D_801E4770 + (D_801E475C << 5);
    if (*var_a2 == 1) {
        D_801E475C = 0;
        if (D_801E4764 != 0) {
            *var_a2 = 0;
        }
        var_a2 = D_801E4770 + (D_801E475C << 5);
    }
    var_v0 = 1;
    if (*var_a2 == 2) {
        *var_a2 = 4;
        var_v0 = 0;
        *arg0 = D_801E4770 + (D_801E4774 << 5) + (D_801E475C * 0x7E0);
        *arg1 = var_a2;
    }
    return var_v0;
}
