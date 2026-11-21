/* m2c reference for func_80126E7C @ 80126E7C (36 words). Generated; not compiled or validated. */
void func_80126E7C(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    var_t0 = 0;
    var_a2 = arg0;
    var_a3 = 0;
    var_v0 = 0 < 2;
loop_1:
    var_a1 = 0;
    if (var_v0 != 0) {
        var_v0_2 = var_a3;
        do {
            temp_v0 = arg0 + var_v0_2;
            temp_v1 = var_a2 + 0xB788 + var_a1;
            temp_v0->unk12358 = (u8) temp_v1->unk2A7;
            var_a1 += 1;
            temp_v0->unk1236A = (u8) temp_v1->unk2B0;
            var_v0_2 = var_a1 + var_a3;
        } while (var_a1 < 9);
        temp_a0 = var_a2 + 0xB788;
        var_a2 += 0x8B8;
        var_a3 += 9;
        temp_v0_2 = arg0 + var_t0;
        temp_v0_2->unk1237C = (s8) temp_a0->unk274;
        var_t0 += 1;
        temp_v0_2->unk1237E = (u8) temp_a0->unk2A4;
        var_v0 = var_t0 < 2;
        goto loop_1;
    }
}
