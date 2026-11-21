/* m2c reference for func_8016FF8C @ 8016FF8C (150 words). Generated; not compiled or validated. */
? func_80167B88(void *, u16 *, ? *, ? *, ? *);      /* extern */
? func_8016FEF8(u16 *, ? *, s16);                   /* extern */
extern u16 D_801C38E4;
extern ? D_801C38E6;
extern ? D_801C38E8;
extern ? D_801C38EA;
extern s16 D_801C38EC;
extern s16 D_801C38EE;
extern ? D_801F3988;

void func_8016FF8C(void *arg0, s32 arg1) {
    ? *temp_s0;
    ? *temp_s1_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s4;
    u16 *temp_s0_2;
    u32 temp_a1;
    void *var_s2;
    void *var_s3;

    var_s2 = arg0->unkC;
    temp_a1 = arg1 & 0xFFFF;
    var_s3 = var_s2 + 0xC;
    if (temp_a1 != 0) {
        func_80167B88(var_s3, &D_801C38EA - 6, &D_801C38E6, &D_801C38E8, &D_801C38EA);
        D_801C38EA.unk-2 = (u16) (D_801C38EA.unk-2 + 1);
        temp_s0 = &D_801C38EA - 2;
        temp_s2 = (var_s3->unk6 * 0x10) & 0x100;
        D_801C38EA.unk0 = (u16) (D_801C38EA.unk0 + 1);
        temp_s1 = (var_s3->unk6 << 6) & 0x3FF;
        func_8016FEF8(&D_801C38E4, temp_s0, (s16) var_s3->unk6);
        D_801C38EC = 1;
        D_801C38E4 += temp_s1;
        temp_s0->unk-2 = (u16) (temp_s0->unk-2 + temp_s2);
        return;
    }
    var_s4 = 0;
    if (temp_a1 < (u8) arg0->unk12) {
loop_4:
        if (D_801C38EE < 8) {
            temp_s0_2 = (D_801C38EE * 0x10) + &D_801F3988;
            temp_s0_2->unk8 = (s32) ((arg0->unk2 / 60) & 0xFF);
            temp_s1_2 = temp_s0_2 + 4;
            temp_s0_2->unkC = (s16) ((arg0->unk2 % 60) & 0xFF);
            temp_s0_2->unkE = 0;
            func_80167B88(var_s3, temp_s0_2, temp_s0_2 + 2, temp_s1_2, temp_s0_2 + 6);
            temp_s0_2->unk4 = (u16) (temp_s0_2->unk4 + 1);
            temp_s0_2->unk6 = (u16) (temp_s0_2->unk6 + 1);
            func_8016FEF8(temp_s0_2, temp_s1_2, (s16) var_s3->unk6);
            var_s4 += 1;
            temp_s0_2->unk0 += (var_s3->unk6 << 6) & 0x3FF;
            temp_s0_2->unk2 = (u16) (temp_s0_2->unk2 + ((var_s3->unk6 * 0x10) & 0x100));
            var_s2 += ((u8) var_s2->unk1 >> 4) * 4;
            var_s3 = var_s2 + 0xC;
            D_801C38EE = (u16) D_801C38EE + 1;
            if ((u32) (var_s4 & 0xFFFF) < (u8) arg0->unk12) {
                goto loop_4;
            }
        }
    }
}
