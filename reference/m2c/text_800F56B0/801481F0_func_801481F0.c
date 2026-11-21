/* m2c reference for func_801481F0 @ 801481F0 (140 words). Generated; not compiled or validated. */
void func_801481F0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t4;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_t1;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    u16 var_v0;
    void *temp_a1;
    void *var_a0;

    if (arg2 & 0xFF) {
        var_v0 = arg0->unk5E;
        var_a0 = *arg0->unk44 + ((s32) (arg0->unk5C << 0x10) >> 0xB);
    } else {
        var_v0 = arg0->unk5C;
        var_a0 = *arg0->unk44 + ((s32) (arg0->unk60 << 0x10) >> 0xB);
    }
    temp_a1 = *arg0->unk44 + ((s32) (var_v0 << 0x10) >> 0xB);
    var_t1 = 0;
    temp_t0 = var_a0->unk0 - temp_a1->unk0;
    var_a2 = temp_t0;
    if (temp_t0 < 0) {
        var_a2 = -var_a2;
    }
    temp_a2 = var_a2 < 0x28;
    temp_a3 = var_a0->unk4 - temp_a1->unk4;
    var_v0_2 = temp_a3;
    if (temp_a3 < 0) {
        var_v0_2 = -var_v0_2;
    }
    if (temp_a2 == 0) {
        var_t1 = (var_v0_2 < 0x28) == 0;
    }
    if (var_t1 != 0) {
        var_a0_2 = temp_a1->unk0 + (temp_t0 >> 1);
        var_v1 = temp_a1->unk4 + (temp_a3 >> 1);
    } else {
        var_a0_2 = 0;
        if (temp_a2 != 0) {
            var_a0_2 = temp_a1->unk0;
            var_v1 = 0;
        } else {
            var_v1 = temp_a1->unk4;
        }
    }
    temp_t4 = temp_a1->unk0;
    temp_a1_2 = temp_a1->unk4;
    if (var_t1 != 0) {
        if (temp_a3 != 0) {
            arg1->unk0 = (s32) ((arg0->unk1E4 - temp_t4) - ((s32) (temp_t0 * (arg0->unk1E8 - temp_a1_2)) / temp_a3));
        } else {
            arg1->unk0 = 0;
        }
        if (temp_t0 != 0) {
            arg1->unk4 = (s32) ((arg0->unk1E8 - temp_a1_2) - ((s32) (temp_a3 * (arg0->unk1E4 - temp_t4)) / temp_t0));
            var_v1_2 = arg1->unk0;
            var_v0_3 = arg1->unk4;
            if (var_v1_2 < 0) {
                var_v1_2 = -var_v1_2;
            }
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            if (var_v0_3 < var_v1_2) {
                arg1->unk0 = 0;
                return;
            }
            /* Duplicate return node #27. Try simplifying control flow for better match */
            arg1->unk4 = 0;
            return;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        arg1->unk4 = 0;
        return;
    }
    if (temp_a2 != 0) {
        arg1->unk0 = (s32) (arg0->unk1E4 - var_a0_2);
        arg1->unk4 = 0;
        return;
    }
    arg1->unk0 = 0;
    arg1->unk4 = (s32) (arg0->unk1E8 - var_v1);
}
