/* m2c reference for func_8017D6E4 @ 8017D6E4 (282 words). Generated; not compiled or validated. */
s32 func_80170704(s32, s32, s32, s32);              /* extern */
? func_80171058(s32, s32, s32, s32);                /* extern */
? func_80171580(s32, s32, s32, s32);                /* extern */
s32 func_8017D534();                                /* extern */
s32 func_8017D580(s32);                             /* extern */
? func_8017DDC8();                                  /* extern */
extern ? D_801C310C;
extern ? D_801C31CC;
static s32 D_801C34E8 = 0;

void func_8017D6E4(void) {
    ? sp10;
    s32 sp40;
    ? sp4C;
    ? sp6C;
    ? *var_s0;
    ? *var_v0;
    ? *var_v0_2;
    ? *var_v0_3;
    ? *var_v0_4;
    ? *var_v0_5;
    ? *var_v0_6;
    ? *var_v0_7;
    ? *var_v1_2;
    ? *var_v1_4;
    ? *var_v1_6;
    ? *var_v1_8;
    s32 *var_v1;
    s32 *var_v1_3;
    s32 *var_v1_5;
    s32 *var_v1_7;
    s32 temp_v0;
    s32 var_s3;
    void *temp_s4;
    void *temp_v1;

    if (D_801C31CC.unk4 & 4) {
        D_801C31CC.unk14 = (s32) (rand() % 100);
    }
    if (D_801C31CC.unkC != -1) {
        var_s3 = 0;
        temp_s4 = &D_801C31CC + 0x30;
        var_s0 = &D_801C310C;
loop_4:
        if ((D_801C31CC.unk8 == var_s0->unk0) && (D_801C31CC.unkC == var_s0->unk4)) {
            var_v0 = &D_801C31CC;
            if (D_801C31CC.unk4 & 8) {
                var_v1 = &sp40;
                do {
                    var_v1->unk0 = var_v0->unk0;
                    var_v1->unk4 = (s32) var_v0->unk4;
                    var_v1->unk8 = (s32) var_v0->unk8;
                    var_v1->unkC = (s32) var_v0->unkC;
                    var_v0 += 0x10;
                    var_v1 += 0x10;
                } while (var_v0 != temp_s4);
                var_v1->unk0 = D_801C31CC.unk30;
                var_v1->unk4 = (s32) temp_s4->unk4;
                var_v1_2 = &sp10;
                var_v0_2 = &sp4C;
                do {
                    var_v1_2->unk0 = (s32) var_v0_2->unk0;
                    var_v1_2->unk4 = (s32) var_v0_2->unk4;
                    var_v1_2->unk8 = (s32) var_v0_2->unk8;
                    var_v1_2->unkC = (s32) var_v0_2->unkC;
                    var_v0_2 += 0x10;
                    var_v1_2 += 0x10;
                } while (var_v0_2 != &sp6C);
                var_v1_2->unk0 = (s32) sp6C.unk0;
                var_v1_2->unk4 = (s32) sp6C.unk4;
                var_v1_2->unk8 = (s32) sp6C.unk8;
                func_80171580(D_801C34E8, sp40, sp44, sp48);
                var_v1_3 = &sp40;
                var_v0_3 = &D_801C31CC;
                do {
                    var_v1_3->unk0 = var_v0_3->unk0;
                    var_v1_3->unk4 = (s32) var_v0_3->unk4;
                    var_v1_3->unk8 = (s32) var_v0_3->unk8;
                    var_v1_3->unkC = (s32) var_v0_3->unkC;
                    var_v0_3 += 0x10;
                    var_v1_3 += 0x10;
                } while (var_v0_3 != temp_s4);
                var_v1_3->unk0 = D_801C31CC.unk30;
                var_v1_3->unk4 = (s32) temp_s4->unk4;
                var_v1_4 = &sp10;
                var_v0_4 = &sp4C;
                do {
                    var_v1_4->unk0 = (s32) var_v0_4->unk0;
                    var_v1_4->unk4 = (s32) var_v0_4->unk4;
                    var_v1_4->unk8 = (s32) var_v0_4->unk8;
                    var_v1_4->unkC = (s32) var_v0_4->unkC;
                    var_v0_4 += 0x10;
                    var_v1_4 += 0x10;
                } while (var_v0_4 != &sp6C);
                var_v1_4->unk0 = (s32) sp6C.unk0;
                var_v1_4->unk4 = (s32) sp6C.unk4;
                var_v1_4->unk8 = (s32) sp6C.unk8;
                if (func_80170704(D_801C34E8, sp40, sp44, sp48) != 0) {
                    D_801C31CC.unk20 = var_s3;
                    var_s0->unk0 = (s32) D_801C31CC.unk8;
                    var_s0->unk4 = (s32) D_801C31CC.unkC;
                }
            } else {
                var_v1_5 = &sp40;
                D_801C31CC.unk20 = var_s3;
                do {
                    var_v1_5->unk0 = var_v0->unk0;
                    var_v1_5->unk4 = (s32) var_v0->unk4;
                    var_v1_5->unk8 = (s32) var_v0->unk8;
                    var_v1_5->unkC = (s32) var_v0->unkC;
                    var_v0 += 0x10;
                    var_v1_5 += 0x10;
                } while (var_v0 != temp_s4);
                var_v1_5->unk0 = var_v0->unk0;
                var_v1_5->unk4 = (s32) var_v0->unk4;
                var_v1_6 = &sp10;
                var_v0_5 = &sp4C;
                do {
                    var_v1_6->unk0 = (s32) var_v0_5->unk0;
                    var_v1_6->unk4 = (s32) var_v0_5->unk4;
                    var_v1_6->unk8 = (s32) var_v0_5->unk8;
                    var_v1_6->unkC = (s32) var_v0_5->unkC;
                    var_v0_5 += 0x10;
                    var_v1_6 += 0x10;
                } while (var_v0_5 != &sp6C);
                var_v1_6->unk0 = (s32) var_v0_5->unk0;
                var_v1_6->unk4 = (s32) var_v0_5->unk4;
                var_v1_6->unk8 = (s32) var_v0_5->unk8;
                func_80171058(D_801C34E8, sp40, sp44, sp48);
                goto block_31;
            }
        } else {
            var_s3 += 1;
            var_s0 += 8;
            if (var_s3 >= 0x18) {
                goto block_23;
            }
            goto loop_4;
        }
    } else {
block_23:
        if (func_8017D580(D_801C31CC.unk8) < D_801C31CC.unk1C) {
            temp_v0 = func_8017D534();
            var_v1_7 = &sp40;
            if (temp_v0 != -1) {
                var_v0_6 = &D_801C31CC;
                D_801C31CC.unk20 = temp_v0;
                do {
                    var_v1_7->unk0 = var_v0_6->unk0;
                    var_v1_7->unk4 = (s32) var_v0_6->unk4;
                    var_v1_7->unk8 = (s32) var_v0_6->unk8;
                    var_v1_7->unkC = (s32) var_v0_6->unkC;
                    var_v0_6 += 0x10;
                    var_v1_7 += 0x10;
                } while (var_v0_6 != (&D_801C31CC + 0x30));
                var_v1_7->unk0 = var_v0_6->unk0;
                var_v1_7->unk4 = (s32) var_v0_6->unk4;
                var_v1_8 = &sp10;
                var_v0_7 = &sp4C;
                do {
                    var_v1_8->unk0 = (s32) var_v0_7->unk0;
                    var_v1_8->unk4 = (s32) var_v0_7->unk4;
                    var_v1_8->unk8 = (s32) var_v0_7->unk8;
                    var_v1_8->unkC = (s32) var_v0_7->unkC;
                    var_v0_7 += 0x10;
                    var_v1_8 += 0x10;
                } while (var_v0_7 != &sp6C);
                var_v1_8->unk0 = (s32) var_v0_7->unk0;
                var_v1_8->unk4 = (s32) var_v0_7->unk4;
                var_v1_8->unk8 = (s32) var_v0_7->unk8;
                if (func_80170704(D_801C34E8, sp40, sp44, sp48) != 0) {
                    temp_v1 = (temp_v0 * 8) + &D_801C310C;
                    temp_v1->unk0 = (s32) D_801C31CC.unk8;
                    temp_v1->unk4 = (s32) D_801C31CC.unkC;
                }
            }
        }
block_31:
        func_8017DDC8();
    }
}
