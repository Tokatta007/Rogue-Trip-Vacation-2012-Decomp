/* m2c reference for func_80177D5C @ 80177D5C (381 words). Generated; not compiled or validated. */
? func_8016CE84();                                  /* extern */
? func_8016D750(s32, u8);                           /* extern */
? func_80177B1C(s32, void *, u32, u32, s32);        /* extern */
s32 func_80177C2C(void **);                         /* extern */
? func_80177C7C(u32 *, u32 *, void *, u32, s32);    /* extern */
s32 func_80177CC4(u8 *, s32, void *);               /* extern */
? func_80178350(u8 *, void *);                      /* extern */
s32 func_801784A8(u8 *, void *);                    /* extern */
? func_801785C4(void *, u32, u32);                  /* extern */
extern s32 D_801C38F4;

void func_80177D5C(s32 arg0, void *arg1, s32 *arg2) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    void *sp28;
    u32 sp2C;
    u32 sp30;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_v0_2;
    s32 var_v1_2;
    u32 temp_v1;
    u32 var_a2;
    u32 var_a3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s2_4;
    u8 *temp_v0;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s1_3;
    u8 *var_s1_4;
    u8 var_v0;
    void *var_a1;
    void *var_v1;

    sp28 = NULL;
    D_801C38F4 = 0;
    func_8016CE84();
    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 0;
    var_a3 = 0;
loop_1:
    func_80177B1C(var_a0, var_a1, var_a2, var_a3);
