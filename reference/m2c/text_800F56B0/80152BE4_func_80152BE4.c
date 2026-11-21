/* m2c reference for func_80152BE4 @ 80152BE4 (179 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
? func_80125464(void *, ?);                         /* extern */
s32 func_8013A06C(void *);                          /* extern */
? func_8013BDCC(s32, ?, ?);                         /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_8016408C(s32 *);                             /* extern */
? func_801640EC(void *, void *);                    /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_80152BE4(s32 arg0, void *arg1, void *arg2, ? arg3, s32 arg4) {
    s32 sp18;
    s32 temp_s1;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    u16 var_v0_2;
    void *temp_a1;
    void *temp_s0;
    void *temp_s2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;

    D_801C31CC.unk8 = 0x45;
    D_801C31CC.unkC = rand();
    temp_s0 = arg0 + (arg4 * 4);
    temp_v1 = temp_s0->unk1884;
    temp_v1_2 = temp_v1 + 0x1C;
    D_801C3100.unk0 = (s32) temp_v1->unk1C;
    D_801C3100.unk4 = (s32) temp_v1_2->unk4;
    D_801C31CC.unk0 = &D_801C3100;
    D_801C3100.unk8 = (s32) temp_v1_2->unk8;
    func_8013BDCC(D_801C34F4, 0, 0);
    (arg0 + arg4)->unk18A0 = 1;
    (arg0 + (arg4 * 2))->unk189C = 0;
    temp_s0->unk188C = arg1;
    temp_s0->unk1894 = arg2;
    temp_s0->unk1884->unkC = 1;
    func_80125464(temp_s0->unk1884 + 0x14, arg3);
    func_8015A05C(temp_s0->unk1884 + 0x14, temp_s0->unk1884 + 0x28);
    temp_s1 = arg4 * 8;
    temp_a1 = arg0 + temp_s1;
    temp_a1->unk1874 = (s16) ((arg2->unk14 - temp_s0->unk1884->unk14) - 0xAA);
    temp_a1->unk1876 = (s16) (temp_s0->unk1884->unk16 - arg2->unk16);
    temp_s2 = arg0 + (temp_s1 + 0x1874);
    temp_a1->unk1878 = (s16) (temp_s0->unk1884->unk18 - arg2->unk18);
    func_801640EC(temp_s2, temp_a1);
    func_801640EC(temp_s2 + 2);
    func_801640EC(temp_s2 + 4);
    sp18 = (s16) arg2->unk18 - (s16) temp_s0->unk1884->unk18;
    func_8016408C(&sp18);
    var_a0 = arg2 + 0x1C;
    if (arg1 != NULL) {
        var_v0 = sp18;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if ((u32) (var_v0 - 0x201) < 0x3FFU) {
            arg1->unk9A = 1;
            arg1->unk18E = (u16) temp_s0->unk1884->unk18;
            if (sp18 < 0) {
                arg1->unk218 = -1;
                var_v0_2 = arg1->unk18E - 0x400;
            } else {
                arg1->unk218 = 1;
                var_v0_2 = arg1->unk18E + 0x400;
            }
            goto block_15;
        }
        var_v1 = 0;
        if (arg1->unk820 == 0) {
            var_v1 = func_8013A06C(var_a0) == 0;
        }
        if (var_v1 != 0) {
            arg1->unk9B = 1;
            var_v0_3 = sp18;
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            arg1->unk18E = (u16) temp_s0->unk1884->unk18;
            if (var_v0_3 < 0x400) {
                arg1->unk218 = 1;
                var_v0_2 = arg1->unk18E;
            } else {
                arg1->unk218 = -1;
                var_v0_2 = (u16) arg1->unk1F8;
            }
block_15:
            arg1->unk190 = var_v0_2;
        }
        func_801640EC(arg1 + 0x190);
        arg1->unk18C = 0;
        arg1->unk194 = 0;
        arg1->unk98 = 0;
        var_a0 = arg2 + 0x1C;
    }
    func_8011BC6C(var_a0, 0, 0xF, 0xE, 0, 0);
}
