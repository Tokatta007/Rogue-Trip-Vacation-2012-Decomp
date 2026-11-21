/* m2c reference for func_80167F30 @ 80167F30 (211 words). Generated; not compiled or validated. */
void func_80167F30(s32 arg0, void *arg1, s32 arg2, void *arg3) {
    s32 var_t3;
    void *temp_a3;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *var_a1;

    var_a1 = arg1;
    var_t3 = arg0;
    temp_s1 = var_a1;
    if (var_t3 < 0xA) {
        temp_v0 = (var_t3 * 0xC) + arg2;
        temp_s1->unkC = (u8) temp_v0->unk0;
        temp_s1->unkD = (u8) temp_v0->unk1;
        temp_s1->unk10 = (u16) (temp_v0->unk2 & 0xFF);
        var_a1->unk12 = (s16) (temp_v0->unk3 & 0xFF);
    } else if (var_t3 < 0x64) {
        temp_v1 = ((arg0 / 10) * 0xC) + arg2;
        temp_s1->unkC = (u8) temp_v1->unk0;
        temp_s1->unkD = (u8) temp_v1->unk1;
        temp_s1->unk10 = (u16) (temp_v1->unk2 & 0xFF);
        temp_s1->unk12 = (s16) (temp_v1->unk3 & 0xFF);
        AddPrim(arg3, temp_s1);
        temp_s1->unk1C = (s16) (temp_s1->unk8 + temp_s1->unk10 + 1);
        temp_v0_2 = ((arg0 % 10) * 0xC) + arg2;
        temp_s1->unk20 = (u8) temp_v0_2->unk0;
        temp_s1->unk21 = (u8) temp_v0_2->unk1;
        temp_s1->unk24 = (s16) (temp_v0_2->unk2 & 0xFF);
        var_a1 = temp_s1 + 0x14;
        temp_s1->unk26 = (s16) (temp_v0_2->unk3 & 0xFF);
    } else {
        if (var_t3 >= 0x3E8) {
            var_t3 = arg0 % 1000;
        }
        temp_a3 = ((var_t3 / 100) * 0xC) + arg2;
        temp_s1->unkC = (u8) temp_a3->unk0;
        temp_s1->unkD = (u8) temp_a3->unk1;
        temp_s1->unk10 = (u16) (temp_a3->unk2 & 0xFF);
        temp_s1->unk12 = (s16) (temp_a3->unk3 & 0xFF);
        AddPrim(arg3, temp_s1);
        temp_s1->unk1C = (u16) (temp_s1->unk8 + temp_s1->unk10 + 1);
        temp_v0_3 = (((var_t3 % 100) / 10) * 0xC) + arg2;
        temp_s1->unk20 = (u8) temp_v0_3->unk0;
        temp_s1->unk21 = (u8) temp_v0_3->unk1;
        temp_s1->unk24 = (u16) (temp_v0_3->unk2 & 0xFF);
        temp_s1->unk26 = (s16) (temp_v0_3->unk3 & 0xFF);
        AddPrim(arg3, temp_s1 + 0x14);
        temp_s1->unk30 = (s16) (temp_s1->unk1C + temp_s1->unk24 + 1);
        temp_v0_4 = ((var_t3 % 10) * 0xC) + arg2;
        temp_s1->unk34 = (u8) temp_v0_4->unk0;
        temp_s1->unk35 = (u8) temp_v0_4->unk1;
        temp_s1->unk38 = (s16) (temp_v0_4->unk2 & 0xFF);
        var_a1 = temp_s1 + 0x28;
        temp_s1->unk3A = (s16) (temp_v0_4->unk3 & 0xFF);
    }
    AddPrim(arg3, var_a1);
}
