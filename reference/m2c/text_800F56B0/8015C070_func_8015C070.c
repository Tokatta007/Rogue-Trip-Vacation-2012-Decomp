/* m2c reference for func_8015C070 @ 8015C070 (71 words). Generated; not compiled or validated. */
extern ? (*D_801BAD44)(? *, s16, s16, s16, s32);
extern ? D_801BAD4A;
static ? D_800F4D80;                                /* unable to generate initializer: unknown type; const */
static ? D_800F4D8C;                                /* unable to generate initializer: unknown type; const */
static ? D_800F4DA0;                                /* unable to generate initializer: unknown type; const */

void func_8015C070(s16 arg0, void *arg1, s16 arg2, s16 arg3) {
    ? *var_a0;
    s16 temp_a1;
    s16 temp_v1;
    s16 var_a2;
    s16 var_a3;

    var_a2 = arg2;
    var_a3 = arg3;
    switch (D_801BAD4A.unk0) {                      /* irregular */
    case 1:
        temp_a1 = arg1->unk4;
        if ((D_801BAD4A.unk2 < temp_a1) || (var_a3 = arg1->unk0, ((D_801BAD4A.unk2 < (temp_a1 + var_a3)) != 0)) || (temp_v1 = arg1->unk2, ((D_801BAD4A.unk4 < temp_v1) != 0)) || (var_a2 = arg1->unk6, ((D_801BAD4A.unk4 < (temp_v1 + var_a2)) != 0)) || (temp_a1 <= 0) || (var_a3 < 0) || (temp_v1 < 0) || (var_a2 <= 0)) {
            var_a0 = &D_800F4D80;
block_13:
            D_801BAD44(var_a0, arg0, var_a2, var_a3);
            D_801BAD44(&D_800F4D8C, arg1->unk0, arg1->unk2, arg1->unk4, (s32) arg1->unk6);
        }
        return;
    case 2:
        var_a0 = &D_800F4DA0;
        goto block_13;
    }
}
