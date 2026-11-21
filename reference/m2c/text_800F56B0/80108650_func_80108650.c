/* m2c reference for func_80108650 @ 80108650 (273 words). Generated; not compiled or validated. */
? func_80108A94(void *, s32, void *);               /* extern */
void *func_8010B4EC(void *, s32);                   /* extern */
? func_801675F4(?, ?, s32, s8 *, s32);              /* extern */
static void *D_801C34EC = NULL;

void func_80108650(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s8 sp18;
    s8 sp19;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1_4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    u16 temp_v0;
    u8 var_v0_2;
    u8 var_v0_4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_5;

    sp19 = 0;
    sp18 = D_801C34EC->unk12754 + 0x30;
    func_801675F4(1, 0x5C, arg5 + 0x15, &sp18, arg4);
    if (D_801C34EC->unk1106D != 0) {
        arg0->unk1AE4 = NULL;
        temp_v0 = D_801C34EC->unk11088;
        var_s3 = ((temp_v0 << 0x10) / 2048000) - ((s32) ((s32) (temp_v0 << 0x10) >> 0xC) >> 0x1F);
        if (var_s3 >= 0x11) {
            var_s3 = 0x10;
        }
        var_v0 = var_s3 < 5;
        if (var_s3 == 0) {
            var_s3 = 1;
            var_v0 = 1 < 5;
        }
        temp_v1 = arg0 + arg2;
        if (var_v0 != 0) {
            temp_v1->unk1DEA = (u8) (temp_v1->unk1DEA + 1);
            if ((s8) temp_v1->unk1DEA >= 6) {
                var_v0_2 = temp_v1->unk1DE8 ^ 1;
                goto block_9;
            }
        } else {
            var_v0_2 = 1;
block_9:
            temp_v1->unk1DE8 = var_v0_2;
            temp_v1->unk1DEA = 0U;
        }
        var_s2 = 0;
        if (var_s3 > 0) {
            sp38 = arg3 * 0x30;
            var_s4 = 0x14E4;
            sp3C = arg2 * 0x18;
            do {
                temp_s0 = arg0 + var_s4 + sp38 + sp3C;
                func_80108A94(arg0, var_s3, temp_s0);
                if ((arg0 + arg2)->unk1DE8 != 0) {
                    temp_s0->unk8 = 0x5C;
                    temp_v0_2 = (arg5 + 0x3F) - (var_s2 * 2);
                    temp_s0->unkA = temp_v0_2;
                    temp_s0->unkC = 0x61;
                    temp_s0->unkE = temp_v0_2;
                    temp_v0_3 = temp_v0_2 + 1;
                    temp_s0->unk10 = 0x5C;
                    temp_s0->unk12 = temp_v0_3;
                    temp_s0->unk14 = 0x61;
                    temp_s0->unk16 = temp_v0_3;
                    AddPrim(arg1, temp_s0);
                }
                var_s2 += 1;
                var_s4 += 0x60;
            } while (var_s2 < var_s3);
            var_v1 = arg2 * 4;
        } else {
            goto block_31;
        }
    } else {
        arg0->unk1AE4 = func_8010B4EC(arg0, arg2);
        var_v1 = arg2 * 4;
        if (arg0->unk1AE4 != NULL) {
            temp_v1_2 = arg0->unk1AE4;
            var_s3_2 = (s32) (temp_v1_2->unk10C * 0x10) / (s32) temp_v1_2->unk110;
            if (var_s3_2 >= 0x11) {
                var_s3_2 = 0x10;
            }
            var_v0_3 = var_s3_2 < 5;
            if (var_s3_2 == 0) {
                var_s3_2 = 1;
                var_v0_3 = 1 < 5;
            }
            temp_v1_3 = arg0 + arg2;
            if (var_v0_3 != 0) {
                temp_v1_3->unk1DEA = (u8) (temp_v1_3->unk1DEA + 1);
                if ((s8) temp_v1_3->unk1DEA >= 6) {
                    var_v0_4 = temp_v1_3->unk1DE8 ^ 1;
                    goto block_25;
                }
            } else {
                var_v0_4 = 1;
block_25:
                temp_v1_3->unk1DE8 = var_v0_4;
                temp_v1_3->unk1DEA = 0U;
            }
            var_s2_2 = 0;
            if (var_s3_2 > 0) {
                sp40 = arg3 * 0x30;
                var_s1 = 0x14E4;
                do {
                    temp_s0_2 = arg0 + var_s1 + sp40 + (arg2 * 0x18);
                    func_80108A94(arg0, var_s3_2, temp_s0_2);
                    temp_s0_2->unk8 = 0x5C;
                    temp_v0_4 = (arg5 + 0x3F) - (var_s2_2 * 2);
                    temp_s0_2->unkA = temp_v0_4;
                    temp_s0_2->unkC = 0x61;
                    temp_s0_2->unkE = temp_v0_4;
                    temp_v0_5 = temp_v0_4 + 1;
                    temp_s0_2->unk10 = 0x5C;
                    temp_s0_2->unk12 = temp_v0_5;
                    temp_s0_2->unk14 = 0x61;
                    temp_s0_2->unk16 = temp_v0_5;
                    if ((arg0 + arg2)->unk1DE8 != 0) {
                        AddPrim(arg1, temp_s0_2);
                    }
                    var_s2_2 += 1;
                    var_s1 += 0x60;
                } while (var_s2_2 < var_s3_2);
            }
block_31:
            var_v1 = arg2 * 4;
        }
    }
    temp_v1_4 = (var_v1 + arg2) * 4;
    temp_v0_6 = arg3 * 0x28;
    temp_v1_5 = temp_v1_4 + (temp_v0_6 + arg0) + 0x1464;
    temp_v1_5->unk8 = 0x58;
    temp_v1_5->unkA = (s16) (arg5 - 8);
    AddPrim(arg1, arg0 + (temp_v0_6 + 0x1464) + temp_v1_4);
    AddPrim(arg1, arg0 + ((arg3 * 0x18) + 0x14B4) + (arg2 * 0xC));
}
