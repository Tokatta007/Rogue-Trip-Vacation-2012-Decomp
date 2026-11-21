/* m2c reference for func_80177C2C @ 80177C2C (20 words). Generated; not compiled or validated. */
extern ? D_801BC2B8;
extern s32 D_801C38F4;
static ? *D_801C368C = &D_801BC2B8;
static ? *D_801C3694 = (? *)0x1F800000;

s32 func_80177C2C(void **arg0) {
    ? *var_v1;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = D_801C38F4 - 1;
    D_801C38F4 = temp_v1;
    if (temp_v1 >= 0) {
        if (temp_v1 < 0x29) {
            var_v1 = D_801C3694;
            var_v0 = temp_v1 * 0x18;
        } else {
            var_v1 = D_801C368C;
            var_v0 = temp_v1 * 0x18;
        }
        *arg0 = var_v1 + var_v0;
    }
    return D_801C38F4;
}