loop_2:
    if ((0 == 0) && (func_80177C2C(&sp28) >= 0)) {
        temp_v1 = *sp28->unk0 & 0xF;
        switch (temp_v1) {
        case 13:
            temp_s0 = sp28->unk0;
            if (func_801784A8(temp_s0, sp28 + 4) != 0) {
                if (!(temp_s0->unk0 & 0xFFF0)) {
                    (arg2 + (*arg2 * 8))->unk4 = (s16) ((u16) sp28->unk10 >> 4);
                    var_v0 = sp28->unk12;
                    var_v1 = arg2 + (*arg2 * 8);
                } else {
                    (arg2 + (*arg2 * 8))->unk4 = (s16) ((u16) temp_s0->unk0 >> 4);
                    var_v1 = arg2 + (*arg2 * 8);
                    var_v0 = temp_s0->unk2 & 0xFF;
                }
                var_v1->unk6 = (s16) var_v0;
                (arg2 + (*arg2 * 8))->unk8 = (s32) temp_s0->unkC;
                *arg2 += 1;
                if (temp_s0->unk8 != 0) {
                    func_8016D750(temp_s0->unk8, temp_s0->unk6);
                }
            }
            break;
        case 1:
            temp_s2 = sp28->unk0;
            if (func_80177CC4(temp_s2 + 4, temp_s2->unk10, sp28 + 4) != 0) {
                func_80177C7C(&sp2C, &sp30, sp28, (u16) temp_s2->unk0 >> 4, (s32) temp_s2->unk2);
                var_s0 = 0;
                if (temp_s2->unk3 & 0x7F) {
                    var_s1 = temp_s2;
                    do {
                        var_s0 += 1;
                        func_80177B1C(var_s1->unk18, sp28 + 4, sp2C, sp30, sp28->unk14);
                        var_s1 += 4;
                    } while (var_s0 < (temp_s2->unk3 & 0x7F));
                }
            }
            break;
        case 2:
            func_80178350(sp28->unk0, sp28);
            break;
        case 4:
            temp_s2_2 = sp28->unk0;
            sp28->unk4 = (s32) (sp28->unk4 - temp_s2_2->unk4);
            sp28->unk8 = (s32) (sp28->unk8 - temp_s2_2->unk8);
            sp28->unkC = (s32) (sp28->unkC - temp_s2_2->unkC);
            func_80177C7C(&sp2C, &sp30, sp28, (u16) temp_s2_2->unk0 >> 4, (s32) temp_s2_2->unk2);
            var_s0_2 = 0;
            if (temp_s2_2->unk3 & 0x7F) {
                var_s1_2 = temp_s2_2;
                do {
                    var_s0_2 += 1;
                    func_80177B1C(var_s1_2->unk10, sp28 + 4, sp2C, sp30, sp28->unk14);
                    var_s1_2 += 4;
                } while (var_s0_2 < (temp_s2_2->unk3 & 0x7F));
            }
            break;
        case 5:
            temp_s2_3 = sp28->unk0;
            sp28->unk4 = (s32) (sp28->unk4 - temp_s2_3->unk18);
            sp28->unk8 = (s32) (sp28->unk8 - temp_s2_3->unk1C);
            sp28->unkC = (s32) (sp28->unkC - temp_s2_3->unk20);
            sp18 = sp28->unk4;
            sp1C = sp28->unk8;
            sp20 = sp28->unkC;
            mathMulVec((MATRIX *) (temp_s2_3 + 4), (VECTOR *) &sp18, sp28 + 4);
            func_80177C7C(&sp2C, &sp30, sp28, (u16) temp_s2_3->unk0 >> 4, (s32) temp_s2_3->unk2);
            var_s0_3 = 0;
            if (temp_s2_3->unk3 & 0x7F) {
                var_s1_3 = temp_s2_3;
                do {
                    var_s0_3 += 1;
                    func_80177B1C(var_s1_3->unk24, sp28 + 4, sp2C, sp30, sp28->unk14);
                    var_s1_3 += 4;
                } while (var_s0_3 < (temp_s2_3->unk3 & 0x7F));
            }
            break;
        case 9:
            temp_s0_2 = sp28->unk0;
            func_80177C7C(&sp2C, &sp30, sp28, (u16) temp_s0_2->unk0 >> 4, (s32) temp_s0_2->unk2);
            var_a2 = sp2C;
            var_a3 = sp30;
            var_a1 = sp28 + 4;
            var_a0 = (temp_s0_2 + (temp_s0_2->unk4 * 4))->unkC;
            goto loop_1;
        case 3:
            temp_s0_3 = sp28->unk0;
            func_80177C7C(&sp2C, &sp30, sp28, (u16) temp_s0_3->unk0 >> 4, (s32) temp_s0_3->unk2);
            var_a2 = sp2C;
            var_a3 = sp30;
            var_a1 = sp28 + 4;
            var_a0 = (temp_s0_3 + (temp_s0_3->unkC * 4))->unk20;
            goto loop_1;
        case 11:
            temp_v0 = sp28->unk0;
            func_80177C7C(&sp2C, &sp30, sp28, (u16) temp_v0->unk0 >> 4, (s32) temp_v0->unk2);
            func_801785C4(sp28, sp2C, sp30);
            break;
        case 12:
            temp_s2_4 = sp28->unk0;
            var_v1_2 = sp28->unk14 - temp_s2_4->unk4;
            if (var_v1_2 < 0) {
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                sp28->unk4 = (s32) (sp28->unk4 << var_v1_2);
                sp28->unk8 = (s32) (sp28->unk8 << var_v1_2);
                var_v0_2 = sp28->unkC << var_v1_2;
                goto block_35;
            }
            if (var_v1_2 > 0) {
                sp28->unk4 = (s32) ((s32) sp28->unk4 >> var_v1_2);
                sp28->unk8 = (s32) ((s32) sp28->unk8 >> var_v1_2);
                var_v0_2 = (s32) sp28->unkC >> var_v1_2;
block_35:
                sp28->unkC = var_v0_2;
            }
            var_s0_4 = 0;
            if (temp_s2_4->unk3 & 0x7F) {
                var_s1_4 = temp_s2_4;
                do {
                    var_s0_4 += 1;
                    func_80177B1C(var_s1_4->unk8, sp28 + 4, (u16) sp28->unk10 >> 4, sp28->unk12 & 0xFF, temp_s2_4->unk4);
                    var_s1_4 += 4;
                } while (var_s0_4 < (temp_s2_4->unk3 & 0x7F));
            }
            break;
        }
        goto loop_2;
    }
}
