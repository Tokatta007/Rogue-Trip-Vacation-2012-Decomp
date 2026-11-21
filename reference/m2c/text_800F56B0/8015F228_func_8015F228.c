/* m2c reference for func_8015F228 @ 8015F228 (82 words). Generated; not compiled or validated. */
extern ? D_801BAEE4;
extern u16 *D_801BBF70;

s32 func_8015F228(s32 arg0, s32 arg1) {
    s32 *temp_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1_2;
    u16 temp_v1;
    u16 var_s3;
    void *temp_a2;

    temp_a0 = (arg0 * 4) + &D_801BAEE4;
    temp_s4 = *temp_a0;
    if (arg1 != temp_s4) {
        temp_a2 = &D_801BAEE4 - 4;
        if (D_801BAEE4.unk-4 != 0) {
            temp_v1 = *D_801BBF70;
            *D_801BBF70 = 0;
            temp_s3 = temp_v1 & 0xFFFF;
            if (arg1 != 0) {
                temp_v1_2 = 1 << arg0;
                *temp_a0 = arg1;
                var_s3 = temp_s3 | temp_v1_2;
                temp_a2->unk30 = (u16) (temp_a2->unk30 | temp_v1_2);
            } else {
                temp_v0 = ~(1 << arg0);
                *temp_a0 = 0;
                var_s3 = temp_s3 & temp_v0;
                D_801BAEE4.unk2C = (u16) (D_801BAEE4.unk2C & temp_v0);
            }
            if (arg0 == 0) {
                temp_s0 = arg1 == 0;
                ChangeClearPAD(temp_s0);
                ChangeClearRCnt(3, temp_s0);
            }
            if (arg0 == 4) {
                ChangeClearRCnt(0, arg1 == 0);
            }
            if (arg0 == 5) {
                ChangeClearRCnt(1, arg1 == 0);
            }
            if (arg0 == 6) {
                ChangeClearRCnt(2, arg1 == 0);
            }
            *D_801BBF70 = var_s3;
        }
    }
    return temp_s4;
}
