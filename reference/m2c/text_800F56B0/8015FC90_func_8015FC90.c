/* m2c reference for func_8015FC90 @ 8015FC90 (223 words). Generated; not compiled or validated. */
extern void *D_801BC000;

void func_8015FC90(void *arg0) {
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    s32 temp_t1;
    s32 temp_t2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_a2;
    u16 var_a2_2;
    u16 var_t0;
    u16 var_t0_2;

    var_a2 = 0;
    temp_t1 = arg0->unk0;
    temp_t2 = temp_t1 == 0;
    var_t0 = 0;
    if (temp_t2 == 0) {
        if (temp_t1 & 1) {
            if (temp_t1 & 4) {
                goto block_3;
            }
            goto block_12;
            goto block_13;
        }
    } else {
block_3:
        temp_v1 = arg0->unk8;
        switch (temp_v1) {                          /* switch 1 */
        case 1:                                     /* switch 1 */
            var_a1 = 0x8000;
            break;
        case 2:                                     /* switch 1 */
            var_a1 = 0x9000;
            break;
        case 3:                                     /* switch 1 */
            var_a1 = 0xA000;
            break;
        case 4:                                     /* switch 1 */
            var_a1 = 0xB000;
            break;
        case 5:                                     /* switch 1 */
            var_a1 = 0xC000;
            break;
        case 6:                                     /* switch 1 */
            var_a1 = 0xD000;
            break;
        case 7:                                     /* switch 1 */
            var_a1 = 0xE000;
            break;
        default:                                    /* switch 1 */
block_12:
            var_a2 = arg0->unk4;
            var_a1 = 0;
            break;
        }
block_13:
        var_v0 = var_a2 & 0x7FFF;
        if (var_a1 != 0) {
            temp_a3 = (s16) arg0->unk4;
            var_a2_2 = 0x7F;
            if (temp_a3 < 0x80) {
                var_a2_2 = 0;
                if (temp_a3 >= 0) {
                    var_a2_2 = arg0->unk4;
                }
            }
            var_v0 = var_a2_2 & 0x7FFF;
        }
        D_801BC000->unk180 = (s16) (var_v0 | var_a1);
    }
    if (temp_t2 == 0) {
        if (temp_t1 & 2) {
            if (temp_t1 & 8) {
                goto block_22;
            }
            goto block_31;
            goto block_32;
        }
    } else {
block_22:
        temp_v1_2 = arg0->unkA;
        switch (temp_v1_2) {                        /* switch 2 */
        case 1:                                     /* switch 2 */
            var_a1_2 = 0x8000;
            break;
        case 2:                                     /* switch 2 */
            var_a1_2 = 0x9000;
            break;
        case 3:                                     /* switch 2 */
            var_a1_2 = 0xA000;
            break;
        case 4:                                     /* switch 2 */
            var_a1_2 = 0xB000;
            break;
        case 5:                                     /* switch 2 */
            var_a1_2 = 0xC000;
            break;
        case 6:                                     /* switch 2 */
            var_a1_2 = 0xD000;
            break;
        case 7:                                     /* switch 2 */
            var_a1_2 = 0xE000;
            break;
        default:                                    /* switch 2 */
block_31:
            var_t0 = arg0->unk6;
            var_a1_2 = 0;
            break;
        }
block_32:
        var_v0_2 = var_t0 & 0x7FFF;
        if (var_a1_2 != 0) {
            temp_a2 = (s16) arg0->unk6;
            var_t0_2 = 0x7F;
            if (temp_a2 < 0x80) {
                var_t0_2 = 0;
                if (temp_a2 >= 0) {
                    var_t0_2 = arg0->unk6;
                }
            }
            var_v0_2 = var_t0_2 & 0x7FFF;
        }
        D_801BC000->unk182 = (s16) (var_v0_2 | var_a1_2);
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x40)) {
        D_801BC000->unk1B0 = (u16) arg0->unk10;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x80)) {
        D_801BC000->unk1B2 = (u16) arg0->unk12;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x400)) {
        D_801BC000->unk1B4 = (u16) arg0->unk1C;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x800)) {
        D_801BC000->unk1B6 = (u16) arg0->unk1E;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x100)) {
        if (arg0->unk14 == 0) {
            var_v0_3 = D_801BC000->unk1AA & 0xFFFB;
        } else {
            var_v0_3 = D_801BC000->unk1AA | 4;
        }
        D_801BC000->unk1AA = var_v0_3;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x200)) {
        if (arg0->unk18 == 0) {
            var_v0_4 = D_801BC000->unk1AA & 0xFFFE;
        } else {
            var_v0_4 = D_801BC000->unk1AA | 1;
        }
        D_801BC000->unk1AA = var_v0_4;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x1000)) {
        if (arg0->unk20 == 0) {
            var_v0_5 = D_801BC000->unk1AA & 0xFFF7;
        } else {
            var_v0_5 = D_801BC000->unk1AA | 8;
        }
        D_801BC000->unk1AA = var_v0_5;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x2000)) {
        if (arg0->unk24 == 0) {
            var_v0_6 = D_801BC000->unk1AA & 0xFFFD;
        } else {
            var_v0_6 = D_801BC000->unk1AA | 2;
        }
        D_801BC000->unk1AA = var_v0_6;
    }
}
