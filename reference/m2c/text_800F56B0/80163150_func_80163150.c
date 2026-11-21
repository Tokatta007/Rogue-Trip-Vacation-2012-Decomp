/* m2c reference for func_80163150 @ 80163150 (157 words). Generated; not compiled or validated. */
extern u8 *D_801EC9F8;

s32 func_80163150(void *arg0) {
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 *temp_v1_3;
    u8 *var_a2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v1;
    u8 temp_v1_4;
    void *temp_a3;
    void *temp_v1_2;
    void *temp_v1_5;

    temp_v1 = arg0->unk46;
    if (temp_v1 != 3) {
        if ((s32) temp_v1 < 4) {
            if (temp_v1 != 2) {
                return 1;
            }
            temp_v1_2 = arg0->unk3C;
            *((arg0->unk47 * 2) + arg0->unk0) = temp_v1_2->unk5 + (temp_v1_2->unk4 << 8);
            temp_v0 = arg0->unk47 + 1;
            arg0->unk47 = temp_v0;
            var_v0 = 0;
            if ((u32) (temp_v0 & 0xFF) >= (u8) arg0->unkE3) {
                arg0->unk47 = 0U;
                goto block_25;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return var_v0;
        }
        if (temp_v1 != 4) {
            return 1;
        }
        temp_a3 = arg0->unk8 + (arg0->unk47 * 8);
        if (arg0->unk48 == 0) {
            temp_v0_2 = arg0->unk3C->unk4;
            arg0->unk48 = temp_v0_2;
            temp_a3->unk0 = temp_v0_2;
            var_a2 = arg0->unk3C + 5;
            if (arg0->unk47 == 0) {
                var_v1 = arg0->unk8;
                var_v0_2 = arg0->unkEA * 8;
            } else {
                var_v1 = temp_a3->unk-4;
                var_v0_2 = (temp_a3->unk-8 + 3) & 0x1FC;
            }
            temp_v1_3 = var_v1 + var_v0_2;
            temp_a3->unk4 = temp_v1_3;
            D_801EC9F8 = temp_v1_3;
            var_a0 = 2;
        } else {
            var_a2 = arg0->unk3C + 2;
            var_a0 = 5;
        }
        if (var_a0 != -1) {
loop_18:
            var_a0 -= 1;
            if (arg0->unk48 != 0) {
                temp_v1_4 = *var_a2;
                var_a2 += 1;
                *D_801EC9F8 = temp_v1_4;
                D_801EC9F8 += 1;
                arg0->unk48 = (u8) (arg0->unk48 - 1);
                if (var_a0 == -1) {
                    goto block_20;
                }
                goto loop_18;
            }
            goto block_22;
        }
block_20:
        if (arg0->unk48 != 0) {
            goto block_21;
        }
block_22:
        temp_v0_3 = arg0->unk47 + 1;
        arg0->unk47 = temp_v0_3;
        if ((u32) (temp_v0_3 & 0xFF) >= (u8) arg0->unkEA) {
            arg0->unk49 = 6;
            arg0->unk46 = 0xFEU;
            return 0;
        }
        arg0->unk48 = 0U;
block_21:
        return 0;
    }
    temp_v1_5 = arg0->unk4 + (arg0->unk47 * 5);
    temp_v1_5->unk0 = (u8) arg0->unk3C->unk4;
    temp_v1_5->unk1 = (s8) (arg0->unk3C->unk5 & 0x7F);
    temp_v1_5->unk2 = (u8) arg0->unk3C->unk6;
    temp_v1_5->unk3 = (u8) arg0->unk3C->unk7;
    temp_v1_5->unk4 = (s8) ((s32) arg0->unk3C->unk5 >> 7);
    temp_v0_4 = arg0->unk47 + 1;
    arg0->unk47 = temp_v0_4;
    var_v0 = 0;
    if ((u32) (temp_v0_4 & 0xFF) >= (u8) arg0->unkE9) {
        arg0->unk47 = 0U;
        arg0->unk48 = 0U;
block_25:
        var_v0 = 1;
    }
    return var_v0;
}
