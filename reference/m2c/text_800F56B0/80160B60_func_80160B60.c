/* m2c reference for func_80160B60 @ 80160B60 (193 words). Generated; not compiled or validated. */
extern void *D_801BC000;

void func_80160B60(void *arg0) {
    s16 var_a1;
    s16 var_a2;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 var_a3;
    u16 var_t0;
    u32 temp_v1_3;
    u32 temp_v1_4;

    var_a1 = 0;
    var_a3 = D_801BC000->unk180;
    var_t0 = D_801BC000->unk182;
    var_a2 = 0;
    if (!(var_a3 & 0x8000)) {
        var_a2 = 0;
    } else {
        temp_v1 = var_a3 & 0xF000;
        if (temp_v1 != 0xB000) {
            if (temp_v1 <= 0xB000) {
                if (temp_v1 != 0x9000) {
                    if (temp_v1 <= 0x9000) {
                        if (temp_v1 != 0x8000) {
                            var_a3 &= 0xFFF;
                        } else {
                            var_a2 = 1;
                            goto block_24;
                        }
                    } else if (temp_v1 != 0xA000) {
                        var_a3 &= 0xFFF;
                    } else {
                        var_a2 = 3;
                        goto block_24;
                    }
                } else {
                    var_a2 = 2;
                    goto block_24;
                }
            } else if (temp_v1 != 0xD000) {
                if (temp_v1 <= 0xD000) {
                    if (temp_v1 != 0xC000) {
                        var_a3 &= 0xFFF;
                    } else {
                        var_a2 = 5;
                        goto block_24;
                    }
                } else if ((temp_v1 != 0xE000) && (temp_v1 != 0xF000)) {
                    var_a3 &= 0xFFF;
                } else {
                    var_a2 = 7;
                    goto block_24;
                }
            } else {
                var_a2 = 6;
                goto block_24;
            }
        } else {
            var_a2 = 4;
block_24:
            var_a3 &= 0xFFF;
        }
    }
    temp_v1_2 = var_t0 & 0xF000;
    if (!(var_t0 & 0x8000)) {
        var_a1 = 0;
    } else if (temp_v1_2 != 0xB000) {
        if (temp_v1_2 <= 0xB000) {
            if (temp_v1_2 != 0x9000) {
                if (temp_v1_2 <= 0x9000) {
                    if (temp_v1_2 != 0x8000) {
                        var_t0 &= 0xFFF;
                    } else {
                        var_a1 = 1;
                        goto block_49;
                    }
                } else if (temp_v1_2 != 0xA000) {
                    var_t0 &= 0xFFF;
                } else {
                    var_a1 = 3;
                    goto block_49;
                }
            } else {
                var_a1 = 2;
                goto block_49;
            }
        } else if (temp_v1_2 != 0xD000) {
            if (temp_v1_2 <= 0xD000) {
                if (temp_v1_2 != 0xC000) {
                    var_t0 &= 0xFFF;
                } else {
                    var_a1 = 5;
                    goto block_49;
                }
            } else if ((temp_v1_2 != 0xE000) && (temp_v1_2 != 0xF000)) {
                var_t0 &= 0xFFF;
            } else {
                var_a1 = 7;
                goto block_49;
            }
        } else {
            var_a1 = 6;
            goto block_49;
        }
    } else {
        var_a1 = 4;
block_49:
        var_t0 &= 0xFFF;
    }
    temp_v1_3 = var_a3 & 0xFFFF;
    if (temp_v1_3 >= 0x4000U) {
        arg0->unk4 = (u16) (temp_v1_3 - 0x8000);
    } else {
        arg0->unk4 = var_a3;
    }
    temp_v1_4 = var_t0 & 0xFFFF;
    if (temp_v1_4 >= 0x4000U) {
        arg0->unk6 = (u16) (temp_v1_4 - 0x8000);
    } else {
        arg0->unk6 = var_t0;
    }
    arg0->unk8 = var_a2;
    arg0->unkA = var_a1;
    arg0->unkC = (u16) D_801BC000->unk1B8;
    arg0->unkE = (u16) D_801BC000->unk1BA;
    arg0->unk10 = (u16) D_801BC000->unk1B0;
    arg0->unk12 = (u16) D_801BC000->unk1B2;
    if (D_801BC000->unk1AA & 4) {
        arg0->unk14 = 1;
    } else {
        arg0->unk14 = 0;
    }
    if (D_801BC000->unk1AA & 1) {
        arg0->unk18 = 1;
    } else {
        arg0->unk18 = 0;
    }
    arg0->unk1C = (u16) D_801BC000->unk1B4;
    arg0->unk1E = (u16) D_801BC000->unk1B6;
    if (D_801BC000->unk1AA & 8) {
        arg0->unk20 = 1;
    } else {
        arg0->unk20 = 0;
    }
    if (D_801BC000->unk1AA & 2) {
        arg0->unk24 = 1;
        return;
    }
    arg0->unk24 = 0;
}
