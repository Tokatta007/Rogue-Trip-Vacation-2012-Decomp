/* m2c reference for func_80160010 @ 80160010 (160 words). Generated; not compiled or validated. */
? func_80160290(? *, ?);                            /* extern */
? func_80160AE8(s32 *, ?, ?);                       /* extern */
extern void *D_801BC000;
extern s32 *D_801BC010;
extern s16 D_801BC018;
extern s32 D_801BC01C;
extern s32 D_801BC020;
extern s32 D_801BC024;
extern s32 D_801BC028;
extern s32 D_801BC02C;
extern s32 D_801BC030;
extern s32 D_801BC034;
extern s32 D_801BC038;
extern s32 D_801BC03C;
extern ? D_801BC040;
extern s16 D_801EC950;
static s8 D_800F4FA4[0x10] = {
    0x53,
    0x50,
    0x55,
    0x3A,
    0x54,
    0x2F,
    0x4F,
    0x20,
    0x5B,
    0x25,
    0x73,
    0x5D,
    0xA,
    0,
    0,
    0,
}; /* const */
static ? D_800F4FB4;                                /* unable to generate initializer: unknown type; const */

s32 func_80160010(s32 arg0) {
    s16 *var_a1;
    s32 var_a0;
    s32 var_a0_2;
    u32 var_v1;
    void *var_v1_2;

    *D_801BC010 |= 0xB0000;
    D_801BC01C = 0;
    D_801BC020 = 0;
    D_801BC018 = 0;
    D_801BC000->unk180 = 0;
    D_801BC000->unk182 = 0;
    D_801BC000->unk1AA = 0;
    func_80160AE8(D_801BC010);
    D_801BC000->unk180 = 0;
    D_801BC000->unk182 = 0;
    if (D_801BC000->unk1AE & 0x7FF) {
        var_v1 = 1;
loop_2:
        if (var_v1 >= 0xF01U) {
            printf(D_800F4FA4, &D_800F4FB4);
            var_a0 = 0;
        } else {
            var_v1 += 1;
            if (!(D_801BC000->unk1AE & 0x7FF)) {
                goto block_5;
            }
            goto loop_2;
        }
    } else {
block_5:
        var_a0 = 0;
    }
    var_a1 = &D_801EC950;
    D_801BC024 = 2;
    D_801BC028 = 3;
    D_801BC02C = 8;
    D_801BC030 = 7;
    D_801BC000->unk1AC = 4;
    D_801BC000->unk184 = 0;
    D_801BC000->unk186 = 0;
    D_801BC000->unk18C = 0xFFFF;
    D_801BC000->unk18E = 0xFFFF;
    D_801BC000->unk198 = 0;
    D_801BC000->unk19A = 0;
    do {
        *var_a1 = 0;
        var_a0 += 1;
        var_a1 += 2;
    } while (var_a0 < 0xA);
    if (arg0 == 0) {
        D_801BC018 = 0x200;
        D_801BC000->unk190 = 0;
        D_801BC000->unk192 = 0;
        D_801BC000->unk194 = 0;
        D_801BC000->unk196 = 0;
        D_801BC000->unk1B0 = 0;
        D_801BC000->unk1B2 = 0;
        D_801BC000->unk1B4 = 0;
        D_801BC000->unk1B6 = 0;
        func_80160290(&D_801BC040, 0x10);
        var_a0_2 = 0;
        var_v1_2 = D_801BC000;
        do {
            var_v1_2->unk0 = 0;
            var_v1_2->unk2 = 0;
            var_v1_2->unk4 = 0x3FFF;
            var_v1_2->unk6 = 0x200;
            var_v1_2->unk8 = 0;
            var_v1_2->unkA = 0;
            var_a0_2 += 1;
            var_v1_2 += 0x10;
        } while (var_a0_2 < 0x18);
        D_801BC000->unk188 = 0xFFFF;
        D_801BC000->unk18A = 0xFF;
        func_80160AE8((s32 *) var_a0_2, 0x200, 0x3FFF);
        func_80160AE8();
        func_80160AE8();
        func_80160AE8();
        D_801BC000->unk18C = 0xFFFF;
        D_801BC000->unk18E = 0xFF;
        func_80160AE8();
        func_80160AE8();
        func_80160AE8();
        func_80160AE8();
    }
    D_801BC034 = 1;
    D_801BC000->unk1AA = 0xC000;
    D_801BC038 = 0;
    D_801BC03C = 0;
    return 0;
}
