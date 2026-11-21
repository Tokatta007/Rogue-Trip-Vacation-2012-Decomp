/* m2c reference for func_80131518 @ 80131518 (345 words). Generated; not compiled or validated. */
? func_80130CCC(void *);                            /* extern */
? func_80179C74(void *, s32);                       /* extern */
extern void **D_801C37F4;

void func_80131518(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s1;
    u32 temp_v1;
    void **var_v1;
    void **var_v1_2;
    void **var_v1_3;
    void **var_v1_4;
    void **var_v1_5;
    void **var_v1_6;
    void **var_v1_7;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *var_a0;
    void *var_a0_2;
    void *var_a0_3;
    void *var_a0_4;
    void *var_a0_5;
    void *var_a0_6;
    void *var_a1_6;

    var_s1 = 1;
    *D_801C37F4 = arg0;
loop_1:
    var_s1 -= 1;
    if (var_s1 > 0) {
        temp_s0 = D_801C37F4[var_s1];
        if (temp_s0 != NULL) {
            temp_v1 = temp_s0->unk0 & 0xF;
            switch (temp_v1) {
            case 0:
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    temp_s0->unk4 = (s32) (temp_s0->unk4 + arg1);
                    temp_s0->unk8 = (s32) (temp_s0->unk8 + arg1);
                    temp_s0->unkC = (s32) (temp_s0->unkC + arg1);
                    func_80130CCC(temp_s0);
                }
            case 8:
block_44:
                temp_s0->unk3 = (u8) (temp_s0->unk3 | 0x80);
                break;
            case 1:
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    var_a1 = 0;
                    if (temp_s0->unk3 & 0x7F) {
                        var_a0 = temp_s0;
                        var_v1 = &D_801C37F4[var_s1];
                        do {
                            var_s1 += 1;
                            var_a1 += 1;
                            var_a0->unk18 = (void *) (var_a0->unk18 + arg1);
                            temp_v0 = var_a0->unk18;
                            var_a0 += 4;
                            *var_v1 = temp_v0;
                            var_v1 += 4;
                        } while (var_a1 < (temp_s0->unk3 & 0x7F));
                    }
                }
block_34:
                temp_s0->unk3 = (u8) (temp_s0->unk3 | 0x80);
                break;
            case 14:
                func_80179C74(temp_s0, arg1);
                temp_a0 = var_s1 * 4;
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    var_s1 += 1;
                    temp_s0->unk4 = (s32) (temp_s0->unk4 + arg1);
                    *(temp_a0 + D_801C37F4) = temp_s0->unk4;
                }
                goto block_44;
            case 2:
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    var_a1_2 = 0;
                    if (temp_s0->unk3 & 0x7F) {
                        var_a0_2 = temp_s0;
                        var_v1_2 = &D_801C37F4[var_s1];
                        do {
                            var_s1 += 1;
                            var_a1_2 += 1;
                            var_a0_2->unk18 = (void *) (var_a0_2->unk18 + arg1);
                            temp_v0_2 = var_a0_2->unk18;
                            var_a0_2 += 0xC;
                            *var_v1_2 = temp_v0_2;
                            var_v1_2 += 4;
                        } while (var_a1_2 < (temp_s0->unk3 & 0x7F));
                    }
                }
                goto block_34;
            case 3:
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    var_a1_3 = 0;
                    if (temp_s0->unk3 & 0x7F) {
                        var_a0_3 = temp_s0;
                        var_v1_3 = &D_801C37F4[var_s1];
                        do {
                            var_s1 += 1;
                            var_a1_3 += 1;
                            var_a0_3->unk20 = (void *) (var_a0_3->unk20 + arg1);
                            temp_v0_3 = var_a0_3->unk20;
                            var_a0_3 += 4;
                            *var_v1_3 = temp_v0_3;
                            var_v1_3 += 4;
                        } while (var_a1_3 < (temp_s0->unk3 & 0x7F));
                    }
                    if (temp_s0->unk1C != 0) {
                        temp_s0->unk1C = (s32) (temp_s0->unk1C + arg1);
                    }
                }
                goto block_34;
            case 4:
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    var_a1_4 = 0;
                    if (temp_s0->unk3 & 0x7F) {
                        var_a0_4 = temp_s0;
                        var_v1_4 = &D_801C37F4[var_s1];
                        do {
                            var_s1 += 1;
                            var_a1_4 += 1;
                            var_a0_4->unk10 = (void *) (var_a0_4->unk10 + arg1);
                            temp_v0_4 = var_a0_4->unk10;
                            var_a0_4 += 4;
                            *var_v1_4 = temp_v0_4;
                            var_v1_4 += 4;
                        } while (var_a1_4 < (temp_s0->unk3 & 0x7F));
                    }
                }
                goto block_34;
            case 5:
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    var_a1_5 = 0;
                    if (temp_s0->unk3 & 0x7F) {
                        var_a0_5 = temp_s0;
                        var_v1_5 = &D_801C37F4[var_s1];
                        do {
                            var_s1 += 1;
                            var_a1_5 += 1;
                            var_a0_5->unk24 = (void *) (var_a0_5->unk24 + arg1);
                            temp_v0_5 = var_a0_5->unk24;
                            var_a0_5 += 4;
                            *var_v1_5 = temp_v0_5;
                            var_v1_5 += 4;
                        } while (var_a1_5 < (temp_s0->unk3 & 0x7F));
                    }
                }
                goto block_34;
            case 9:
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    var_a2 = 0;
                    if (temp_s0->unk3 & 0x7F) {
                        var_a0_6 = temp_s0;
                        var_v1_6 = &D_801C37F4[var_s1];
                        do {
                            if (temp_s0->unk8 != 0) {
                                temp_s0->unk8 = (s32) (temp_s0->unk8 + arg1);
                            }
                            var_s1 += 1;
                            var_a2 += 1;
                            var_a0_6->unkC = (void *) (var_a0_6->unkC + arg1);
                            temp_v0_6 = var_a0_6->unkC;
                            var_a0_6 += 4;
                            *var_v1_6 = temp_v0_6;
                            var_v1_6 += 4;
                        } while (var_a2 < (temp_s0->unk3 & 0x7F));
                    }
                }
                temp_s0->unk3 = (u8) (temp_s0->unk3 | 0x80);
                break;
            case 11:
                temp_a1 = var_s1 * 4;
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    temp_s1 = var_s1 + 1;
                    temp_a0_2 = temp_s1 * 4;
                    var_s1 = temp_s1 + 1;
                    temp_s0->unk4 = (s32) (temp_s0->unk4 + arg1);
                    temp_s0->unk8 = (s32) (temp_s0->unk8 + arg1);
                    *(temp_a1 + D_801C37F4) = temp_s0->unk4;
                    *(temp_a0_2 + D_801C37F4) = temp_s0->unk8;
                }
                goto block_44;
            case 12:
                if (!((s32) temp_s0->unk0 & 0x80000000)) {
                    var_a2_2 = 0;
                    if (temp_s0->unk3 & 0x7F) {
                        var_a1_6 = temp_s0;
                        var_v1_7 = &D_801C37F4[var_s1];
                        do {
                            var_s1 += 1;
                            var_a2_2 += 1;
                            var_a1_6->unk8 = (void *) (var_a1_6->unk8 + arg1);
                            temp_v0_7 = var_a1_6->unk8;
                            var_a1_6 += 4;
                            *var_v1_7 = temp_v0_7;
                            var_v1_7 += 4;
                        } while (var_a2_2 < (temp_s0->unk3 & 0x7F));
                    }
                }
                temp_s0->unk3 = (u8) (temp_s0->unk3 | 0x80);
                break;
            }
        }
        goto loop_1;
    }
}
