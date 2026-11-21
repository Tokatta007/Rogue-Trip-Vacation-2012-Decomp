/* m2c reference for func_8013EF98 @ 8013EF98 (46 words). Generated; not compiled or validated. */
extern ? D_801E41F8;
extern ? D_801E4438;

void func_8013EF98(s32 arg0, void *arg1, s32 arg2) {
    s32 *var_v0;
    s32 var_a3;
    s32 var_v1;

    var_a3 = arg1->unk2 & 0xFF;
    if (var_a3 != 0) {
        var_a3 -= 1;
    }
    if ((arg1->unk0 & 0xF) == 5) {
        var_v1 = arg1->unk20;
        var_v0 = (arg2 * 4) + (var_a3 * 8) + (arg0 << 5) + &D_801E4438;
        goto block_6;
    }
    if ((arg1->unk0 & 0xF) == 4) {
        var_v1 = arg1->unkC;
        var_v0 = (arg2 * 4) + (var_a3 * 8) + (arg0 << 5) + &D_801E4438;
block_6:
        *var_v0 = var_v1;
    } else {
        var_a3 = 0;
    }
    *((arg2 * 4) + (var_a3 * 8) + (arg0 << 5) + &D_801E41F8) = arg1;
}
