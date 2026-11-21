/* m2c reference for func_8016B1F0 @ 8016B1F0 (76 words). Generated; not compiled or validated. */
extern s32 D_801C3888;
extern s32 D_801C388C;
extern s32 D_801C3890;
extern s32 D_801C3894;
extern s32 D_801C3898;
extern s32 D_801C389C;
extern s32 D_801C38A0;
extern s32 D_801C38A4;
extern s32 D_801C38A8;
extern s32 D_801C38AC;
extern s32 D_801C38B0;
static void *D_801C3650 = NULL;

void func_8016B1F0(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_a3_4;
    void *temp_a3_5;

    if (arg0 != NULL) {
        temp_a3 = arg0 + 4;
        D_801C3888 = arg0->unk0;
        temp_a3_2 = temp_a3 + 4;
        D_801C388C = arg0->unk4;
        temp_a3_3 = temp_a3_2 + 4;
        D_801C3890 = temp_a3->unk4;
        temp_a1 = temp_a3_2->unk4;
        temp_a3_4 = temp_a3_3 + 4;
        D_801C3894 = temp_a1;
        temp_v1 = temp_a3_3->unk4;
        temp_a3_5 = temp_a3_4 + 4;
        D_801C3898 = temp_v1;
        temp_a0 = temp_a3_4->unk4;
        D_801C389C = temp_a0;
        temp_v0 = temp_a3_5->unk4;
        temp_lo = temp_a1 / temp_v0;
        temp_lo_2 = temp_v1 / temp_v0;
        D_801C3650 = temp_a3_5 + 4 + 4;
        D_801C38A0 = temp_v0;
        D_801C38A4 = temp_lo;
        D_801C38A8 = temp_lo_2;
        D_801C38AC = temp_a0 / temp_v0;
        D_801C38B0 = temp_lo * temp_lo_2;
        return;
    }
    D_801C3650 = NULL;
}
