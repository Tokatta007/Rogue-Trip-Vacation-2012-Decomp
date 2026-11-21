/* m2c reference for func_8016120C @ 8016120C (151 words). Generated; not compiled or validated. */
extern void *D_801BC068;
extern ? D_801BC098;
extern u16 D_801EC972;
extern s32 (*D_801EC978)(?, s32);
extern ? D_801EC980;
extern u8 *D_801EC984;
extern s32 D_801EC988;
extern s32 D_801EC98C;

s32 func_8016120C(s32 arg0, s32 arg1) {
    s16 temp_s5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    if (D_801EC980.unk0 != 0) {
        return -1;
    }
    temp_s5 = *(&D_801BC098 + ((u32) (D_801EC972 & 0x300) >> 7));
    D_801EC980.unk8 = arg1;
    D_801EC980.unk4 = arg0;
    var_s1 = 0;
    if (D_801EC980.unk8 != 0) {
loop_6:
        if ((D_801BC068->unk4 & 5) != 5) {
loop_8:
            temp_a1 = var_s0;
            if ((D_801EC978 == NULL) || (var_s0 += 1, (D_801EC978(2, temp_a1) != 0))) {
                if ((D_801BC068->unk4 & 5) == 5) {
                    goto block_11;
                }
                goto loop_8;
            }
            DeliverEvent(0xF000000BU, 0x100U);
            goto block_21;
        }
block_11:
        if (var_s1 == 0) {
            D_801EC980.unkC = (s32) (D_801BC068->unk4 & 0x80);
        }
        D_801BC068->unk0 = (u8) *D_801EC984;
        D_801EC980.unk4 = (s32) (D_801EC980.unk4 + 1);
        var_s1 += 1;
        D_801EC980.unk8 = (s32) (D_801EC980.unk8 - 1);
        if (var_s1 == temp_s5) {
            var_s1 = 0;
            if ((D_801BC068->unk4 & 0x80) == D_801EC980.unkC) {
loop_16:
                temp_a1_2 = var_s0;
                if ((D_801EC978 == NULL) || (var_s0 += 1, (D_801EC978(2, temp_a1_2) != 0))) {
                    if ((D_801BC068->unk4 & 0x80) != D_801EC98C) {
                        var_s1 = 0;
                        goto block_20;
                    }
                    goto loop_16;
                }
                DeliverEvent(0xF000000BU, 0x100U);
                return (arg1 - D_801EC988) - 1;
            }
        }
block_20:
        if (D_801EC988 == 0) {
            goto block_21;
        }
        goto loop_6;
    }
block_21:
    return arg1 - D_801EC988;
}
