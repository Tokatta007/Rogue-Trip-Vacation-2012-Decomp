/* m2c reference for func_80132D60 @ 80132D60 (16 words). Generated; not compiled or validated. */
extern ? D_801CBB58;
static s32 D_801C3370 = 0;
static s32 D_801C3374 = 0;

void func_80132D60(void) {
    s32 var_a0;
    void *temp_v1;

    var_a0 = 0;
    temp_v1 = (D_801C3370 * 8) + &D_801CBB58;
    do {
        var_a0 += 1;
        temp_v1->unk4 = 0;
        temp_v1->unk0 = -1;
    } while (var_a0 < 4);
    D_801C3370 = 0;
    D_801C3374 = 0;
}
