/* m2c reference for func_80130CCC @ 80130CCC (163 words). Generated; not compiled or validated. */
extern s32 D_801C37EC;
extern s32 D_801C3808;

void func_80130CCC(void *arg0) {
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a3;
    s32 var_a3;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u32 temp_t0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_5;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_t1;

    var_t2 = 0;
    var_t1 = arg0->unkC;
loop_1:
    if (var_t2 < (arg0->unk12 & 0xFF)) {
        temp_a2 = var_t1 + 0xC;
        if (var_t1->unk0 & 0x40) {
            temp_a1 = var_t1 + 0x10;
            temp_a3 = ((D_801C3808 * 0x1A) + (temp_a2->unk6 & 0x1F)) * 0x14;
            temp_a0 = temp_a3 + D_801C37EC;
            temp_a2->unk2 = (s16) ((((s32) temp_a0->unkC >> 4) & 0x3F) | ((temp_a0->unk10 & 0x3FF) << 6));
            temp_a1->unk2 = (u8) ((temp_a1->unk2 & 0xE0) | (temp_a0->unk0 & 0x1F));
            if (!(var_t1->unk10 & 0x01800000)) {
                temp_v1 = temp_a3 + D_801C37EC;
                temp_a1_2 = temp_v1->unk4;
                var_v0 = temp_a1_2;
                if (temp_a1_2 < 0) {
                    var_v0 = temp_a1_2 + 0x3F;
                }
                var_v1 = temp_v1->unk8;
                var_a3 = (temp_a1_2 - ((var_v0 >> 6) << 6)) * 4;
            } else if ((var_t1->unk10 & 0x01800000) == 0x800000) {
                temp_v1_2 = temp_a3 + D_801C37EC;
                temp_a1_3 = temp_v1_2->unk4;
                var_v0_2 = temp_a1_3;
                if (temp_a1_3 < 0) {
                    var_v0_2 = temp_a1_3 + 0x3F;
                }
                var_v1 = temp_v1_2->unk8;
                var_a3 = (temp_a1_3 - ((var_v0_2 >> 6) << 6)) * 2;
            } else {
                temp_v1_3 = temp_a3 + D_801C37EC;
                temp_a1_4 = temp_v1_3->unk4;
                var_v0_3 = temp_a1_4;
                if (temp_a1_4 < 0) {
                    var_v0_3 = temp_a1_4 + 0x3F;
                }
                var_v1 = temp_v1_3->unk8;
                var_a3 = temp_a1_4 - ((var_v0_3 >> 6) << 6);
            }
            temp_t0 = var_v1 & 0xFF;
            if (var_t1->unk0 & 0x80) {
                temp_a0_2 = var_t1 + (((u8) var_t1->unk1 >> 4) * 4);
                temp_a1_5 = temp_a0_2 - 4;
                temp_a1_5->unk1 = (u8) ((temp_a1_5->unk1 & 0x83) | ((var_a3 >> 1) & 0x7C));
                temp_a0_2->unk-4 = (s32) ((temp_a0_2->unk-4 & 0xFFF07FFF) | ((temp_t0 >> 3) << 0xF));
            } else {
                var_t1->unkC = (u8) (var_t1->unkC + var_a3);
                temp_a2->unk1 = (u8) (temp_a2->unk1 + temp_t0);
                temp_a2->unk4 = (u8) (temp_a2->unk4 + var_a3);
                temp_a2->unk5 = (u8) (temp_a2->unk5 + temp_t0);
                temp_a2->unk8 = (u8) (temp_a2->unk8 + var_a3);
                temp_a2->unk9 = (u8) (temp_a2->unk9 + temp_t0);
                if (var_t1->unk0 & 1) {
                    temp_a2->unkA = (u8) (temp_a2->unkA + var_a3);
                    temp_a2->unkB = (u8) (temp_a2->unkB + temp_t0);
                }
            }
        }
        var_t2 += 1;
        var_t1 += ((u8) var_t1->unk1 >> 4) * 4;
        goto loop_1;
    }
}
