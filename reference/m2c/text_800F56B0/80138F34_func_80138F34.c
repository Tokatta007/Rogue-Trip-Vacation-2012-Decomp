/* m2c reference for func_80138F34 @ 80138F34 (22 words). Generated; not compiled or validated. */
? func_80133708();                                  /* extern */
? func_801369BC(?, ? *);                            /* extern */
extern u8 D_801B3964;
static ? D_800F3D30;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3D40;                                /* unable to generate initializer: unknown type; const */

void func_80138F34(void) {
    ? *var_a1;

    func_80133708();
    if (D_801B3964 == 5) {
        var_a1 = &D_800F3D30;
    } else {
        var_a1 = &D_800F3D40;
    }
    func_801369BC(0x800201D0, var_a1);
}
