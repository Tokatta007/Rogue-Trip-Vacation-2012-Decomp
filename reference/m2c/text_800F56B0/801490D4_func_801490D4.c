/* m2c reference for func_801490D4 @ 801490D4 (166 words). Generated; not compiled or validated. */
? func_8011B994(s32);                               /* extern */
? func_80124FC8(void *, void *, void *);            /* extern */
? func_801253C8(void *, void *);                    /* extern */
? func_8013D134(void *);                            /* extern */
? func_8014945C(void *);                            /* extern */
? func_8014EAA8(s32, void *);                       /* extern */
? func_8015A05C(void *, void *);                    /* extern */
s32 func_80178A70(s16, void *);                     /* extern */
static s32 D_801C34EC = 0;

void func_801490D4(void *arg0) {
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a1;

    temp_a0 = arg0->unk738;
    temp_a0->unk14 = (u16) (temp_a0->unk14 + arg0->unk6F0);
    temp_a0_2 = arg0->unk738;
    temp_a0_2->unk14 = (u16) (temp_a0_2->unk14 + arg0->unk704);
    temp_a0_3 = arg0->unk738;
    temp_a0_3->unk16 = (u16) (temp_a0_3->unk16 + arg0->unk6F2);
    temp_a0_4 = arg0->unk738;
    temp_a0_4->unk16 = (u16) (temp_a0_4->unk16 + arg0->unk706);
    temp_a0_5 = arg0->unk738;
    temp_a0_5->unk16 = (u16) (temp_a0_5->unk16 + ((s32) (arg0->unk70E << 0x10) >> 0x11));
    temp_a0_6 = arg0->unk738;
    temp_a0_6->unk18 = (u16) (temp_a0_6->unk18 + arg0->unk70E);
    func_8015A05C(arg0->unk738 + 0x14, arg0->unk738 + 0x28);
    func_801253C8(arg0->unk738 + 0x1C, arg0 + 0x1E4);
    func_80124FC8(arg0 + 0x6D4, arg0->unk738 + 0x1C, arg0->unk738 + 0x1C);
    if (arg0->unkA4 != 0) {
        temp_a1 = arg0->unk738;
        temp_v1 = arg0->unk16C;
        var_v0 = arg0->unk738->unkA * (s16) arg0->unk16C;
        if (var_v0 < 0) {
            var_v0 += 0x7F;
        }
        temp_a1->unk24 = (s32) (temp_a1->unk24 + ((s16) temp_v1 - (var_v0 >> 7)));
        var_v1 = 0;
        if (arg0->unk10C >= 2) {
            var_v1 = arg0->unk19E != 0;
        }
        if ((var_v1 != 0) && ((func_80178A70((s16) temp_v1, temp_a1) & 3) == 1)) {
            arg0->unk10C = (s32) (arg0->unk10C - 1);
        }
    }
    var_a0 = 0;
    if ((arg0->unk7AC < 0x7D0) && (arg0->unk7C0 != 0xF0)) {
        var_a0 = (u32) ((s16) arg0->unk160 ^ 0x40) > 0U;
    }
    if (var_a0 != 0) {
        func_8013D134(arg0);
    }
    if ((arg0->unk7C0 == 0x10) && ((D_801C34EC + arg0->unk78)->unk6122 == 0)) {
        func_8014945C(arg0);
    }
    if ((arg0->unk85 != 0) && (arg0->unk89 != 0)) {
        func_801253C8(arg0->unk74C->unk14 + 0x1C, arg0 + 0x1E4);
        func_8014EAA8(D_801C34EC + 0x496C, arg0->unk74C);
        arg0->unk74C = NULL;
        arg0->unk89 = 0U;
        func_8011B994(arg0->unk740);
    }
}
