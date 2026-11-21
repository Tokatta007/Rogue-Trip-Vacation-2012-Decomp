/* m2c reference for func_80107094 @ 80107094 (147 words). Generated; not compiled or validated. */
s32 func_80133040();                                /* extern */

void func_80107094(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2_2;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    if (func_80133040() != 0) {
        if (arg0->unk3A8 == 2) {
            temp_a2 = arg3 * 0x18;
            temp_a3 = arg2 * 0x30;
            temp_v1 = (arg3 * 0x14) + ((arg2 * 0x28) + arg0);
            temp_t0 = temp_v1 + 0x204C;
            temp_t0->unk8 = 0x116;
            temp_t0->unkA = (s16) (arg4 + 0x2C);
            temp_t0_2 = temp_v1 + 0x20CC;
            temp_t0_2->unk8 = 0x13E;
            temp_v1_2 = temp_v1 + 0x2B4C;
            temp_t0_2->unkA = (s16) (arg4 + 0x46);
            temp_v1_2->unk8 = 0xF0;
            temp_a2_2 = temp_a2 + (temp_a3 + arg0) + 0x1FEC;
            temp_v1_2->unkA = (s16) (arg4 + 0x66);
            temp_a2_2->unk8 = 0x115;
            temp_a2_2->unkA = 0x2C;
            temp_a2_2->unkC = 0x12A;
            temp_a2_2->unkE = 0x2C;
            temp_a2_2->unk10 = 0x115;
            temp_a2_2->unk12 = 0x6E;
            temp_a2_2->unk14 = 0x12A;
            temp_a2_2->unk16 = 0x6E;
            AddPrim(arg1, arg0 + (temp_a3 + 0x1FEC) + temp_a2);
        } else {
            temp_v1_3 = (arg3 * 0x14) + ((arg2 * 0x28) + arg0);
            temp_a0 = temp_v1_3 + 0x204C;
            temp_a0->unk8 = 0x76;
            temp_a0->unkA = 0x95;
            temp_a0_2 = temp_v1_3 + 0x20CC;
            temp_a0_2->unk8 = 0x9E;
            temp_v1_4 = temp_v1_3 + 0x2B4C;
            temp_a0_2->unkA = 0xC8;
            temp_v1_4->unk8 = 0x50;
            temp_v1_4->unkA = 0xCF;
        }
    }
    temp_s1 = arg2 * 0x28;
    temp_s3 = arg3 * 0x14;
    AddPrim(arg1, arg0 + (temp_s1 + 0x204C) + temp_s3);
    temp_s0 = arg2 * 0x18;
    temp_s2 = arg3 * 0xC;
    AddPrim(arg1, arg0 + (temp_s0 + 0x209C) + temp_s2);
    AddPrim(arg1, arg0 + (temp_s1 + 0x20CC) + temp_s3);
    AddPrim(arg1, arg0 + (temp_s0 + 0x211C) + temp_s2);
    AddPrim(arg1, arg0 + (temp_s1 + 0x2B4C) + temp_s3);
    AddPrim(arg1, arg0 + (temp_s0 + 0x2B9C) + temp_s2);
}
