/* m2c reference for func_8017B374 @ 8017B374 (63 words). Generated; not compiled or validated. */
? func_8017B6B4(s16, s16);                          /* extern */
extern ? D_801F3AA8;

void func_8017B374(s16 arg0, s16 arg1) {
    s16 temp_v0;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_a2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = *(&D_801F3AA8 + ((s32) (arg0 << 0x10) >> 0xE)) + (arg1 * 0xB0);
    temp_v0 = temp_s1->unk54;
    temp_v1 = temp_s1->unk90;
    temp_a2 = temp_v1 - temp_v0;
    if (temp_a2 > 0) {
        temp_v1_2 = temp_s1->unk52;
        if (temp_v1_2 > 0) {
            temp_s1->unk52 = (s16) ((u16) temp_s1->unk52 - 1);
            return;
        }
        if (temp_v1_2 == 0) {
            temp_s1->unk52 = (s16) (u16) temp_s1->unk54;
            var_v0 = temp_s1->unk90 - 1;
            goto block_10;
        }
        temp_s1->unk90 = temp_a2;
        return;
    }
    var_s0 = temp_v1;
    if (temp_v0 >= temp_v1) {
        do {
loop_8:
            func_8017B6B4(arg0, arg1);
            temp_v0_2 = temp_s1->unk90;
            if (temp_v0_2 == 0) {
                goto loop_8;
            }
            temp_v1_3 = temp_s1->unk54;
            var_s0 += temp_v0_2;
            var_v0 = var_s0 - temp_v1_3;
        } while (var_s0 < temp_v1_3);
block_10:
        temp_s1->unk90 = var_v0;
    }
}
