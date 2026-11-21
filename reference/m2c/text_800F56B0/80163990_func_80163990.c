/* m2c reference for func_80163990 @ 80163990 (12 words). Generated; not compiled or validated. */
extern ? D_801ECB48;
static s32 D_801C3614 = 0;

void func_80163990(void) {
    s32 *var_v0;
    s32 var_v1;

    var_v1 = 6;
    var_v0 = &D_801ECB48 + 0x1C8;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 0x4C;
    } while (var_v1 >= 0);
    D_801C3614 = -1;
}
