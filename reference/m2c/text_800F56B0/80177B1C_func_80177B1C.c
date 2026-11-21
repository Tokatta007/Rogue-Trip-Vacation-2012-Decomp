/* m2c reference for func_80177B1C @ 80177B1C (68 words). Generated; not compiled or validated. */
extern ? D_801BC2B8;
extern s32 D_801C38F4;
static ? *D_801C368C = &D_801BC2B8;
static ? *D_801C3694 = (? *)0x1F800000;

void func_80177B1C(s32 arg0, void *arg1, s32 arg2, s8 arg3, s32 arg4) {
    ? *var_v1;
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (D_801C38F4 < 0x29) {
        temp_v1 = (D_801C38F4 * 0x18) + D_801C3694;
        temp_v1->unk0 = arg0;
        temp_v1->unk4 = (s32) arg1->unk0;
        temp_v1->unk8 = (s32) arg1->unk4;
        temp_v1->unkC = (s32) arg1->unk8;
        temp_v1->unk10 = (u16) ((temp_v1->unk10 & 0xF) | (arg2 * 0x10));
        temp_v1->unk12 = arg3;
        var_v1 = D_801C3694;
        var_v0 = D_801C38F4 * 0x18;
    } else {
        temp_v1_2 = (D_801C38F4 * 0x18) + D_801C368C;
        temp_v1_2->unk0 = arg0;
        temp_v1_2->unk4 = (s32) arg1->unk0;
        temp_v1_2->unk8 = (s32) arg1->unk4;
        temp_v1_2->unkC = (s32) arg1->unk8;
        temp_v1_2->unk10 = (u16) ((temp_v1_2->unk10 & 0xF) | (arg2 * 0x10));
        temp_v1_2->unk12 = arg3;
        var_v1 = D_801C368C;
        var_v0 = D_801C38F4 * 0x18;
    }
    (var_v0 + var_v1)->unk14 = arg4;
    if (D_801C38F4 < 0xC8) {
        D_801C38F4 += 1;
    }
}
