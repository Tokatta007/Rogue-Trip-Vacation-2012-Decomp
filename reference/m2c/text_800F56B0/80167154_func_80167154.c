/* m2c reference for func_80167154 @ 80167154 (45 words). Generated; not compiled or validated. */
extern ? D_801BC188;

void func_80167154(s32 arg0) {
    s8 var_a0;
    s8 var_a1;
    s8 var_v1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_a2 = (arg0 * 0x28) + &D_801BC188;
    if (arg0 != 1) {
        if (arg0 < 2) {
            temp_v0 = &D_801BC188 - 8;
            if (arg0 != 0) {
                return;
            }
            var_a1 = 0x2F;
            var_a0 = 0x52;
            var_v1 = 0x25;
            temp_v0->unk4 = 0x2F;
            temp_v0->unk5 = 0x52;
            temp_v0->unk6 = 0x25;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            temp_a2->unk4 = var_a1;
            temp_a2->unk5 = var_a0;
            temp_a2->unk6 = var_v1;
            return;
        }
        temp_v0_2 = &D_801BC188 - 8;
        if (arg0 != 2) {
            return;
        }
        var_a1 = 0x78;
        var_a0 = 0x82;
        var_v1 = 0xA0;
        temp_v0_2->unk54 = 0x78;
        temp_v0_2->unk55 = 0x82;
        temp_v0_2->unk56 = 0xA0;
        /* Duplicate return node #9. Try simplifying control flow for better match */
        temp_a2->unk4 = var_a1;
        temp_a2->unk5 = var_a0;
        temp_a2->unk6 = var_v1;
        return;
    }
    temp_v0_3 = &D_801BC188 - 8;
    var_a1 = 0x3E;
    var_a0 = 0xE6;
    var_v1 = 0x2E;
    temp_v0_3->unk2C = 0x3E;
    temp_v0_3->unk2D = 0xE6;
    temp_v0_3->unk2E = 0x2E;
    temp_a2->unk4 = var_a1;
    temp_a2->unk5 = var_a0;
    temp_a2->unk6 = var_v1;
}
