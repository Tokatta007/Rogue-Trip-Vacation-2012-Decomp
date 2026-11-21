/* m2c reference for func_8012DBBC @ 8012DBBC (15 words). Generated; not compiled or validated. */
extern ? D_8018461C;
static s32 D_801C3324 = 0;
static s32 D_801C3328 = 0;
static s32 D_801C332C = 0;
static s32 D_801C3330 = 0;

void func_8012DBBC(void) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 3;
    var_v1 = &D_8018461C + 0xC;
    D_801C3328 = -1;
    D_801C3324 = -1;
    D_801C332C = 0;
    D_801C3330 = 0;
    do {
        *var_v1 = 0;
        var_a0 -= 1;
        var_v1 -= 4;
    } while (var_a0 >= 0);
}
