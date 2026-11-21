/* m2c reference for func_80169F08 @ 80169F08 (219 words). Generated; not compiled or validated. */
s32 func_80169F08(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_t7;
    s32 temp_t8;
    s32 var_a1;
    s32 var_t3;
    s32 var_t5;
    u16 var_v0;
    u16 var_v0_2;
    u32 temp_a0;
    u32 temp_a1_2;
    u32 temp_t4;
    u32 temp_t4_2;
    u32 var_a0;
    u32 var_v1;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t1;

    var_a1 = 0;
    temp_t1 = arg0->unk4;
    if ((arg1->unk0 >= (s16) temp_t1->unk8) && ((temp_t1->unk4 + (s16) temp_t1->unk8) >= arg1->unk0) && (arg1->unk4 >= (s16) temp_t1->unkA)) {
        var_a1 = (temp_t1->unk6 + (s16) temp_t1->unkA) >= arg1->unk4;
    }
    if (var_a1 != 0) {
        var_t3 = 1;
        var_t5 = 0xC;
        temp_a0 = arg1->unk0 - (s16) temp_t1->unk8;
        temp_a1 = temp_t1->unkE + arg2;
        temp_a2 = temp_t1->unk10 + arg2;
        temp_t4 = arg1->unk4 - (s16) temp_t1->unkA;
        temp_t8 = (1 << (temp_a1 - temp_t1->unkF)) - 1;
        temp_t7 = (1 << (temp_a2 - temp_t1->unk11)) - 1;
        if (temp_t1->unk12 & 1) {
            var_t5 = 0x28;
        }
        var_a0 = temp_a0 >> temp_t1->unkF;
        temp_t4_2 = temp_t4 >> temp_t1->unk11;
        temp_t0 = temp_t1 + 0x14 + ((((temp_t4 >> temp_a2) * ((s32) temp_t1->unk4 >> temp_a1)) + (temp_a0 >> temp_a1)) * var_t5);
        temp_a1_2 = var_a0;
        if (((u8) temp_t0->unk3 >> 6) & 2) {
            var_a0 = ~temp_a1_2;
        }
        if ((u32) (temp_t4_2 & temp_t7) < (u32) (var_a0 & temp_t8)) {
            if (((u8) temp_t0->unk3 >> 6) & 1) {
                arg3->unk0 = (s16) ((s32) (temp_t0->unk0 << 0x16) >> 0x12);
                arg3->unk2 = (s16) (((s32) ((s32) temp_t0->unk0 << 0xC) >> 0x16) * 0x10);
                arg3->unk4 = (s16) (((s32) (temp_t0->unk2 << 0x12) >> 0x16) * 0x10);
                var_v0 = temp_t0->unk8;
                goto block_15;
            }
            goto block_13;
        }
        if (!(((u8) temp_t0->unk7 >> 6) & 1)) {
block_13:
            var_t3 = 0;
        } else {
            arg3->unk0 = (s16) ((s32) (temp_t0->unk4 << 0x16) >> 0x12);
            arg3->unk2 = (s16) (((s32) ((s32) temp_t0->unk4 << 0xC) >> 0x16) * 0x10);
            arg3->unk4 = (s16) (((s32) (temp_t0->unk6 << 0x12) >> 0x16) * 0x10);
            var_v0 = temp_t0->unkA;
block_15:
            arg3->unk6 = var_v0;
        }
        temp_t0_2 = temp_t0 + 0xC;
        if (temp_t1->unk12 & 1) {
            var_v1 = temp_a1_2 & temp_t8;
            if (((u8) temp_t0_2->unk3 >> 6) & 2) {
                var_v1 = ~temp_a1_2 & temp_t8;
            }
            if ((u32) (temp_t4_2 & temp_t7) < var_v1) {
                if (((u8) temp_t0_2->unk3 >> 6) & 1) {
                    arg4->unk0 = (s16) ((s32) (temp_t0->unkC << 0x16) >> 0x16);
                    arg4->unk2 = (s16) ((s32) ((s32) temp_t0->unkC << 0xC) >> 0x16);
                    arg4->unk4 = (s16) ((s32) (temp_t0_2->unk2 << 0x12) >> 0x16);
                    var_v0_2 = temp_t0_2->unk8;
                    goto block_25;
                }
                goto block_23;
            }
            if (!(((u8) temp_t0_2->unk7 >> 6) & 1)) {
block_23:
                var_t3 = 0;
            } else {
                arg4->unk0 = (s16) ((s32) (temp_t0_2->unk4 << 0x16) >> 0x16);
                arg4->unk2 = (s16) ((s32) ((s32) temp_t0_2->unk4 << 0xC) >> 0x16);
                arg4->unk4 = (s16) ((s32) (temp_t0_2->unk6 << 0x12) >> 0x16);
                var_v0_2 = temp_t0_2->unkA;
block_25:
                arg4->unk6 = var_v0_2;
            }
        }
        return var_t3;
    }
    return 0;
}
