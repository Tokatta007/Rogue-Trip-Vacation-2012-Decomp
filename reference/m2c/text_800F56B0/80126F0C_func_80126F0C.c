/* m2c reference for func_80126F0C @ 80126F0C (38 words). Generated; not compiled or validated. */
void func_80126F0C(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    var_t1 = 0;
    var_a2 = arg0;
    var_t0 = 0;
    var_v0 = 0 < 2;
loop_1:
    var_a1 = 0;
    if (var_v0 != 0) {
        var_v0_2 = var_t0;
        do {
            temp_v0 = arg0 + var_v0_2;
            temp_v1 = var_a2 + 0xB788 + var_a1;
            temp_v1->unk2A7 = (u8) temp_v0->unk12358;
            var_a1 += 1;
            temp_v1->unk2B0 = (u8) temp_v0->unk1236A;
            var_v0_2 = var_a1 + var_t0;
        } while (var_a1 < 9);
        temp_a0 = var_a2 + 0xB788;
        var_a2 += 0x8B8;
        temp_v1_2 = arg0 + var_t1;
        var_t0 += 9;
        temp_a0->unk274 = (s32) (s8) temp_v1_2->unk1237C;
        var_t1 += 1;
        temp_a0->unk2A4 = (u8) temp_v1_2->unk1237E;
        var_v0 = var_t1 < 2;
        goto loop_1;
    }
}
