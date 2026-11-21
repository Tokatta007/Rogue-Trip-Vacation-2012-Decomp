/* m2c reference for func_8012700C @ 8012700C (63 words). Generated; not compiled or validated. */
extern ? D_8018404C;
extern ? D_8018444C;
extern ? D_8018456C;
static s32 D_801C32D4 = 0;
static u16 D_801C32D8 = 0;
static s32 D_801C32DC = 0;

void func_8012700C(void) {
    ? *var_v0_2;
    ? *var_v1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    u8 temp_v0;
    void *var_a0;
    void *var_v0;

    var_a1 = 0xFF;
    var_v0 = &D_8018404C + 0x3FC;
    D_801C32D4 = 0;
    D_801C32DC = 0;
    do {
        var_v0->unk2 = (u16) D_801C32D8;
        var_a1 -= 1;
        var_v0 -= 4;
    } while (var_a1 >= 0);
    var_a1_2 = 0;
    var_v0_2 = &D_8018456C;
    do {
        var_a1_2 += 1;
        var_v0_2->unk12 = 0xFF;
        var_v0_2->unk0 = 0xFF;
        var_v0_2 = var_a1_2 + &D_8018456C;
    } while (var_a1_2 < 0x12);
    var_a1_3 = 0;
    var_v1 = &D_8018444C;
    var_a0 = &D_8018444C + 0xC;
    do {
        var_a0->unk4 = 0;
        var_a0->unk0 = (s32) var_a0->unk4;
        var_v1->unk4 = (s32) var_a0->unk0;
        var_v1->unk18 = 0;
        var_v1->unk1C = 0;
        var_v1->unk0 = (s32) var_v1->unk4;
        var_a0->unkB = 0U;
        var_v1->unkB = (u8) var_a0->unkB;
        var_a0->unkA = (u8) var_v1->unkB;
        var_v1->unkA = (u8) var_a0->unkA;
        var_a1_3 += 1;
        var_a0->unk8 = (u8) var_v1->unkA;
        temp_v0 = var_a0->unk8;
        var_a0 += 0x20;
        var_v1->unk8 = temp_v0;
        var_v1 += 0x20;
    } while (var_a1_3 < 9);
    D_801C32D8 += 1;
}
