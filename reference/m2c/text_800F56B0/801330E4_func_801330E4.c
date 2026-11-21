/* m2c reference for func_801330E4 @ 801330E4 (182 words). Generated; not compiled or validated. */
? func_801333BC(? *);                               /* extern */
void *func_8016F168(?);                             /* extern */
void *func_8016F184(?, s32);                        /* extern */
void *func_8016F1B0(?, s32);                        /* extern */
? func_80179610(? *, void *, void *);               /* extern */
extern ? D_801B2E1C;
extern ? D_801CBD90;
extern ? D_801CBDE4;
static s32 D_801C338C = 0;
static s32 D_801C3390 = 0;
static s32 D_801C34EC = 0;

void func_801330E4(void) {
    ? *var_s0;
    ? *var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;

    if (D_801C338C != 0) {
        temp_v0 = func_8016F168(0);
        D_801CBD90.unk0 = (s32) temp_v0->unk0;
        var_s0 = &D_801CBD90;
        D_801CBD90.unk4 = (s32) temp_v0->unk4;
        D_801CBD90.unk8 = (s32) temp_v0->unk8;
        temp_v0_2 = func_8016F168(1);
        D_801CBD90.unk178 = (s32) temp_v0_2->unk0;
        D_801CBD90.unk17C = (s32) temp_v0_2->unk4;
        D_801CBD90.unk180 = (s32) temp_v0_2->unk8;
        temp_v0_3 = func_8016F168(2);
        D_801CBD90.unk1E4 = (s32) temp_v0_3->unk0;
        D_801CBD90.unk1E8 = (s32) temp_v0_3->unk4;
        var_s1 = 0;
        D_801CBD90.unk1EC = (s32) temp_v0_3->unk8;
        do {
            temp_v0_4 = func_8016F184(0, var_s1);
            var_s0->unkC = (s32) temp_v0_4->unk0;
            var_s0->unk10 = (s32) temp_v0_4->unk4;
            var_s0->unk14 = (s32) temp_v0_4->unk8;
            temp_v0_5 = func_8016F184(1, var_s1);
            var_s0->unk184 = (s32) temp_v0_5->unk0;
            var_s0->unk188 = (s32) temp_v0_5->unk4;
            var_s0->unk18C = (s32) temp_v0_5->unk8;
            temp_v0_6 = func_8016F184(2, var_s1);
            var_s0->unk1F0 = (s32) temp_v0_6->unk0;
            var_s0->unk1F4 = (s32) temp_v0_6->unk4;
            var_s1 += 1;
            var_s0->unk1F8 = (s32) temp_v0_6->unk8;
            var_s0 += 0xC;
        } while (var_s1 < 3);
        var_s1_2 = 0;
        var_s0_2 = &D_801CBD90;
        do {
            temp_v0_7 = func_8016F1B0(0, var_s1_2);
            var_s0_2->unk30 = (s32) temp_v0_7->unk0;
            var_s0_2->unk34 = (s32) temp_v0_7->unk4;
            var_s0_2->unk38 = (s32) temp_v0_7->unk8;
            temp_v0_8 = func_8016F1B0(1, var_s1_2);
            var_s0_2->unk1A8 = (s32) temp_v0_8->unk0;
            var_s0_2->unk1AC = (s32) temp_v0_8->unk4;
            var_s0_2->unk1B0 = (s32) temp_v0_8->unk8;
            temp_v0_9 = func_8016F1B0(2, var_s1_2);
            var_s0_2->unk214 = (s32) temp_v0_9->unk0;
            var_s0_2->unk218 = (s32) temp_v0_9->unk4;
            var_s1_2 += 1;
            var_s0_2->unk21C = (s32) temp_v0_9->unk8;
            var_s0_2 += 0xC;
        } while (var_s1_2 < 3);
        func_80179610(&D_801CBDE4, &D_801CBDE4 + 4, &D_801CBDE4 + 8);
        temp_s0 = &D_801CBDE4 - 0x54;
        temp_v0_10 = D_801C34EC + 0xB788;
        temp_a1 = temp_v0_10 + 0x1E4;
        temp_s0->unk60 = (s32) temp_v0_10->unk1E4;
        temp_s0->unk64 = (s32) temp_a1->unk4;
        temp_s0->unk68 = (s32) temp_a1->unk8;
        temp_v0_11 = temp_v0_10 + 0x1F0;
        temp_s0->unk6C = (s32) temp_v0_10->unk1F0;
        temp_s0->unk70 = (s32) temp_v0_11->unk4;
        temp_s0->unk74 = (s32) temp_v0_11->unk8;
        temp_a0 = D_801C34EC + 0xC040;
        temp_v1 = temp_a0 + 0x1E4;
        temp_s0->unk1CC = (s32) temp_a0->unk1E4;
        temp_s0->unk1D0 = (s32) temp_v1->unk4;
        temp_s0->unk1D4 = (s32) temp_v1->unk8;
        temp_a0_2 = temp_a0 + 0x1F0;
        temp_s0->unk1D8 = (s32) temp_a0->unk1F0;
        temp_s0->unk1DC = (s32) temp_a0_2->unk4;
        D_801C338C = 0;
        temp_s0->unk1E0 = (s32) temp_a0_2->unk8;
        return;
    }
    if (D_801C3390 != 0) {
        func_801333BC(&D_801B2E1C);
        D_801C3390 = 0;
    }
}
