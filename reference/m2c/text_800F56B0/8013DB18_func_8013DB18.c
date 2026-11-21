/* m2c reference for func_8013DB18 @ 8013DB18 (39 words). Generated; not compiled or validated. */
static void *D_801C34EC = NULL;

s32 func_8013DB18(void *arg0, void *arg1) {
    s32 var_a2;
    s32 var_v1;
    u16 temp_v0;

    var_a2 = 1;
    if ((arg1->unk4C != 0) || (temp_v0 = arg1->unk4A, ((s16) temp_v0 == 2)) || (((s16) temp_v0 >= 2) && ((s16) temp_v0 < 0xA) && ((s16) temp_v0 >= 7))) {
        var_a2 = 0;
    }
    if (D_801C34EC->unk12688 == 7) {
        var_v1 = 0;
        if (arg0->unk1E8 >= 0xA01) {
            var_v1 = arg0->unk1EC < 0x190;
        }
        if (var_v1 != 0) {
            var_a2 = 0;
        }
    }
    return var_a2;
}
