/* m2c reference for func_80106E38 @ 80106E38 (151 words). Generated; not compiled or validated. */
? func_80108B84(s32);                               /* extern */
s32 func_80133040();                                /* extern */

void func_80106E38(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_a1;
    s16 temp_a1_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_2;

    func_80108B84(arg4);
    if (func_80133040() != 0) {
        temp_v1 = (arg2 * 0x14) + ((arg3 * 0x28) + arg0);
        temp_a0 = temp_v1 + 0x10D8;
        temp_a0->unk8 = 3;
        temp_a0->unkA = (s16) (arg4 - 8);
        temp_v0 = temp_v1 + 0x1158;
        temp_a1 = arg4 - 7;
        temp_a0_2 = temp_v1 + 0x11D8;
        temp_v0->unk8 = 9;
        temp_v0->unkA = temp_a1;
        temp_a0_2->unk8 = 0x1C;
        temp_a0_2->unkA = (s16) (arg4 + 0x12);
        temp_a0_3 = temp_v1 + 0x1258;
        temp_a0_3->unk8 = 0x44;
        temp_v0_2 = temp_v1 + 0x12D8;
        temp_a0_3->unkA = temp_a1;
        temp_a1_2 = arg4 + 0x15;
        temp_a0_4 = temp_v1 + 0x1358;
        temp_v0_2->unk8 = 9;
        temp_v0_2->unkA = temp_a1_2;
        temp_a0_4->unk8 = 0xC;
        temp_v1_2 = temp_v1 + 0x13D8;
        temp_a0_4->unkA = (s16) (arg4 + 0x43);
        temp_v1_2->unk8 = 0x55;
        temp_v1_2->unkA = temp_a1_2;
    }
    temp_s1 = arg3 * 0x28;
    temp_s3 = arg2 * 0x14;
    AddPrim(arg1, arg0 + (temp_s1 + 0x10D8) + temp_s3);
    temp_s0 = arg3 * 0x18;
    temp_s2 = arg2 * 0xC;
    AddPrim(arg1, arg0 + (temp_s0 + 0x1128) + temp_s2);
    AddPrim(arg1, arg0 + (temp_s1 + 0x1158) + temp_s3);
    AddPrim(arg1, arg0 + (temp_s0 + 0x11A8) + temp_s2);
    AddPrim(arg1, arg0 + (temp_s1 + 0x11D8) + temp_s3);
    AddPrim(arg1, arg0 + (temp_s0 + 0x1228) + temp_s2);
    AddPrim(arg1, arg0 + (temp_s1 + 0x1258) + temp_s3);
    AddPrim(arg1, arg0 + (temp_s0 + 0x12A8) + temp_s2);
    AddPrim(arg1, arg0 + (temp_s1 + 0x12D8) + temp_s3);
    AddPrim(arg1, arg0 + (temp_s0 + 0x1328) + temp_s2);
    AddPrim(arg1, arg0 + (temp_s1 + 0x1358) + temp_s3);
    AddPrim(arg1, arg0 + (temp_s0 + 0x13A8) + temp_s2);
    AddPrim(arg1, arg0 + (temp_s1 + 0x13D8) + temp_s3);
    AddPrim(arg1, arg0 + (temp_s0 + 0x1428) + temp_s2);
}
