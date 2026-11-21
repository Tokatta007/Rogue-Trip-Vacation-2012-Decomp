/* m2c reference for func_8017D5BC @ 8017D5BC (74 words). Generated; not compiled or validated. */
? func_80171058(s32, s32, s32, s32);                /* extern */
? func_8017DDC8();                                  /* extern */
extern ? D_801C310C;
extern ? D_801C31CC;
static s32 D_801C34E8 = 0;

void func_8017D5BC(void) {
    ? sp10;
    s32 sp40;
    ? sp4C;
    ? sp6C;
    ? *var_a0;
    ? *var_v0;
    ? *var_v0_2;
    ? *var_v1_2;
    s32 *var_v1;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = &D_801C310C;
loop_1:
    if ((D_801C31CC.unk8 == var_a0->unk0) && (var_v1 = &sp40, (D_801C31CC.unkC == var_a0->unk4))) {
        var_v0 = &D_801C31CC;
        D_801C31CC.unk20 = var_a1;
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
        func_80171058(D_801C34E8, sp40, sp44, sp48);
    } else {
        var_a1 += 1;
        var_a0 += 8;
        if (var_a1 < 0x18) {
            goto loop_1;
        }
    }
    func_8017DDC8();
}
