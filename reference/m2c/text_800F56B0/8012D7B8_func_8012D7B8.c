/* m2c reference for func_8012D7B8 @ 8012D7B8 (21 words). Generated; not compiled or validated. */
extern ? D_8018461C;
static s32 D_801C3314 = 0;
static s32 D_801C3318 = 0;
static s32 D_801C331C = 0;
static s32 D_801C3320 = 0;
static s32 D_801C3324 = 0;
static s32 D_801C3328 = 0;
static s32 D_801C332C = 0;
static s32 D_801C3330 = 0;
static s32 D_801C3334 = 0;
static s32 D_801C3338 = 0;

void func_8012D7B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_v1;
    s32 var_t0;

    var_t0 = 3;
    var_v1 = &D_8018461C + 0xC;
    D_801C331C = arg0;
    D_801C3320 = arg1;
    D_801C3314 = arg2;
    D_801C3318 = arg3;
    D_801C3328 = -1;
    D_801C3324 = -1;
    D_801C332C = 0;
    D_801C3330 = 0;
    D_801C3334 = -1;
    D_801C3338 = -1;
    do {
        *var_v1 = 0;
        var_t0 -= 1;
        var_v1 -= 4;
    } while (var_t0 >= 0);
}
