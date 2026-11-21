/* m2c reference for func_8011B57C @ 8011B57C (138 words). Generated; not compiled or validated. */
extern ? D_801CAE10;
static s16 D_801C32CC = 0;

void func_8011B57C(s32 arg0, void *arg1) {
    s16 temp_a1;
    s16 var_a0;
    s16 var_a2;
    s16 var_s4;
    s16 var_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_s0;
    void *var_s2;

    temp_v1 = arg1->unk2 & 0xFF;
    if (temp_v1 == 0) {
        arg1->unk2 = 1U;
        var_s2 = arg1->unkC;
        var_s4 = 0;
        if (temp_v1 < (s32) arg1->unk12) {
            do {
                temp_s0 = (D_801C32CC * 0x24) + &D_801CAE10;
                temp_s0->unk20 = (s8) (arg0 == 0x1B7);
                temp_s0->unk14 = (s32 *) (var_s2 + 0x18);
                temp_s0->unk1C = (s32) *temp_s0->unk14;
                temp_s0->unk8 = (s16) ((rand() & 0xFFF) + 1);
                if (arg0 == 0x1B7) {
                    var_v0 = (rand() & 0x1FF) + 0x100;
                } else {
                    var_v0 = (rand() & 0x3FF) + 0x200;
                }
                temp_s0->unk18 = var_v0;
                var_a2 = 0;
                var_v0_2 = 1;
                if (D_801C32CC > 0) {
loop_8:
                    temp_v1_2 = var_a2 << 0x10;
                    if (var_v0_2 != 0) {
                        temp_a1 = var_a2 + 1;
                        var_a2 = temp_a1;
                        var_v0_2 = (((temp_v1_2 >> 0x10) * 0x24) + &D_801CAE10)->unkC != (arg1->unk4 + (var_s2->unk4 * 8));
                        if (temp_a1 >= D_801C32CC) {
                            goto block_10;
                        }
                        goto loop_8;
                    }
                    goto block_12;
                }
block_10:
                if (var_v0_2 != 0) {
                    temp_s0->unkC = (void *) (arg1->unk4 + (var_s2->unk4 * 8));
                    temp_a0 = temp_s0->unkC;
                    temp_s0->unk10 = (s32) (arg1->unk4 + ((var_s2 + 4)->unk2 * 8));
                    temp_s0->unk0 = (s16) ((s32) (temp_a0->unk2 << 0x10) >> 0x13);
                    temp_s0->unk2 = (s16) -((s32) (temp_a0->unk0 << 0x10) >> 0x13);
                    temp_s0->unk4 = 0;
                    var_a0 = var_s4 + 1;
                } else {
block_12:
                    temp_s0->unkC = NULL;
                    var_a0 = var_s4 + 1;
                }
                var_s4 = var_a0;
                D_801C32CC = (u16) D_801C32CC + 1;
                var_s2 += ((u8) var_s2->unk1 >> 4) * 4;
            } while (var_a0 < (s32) arg1->unk12);
        }
    }
}
