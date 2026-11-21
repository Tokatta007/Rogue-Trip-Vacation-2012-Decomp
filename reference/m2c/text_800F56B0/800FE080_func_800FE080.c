/* m2c reference for func_800FE080 @ 800FE080 (116 words). Generated; not compiled or validated. */
extern ? D_801C39A8;

void func_800FE080(void *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_t0;
    s32 var_v1;
    u8 var_v0;
    void *temp_a0;

    temp_t0 = (s32) arg0->unk7C0 >> 4;
    temp_a0 = *((arg0->unk78 * 4) + (temp_t0 << 5) + &D_801C39A8);
    if (temp_a0 != NULL) {
        temp_a1 = arg0->unk260 + arg0->unk20C;
        var_v1 = temp_a1;
        if (temp_a1 < 0) {
            var_v1 = -var_v1;
        }
        arg0->unk7A8 = (s32) (arg0->unk7A8 + var_v1);
        if (arg0->unk7A8 >= 0x141) {
            if (temp_a1 > 0) {
                temp_a0->unk4 = (u8) (temp_a0->unk4 + 1);
                if ((u8) temp_a0->unk4 >= (u32) (temp_a0->unk3 & 0x7F)) {
                    temp_a0->unk4 = 0U;
                }
            } else {
                if (temp_a0->unk4 == 0) {
                    var_v0 = temp_a0->unk3 & 0x7F;
                } else {
                    var_v0 = temp_a0->unk4;
                }
                temp_a0->unk4 = (u8) (var_v0 - 1);
            }
            temp_a1_2 = temp_t0 << 5;
            if (((arg0->unk78 * 4) + temp_a1_2 + &D_801C39A8)->unk8 != 0) {
                ((arg0->unk78 * 4) + temp_a1_2 + &D_801C39A8)->unk8->unk4 = (u8) temp_a0->unk4;
            }
            if (((arg0->unk78 * 4) + temp_a1_2 + &D_801C39A8)->unk10 != 0) {
                ((arg0->unk78 * 4) + temp_a1_2 + &D_801C39A8)->unk10->unk4 = (u8) temp_a0->unk4;
            }
            if (((arg0->unk78 * 4) + temp_a1_2 + &D_801C39A8)->unk18 != 0) {
                ((arg0->unk78 * 4) + temp_a1_2 + &D_801C39A8)->unk18->unk4 = (u8) temp_a0->unk4;
            }
        }
        arg0->unk7A8 = 0;
    }
}
