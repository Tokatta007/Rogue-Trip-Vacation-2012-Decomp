/* m2c reference for func_80179548 @ 80179548 (29 words). Generated; not compiled or validated. */
extern ? D_801C30D4;
extern s32 D_801C38F8;
extern void *D_801C3900;

void func_80179548(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_v1;
    s32 var_t0;
    void **var_a3;
    void *temp_v0;

    var_t0 = 0;
    var_a3 = &D_801C3900;
    var_v1 = &D_801C38F8;
    D_801C30D4.unk0 = arg0;
    D_801C30D4.unk4 = arg1;
    D_801C30D4.unk8 = arg2;
    do {
        if (*var_v1 != 0) {
            temp_v0 = *var_a3;
            temp_v0->unk29 = (s8) arg0;
            temp_v0->unk2A = (s8) arg1;
            temp_v0->unk2B = (s8) arg2;
            temp_v0->unkA9 = (s8) arg0;
            temp_v0->unkAA = (s8) arg1;
            temp_v0->unkAB = (s8) arg2;
        }
        var_a3 += 4;
        var_t0 += 1;
        var_v1 += 4;
    } while (var_t0 < 2);
}
