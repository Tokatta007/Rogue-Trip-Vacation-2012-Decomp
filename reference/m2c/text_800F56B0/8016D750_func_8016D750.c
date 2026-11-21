/* m2c reference for func_8016D750 @ 8016D750 (134 words). Generated; not compiled or validated. */
? func_8016D18C(s32);                               /* extern */
? func_8016D27C(s32);                               /* extern */
? func_8016D378(s32);                               /* extern */
? func_8016D45C(s32);                               /* extern */

void func_8016D750(void *arg0, u8 arg1) {
    s32 temp_a1;
    s32 var_v1;
    s32 var_v1_2;
    u8 var_a1;
    void *var_a0;

    temp_a1 = arg0->unk0 & 0xF;
    if (temp_a1 == 3) {
        switch (arg1) {                             /* irregular */
        case 0:
            arg0->unkE = 0;
            arg0->unkC = 0U;
            break;
        case 1:
            arg0->unkE = (s16) (arg0->unk6 + 1);
            if (arg0->unkA == 0) {
                func_8016D18C(temp_a1);
            } else if ((arg0->unkA & 0xFF) == arg1) {
                func_8016D27C(temp_a1);
            } else if (arg0->unkA == 2) {
                func_8016D378(temp_a1);
            } else if (arg0->unkA == temp_a1) {
                func_8016D45C(temp_a1);
            }
            break;
        case 2:
            arg0->unkE = 0;
            arg0->unkC = (u8) ((arg0->unk3 & 0x7F) - 1);
            break;
        }
        if (arg1 != 1) {
            var_v1 = 0;
            if (arg0->unk1C != NULL) {
                var_v1 = arg0->unk5 == arg0->unkC;
            }
            if (var_v1 != 0) {
                var_a1 = arg0->unk13;
                var_a0 = arg0->unk1C;
                goto block_31;
            }
        }
    } else if ((arg0->unk0 & 0xF) == 9) {
        if (arg1 == 0) {
            arg0->unk4 = 0U;
        }
        if (arg1 == 2) {
            arg0->unk4 = (u8) ((arg0->unk3 & 0x7F) - 1);
        }
        if (arg1 == 1) {
            arg0->unk4 = (u8) (arg0->unk4 + 1);
            if ((u8) arg0->unk4 >= (u32) (arg0->unk3 & 0x7F)) {
                arg0->unk4 = 0U;
            }
        }
        var_v1_2 = 0;
        if (arg0->unk8 != NULL) {
            var_v1_2 = (u8) arg0->unk6 == arg0->unk4;
        }
        if (var_v1_2 != 0) {
            var_a1 = arg0->unk5;
            var_a0 = arg0->unk8;
block_31:
            func_8016D750(var_a0, var_a1);
        }
    }
}
