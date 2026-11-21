/* m2c reference for func_8017BC74 @ 8017BC74 (96 words). Generated; not compiled or validated. */
? func_8017C1C4();                                  /* extern */
? func_8017C84C(s16, s32, void *, ?);               /* extern */
extern ? D_801F3AA8;

void func_8017BC74(s32 arg0, s16 arg1) {
    s32 *temp_t0;
    s32 temp_a1;
    s32 temp_v1;
    s8 var_a3;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1_2;
    void *var_t0;

    temp_t0 = ((s32) (arg0 << 0x10) >> 0xE) + &D_801F3AA8;
    temp_v1 = arg1 * 0xB0;
    temp_s0 = *temp_t0 + temp_v1;
    temp_s0->unk98 = (s32) (temp_s0->unk98 & ~1);
    temp_a2 = temp_v1 + *temp_t0;
    temp_a2->unk98 = (s32) (temp_a2->unk98 & ~2);
    temp_a1 = arg1 << 8;
    temp_a2_2 = temp_v1 + *temp_t0;
    temp_a2_2->unk98 = (s32) (temp_a2_2->unk98 & ~8);
    temp_a2_3 = temp_v1 + *temp_t0;
    temp_a2_3->unk98 = (s32) (temp_a2_3->unk98 & ~0x400);
    temp_v1_2 = temp_v1 + *temp_t0;
    temp_v1_2->unk98 = (s32) (temp_v1_2->unk98 | 4);
    func_8017C84C((s16) (arg0 | temp_a1), temp_a1, temp_a2_3, -0x401);
    func_8017C1C4();
    var_a3 = 0;
    var_t0 = temp_s0;
    temp_s0->unk14 = 0;
    temp_s0->unk88 = 0;
    temp_s0->unk1C = 0;
    temp_s0->unk18 = 0;
    temp_s0->unk19 = 0;
    temp_s0->unk1E = 0;
    temp_s0->unk1A = 0;
    temp_s0->unk1B = 0;
    temp_s0->unk1F = 0;
    temp_s0->unk17 = 0;
    temp_s0->unk21 = 0;
    temp_s0->unk1C = 0;
    temp_s0->unk1D = 0;
    temp_s0->unk15 = 0;
    temp_s0->unk16 = 0;
    temp_s0->unk90 = (s32) temp_s0->unk84;
    temp_s0->unk94 = (s32) temp_s0->unk8C;
    temp_s0->unk54 = (u16) temp_s0->unk56;
    temp_s0->unk0 = (s32) temp_s0->unk4;
    temp_s0->unk8 = (s32) temp_s0->unk4;
    do {
        temp_v0 = temp_s0 + var_a3;
        temp_v0->unk37 = var_a3;
        temp_v0->unk27 = 0x40;
        var_t0->unk60 = 0x7F;
        var_a3 += 1;
        var_t0 += 2;
    } while (var_a3 < 0x10);
    temp_s0->unk5C = 0x7F;
    temp_s0->unk5E = 0x7F;
}
