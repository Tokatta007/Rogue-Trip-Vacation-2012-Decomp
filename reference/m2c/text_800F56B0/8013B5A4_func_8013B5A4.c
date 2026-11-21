/* m2c reference for func_8013B5A4 @ 8013B5A4 (59 words). Generated; not compiled or validated. */
? func_80154AFC(? *, ? *, ? *, ? *);                /* extern */
? func_80166D2C(s32, ? *);                          /* extern */
extern ? D_801B379C;
extern ? D_801B38B4;
extern u8 D_801B3964;
static ? D_801C349C;                                /* unable to generate initializer: unknown type */
static ? D_801C34CC;                                /* unable to generate initializer: unknown type */
static ? D_801C34D4;                                /* unable to generate initializer: unknown type */
static ? D_801C34E0;                                /* unable to generate initializer: unknown type */
static s32 D_800F4580 = 0x801F5410;                 /* const */

void func_8013B5A4(s32 arg0) {
    ? sp18;
    ? *var_a3;
    s32 temp_v1;

    if (arg0 == 1) {
        var_a3 = "SHELL";
        goto block_6;
    }
    if (arg0 == 2) {
        var_a3 = "MEMC";
        goto block_6;
    }
    temp_v1 = D_801B3964 * 4;
    if (*(temp_v1 + &D_801B38B4) != 0) {
        var_a3 = *(temp_v1 + &D_801B379C);
block_6:
        func_80154AFC(&sp18, "%s%s.%s", "OVR\\", var_a3);
        func_80166D2C(D_800F4580, &sp18);
    }
}
