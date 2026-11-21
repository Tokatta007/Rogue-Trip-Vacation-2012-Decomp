/* m2c reference for func_8015BA3C @ 8015BA3C (27 words). Generated; not compiled or validated. */
void func_8015BA3C(void *arg0, void *arg1) {
    s32 temp_v0;
    s8 var_v1;

    temp_v0 = (s32) ((arg1->unk4 * arg1->unk6) + 1) / 2;
    var_v1 = temp_v0 + 4;
    if ((u32) temp_v0 >= 0xDU) {
        var_v1 = 0;
    }
    arg0->unk3 = var_v1;
    arg0->unk4 = 0xA0000000;
    arg0->unk8 = (s32) arg1->unk0;
    arg0->unkC = (s32) arg1->unk4;
    *(arg0 + (var_v1 * 4)) = 0x01000000;
}
