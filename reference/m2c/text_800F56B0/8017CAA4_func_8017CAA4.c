/* m2c reference for func_8017CAA4 @ 8017CAA4 (92 words). Generated; not compiled or validated. */
? func_80155A58(s32, ? *);                          /* extern */
s32 func_80155B5C(? *);                             /* extern */
? func_8017CD30(?, ?);                              /* extern */
? func_8017CD50(void *, s32, s32);                  /* extern */
? func_8017D090(? *, s32);                          /* extern */
? func_8017D26C(? *);                               /* extern */
extern ? D_801F5120;
static s32 D_801C3700 = 0;
static s32 D_801C3708 = 0;
static ? D_801C3714;                                /* unable to generate initializer: unknown type */
static u32 D_801C3718 = 0;

s32 func_8017CAA4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ? sp10;
    ? sp18;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    void *temp_s0_2;

    temp_v0 = arg0->unk4;
    arg0->unk4 = arg1;
    if (((u32) D_801C3718 < 2U) || (D_801C3718 == 4) || ((temp_v0 != arg1) & 0xFF)) {
        func_8017CD30(0, 0);
        func_8017D26C(&D_801F5120);
        temp_s0 = arg1 * 4;
        if ((arg2 != 0) && (arg3 != 0)) {
            temp_s0_2 = (arg1 * 4) + &D_801F5120;
            memcpy(&sp10, temp_s0_2, 4);
            memcpy(&sp18, temp_s0_2, 4);
            func_8017D090(&sp10, arg2);
            func_8017D090(&sp18, arg3);
            temp_s0_3 = func_80155B5C(&sp10);
            var_a1 = temp_s0_3;
            var_a2 = func_80155B5C(&sp18);
        } else {
            temp_s0_4 = func_80155B5C(temp_s0 + &D_801F5120);
            var_a1 = temp_s0_4;
            var_a2 = func_80155B5C(temp_s0 + (&D_801F5120 + 4)) - 0x96;
        }
        func_8017CD50(arg0, var_a1, var_a2);
        D_801C3718 = 1;
        func_80155A58(D_801C3708, &D_801C3714);
    }
    D_801C3700 = 0;
    return arg1;
}
