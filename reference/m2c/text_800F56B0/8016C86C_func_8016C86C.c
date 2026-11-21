/* m2c reference for func_8016C86C @ 8016C86C (153 words). Generated; not compiled or validated. */
s32 func_80162E50(void *);                          /* extern */
s32 func_8016CBA8(void *);                          /* extern */
extern ? (*D_801EC9F0)(void *);

void func_8016C86C(void *arg0) {
    s32 (*temp_v0_2)(void *);
    s32 var_a0;
    s32 var_v0;
    u32 temp_v0;
    u8 temp_s1;
    u8 temp_v1;

    temp_s1 = arg0->unkE8;
    temp_v0 = (u8) arg0->unk3C->unk0 >> 4;
    arg0->unkE8 = (u8) temp_v0;
    if (temp_v0 == 0xF) {
        arg0->unkE8 = temp_s1;
    } else {
        arg0->unk30->unk0 = 0;
        arg0->unk30->unk1 = (u8) arg0->unk3C->unk0;
        var_a0 = 2;
        if ((s32) arg0->unk44 > 2) {
            do {
                *(arg0->unk30 + var_a0) = *(arg0->unk3C + var_a0);
                var_a0 += 1;
            } while (var_a0 < (s32) arg0->unk44);
        }
    }
    if (((arg0->unk3C->unk1 == 0) && ((arg0->unk46 != 1) || (arg0->unk14 != 0)) && (arg0->unk50 == 0)) || ((func_8016CBA8(arg0) == 0) && (arg0->unk37 == 0) && (arg0->unk4A == 0) && (arg0->unkE8 != temp_s1))) {
        D_801EC9F0(arg0);
    }
    arg0->unk4A = 0U;
    if (((u32) ((arg0->unk46 - 2) & 0xFF) < 0xFCU) && (arg0->unk3C->unk0 != 0xF3)) {
        D_801EC9F0(arg0);
    }
    temp_v1 = arg0->unk46;
    if ((temp_v1 == 0) || (temp_v1 == 0xFF) || (arg0->unk36 != 0)) {
        switch (temp_v1) {                          /* irregular */
        case 0x0:
            if (arg0->unkE8 != 0) {
                arg0->unk49 = 1;
block_29:
                arg0->unk46 = (u8) (arg0->unk46 + 1);
                return;
            }
            break;
        case 0x1:
            arg0->unk47 = 0;
            goto block_29;
        case 0xFE:
            arg0->unk46 = 0xFFU;
            return;
        default:
            temp_v0_2 = arg0->unk18;
            if (temp_v0_2 != NULL) {
                var_v0 = temp_v0_2(arg0);
            } else {
                var_v0 = func_80162E50(arg0);
            }
            arg0->unk46 = (u8) (arg0->unk46 + var_v0);
            break;
        }
    } else {
    case 0xFF:
    }
}
