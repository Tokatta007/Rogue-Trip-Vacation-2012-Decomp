/* m2c reference for func_8016F490 @ 8016F490 (53 words). Generated; not compiled or validated. */
extern ? D_801F3758;
extern ? D_801F3768;
extern ? D_801F3798;
extern ? D_801F37C8;
static s32 D_801C3688 = 0;

void func_8016F490(void) {
    ? *var_a1;
    ? *var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;

    var_t1 = 0;
    var_a2 = &D_801F3798;
    var_a1 = &D_801F3768;
    var_a3 = D_801C3688 * 0x70;
    temp_v1 = var_a3 + &D_801F37C8;
    D_801F3758.unk0 = (s32) temp_v1->unk0;
    D_801F3758.unk4 = (s32) temp_v1->unk4;
    var_t0 = var_a3;
    D_801F3758.unk8 = (s32) temp_v1->unk8;
    do {
        temp_v1_2 = var_t0 + &D_801F37C8;
        var_a1->unk0 = (s32) temp_v1_2->unk4C;
        temp_a0 = var_a3 + &D_801F37C8;
        var_a1->unk4 = (s32) temp_v1_2->unk50;
        var_a3 += 2;
        var_a1->unk8 = (s32) temp_v1_2->unk54;
        var_t0 += 0xC;
        var_a2->unk0 = (s32) ((s32) (temp_a0->unkC << 0x10) >> 0x14);
        var_t1 += 1;
        var_a2->unk4 = (s32) ((s32) (temp_a0->unk12 << 0x10) >> 0x14);
        var_a1 += 0xC;
        var_a2->unk8 = (s32) ((s32) (temp_a0->unk18 << 0x10) >> 0x14);
        var_a2 += 0xC;
    } while (var_t1 < 3);
}
