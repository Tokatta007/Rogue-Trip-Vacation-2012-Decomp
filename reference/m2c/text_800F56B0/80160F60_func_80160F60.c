/* m2c reference for func_80160F60 @ 80160F60 (149 words). Generated; not compiled or validated. */
extern void *D_801BC068;
extern ? D_801BC098;
extern ? D_801EC970;
extern u16 D_801EC972;
extern s32 (*D_801EC978)(?, s32);
extern ? D_801EC990;
extern u8 *D_801EC994;
extern s32 D_801EC998;

s32 func_80160F60(s32 arg0, s32 arg1) {
    s16 temp_s4;
    s32 temp_a1;
    s32 var_s0;
    s32 var_s1;
    u16 temp_a1_2;

    var_s1 = 0;
    if (D_801EC990.unk0 != 0) {
        return -1;
    }
    temp_s4 = *(&D_801BC098 + ((u32) (D_801EC972 & 0x300) >> 7));
    D_801EC990.unk8 = arg1;
    D_801EC990.unk4 = arg0;
    D_801EC990.unk0 = 0;
    D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x20);
    var_s0 = 0;
    if (D_801EC990.unk8 != 0) {
loop_6:
        if (!(D_801BC068->unk4 & 0x38)) {
            if (!(D_801BC068->unk4 & 2)) {
loop_8:
                temp_a1 = var_s1;
                if ((D_801EC978 == NULL) || (var_s1 += 1, (D_801EC978(1, temp_a1) != 0))) {
                    if (D_801BC068->unk4 & 2) {
                        goto block_11;
                    }
                    goto loop_8;
                }
                D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xFFDF);
                DeliverEvent(0xF000000BU, 0x100U);
            } else {
block_11:
                *D_801EC994 = D_801BC068->unk0;
                D_801EC990.unk4 = (s32) (D_801EC990.unk4 + 1);
                var_s0 += 1;
                D_801EC990.unk8 = (s32) (D_801EC990.unk8 - 1);
                if (var_s0 == temp_s4) {
                    var_s0 = 0;
                    D_801BC068->unkA = (u16) (D_801BC068->unkA ^ 2);
                }
                if (D_801EC990.unk8 == 0) {
                    goto block_14;
                }
                goto loop_6;
            }
        } else {
            temp_a1_2 = D_801BC068->unkA;
            D_801BC068->unkA = 0x50U;
            D_801BC068->unk8 = (u16) D_801EC970.unk0;
            D_801BC068->unkE = (u16) D_801EC970.unk6;
            D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x10);
            D_801BC068->unkA = temp_a1_2;
            D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xFFDF);
            DeliverEvent(0xF000000BU, 0x8000U);
        }
    } else {
block_14:
        D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xFFDF);
    }
    return arg1 - D_801EC998;
}
