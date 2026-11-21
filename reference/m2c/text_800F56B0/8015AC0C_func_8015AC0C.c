/* m2c reference for func_8015AC0C @ 8015AC0C (174 words). Generated; not compiled or validated. */
? func_8015B78C(void *, s32);                       /* extern */
? func_8015B87C(void *);                            /* extern */
? func_8015B8F4(void *);                            /* extern */
? func_8015CE18(void *, ?, ?, u16, s16 *);          /* extern */
extern ? D_801BA178;
extern ? D_801BA184;
extern ? D_801BA188;
extern ? D_801BA18C;
extern ? D_801BA190;
extern ? D_801BA194;
extern s32 D_801BA2E8;
extern s32 D_801BACF0;
extern ? D_801E6BE8;
extern ? D_801E6FE8;
extern u16 D_801EAFE8;
extern u16 D_801EAFEA;

s32 func_8015AC0C(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;
    void *temp_v0_2;
    void *var_s0;

    var_s2 = arg5;
    if (D_801BA2E8 >= 8) {
        return -1;
    }
    if (D_801BA2E8 == 0) {
        D_801BACF0 = 0;
    }
    temp_a0 = D_801BA2E8 * 0x30;
    *(&D_801BA194 + temp_a0) = arg2 == 0;
    if ((D_801BACF0 + var_s2) >= 0x401) {
        var_s2 = 0x400 - D_801BACF0;
    }
    sp1C = 0x100;
    sp1E = 0x100;
    sp18 = 0;
    sp1A = 0;
    func_8015CE18(temp_a0 + &D_801BA178, 0, 0, D_801EAFE8, &sp18);
    temp_s0 = &D_801BA178 - 0x10;
    if (arg4 != 0) {
        func_8015B8F4((D_801BA2E8 * 0x30) + temp_s0);
        ((D_801BA2E8 * 0x30) + temp_s0)->unk4 = 0;
        ((D_801BA2E8 * 0x30) + temp_s0)->unk5 = 0;
        ((D_801BA2E8 * 0x30) + temp_s0)->unk6 = 0;
        func_8015B78C((D_801BA2E8 * 0x30) + temp_s0, arg4 == 2);
    }
    temp_v1 = D_801BA2E8 * 0x30;
    temp_v0_2 = temp_v1 + (&D_801BA178 - 0x10);
    temp_v0_2->unk8 = arg0;
    temp_v0_2->unkA = arg1;
    temp_v0_2->unkC = arg2;
    temp_v0_2->unkE = arg3;
    *(&D_801BA184 + temp_v1) = var_s2;
    *(&D_801BA190 + temp_v1) = 0;
    *(&D_801BA18C + temp_v1) = D_801BACF0 + &D_801E6BE8;
    *(&D_801BA188 + temp_v1) = (D_801BACF0 * 0x10) + &D_801E6FE8;
    **(&D_801BA18C + temp_v1) = 0;
    var_s0 = *(&D_801BA188 + (D_801BA2E8 * 0x30));
    var_s1 = 0;
    if (var_s2 > 0) {
        do {
            func_8015B87C(var_s0);
            var_s1 += 1;
            var_s0->unkE = (u16) D_801EAFEA;
            var_s0 += 0x10;
        } while (var_s1 < var_s2);
    }
    temp_v0 = D_801BA2E8;
    D_801BACF0 += var_s2;
    D_801BA2E8 += 1;
    return temp_v0;
}
