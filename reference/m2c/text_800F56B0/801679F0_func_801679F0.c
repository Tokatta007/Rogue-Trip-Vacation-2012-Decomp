/* m2c reference for func_801679F0 @ 801679F0 (41 words). Generated; not compiled or validated. */
extern ? D_801BC180;
static u16 D_801C363C = 0;
static u16 D_801C363E = 0;

void func_801679F0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    void *temp_a3;

    temp_a3 = (arg1 * 0x28) + &D_801BC180;
    var_a0 = arg2;
    if ((u32) ((arg2 - 0x61) & 0xFF) < 0x1AU) {
        var_a0 = arg2 - 0x20;
    }
    temp_v0 = (var_a0 & 0xFF) - 0x21;
    temp_a1 = temp_v0 >> 5;
    arg0->unkC = (s8) (temp_a3->unk3 * (temp_v0 - (temp_a1 << 5)));
    arg0->unkD = (s8) (temp_a3->unk7 + (temp_a3->unk1 * temp_a1));
    arg0->unk8 = (u16) D_801C363C;
    arg0->unkA = (u16) D_801C363E;
    D_801C363C += temp_a3->unk0 + temp_a3->unk2;
}
