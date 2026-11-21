/* m2c reference for func_801642A8 @ 801642A8 (44 words). Generated; not compiled or validated. */
extern ? D_801BC2B8;
extern s32 D_801C3874;
static ? *D_801C361C = &D_801BC2B8;
static ? *D_801C3620 = (? *)0x1F800000;
static s8 D_800F50D4[0x30] = {
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x4F,
    0x76,
    0x65,
    0x72,
    0x66,
    0x6C,
    0x6F,
    0x77,
    0x20,
    0x6F,
    0x66,
    0x20,
    0x64,
    0x62,
    0x20,
    0x73,
    0x63,
    0x61,
    0x6E,
    0x20,
    0x73,
    0x74,
    0x61,
    0x63,
    0x6B,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x2A,
    0x20,
    0xA,
    0,
    0,
    0,
}; /* const */

void func_801642A8(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    ? *var_v1;
    s32 var_v0;
    void *temp_v0;

    if (D_801C3874 < 0x23) {
        var_v1 = D_801C3620;
        var_v0 = D_801C3874 * 0x1C;
    } else {
        var_v1 = D_801C361C;
        var_v0 = D_801C3874 * 0x1C;
    }
    temp_v0 = var_v0 + var_v1;
    temp_v0->unk0 = arg0;
    temp_v0->unk4 = arg1;
    temp_v0->unk8 = (s32) arg2->unk0;
    temp_v0->unkC = (s32) arg2->unk4;
    temp_v0->unk10 = (s32) arg2->unk8;
    temp_v0->unk14 = arg3;
    temp_v0->unk18 = arg4;
    if (D_801C3874 < 0x4B78) {
        D_801C3874 += 1;
        return;
    }
    printf(D_800F50D4);
}
