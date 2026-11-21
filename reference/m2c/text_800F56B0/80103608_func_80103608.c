/* m2c reference for func_80103608 @ 80103608 (439 words). Generated; not compiled or validated. */
? func_8015B78C(void *, ?, s32, s32);               /* extern */
extern ? D_801C3FA8;

void func_80103608(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 var_a3_2;
    s16 var_a3_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s5;
    s32 temp_t1;
    s32 temp_v0_4;
    s32 var_a2;
    s32 var_a3;
    s32 var_fp;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_s2_6;
    s32 var_s2_7;
    s32 var_s2_8;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_s4;
    s32 var_s5;
    s32 var_s5_2;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v0_10;
    void *temp_v0_3;
    void *temp_v0_9;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_a0;
    void *var_a0_2;
    void *var_a0_3;
    void *var_a0_4;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;
    void *var_s1_2;
    void *var_s1_6;
    void *var_s1_7;
    void *var_s3;
    void *var_s6;
    void *var_v0;
    void *var_v1;

    sp14 = 0;
    arg0->unk3F6 = 0;
    sp10 = 0;
    sp1C = 0;
    sp20 = 0;
    do {
        var_s2 = 0;
        if (sp10 == 1) {
            sp14 = -0xC;
        }
        var_a3 = 3;
        var_fp = 0x3F8;
        sp18 = sp20;
        var_s6 = arg0;
        var_a2 = sp10 * 0x10;
        var_a0 = arg0 + 0x3F8;
loop_4:
        temp_s0 = sp18 + var_s6 + 0x3F8;
        temp_s0->unk3 = 5;
        temp_s0->unk7 = 0x28;
        sp28 = var_a2;
        sp2C = var_a3;
        func_8015B78C(var_a0 + sp18, 1, var_a2, var_a3);
        var_s1 = 0;
        temp_s5 = var_s2 << 5;
        temp_s0->unk4 = 0x25;
        temp_s0->unk5 = 0x31;
        temp_s0->unk6 = 0x17;
        temp_s0->unk8 = 0xC;
        var_s4 = 0x458;
        temp_v0 = sp14 + 0x15;
        temp_s0->unkA = temp_v0;
        temp_s0->unkC = 0x55;
        temp_s0->unkE = temp_v0;
        temp_s0->unk10 = 0xC;
        var_s3 = arg0;
        temp_v0_2 = sp14 + 0x43;
        temp_s0->unk12 = temp_v0_2;
        temp_s0->unk14 = 0x55;
        temp_s0->unk16 = temp_v0_2;
loop_5:
        temp_v0_3 = var_a2 + (temp_s5 + var_s3) + 0x458;
        temp_v0_3->unk3 = (s8) var_a3;
        temp_v0_3->unk7 = 0x40;
        sp28 = var_a2;
        sp2C = var_a3;
        func_8015B78C(arg0 + var_s4 + temp_s5 + var_a2, 0, var_a2, var_a3);
        var_s4 += 0x40;
        var_s1 += 1;
        var_s3 += 0x40;
        if (var_s1 < 0x30) {
            goto loop_5;
        }
        var_fp += 0x30;
        var_s6 += 0x30;
        temp_v0_4 = var_s2 << 6;
        var_s2 += 1;
        temp_v1 = (sp10 << 5) + (temp_v0_4 + arg0);
        temp_a1 = temp_v1 + 0x1058;
        temp_v1_2 = temp_v1 + 0x1068;
        temp_a1->unk3 = (s8) var_a3;
        temp_a1->unk7 = 0x40;
        temp_v1_2->unk3 = (s8) var_a3;
        temp_v1_2->unk7 = 0x40;
        temp_a1->unk4 = 0x24;
        temp_a1->unk5 = 0x96;
        temp_a1->unk6 = 0x24;
        temp_v1_2->unk4 = 0x24;
        temp_v1_2->unk5 = 0x96;
        temp_v1_2->unk6 = 0x24;
        temp_a1->unk8 = 0x2F;
        temp_a0 = sp14 + 0x2C;
        temp_a1->unkA = temp_a0;
        temp_a1->unkC = 0x33;
        temp_a1->unkE = temp_a0;
        temp_v1_2->unk8 = 0x31;
        temp_v1_2->unkA = (s16) (sp14 + 0x2B);
        temp_v1_2->unkC = 0x31;
        temp_v1_2->unkE = (s16) (sp14 + 0x2D);
        var_a0 = arg0 + var_fp;
        if (var_s2 < 2) {
            goto loop_4;
        }
        arg0->unk1458 = 0x1F40;
        arg0->unk145C = (s32) ((arg0->unk1458 << 0xC) / 24);
        var_s2_2 = 0;
        if (arg0->unk145C <= 0) {
            arg0->unk145C = 1;
            var_s2_2 = 0;
        }
        var_s3_2 = 0x1FEC;
        var_s1_2 = arg0;
        (arg0 + sp10)->unk1460 = 0;
        var_a0_2 = arg0 + 0x1FEC;
loop_10:
        temp_s0_2 = sp20 + var_s1_2 + 0x1FEC;
        temp_s0_2->unk3 = 5;
        temp_s0_2->unk7 = 0x28;
        var_s3_2 += 0x30;
        func_8015B78C(var_a0_2 + sp20, 1);
        var_s1_2 += 0x30;
        var_s2_2 += 1;
        temp_s0_2->unk4 = 0x25;
        temp_s0_2->unk5 = 0x31;
        temp_s0_2->unk6 = 0x17;
        temp_s0_2->unk8 = 0x115;
        temp_s0_2->unkA = 0x95;
        temp_s0_2->unkC = 0x12A;
        temp_s0_2->unkE = 0x95;
        temp_s0_2->unk10 = 0x115;
        temp_s0_2->unk12 = 0xD7;
        temp_s0_2->unk14 = 0x12A;
        temp_s0_2->unk16 = 0xD7;
        var_a0_2 = arg0 + var_s3_2;
        if (var_s2_2 < 2) {
            goto loop_10;
        }
        var_s2_3 = 0;
        var_a3_2 = 0x12C;
        var_s5 = 0;
loop_12:
        var_s1_3 = 0;
        var_s3_3 = 0x455C;
        var_s0 = arg0;
loop_13:
        temp_v1_3 = sp20 + (var_s5 + var_s0) + 0x455C;
        temp_v1_3->unk3 = 5;
        temp_a2 = var_s1_3 * 2;
        temp_v0_5 = 0xC1 - temp_a2;
        temp_v1_3->unk7 = 0x28;
        temp_v1_3->unk8 = var_a3_2;
        temp_v1_3->unkA = temp_v0_5;
        temp_v1_3->unkC = 0x134;
        temp_v1_3->unkE = temp_v0_5;
        temp_v0_6 = 0xC2 - temp_a2;
        temp_v1_3->unk10 = var_a3_2;
        temp_v1_3->unk12 = temp_v0_6;
        temp_v1_3->unk14 = 0x134;
        temp_v1_3->unk16 = temp_v0_6;
        temp_v1_3->unk4 = 0x24;
        temp_v1_3->unk5 = 0x96;
        temp_v1_3->unk6 = 0x24;
        sp2C = (s32) var_a3_2;
        func_8015B78C(arg0 + var_s3_3 + var_s5 + sp20, 0, 0x24, (s32) var_a3_2);
        var_s3_3 += 0x60;
        var_s1_3 += 1;
        var_s0 += 0x60;
        if (var_s1_3 < 0x10) {
            goto loop_13;
        }
        var_s2_3 += 1;
        var_s5 += 0x30;
        if (var_s2_3 < 2) {
            goto loop_12;
        }
        var_s2_4 = 0;
        var_a3_3 = 0x5C;
        var_s5_2 = 0;
loop_16:
        var_s1_4 = 0;
        var_s3_4 = 0x14E4;
        var_s0_2 = arg0;
loop_17:
        temp_v1_4 = sp20 + (var_s5_2 + var_s0_2) + 0x14E4;
        temp_v1_4->unk3 = 5;
        temp_a2_2 = var_s1_4 * 2;
        temp_v0_7 = 0x3F - temp_a2_2;
        temp_v1_4->unk7 = 0x28;
        temp_v1_4->unk8 = var_a3_3;
        temp_v1_4->unkA = temp_v0_7;
        temp_v1_4->unkC = 0x61;
        temp_v1_4->unkE = temp_v0_7;
        temp_v0_8 = 0x40 - temp_a2_2;
        temp_v1_4->unk10 = var_a3_3;
        temp_v1_4->unk12 = temp_v0_8;
        temp_v1_4->unk14 = 0x61;
        temp_v1_4->unk16 = temp_v0_8;
        temp_v1_4->unk4 = 0x96;
        temp_v1_4->unk5 = 0x24;
        temp_v1_4->unk6 = 0x24;
        sp2C = (s32) var_a3_3;
        func_8015B78C(arg0 + var_s3_4 + var_s5_2 + sp20, 0, temp_a2_2, (s32) var_a3_3);
        var_s3_4 += 0x60;
        var_s1_4 += 1;
        var_s0_2 += 0x60;
        if (var_s1_4 < 0x10) {
            goto loop_17;
        }
        var_s2_4 += 1;
        var_s5_2 += 0x30;
        if (var_s2_4 < 2) {
            goto loop_16;
        }
        var_s2_5 = 0;
        var_v1 = arg0;
        var_v0 = sp20 + var_v1;
loop_20:
        var_v1 += 0x30;
        var_s2_5 += 1;
        temp_v0_9 = var_v0 + 0x4C8C;
        temp_v0_9->unk3 = 5;
        temp_v0_9->unk7 = 0x28;
        temp_v0_9->unk8 = 0x12B;
        temp_v0_9->unkA = 0xD7;
        temp_v0_9->unkC = 0x134;
        temp_v0_9->unkE = 0xD7;
        temp_v0_9->unk10 = 0x12B;
        temp_v0_9->unk12 = 0xDE;
        temp_v0_9->unk14 = 0x134;
        temp_v0_9->unk16 = 0xDE;
        var_v0 = sp20 + var_v1;
        if (var_s2_5 < 2) {
            goto loop_20;
        }
        var_s2_6 = 0;
        var_s1_5 = 0x4B5C;
        var_s0_3 = arg0;
loop_22:
        temp_a0_2 = arg0 + var_s1_5 + sp20;
        temp_v0_10 = sp20 + var_s0_3 + 0x4B5C;
        temp_v0_10->unk3 = 5;
        temp_v0_10->unk7 = 0x28;
        temp_v0_10->unk8 = 0xF4;
        temp_v0_10->unkA = 0xD1;
        temp_v0_10->unkC = 0x124;
        temp_v0_10->unkE = 0xD1;
        temp_v0_10->unk10 = 0xF4;
        temp_v0_10->unk12 = 0xD4;
        temp_v0_10->unk14 = 0x124;
        temp_v0_10->unk16 = 0xD4;
        var_s1_5 += 0x30;
        func_8015B78C(temp_a0_2, 0);
        var_s2_6 += 1;
        var_s0_3 += 0x30;
        if (var_s2_6 < 2) {
            goto loop_22;
        }
        var_s2_7 = 0;
        var_s3_5 = 0x5474;
        var_s1_6 = arg0;
        var_a0_3 = arg0 + 0x5474;
loop_24:
        temp_s0_3 = sp20 + var_s1_6 + 0x5474;
        temp_s0_3->unk3 = 5;
        temp_s0_3->unk7 = 0x28;
        var_s3_5 += 0x30;
        func_8015B78C(var_a0_3 + sp20, 0);
        var_s1_6 += 0x30;
        var_s2_7 += 1;
        temp_s0_3->unk4 = 0x14;
        temp_s0_3->unk5 = 0x14;
        temp_s0_3->unk6 = 0x14;
        temp_s0_3->unk8 = 0;
        temp_s0_3->unkA = 0;
        temp_s0_3->unkC = 0x140;
        temp_s0_3->unkE = 0;
        temp_s0_3->unk10 = 0;
        temp_s0_3->unk12 = 2;
        temp_s0_3->unk14 = 0x140;
        temp_s0_3->unk16 = 2;
        var_a0_3 = arg0 + var_s3_5;
        if (var_s2_7 < 2) {
            goto loop_24;
        }
        var_s2_8 = 0;
        var_s3_6 = 0x54D4;
        var_s1_7 = arg0;
        var_a0_4 = arg0 + 0x54D4;
loop_26:
        temp_s0_4 = sp1C + var_s1_7 + 0x54D4;
        temp_s0_4->unk3 = 4;
        temp_s0_4->unk7 = 0x20;
        var_s3_6 += 0x28;
        func_8015B78C(var_a0_4 + sp1C, 0);
        var_s1_7 += 0x28;
        var_s2_8 += 1;
        temp_s0_4->unk4 = 0x3C;
        temp_s0_4->unk5 = 0xFF;
        temp_s0_4->unk6 = 0x3C;
        var_a0_4 = arg0 + var_s3_6;
        if (var_s2_8 < 2) {
            goto loop_26;
        }
        sp1C += 0x14;
        sp20 += 0x18;
        temp_t1 = sp10 + 1;
        sp10 = temp_t1;
    } while (temp_t1 < 2);
    D_801C3FA8.unk0 = 0;
    D_801C3FA8.unk8 = 0x32;
    D_801C3FA8.unk4 = 0;
    D_801C3FA8.unkC = 0x32;
}
