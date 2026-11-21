/* m2c reference for func_8014F35C @ 8014F35C (968 words). Generated; not compiled or validated. */
void *func_80124584(s32, ?, s32);                   /* extern */
? func_801253C8(? *, s32 *);                        /* extern */
? func_801254DC(? *, ?, ?, ?);                      /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013BEA8(s32);                               /* extern */
? func_8015027C(s32, s32);                          /* extern */
? func_8015A05C(void *, MATRIX *);                  /* extern */
s32 func_80176CBC(s32, s16, ?);                     /* extern */
extern ? D_801B493C;
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;

void func_8014F35C(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    MATRIX *temp_s0_12;
    MATRIX *temp_s0_15;
    MATRIX *temp_s0_18;
    MATRIX *temp_s0_21;
    MATRIX *temp_s0_3;
    MATRIX *temp_s0_6;
    MATRIX *temp_s0_9;
    s32 temp_s0_10;
    s32 temp_s0_13;
    s32 temp_s0_16;
    s32 temp_s0_19;
    s32 temp_s0_22;
    s32 temp_s0_4;
    s32 temp_s0_7;
    s32 var_v0_2;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_11;
    void *temp_s0_14;
    void *temp_s0_17;
    void *temp_s0_20;
    void *temp_s0_23;
    void *temp_s0_24;
    void *temp_s0_25;
    void *temp_s0_2;
    void *temp_s0_5;
    void *temp_s0_8;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_v0;

    temp_s0 = arg0 + (arg1 * 4);
    temp_s2 = temp_s0->unk17A0;
    temp_v0 = func_80124584(D_801C34EC, 0x10, arg1);
    if (temp_v0->unk8C != 0) {
        temp_s1 = arg0 + arg1;
        temp_s1->unk17B6 = 0;
        func_801254DC(&D_801B493C, 0, -0x50, 0x18);
        temp_s1->unk17B0 = 0U;
        if (temp_s0->unk17A8 != NULL) {
            temp_s0->unk17A8->unk8 = 0x80;
            temp_s0->unk17A8->unk9 = 0x80;
            temp_s0->unk17A8->unkA = 0x80;
        }
        temp_s0->unk17A8 = NULL;
        D_801C31CC.unk8 = 0x37;
        D_801C31CC.unkC = (s32) (s8) temp_s1->unk17B0;
        func_8013BEA8(D_801C34F4);
    }
    if (temp_v0->unk87 != 0) {
        (arg0 + arg1)->unk17B0 = 6;
    }
    temp_s0_2 = arg0 + arg1;
    if (temp_s0_2->unk17B2 == 0) {
        temp_a2 = temp_s2 + 0x1C;
        D_801C31CC.unk8 = 0x37;
        D_801C31CC.unkC = (s32) (s8) temp_s0_2->unk17B0;
        D_801C3100.unk0 = (s32) temp_s2->unk1C;
        D_801C3100.unk4 = (s32) temp_a2->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) temp_a2->unk8;
        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
        goto block_9;
    }
    var_v0 = arg0 + arg1;
    if ((temp_s0_2->unk17B2 << 0x18) > 0) {
block_9:
        temp_s0_2->unk17B2 = (u8) (temp_s0_2->unk17B2 - 1);
        var_v0 = arg0 + arg1;
    }
    temp_v0_2 = var_v0->unk17B0;
    switch ((s8) temp_v0_2) {
    case 0:
        sp10 = func_80176CBC(D_801B493C.unk0, 0, 9);
        sp14 = func_80176CBC(D_801B493C.unk4, 0x48, 9);
        sp18 = func_80176CBC(D_801B493C.unk8, -0xA, 9);
        func_801253C8(&D_801B493C, &sp10);
        mathMulTransVec(temp_v0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_s2->unk1C = (s32) (temp_v0->unk738->unk1C + (s32) sp20);
        temp_s2->unk20 = (s32) (temp_v0->unk738->unk20 + sp20.vy);
        temp_s2->unk24 = (s32) (temp_v0->unk738->unk24 + sp20.vz);
        temp_s2->unk14 = func_80176CBC((s32) (s16) temp_s2->unk14, (s16) temp_v0->unk738->unk14 - 0x355, 5);
        temp_s2->unk16 = (u16) temp_v0->unk738->unk16;
        temp_s0_3 = temp_s2 + 0x28;
        temp_s2->unk18 = (u16) temp_v0->unk738->unk18;
        func_8015A05C(temp_s2 + 0x14, temp_s0_3);
        temp_s0_4 = arg1 * 0xC;
        mathMulTransVec(temp_s0_3, arg0 + (temp_s0_4 + 0x1770), &sp20);
        temp_s0_5 = arg0 + temp_s0_4;
        temp_s0_5->unk1788 = (s32) (temp_s2->unk1C + (s32) sp20);
        temp_s0_5->unk178C = (s32) (temp_s2->unk20 + sp20.vy);
        temp_s0_5->unk1790 = (s32) (temp_s2->unk24 + sp20.vz);
        var_v0_2 = arg1 * 4;
        if (((s16) temp_v0->unk738->unk14 - 0x2E3) >= (s16) temp_s2->unk14) {
            var_v0_2 = arg1 * 4;
            if (temp_v0->unkB8 == 0) {
                temp_v0_3 = arg0 + arg1;
                temp_v0_3->unk17B0 = 1;
                temp_v0_3->unk17B2 = 2;
                var_v0_2 = arg1 * 4;
            }
        }
        break;
    case 1:
        sp10 = func_80176CBC(D_801B493C.unk0, 0, 9);
        sp14 = func_80176CBC(D_801B493C.unk4, 0x48, 9);
        sp18 = func_80176CBC(D_801B493C.unk8, 0, 9);
        func_801253C8(&D_801B493C, &sp10);
        mathMulTransVec(temp_v0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_s2->unk1C = (s32) (temp_v0->unk738->unk1C + (s32) sp20);
        temp_s2->unk20 = (s32) (temp_v0->unk738->unk20 + sp20.vy);
        temp_s2->unk24 = (s32) (temp_v0->unk738->unk24 + sp20.vz);
        temp_s2->unk14 = func_80176CBC((s32) (s16) temp_s2->unk14, (s16) temp_v0->unk738->unk14 + 0xE3, 0x14);
        temp_s2->unk16 = (u16) temp_v0->unk738->unk16;
        temp_s0_6 = temp_s2 + 0x28;
        temp_s2->unk18 = (u16) temp_v0->unk738->unk18;
        func_8015A05C(temp_s2 + 0x14, temp_s0_6);
        temp_s0_7 = arg1 * 0xC;
        mathMulTransVec(temp_s0_6, arg0 + (temp_s0_7 + 0x1770), &sp20);
        temp_s0_8 = arg0 + temp_s0_7;
        temp_s0_8->unk1788 = (s32) (temp_s2->unk1C + (s32) sp20);
        temp_s0_8->unk178C = (s32) (temp_s2->unk20 + sp20.vy);
        temp_s0_8->unk1790 = (s32) (temp_s2->unk24 + sp20.vz);
        func_8015027C(arg0, arg1);
        if ((s16) temp_s2->unk14 >= ((s16) temp_v0->unk738->unk14 + 0x71)) {
            (arg0 + arg1)->unk17B0 = 2;
            temp_v0->unk210 = 0x1F4;
            var_v0_2 = arg1 * 4;
        } else {
        default:
block_29:
            var_v0_2 = arg1 * 4;
        }
        break;
    case 2:
        sp10 = func_80176CBC(D_801B493C.unk0, 0, 9);
        sp14 = func_80176CBC(D_801B493C.unk4, 0x48, 9);
        sp18 = func_80176CBC(D_801B493C.unk8, 0, 9);
        func_801253C8(&D_801B493C, &sp10);
        mathMulTransVec(temp_v0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_s2->unk1C = (s32) (temp_v0->unk738->unk1C + (s32) sp20);
        temp_s2->unk20 = (s32) (temp_v0->unk738->unk20 + sp20.vy);
        temp_s2->unk24 = (s32) (temp_v0->unk738->unk24 + sp20.vz);
        temp_s2->unk14 = func_80176CBC((s32) (s16) temp_s2->unk14, (s16) temp_v0->unk738->unk14 - 0x2AA, 0x14);
        temp_s2->unk16 = (u16) temp_v0->unk738->unk16;
        temp_s0_9 = temp_s2 + 0x28;
        temp_s2->unk18 = (u16) temp_v0->unk738->unk18;
        func_8015A05C(temp_s2 + 0x14, temp_s0_9);
        temp_s0_10 = arg1 * 0xC;
        mathMulTransVec(temp_s0_9, arg0 + (temp_s0_10 + 0x1770), &sp20);
        temp_s0_11 = arg0 + temp_s0_10;
        temp_s0_11->unk1788 = (s32) (temp_s2->unk1C + (s32) sp20);
        temp_s0_11->unk178C = (s32) (temp_s2->unk20 + sp20.vy);
        temp_s0_11->unk1790 = (s32) (temp_s2->unk24 + sp20.vz);
        func_8015027C(arg0, arg1);
        temp_v1 = arg0 + arg1;
        if (((s16) temp_v0->unk738->unk14 - 0x238) >= (s16) temp_s2->unk14) {
            temp_v1->unk17B0 = 3;
            temp_v0->unk21C = -0x1F4;
            temp_v1->unk17B2 = 1;
            var_v0_2 = arg1 * 4;
        } else {
            goto block_29;
        }
        break;
    case 3:
        sp10 = func_80176CBC(D_801B493C.unk0, 0, 9);
        sp14 = func_80176CBC(D_801B493C.unk4, 0x48, 9);
        sp18 = func_80176CBC(D_801B493C.unk8, 0, 9);
        func_801253C8(&D_801B493C, &sp10);
        mathMulTransVec(temp_v0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_s2->unk1C = (s32) (temp_v0->unk738->unk1C + (s32) sp20);
        temp_s2->unk20 = (s32) (temp_v0->unk738->unk20 + sp20.vy);
        temp_s2->unk24 = (s32) (temp_v0->unk738->unk24 + sp20.vz);
        temp_s2->unk14 = func_80176CBC((s32) (s16) temp_s2->unk14, (s16) temp_v0->unk738->unk14 + 0x71, 0xD);
        temp_s2->unk16 = func_80176CBC((s32) (s16) temp_s2->unk16, 0x400, 0x14);
        temp_s0_12 = temp_s2 + 0x28;
        temp_s2->unk18 = func_80176CBC((s32) (s16) temp_s2->unk18, (s16) temp_v0->unk738->unk18 - 0x31C, 0xD);
        func_8015A05C(temp_s2 + 0x14, temp_s0_12);
        temp_s0_13 = arg1 * 0xC;
        mathMulTransVec(temp_s0_12, arg0 + (temp_s0_13 + 0x1770), &sp20);
        temp_s0_14 = arg0 + temp_s0_13;
        temp_s0_14->unk1788 = (s32) (temp_s2->unk1C + (s32) sp20);
        temp_s0_14->unk178C = (s32) (temp_s2->unk20 + sp20.vy);
        temp_s0_14->unk1790 = (s32) (temp_s2->unk24 + sp20.vz);
        func_8015027C(arg0, arg1);
        temp_v1_2 = arg0 + arg1;
        if (((s16) temp_v0->unk738->unk18 - 0x2AA) >= (s16) temp_s2->unk18) {
            temp_v1_2->unk17B0 = 4;
            temp_v0->unk21C = 0x1F4;
            temp_v1_2->unk17B2 = 2;
            var_v0_2 = arg1 * 4;
        } else {
            goto block_29;
        }
        break;
    case 4:
        sp10 = func_80176CBC(D_801B493C.unk0, 0, 9);
        sp14 = func_80176CBC(D_801B493C.unk4, 0x48, 9);
        sp18 = func_80176CBC(D_801B493C.unk8, 0, 9);
        func_801253C8(&D_801B493C, &sp10);
        mathMulTransVec(temp_v0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_s2->unk1C = (s32) (temp_v0->unk738->unk1C + (s32) sp20);
        temp_s2->unk20 = (s32) (temp_v0->unk738->unk20 + sp20.vy);
        temp_s2->unk24 = (s32) (temp_v0->unk738->unk24 + sp20.vz);
        temp_s2->unk14 = func_80176CBC((s32) (s16) temp_s2->unk14, (s16) temp_v0->unk738->unk14, 0xD);
        temp_s2->unk16 = func_80176CBC((s32) (s16) temp_s2->unk16, -0x400, 0x14);
        temp_s0_15 = temp_s2 + 0x28;
        temp_s2->unk18 = func_80176CBC((s32) (s16) temp_s2->unk18, (s16) temp_v0->unk738->unk18 + 0x31C, 0xD);
        func_8015A05C(temp_s2 + 0x14, temp_s0_15);
        temp_s0_16 = arg1 * 0xC;
        mathMulTransVec(temp_s0_15, arg0 + (temp_s0_16 + 0x1770), &sp20);
        temp_s0_17 = arg0 + temp_s0_16;
        temp_s0_17->unk1788 = (s32) (temp_s2->unk1C + (s32) sp20);
        temp_s0_17->unk178C = (s32) (temp_s2->unk20 + sp20.vy);
        temp_s0_17->unk1790 = (s32) (temp_s2->unk24 + sp20.vz);
        func_8015027C(arg0, arg1);
        temp_v1_3 = arg0 + arg1;
        if ((s16) temp_s2->unk18 >= ((s16) temp_v0->unk738->unk18 + 0x2AA)) {
            temp_v1_3->unk17B0 = 5;
            temp_v0->unk21C = -0x1F4;
            temp_v1_3->unk17B2 = 3;
            var_v0_2 = arg1 * 4;
        } else {
            goto block_29;
        }
        break;
    case 5:
        sp10 = func_80176CBC(D_801B493C.unk0, 0, 9);
        sp14 = func_80176CBC(D_801B493C.unk4, 0x48, 9);
        sp18 = func_80176CBC(D_801B493C.unk8, 0, 9);
        func_801253C8(&D_801B493C, &sp10);
        mathMulTransVec(temp_v0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_s2->unk1C = (s32) (temp_v0->unk738->unk1C + (s32) sp20);
        temp_s2->unk20 = (s32) (temp_v0->unk738->unk20 + sp20.vy);
        temp_s2->unk24 = (s32) (temp_v0->unk738->unk24 + sp20.vz);
        temp_s2->unk14 = func_80176CBC((s32) (s16) temp_s2->unk14, (s16) temp_v0->unk738->unk14 + 0x71, 0xD);
        temp_s2->unk16 = func_80176CBC((s32) (s16) temp_s2->unk16, 0x400, 0x14);
        temp_s0_18 = temp_s2 + 0x28;
        temp_s2->unk18 = func_80176CBC((s32) (s16) temp_s2->unk18, (s16) temp_v0->unk738->unk18 - 0x31C, 0xD);
        func_8015A05C(temp_s2 + 0x14, temp_s0_18);
        temp_s0_19 = arg1 * 0xC;
        mathMulTransVec(temp_s0_18, arg0 + (temp_s0_19 + 0x1770), &sp20);
        temp_s0_20 = arg0 + temp_s0_19;
        temp_s0_20->unk1788 = (s32) (temp_s2->unk1C + (s32) sp20);
        temp_s0_20->unk178C = (s32) (temp_s2->unk20 + sp20.vy);
        temp_s0_20->unk1790 = (s32) (temp_s2->unk24 + sp20.vz);
        func_8015027C(arg0, arg1);
        if (((s16) temp_v0->unk738->unk18 - 0x2AA) >= (s16) temp_s2->unk18) {
            (arg0 + arg1)->unk17B0 = 6;
            temp_v0->unk208 = 0x7D0;
            temp_v0->unk21C = 0x1F4;
            var_v0_2 = arg1 * 4;
        } else {
            goto block_29;
        }
        break;
    case 6:
        sp10 = func_80176CBC(D_801B493C.unk0, 0, 9);
        sp14 = func_80176CBC(D_801B493C.unk4, -0x50, 9);
        sp18 = func_80176CBC(D_801B493C.unk8, 0x18, 9);
        func_801253C8(&D_801B493C, &sp10);
        mathMulTransVec(temp_v0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_s2->unk1C = (s32) (temp_v0->unk738->unk1C + (s32) sp20);
        temp_s2->unk20 = (s32) (temp_v0->unk738->unk20 + sp20.vy);
        temp_s2->unk24 = (s32) (temp_v0->unk738->unk24 + sp20.vz);
        temp_s2->unk14 = func_80176CBC((s32) (s16) temp_s2->unk14, (s16) temp_v0->unk738->unk14, 0xD);
        temp_s2->unk16 = (u16) temp_v0->unk738->unk16;
        temp_s0_21 = temp_s2 + 0x28;
        temp_s2->unk18 = (u16) temp_v0->unk738->unk18;
        func_8015A05C(temp_s2 + 0x14, temp_s0_21);
        temp_s0_22 = arg1 * 0xC;
        mathMulTransVec(temp_s0_21, arg0 + (temp_s0_22 + 0x1770), &sp20);
        temp_s0_23 = arg0 + temp_s0_22;
        temp_s0_23->unk1788 = (s32) (temp_s2->unk1C + (s32) sp20);
        temp_s0_23->unk178C = (s32) (temp_s2->unk20 + sp20.vy);
        temp_s0_23->unk1790 = (s32) (temp_s2->unk24 + sp20.vz);
        if (sp14 == -0x50) {
            temp_s0_24 = arg0 + arg1;
            temp_s0_24->unk17B6 = 0;
            func_801254DC(&D_801B493C, 0, -0x50, 0x18);
            temp_a0 = arg0 + (arg1 * 4);
            temp_s0_24->unk17B0 = 0;
            if (temp_a0->unk17A8 != NULL) {
                temp_a0->unk17A8->unk8 = 0x80;
                temp_a0->unk17A8->unk9 = 0x80;
                temp_a0->unk17A8->unkA = 0x80;
            }
            temp_a0->unk17A8 = NULL;
        }
        goto block_29;
    }
    temp_s0_25 = arg0 + var_v0_2;
    temp_v0_4 = temp_s0_25->unk17A8;
    if (temp_v0_4 != NULL) {
        temp_s0_25->unk17A8->unk8 = func_80176CBC((s32) temp_v0_4->unk8, 0x80, 3);
        temp_s0_25->unk17A8->unk9 = func_80176CBC((s32) temp_s0_25->unk17A8->unk9, 0x80, 3);
        temp_s0_25->unk17A8->unkA = func_80176CBC((s32) temp_s0_25->unk17A8->unkA, 0x80, 3);
    }
}
