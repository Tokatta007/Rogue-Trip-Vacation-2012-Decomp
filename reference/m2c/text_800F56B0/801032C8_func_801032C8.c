/* m2c reference for func_801032C8 @ 801032C8 (68 words). Generated; not compiled or validated. */
s32 func_80176CBC(s32, s32, ?, s32);                /* extern */

void func_801032C8(s32 arg0, s32 arg1) {
    s32 var_s0;
    void *temp_a0;
    void *temp_a2;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;

    temp_a2 = arg0 + (arg1 * 4);
    temp_s1 = temp_a2->unk390;
    var_s0 = arg1 * 2;
    if ((arg0 + arg1)->unk3F2 != 0) {
        temp_a0 = temp_a2->unk3A0;
        temp_v0 = arg0 + (arg1 * 0xC);
        temp_v0->unk368 = (s32) ((s32) (((s32) temp_a0->unk21C >> 3) * temp_a2->unk3BC) / (s32) temp_a0->unkE0);
        temp_v0->unk36C = (s32) temp_a2->unk3AC;
        temp_v0->unk370 = (s32) temp_a2->unk3B4;
        var_s0 = arg1 * 2;
    }
    temp_s0 = arg0 + ((var_s0 + arg1) * 4);
    temp_s1->unk1C = func_80176CBC(temp_s1->unk1C, temp_s0->unk368, 1, arg0);
    temp_s1->unk20 = func_80176CBC(temp_s1->unk20, temp_s0->unk36C, 1);
    temp_s1->unk24 = func_80176CBC(temp_s1->unk24, temp_s0->unk370, 1);
}
