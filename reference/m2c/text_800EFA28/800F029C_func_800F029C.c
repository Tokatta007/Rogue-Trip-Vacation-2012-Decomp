/* m2c reference for func_800F029C @ 800F029C (31 words). Generated; not compiled or validated. */
void func_800F029C(void *arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5) {
    s8 temp_v0;
    s8 temp_v0_2;
    s8 var_a2;
    s8 var_a3;
    s8 var_t0;
    s8 var_v1;

    var_a2 = arg2;
    var_a3 = arg3;
    var_v1 = arg4 + var_a2;
    if (arg1 & 1) {
        temp_v0 = var_a2;
        var_a2 = var_v1;
        var_v1 = temp_v0;
    }
    var_t0 = arg5 + var_a3;
    if (arg1 & 2) {
        temp_v0_2 = var_a3;
        var_a3 = var_t0;
        var_t0 = temp_v0_2;
    }
    arg0->unk39 = var_a3;
    arg0->unk3C = var_v1;
    arg0->unk41 = var_t0;
    arg0->unk42 = var_a2;
    if (arg1 & 4) {
        arg0->unk38 = var_v1;
        arg0->unk3D = var_t0;
        arg0->unk40 = var_a2;
        arg0->unk43 = var_a3;
        return;
    }
    arg0->unk38 = var_a2;
    arg0->unk3D = var_a3;
    arg0->unk40 = var_v1;
    arg0->unk43 = var_t0;
}
