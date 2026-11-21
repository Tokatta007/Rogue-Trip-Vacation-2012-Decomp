/* m2c reference for func_8017D090 @ 8017D090 (105 words). Generated; not compiled or validated. */
void func_8017D090(void *arg0, void *arg1) {
    s32 temp_a2;
    s32 temp_t2;
    s32 temp_t4;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    u32 var_v0;

    temp_t4 = (arg0->unk0 & 0xF) + (((u8) arg0->unk0 >> 4) * 0xA) + ((arg1->unk0 & 0xF) + (((u8) arg1->unk0 >> 4) * 0xA));
    temp_a2 = (arg0->unk1 & 0xF) + (((u8) arg0->unk1 >> 4) * 0xA) + ((arg1->unk1 & 0xF) + (((u8) arg1->unk1 >> 4) * 0xA));
    var_a3 = temp_a2;
    temp_t2 = (arg0->unk2 & 0xF) + (((u8) arg0->unk2 >> 4) * 0xA) + ((arg1->unk2 & 0xF) + (((u8) arg1->unk2 >> 4) * 0xA));
    var_t0 = temp_t2;
    var_v0 = var_a3 & 0xFF;
    if ((u32) (var_t0 & 0xFF) >= 0x4BU) {
        var_a3 = temp_a2 + 1;
        var_t0 = temp_t2 - 0x4B;
        var_v0 = var_a3 & 0xFF;
    }
    var_a2 = temp_t4 & 0xFF;
    if (var_v0 >= 0x3CU) {
        var_a3 -= 0x3C;
        var_a2 = (temp_t4 + 1) & 0xFF;
    }
    arg0->unk0 = (u8) (((var_a2 / 10) * 0x10) | (var_a2 % 10));
    arg0->unk1 = (u8) ((((var_a3 & 0xFF) / 10) * 0x10) | ((var_a3 & 0xFF) % 10));
    arg0->unk2 = (u8) ((((var_t0 & 0xFF) / 10) * 0x10) | ((var_t0 & 0xFF) % 10));
}
