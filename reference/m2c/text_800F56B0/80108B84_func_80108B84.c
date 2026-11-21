/* m2c reference for func_80108B84 @ 80108B84 (119 words). Generated; not compiled or validated. */
? func_80108B74(s32, s32);                          /* extern */
s32 func_80133040();                                /* extern */

void func_80108B84(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_v1 = arg0 + arg2;
    var_s0 = 0;
    if ((temp_v1->unk1460 << 0x18) > 0) {
        var_s1 = 0x458;
        var_a1 = arg0 + 0x458;
        do {
            AddPrim(arg1, var_a1 + (arg3 << 5) + (arg2 * 0x10));
            var_s1 += 0x40;
            var_s0 += 1;
            var_a1 = arg0 + var_s1;
        } while (var_s0 < (s8) temp_v1->unk1460);
    }
    if (func_80133040() != 0) {
        temp_v1_2 = (arg2 << 5) + ((arg3 << 6) + arg0);
        temp_a0 = temp_v1_2 + 0x1058;
        temp_a1 = arg4 + 0x2C;
        temp_a0->unk8 = 0x2F;
        temp_v1_3 = temp_v1_2 + 0x1068;
        temp_a0->unkA = temp_a1;
        temp_a0->unkC = 0x33;
        temp_a0->unkE = temp_a1;
        temp_v1_3->unk8 = 0x31;
        temp_v1_3->unkA = (s16) (arg4 + 0x2B);
        temp_v1_3->unkC = 0x31;
        temp_v1_3->unkE = (s16) (arg4 + 0x2D);
        temp_v1_4 = (arg2 * 0x18) + ((arg3 * 0x30) + arg0) + 0x3F8;
        temp_v0 = arg4 + 0x15;
        temp_v1_4->unk8 = 0xC;
        temp_v1_4->unkA = temp_v0;
        temp_v1_4->unkC = 0x55;
        temp_v1_4->unkE = temp_v0;
        temp_v0_2 = arg4 + 0x43;
        temp_v1_4->unk10 = 0xC;
        temp_v1_4->unk12 = temp_v0_2;
        temp_v1_4->unk14 = 0x55;
        temp_v1_4->unk16 = temp_v0_2;
    }
    temp_s0 = arg0 + ((arg3 << 6) + 0x1058) + (arg2 << 5);
    AddPrim(arg1, temp_s0);
    AddPrim(arg1, temp_s0 + 0x10);
    AddPrim(arg1, arg0 + ((arg3 * 0x30) + 0x3F8) + (arg2 * 0x18));
    func_80108B74(arg0, arg2);
}
