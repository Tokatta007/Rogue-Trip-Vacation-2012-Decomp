/* m2c reference for func_8017DB4C @ 8017DB4C (148 words). Generated; not compiled or validated. */
? func_80171580(s32, s32, s32, s32);                /* extern */
? func_8017DD9C(s32);                               /* extern */
? func_8017DDC8();                                  /* extern */
extern s32 D_801C310C;
extern ? D_801C31CC;
static s32 D_801C34E8 = 0;

void func_8017DB4C(void) {
    ? sp10;
    s32 sp40;
    ? sp4C;
    ? sp6C;
    ? *var_v0;
    ? *var_v0_2;
    ? *var_v0_3;
    ? *var_v0_4;
    ? *var_v1_2;
    ? *var_v1_4;
    s32 *var_a0;
    s32 *var_s1;
    s32 *var_v1;
    s32 *var_v1_3;
    s32 var_s0;

    var_s0 = 0;
    if (D_801C31CC.unkC == -1) {
        var_s1 = &D_801C310C;
        do {
            var_v1 = &sp40;
            if (*var_s1 == D_801C31CC.unk8) {
                var_v0 = &D_801C31CC;
                do {
                    var_v1->unk0 = var_v0->unk0;
                    var_v1->unk4 = (s32) var_v0->unk4;
                    var_v1->unk8 = (s32) var_v0->unk8;
                    var_v1->unkC = (s32) var_v0->unkC;
                    var_v0 += 0x10;
                    var_v1 += 0x10;
                } while (var_v0 != (&D_801C31CC + 0x30));
                var_v1->unk0 = var_v0->unk0;
                var_v1->unk4 = (s32) var_v0->unk4;
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
                var_v1_2->unk0 = (s32) var_v0_2->unk0;
                var_v1_2->unk4 = (s32) var_v0_2->unk4;
                var_v1_2->unk8 = (s32) var_v0_2->unk8;
                func_80171580(D_801C34E8, sp40, sp44, sp48);
                func_8017DD9C(var_s0);
            }
            var_s0 += 1;
            var_s1 += 8;
        } while (var_s0 < 0x18);
    } else {
        var_a0 = &D_801C310C;
loop_11:
        if ((var_a0->unk0 == D_801C31CC.unk8) && (var_v1_3 = &sp40, (var_a0->unk4 == D_801C31CC.unkC))) {
            var_v0_3 = &D_801C31CC;
            do {
                var_v1_3->unk0 = var_v0_3->unk0;
                var_v1_3->unk4 = (s32) var_v0_3->unk4;
                var_v1_3->unk8 = (s32) var_v0_3->unk8;
                var_v1_3->unkC = (s32) var_v0_3->unkC;
                var_v0_3 += 0x10;
                var_v1_3 += 0x10;
            } while (var_v0_3 != (&D_801C31CC + 0x30));
            var_v1_3->unk0 = var_v0_3->unk0;
            var_v1_3->unk4 = (s32) var_v0_3->unk4;
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
            var_v1_4->unk0 = (s32) var_v0_4->unk0;
            var_v1_4->unk4 = (s32) var_v0_4->unk4;
            var_v1_4->unk8 = (s32) var_v0_4->unk8;
            func_80171580(D_801C34E8, sp40, sp44, sp48);
            func_8017DD9C(var_s0);
        } else {
            var_s0 += 1;
            var_a0 += 8;
            if (var_s0 < 0x18) {
                goto loop_11;
            }
        }
    }
    func_8017DDC8();
}
