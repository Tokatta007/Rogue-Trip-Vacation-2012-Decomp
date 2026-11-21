/* m2c reference for func_8013689C @ 8013689C (72 words). Generated; not compiled or validated. */
? func_80133708(void *, s32);                       /* extern */
s32 func_80133934(?);                               /* extern */
? func_801369BC(?, ? *);                            /* extern */
? func_80138370(?, ?, ?, ?);                        /* extern */
? func_8013B28C(? *, ?, ?, ? *);                    /* extern */
? func_8013B478(?, ?);                              /* extern */
? func_8013BED8(s32, ?);                            /* extern */
? func_8015BF70(?);                                 /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C66C(s32);                               /* extern */
? func_8015EBDC(?);                                 /* extern */
extern u8 D_801B3964;
extern ? func_8013B1FC;
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;
static s32 D_801C3508 = 0;
static ? D_800F3BC8;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3BE0;                                /* unable to generate initializer: unknown type; const */

s32 func_8013689C(void *arg0, s32 arg1) {
    ? var_a1_2;
    s32 var_a1;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = arg1;
    if (D_801B3964 == 0) {
        var_a0 = D_801C34EC;
        var_a1 = 0;
        if ((var_a0->unk7D8 == 1) || (var_a0->unk7D8 == 3)) {
            var_a1 = 1;
        }
        if (var_a1 != 0) {
            func_8013BED8(D_801C34F4, 0);
            D_801C3508 = 1;
            func_8013B28C(&D_800F3BC8, 0x285, 1, &func_8013B1FC);
            func_8015BF70(0);
            func_801369BC(0x800201D0, &D_800F3BE0);
            func_8015C008(0);
            func_8015EBDC(0);
            func_8015C66C(func_80133934(1));
            func_8015C66C(func_80133934(0));
            func_80138370(0, 0x800201D0, 0, 0);
            func_8015EBDC(0);
            func_8015BF70(1);
            var_a1_2 = 0xAA;
        } else {
            goto block_6;
        }
    } else {
block_6:
        func_80133708(var_a0, var_a1);
        var_a1_2 = 0x50;
    }
    func_8013B478(0, var_a1_2);
    return 0xB;
}
