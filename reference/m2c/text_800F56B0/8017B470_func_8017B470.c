/* m2c reference for func_8017B470 @ 8017B470 (145 words). Generated; not compiled or validated. */
? func_8017BB14(s8, s8, s32, s32 *);                /* extern */
? func_8017C84C(s16);                               /* extern */
extern ? D_801F3AA8;

void func_8017B470(s32 arg0, s16 arg1) {
    s32 *temp_a3;
    s32 temp_a2;
    s32 var_v1;
    s8 temp_v1;
    u8 temp_v0;
    void *temp_s0;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;

    temp_a3 = ((s32) (arg0 << 0x10) >> 0xE) + &D_801F3AA8;
    temp_a2 = arg1 * 0xB0;
    temp_s0 = *temp_a3 + temp_a2;
    temp_v1 = temp_s0->unk20;
    temp_v0 = temp_s0->unk21 + 1;
    temp_s0->unk21 = temp_v0;
    if (temp_v1 == 0) {
        temp_s0->unk88 = 0;
        temp_s0->unk1C = 0;
        temp_s0->unk90 = 0;
        if ((temp_a2 + *temp_a3)->unk98 & 0x400) {
            temp_s0->unk0 = (s32) temp_s0->unkC;
            return;
        }
        temp_s0->unk0 = (s32) temp_s0->unk4;
        return;
    }
    if ((s8) temp_v0 < temp_v1) {
        temp_s0->unk88 = 0;
        temp_s0->unk1C = 0;
        temp_s0->unk90 = 0;
        if ((temp_a2 + *temp_a3)->unk98 & 0x400) {
            var_v1 = temp_s0->unkC;
            temp_s0->unk0 = (s32) temp_s0->unkC;
        } else {
            var_v1 = temp_s0->unk4;
            temp_s0->unk0 = (s32) temp_s0->unk4;
        }
        temp_s0->unk8 = var_v1;
        return;
    }
    temp_v1_2 = temp_a2 + *temp_a3;
    temp_v1_2->unk98 = (s32) (temp_v1_2->unk98 & ~1);
    temp_v1_3 = temp_a2 + *temp_a3;
    temp_v1_3->unk98 = (s32) (temp_v1_3->unk98 & ~8);
    temp_v1_4 = temp_a2 + *temp_a3;
    temp_v1_4->unk98 = (s32) (temp_v1_4->unk98 & ~2);
    temp_v1_5 = temp_a2 + *temp_a3;
    temp_v1_5->unk98 = (s32) (temp_v1_5->unk98 | 0x200);
    temp_v1_6 = temp_a2 + *temp_a3;
    temp_v1_6->unk98 = (s32) (temp_v1_6->unk98 | 4);
    temp_s0->unk14 = 0;
    if ((temp_a2 + *temp_a3)->unk98 & 0x400) {
        temp_s0->unk8 = (s32) temp_s0->unkC;
    } else {
        temp_s0->unk8 = (s32) temp_s0->unk4;
    }
    if (temp_s0->unk22 != -1) {
        temp_s0->unk14 = 0;
        func_8017BB14(temp_s0->unk22, temp_s0->unk23, temp_a2, temp_a3);
        func_8017C84C((s16) (arg0 | (arg1 << 8)));
    }
    func_8017C84C((s16) (arg0 | (arg1 << 8)));
    temp_s0->unk90 = (s32) temp_s0->unk54;
}
