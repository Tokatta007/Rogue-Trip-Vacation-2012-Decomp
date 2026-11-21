/* m2c reference for func_80164358 @ 80164358 (40 words). Generated; not compiled or validated. */
extern ? D_801BC2B8;
extern s32 D_801C3874;
static ? *D_801C361C = &D_801BC2B8;
static ? *D_801C3620 = (? *)0x1F800000;

s32 func_80164358(void *arg0) {
    ? *var_v1;
    s32 temp_v1;
    s32 var_v0;
    void *temp_v0;

    temp_v1 = D_801C3874 - 1;
    D_801C3874 = temp_v1;
    if (temp_v1 >= 0) {
        if (temp_v1 < 0x23) {
            var_v1 = D_801C3620;
            var_v0 = temp_v1 * 0x1C;
        } else {
            var_v1 = D_801C361C;
            var_v0 = temp_v1 * 0x1C;
        }
        temp_v0 = var_v0 + var_v1;
        arg0->unk0 = (s32) temp_v0->unk0;
        arg0->unk4 = (s32) temp_v0->unk4;
        arg0->unk8 = (s32) temp_v0->unk8;
        arg0->unkC = (s32) temp_v0->unkC;
        arg0->unk10 = (s32) temp_v0->unk10;
        arg0->unk14 = (s32) temp_v0->unk14;
        arg0->unk18 = (s32) temp_v0->unk18;
    }
    return D_801C3874;
}
