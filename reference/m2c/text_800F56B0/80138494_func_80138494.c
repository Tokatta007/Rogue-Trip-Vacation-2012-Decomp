/* m2c reference for func_80138494 @ 80138494 (189 words). Generated; not compiled or validated. */
s32 func_80132F8C();                                /* extern */
? func_80138370(s32, s32, ?, ?);                    /* extern */
? func_80139FC4(s32);                               /* extern */
? func_80154AFC(? *, ? *, s32);                     /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C4F4(s32, ?);                            /* extern */
? func_8015C5FC(s32);                               /* extern */
? func_8015C66C(void *);                            /* extern */
? func_8015C838(void *);                            /* extern */
? func_80166D2C(s32, ? *);                          /* extern */
? func_8016BB9C();                                  /* extern */
? func_8016D968();                                  /* extern */
? func_8016DA7C(void *, ?);                         /* extern */
? func_80179064(?);                                 /* extern */
extern u8 D_801B3967;
extern ? D_801B39B0;
extern s32 D_801B39B4;
extern s32 D_801B39B8;
extern s32 D_801B3A04;
extern s32 D_801B3A08;
static ? D_800F3C94;                                /* unable to generate initializer: unknown type; const */

void func_80138494(void *arg0, void **arg1, s32 *arg2, s32 *arg3, s32 arg4, s32 *arg5) {
    ? sp10;
    ? var_a2;
    ? var_a2_2;
    ? var_a2_3;
    ? var_a3;
    ? var_a3_2;
    ? var_a3_3;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    temp_s1 = func_80132F8C();
    if (*arg1 == arg0) {
        var_a0 = arg0 + 0x80;
    }
    *arg1 = var_a0;
    (*arg1)->unk8 = (s32) (*arg1)->unk4;
    func_8015C4F4((*arg1)->unk0, 0x600);
    if (*arg5 == 0) {
        func_80179064(0);
        func_8016D968();
        func_8016DA7C(*arg1, 0);
    }
    func_8015C008(0);
    func_8016BB9C();
    func_8015C66C(*arg1 + 0x10);
    func_8015C838(*arg1 + 0x6C);
    temp_s0 = (s32) *arg1 != (s32) arg0;
    switch (*arg5) {                                /* irregular */
    case 2:
        var_v1 = 0;
        if (*arg2 <= 0) {
            var_v1 = *arg3 < 1;
        }
        if (var_v1 != 0) {
            func_80154AFC(&sp10, &D_800F3C94, (arg4 + 1) * 0x10);
            func_80166D2C(temp_s1, &sp10);
            *arg5 = 1;
        }
        var_a1 = temp_s1;
        var_a2 = 0;
        var_a3 = 0;
block_15:
        func_80138370(temp_s0, var_a1, var_a2, var_a3);
        break;
    case 1:
        var_a1 = temp_s1;
        var_a2 = 0;
        var_a3 = 0;
        goto block_15;
    case 0:
        func_80138370(temp_s0, D_801B39B0.unk0, 0x20, 0);
        func_80138370(temp_s0, *(((arg4 + 3) * 4) + &D_801B39B0), 0xCA, 0xA);
        if (D_801B3967 == 2) {
            var_a1 = D_801B39B0.unk50;
            var_a2 = 0x94;
            var_a3 = 0xD3;
            goto block_15;
        }
        break;
    }
    if (*arg2 > 0) {
        if (*arg5 == 0) {
            var_a1_2 = D_801B39B8;
            var_a2_2 = 0x55;
            var_a3_2 = 0xC4;
        } else {
            var_a1_2 = D_801B3A04;
            var_a2_2 = 0x22;
            var_a3_2 = 0xD4;
        }
        func_80138370(temp_s0, var_a1_2, var_a2_2, var_a3_2);
        *arg2 -= 1;
    }
    if (*arg3 > 0) {
        if (*arg5 == 0) {
            var_a1_3 = D_801B39B4;
            var_a2_3 = 0xDE;
            var_a3_3 = 0xC3;
        } else {
            var_a1_3 = D_801B3A08;
            var_a2_3 = 0x10E;
            var_a3_3 = 0xD4;
        }
        func_80138370(temp_s0, var_a1_3, var_a2_3, var_a3_3);
        *arg3 -= 1;
    }
    func_80139FC4(temp_s0);
    func_8015C5FC((*arg1)->unk0 + 0x17FC);
}
