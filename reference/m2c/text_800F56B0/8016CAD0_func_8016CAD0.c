/* m2c reference for func_8016CAD0 @ 8016CAD0 (54 words). Generated; not compiled or validated. */
extern ? (*D_801EC9F0)(void *);

void func_8016CAD0(void *arg0, s8 arg1) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_v0;

    temp_v1 = arg0->unk46;
    arg0->unk4C = (s32) (arg0->unk4C + 1);
    if (temp_v1 != 0) {
        if (temp_v1 == 1) {
            temp_v1_2 = arg0->unk4A;
            var_v0 = temp_v1_2 + 1;
            if (temp_v1_2 >= 2U) {
                arg0->unk49 = 2;
                arg0->unk46 = 0xFFU;
                return;
            }
            goto block_5;
        }
        temp_v1_3 = arg0->unk4A;
        var_v0 = temp_v1_3 + 1;
        if (temp_v1_3 < 4U) {
block_5:
            arg0->unk4A = var_v0;
            return;
        }
        D_801EC9F0(arg0);
        goto block_7;
    }
block_7:
    if (*arg0->unk3C != 0xF3) {
        arg0->unk30->unk0 = arg1;
        arg0->unk30->unk1 = 0;
        arg0->unkE8 = 0;
    }
}
