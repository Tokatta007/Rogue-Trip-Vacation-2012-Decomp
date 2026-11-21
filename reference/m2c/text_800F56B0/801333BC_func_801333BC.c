/* m2c reference for func_801333BC @ 801333BC (167 words). Generated; not compiled or validated. */
? func_801254DC(s32 *, s32, s32, s32);              /* extern */
s32 func_801669CC(s32 *);                           /* extern */
? func_80166D24(s32);                               /* extern */
? func_80166D2C(? *, s32);                          /* extern */
? func_8016EE30(?, s32, s16, s16);                  /* extern */
? func_8016EFC0(?, s32, s16, s16, s32);             /* extern */
? func_8016F018(?, s16, s16, s16);                  /* extern */
? func_8016F490(?);                                 /* extern */
? func_80179548(s32, s32, s32);                     /* extern */
extern ? D_801CBD90;
static s32 D_801C34EC = 0;

void func_801333BC(s32 arg0) {
    s32 sp18;
    s32 sp28;
    ? *var_s0;
    ? *var_s0_2;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_v0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    void *temp_s1;
    void *temp_s1_2;

    temp_v0 = func_801669CC(&sp28);
    if (sp28 < 0xA) {
        func_80166D24(temp_v0);
        return;
    }
    func_80166D24(temp_v0);
    var_s0 = &D_801CBD90;
    func_80166D2C(&D_801CBD90, arg0);
    var_s2 = 0;
    func_8016F018(0, D_801CBD90.unk0, D_801CBD90.unk4, D_801CBD90.unk8);
    func_8016F018(1, D_801CBD90.unk178, D_801CBD90.unk17C, D_801CBD90.unk180);
    func_8016F018(2, D_801CBD90.unk1E4, D_801CBD90.unk1E8, D_801CBD90.unk1EC);
    do {
        func_8016EE30(0, var_s2, var_s0->unk14, var_s0->unkC);
        func_8016EE30(1, var_s2, var_s0->unk18C, var_s0->unk184);
        temp_a1 = var_s2;
        temp_a2 = var_s0->unk1F8;
        temp_a3 = var_s0->unk1F0;
        var_s0 += 0xC;
        var_s2 += 1;
        func_8016EE30(2, temp_a1, temp_a2, temp_a3);
    } while (var_s2 < 3);
    var_s1 = 0;
    var_s0_2 = &D_801CBD90;
    do {
        func_8016EFC0(0, var_s1, var_s0_2->unk30, var_s0_2->unk34, (s32) var_s0_2->unk38);
        func_8016EFC0(1, var_s1, var_s0_2->unk1A8, var_s0_2->unk1AC, (s32) var_s0_2->unk1B0);
        temp_a1_2 = var_s1;
        temp_a2_2 = var_s0_2->unk214;
        temp_a3_2 = var_s0_2->unk218;
        temp_v0_2 = var_s0_2->unk21C;
        var_s0_2 += 0xC;
        var_s1 += 1;
        func_8016EFC0(2, temp_a1_2, temp_a2_2, temp_a3_2, (s32) temp_v0_2);
    } while (var_s1 < 3);
    func_8016F490(0);
    func_80179548(D_801CBD90.unk54, D_801CBD90.unk58, D_801CBD90.unk5C);
    temp_s1 = D_801C34EC + 0xB788;
    func_801254DC(&sp18, D_801CBD90.unk60, D_801CBD90.unk64, D_801CBD90.unk68);
    temp_s1->unk1E4 = sp18;
    temp_s1->unk1E8 = (s32) sp18.unk4;
    temp_s1->unk1EC = (s32) sp18.unk8;
    func_801254DC(&sp18, D_801CBD90.unk6C, D_801CBD90.unk70, D_801CBD90.unk74);
    temp_s1->unk1F0 = sp18;
    temp_s1->unk1F4 = (s32) sp18.unk4;
    temp_s1->unk1F8 = (s32) sp18.unk8;
    temp_s1_2 = D_801C34EC + 0xC040;
    func_801254DC(&sp18, D_801CBD90.unk1CC, D_801CBD90.unk1D0, D_801CBD90.unk1D4);
    temp_s1_2->unk1E4 = sp18;
    temp_s1_2->unk1E8 = (s32) sp18.unk4;
    temp_s1_2->unk1EC = (s32) sp18.unk8;
    func_801254DC(&sp18, D_801CBD90.unk1D8, D_801CBD90.unk1DC, D_801CBD90.unk1E0);
    temp_s1_2->unk1F0 = sp18;
    temp_s1_2->unk1F4 = (s32) sp18.unk4;
    temp_s1_2->unk1F8 = (s32) sp18.unk8;
}
