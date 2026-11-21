/* m2c reference for func_8013AFF8 @ 8013AFF8 (129 words). Generated; not compiled or validated. */
? func_80133658();                                  /* extern */
? func_80138370(?, ?, ?, ?);                        /* extern */
? func_8013AF7C(?, ?);                              /* extern */
? func_8013B28C(? *, s32, ?, ? *);                  /* extern */
? func_80154AFC(? *, ? *, s32);                     /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80166D2C(?, ? *);                            /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
? func_8016BB9C();                                  /* extern */
extern s32 D_801B38E4;
extern ? func_8013B1FC;
static void *D_801C34EC = NULL;
static s32 D_801C3508 = 0;
static s32 D_800F3F5C[0x11] = {
    0x1E8,
    0x1E7,
    0x1DF,
    0x1F8,
    0x1F2,
    0x1E6,
    0x1E6,
    0x1F8,
    0x1EA,
    0x203,
    0x1D8,
    0x78,
    0x152,
    0x152,
    0x152,
    0x152,
    0x152,
}; /* const */
static ? D_800F3FA0;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3FB8;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3FD0;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3FE4;                                /* unable to generate initializer: unknown type; const */

void func_8013AFF8(void) {
    ? sp10;
    s32 sp38;
    s32 *var_a0;
    s32 *var_s2;
    s32 *var_v1;
    s32 temp_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;

    var_a0 = &sp38;
    var_v1 = D_800F3F5C;
    do {
        var_a0->unk0 = var_v1->unk0;
        var_a0->unk4 = (s32) var_v1->unk4;
        var_a0->unk8 = (s32) var_v1->unk8;
        var_a0->unkC = (s32) var_v1->unkC;
        var_v1 += 0x10;
        var_a0 += 0x10;
    } while (var_v1 != (D_800F3F5C + 0x40));
    var_s1 = 0;
    var_s2 = &D_801B38E4;
    *var_a0 = *var_v1;
    D_801C3508 = 0;
loop_3:
    if (var_s1 < D_801C34EC->unk12728) {
        temp_a2 = *var_s2;
        if (temp_a2 >= 0xC) {
            func_80154AFC(&sp10, &D_800F3FA0, temp_a2);
        } else {
            func_80154AFC(&sp10, &D_800F3FB8, (temp_a2 + 1) * 0x10);
        }
        var_s0 = 1;
        func_8013B28C(&sp10, (sp + (*var_s2 * 4))->unk38 - 2, 1, &func_8013B1FC);
        do {
            func_8016BB9C();
            if (func_8016B6DC(0x40, var_s1) & 0xFF) {
                func_8013AF7C(0x4A, 0);
                var_s0 = 0;
            }
        } while (var_s0 != 0);
        var_s2 += 4;
        var_s1 += 1;
        goto loop_3;
    }
    func_80166D2C(0x800201D0, &D_800F3FD0);
    var_s1_2 = 0;
    func_80133658();
    func_80138370(0, 0x800201D0, 0, 0);
    func_80138370(1, 0x800201D0, 0, 0);
loop_13:
    var_s0_2 = 0x258;
    if (var_s1_2 < 8) {
        do {
            func_8015C008(0);
            func_8015EBDC(0);
            func_80138370(1, 0x800201D0, 0, 0);
            var_s0_2 -= 1;
        } while (var_s0_2 > 0);
        if (var_s1_2 != 7) {
            func_80154AFC(&sp10, &D_800F3FE4, var_s1_2 + 2);
            func_80166D2C(0x800201D0, &sp10);
        }
        var_s1_2 += 1;
        goto loop_13;
    }
}
