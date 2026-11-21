/* m2c reference for func_80167DA0 @ 80167DA0 (76 words). Generated; not compiled or validated. */
? func_80167B88(void *, u8 *, u8 *, u8 *, u8 *);    /* extern */

s32 func_80167DA0(void *arg0, void *arg1, s32 arg2) {
    u8 sp18;
    u8 sp1A;
    u8 sp1C;
    u8 sp1E;
    s32 var_s3;
    s32 var_v0;
    void *temp_s0;
    void *var_s1;
    void *var_s2;

    var_s1 = arg1;
    if ((arg0 == NULL) || (arg0->unk0 & 0xF)) {
        return 0;
    }
    var_s2 = arg0->unkC;
    if (arg2 >= (s32) arg0->unk12) {
        var_v0 = arg0->unk12 & 0xFF;
    } else {
        var_v0 = arg2;
    }
    var_s3 = 0;
    if (var_v0 > 0) {
        do {
            temp_s0 = var_s2 + 0xC;
            var_s1->unk8 = (s32) var_s2->unk18;
            func_80167B88(temp_s0, &sp18, &sp1A, &sp1C, &sp1E);
            var_s1->unk0 = sp18;
            var_s1->unk1 = sp1A;
            var_s1->unk2 = sp1C;
            var_s1->unk3 = sp1E;
            var_s1->unk6 = (u16) temp_s0->unk2;
            var_s3 += 1;
            var_s1->unk4 = (u16) temp_s0->unk6;
            var_s2 += ((u8) var_s2->unk1 >> 4) * 4;
            var_s1 += 0xC;
        } while (var_s3 < var_v0);
    }
    return var_v0;
}
