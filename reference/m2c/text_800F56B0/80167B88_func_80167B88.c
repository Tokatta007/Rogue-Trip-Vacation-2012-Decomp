/* m2c reference for func_80167B88 @ 80167B88 (134 words). Generated; not compiled or validated. */
void func_80167B88(void *arg0, u16 *arg1, u16 *arg2, s16 *arg3, s16 *arg4) {
    s32 temp_t0;
    s32 temp_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_10;
    s32 var_v1_3;
    s32 var_v1_6;
    s32 var_v1_9;
    u16 var_v1;
    u16 var_v1_2;
    u16 var_v1_4;
    u16 var_v1_5;
    u16 var_v1_7;
    u16 var_v1_8;

    *arg1 = arg0->unk0 & 0xFF;
    *arg2 = arg0->unk1 & 0xFF;
    temp_t0 = arg0->unk0 & 0xFF;
    temp_t1 = arg0->unk1 & 0xFF;
    var_v1 = arg0->unk4 & 0xFF;
    if ((u16) *arg1 < var_v1) {
        var_v1 = *arg1;
    }
    *arg1 = var_v1;
    var_v1_2 = arg0->unk5 & 0xFF;
    if ((u16) *arg2 < var_v1_2) {
        var_v1_2 = *arg2;
    }
    *arg2 = var_v1_2;
    var_v1_3 = temp_t0;
    if (temp_t0 < (s32) arg0->unk4) {
        var_v1_3 = arg0->unk4 & 0xFF;
    }
    if (temp_t1 >= (s32) arg0->unk5) {
        var_v0 = temp_t1;
    } else {
        var_v0 = arg0->unk5 & 0xFF;
    }
    var_v1_4 = arg0->unk8 & 0xFF;
    if ((u16) *arg1 < var_v1_4) {
        var_v1_4 = *arg1;
    }
    *arg1 = var_v1_4;
    var_v1_5 = arg0->unk9 & 0xFF;
    if ((u16) *arg2 < var_v1_5) {
        var_v1_5 = *arg2;
    }
    *arg2 = var_v1_5;
    var_v1_6 = var_v1_3;
    if (var_v1_3 < (s32) arg0->unk8) {
        var_v1_6 = arg0->unk8 & 0xFF;
    }
    if (var_v0 >= (s32) arg0->unk9) {
        var_v0_2 = var_v0;
    } else {
        var_v0_2 = arg0->unk9 & 0xFF;
    }
    var_v1_7 = arg0->unkA & 0xFF;
    if ((u16) *arg1 < var_v1_7) {
        var_v1_7 = *arg1;
    }
    *arg1 = var_v1_7;
    var_v1_8 = arg0->unkB & 0xFF;
    if ((u16) *arg2 < var_v1_8) {
        var_v1_8 = *arg2;
    }
    *arg2 = var_v1_8;
    var_v1_9 = var_v1_6;
    if (var_v1_6 < (s32) arg0->unkA) {
        var_v1_9 = arg0->unkA & 0xFF;
    }
    if (var_v0_2 >= (s32) arg0->unkB) {
        var_v1_10 = var_v0_2;
    } else {
        var_v1_10 = arg0->unkB & 0xFF;
    }
    *arg3 = var_v1_9 - *arg1;
    *arg4 = var_v1_10 - *arg2;
}
