/* m2c reference for func_80129AAC @ 80129AAC (220 words). Generated; not compiled or validated. */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013BEA8(s32, ?);                            /* extern */
u8 func_80176CBC(u8, ?, ?);                         /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;

void func_80129AAC(void *arg0) {
    u8 var_v0;
    u8 var_v0_2;
    u8 var_v0_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_s0;

    temp_s0 = arg0->unk18->unk738;
    arg0->unk16 = (u16) (arg0->unk16 - 1);
    if ((arg0->unk16 << 0x10) > 0) {
        if (arg0->unk11 & 0x80) {
            temp_s0->unk8 = func_80176CBC(temp_s0->unk8, 0, 0xD);
            var_v0 = 1;
            if ((u8) temp_s0->unk8 < 0x5BU) {
                goto block_5;
            }
        } else {
            temp_s0->unk8 = func_80176CBC(temp_s0->unk8, 0xFF, 0xD);
            var_v0 = -1U;
            if ((u8) temp_s0->unk8 >= 0xA4U) {
block_5:
                arg0->unk11 = var_v0;
            }
        }
        if (arg0->unk12 & 0x80) {
            temp_s0->unk9 = func_80176CBC(temp_s0->unk9, 0, 5);
            var_v0_2 = 1;
            if ((u8) temp_s0->unk9 < 0x5BU) {
                goto block_10;
            }
        } else {
            temp_s0->unk9 = func_80176CBC(temp_s0->unk9, 0xFF, 5);
            var_v0_2 = -1U;
            if ((u8) temp_s0->unk9 >= 0xA4U) {
block_10:
                arg0->unk12 = var_v0_2;
            }
        }
        if (arg0->unk13 & 0x80) {
            temp_s0->unkA = func_80176CBC(temp_s0->unkA, 0, 9);
            var_v0_3 = 1;
            if ((u8) temp_s0->unkA < 0x5BU) {
                goto block_15;
            }
        } else {
            temp_s0->unkA = func_80176CBC(temp_s0->unkA, 0xFF, 9);
            var_v0_3 = -1U;
            if ((u8) temp_s0->unkA >= 0xA4U) {
block_15:
                arg0->unk13 = var_v0_3;
            }
        }
        temp_a0 = arg0->unk18;
        if (temp_a0->unk7C0 == 0x10) {
            (D_801C34EC + (temp_a0->unk78 * 4))->unk610C->unk8 = (u8) temp_s0->unk8;
            (D_801C34EC + (arg0->unk18->unk78 * 4))->unk610C->unk9 = (u8) temp_s0->unk9;
            (D_801C34EC + (arg0->unk18->unk78 * 4))->unk610C->unkA = (u8) temp_s0->unkA;
        }
        if (rand() < 0xFA0) {
            arg0->unk18->unk210 = 0x400;
        }
        D_801C31CC.unk8 = 0x20;
        D_801C31CC.unkC = 0x20;
        temp_a2 = arg0 + 4;
        D_801C3100.unk0 = (s32) arg0->unk4;
        D_801C3100.unk4 = (s32) temp_a2->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) temp_a2->unk8;
        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
        return;
    }
    arg0->unk18->unkA3 = 0;
    temp_s0->unk8 = 0x7FU;
    temp_s0->unk9 = 0x7FU;
    temp_s0->unkA = 0x7FU;
    temp_a0_2 = arg0->unk18;
    if (temp_a0_2->unk7C0 == 0x10) {
        (D_801C34EC + (temp_a0_2->unk78 * 4))->unk610C->unk8 = 0x7F;
        (D_801C34EC + (arg0->unk18->unk78 * 4))->unk610C->unk9 = 0x7F;
        (D_801C34EC + (arg0->unk18->unk78 * 4))->unk610C->unkA = 0x7F;
    }
    arg0->unk18 = NULL;
    arg0->unk16 = 0U;
    D_801C31CC.unk8 = 0x20;
    D_801C31CC.unkC = 0x20;
    func_8013BEA8(D_801C34F4, 0x7F);
}
