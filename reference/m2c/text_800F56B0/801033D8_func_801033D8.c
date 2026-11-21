/* m2c reference for func_801033D8 @ 801033D8 (84 words). Generated; not compiled or validated. */
? func_801011E4(s32, s32, s32, ?);                  /* extern */
s32 func_8016B6DC(?, s16);                          /* extern */
s32 func_8016BDA8(s16);                             /* extern */

void func_801033D8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    void *temp_a0;

    if (arg1 < 2) {
        temp_a0 = arg0 + (arg1 * 4);
        switch (temp_a0->unk0) {                    /* irregular */
        case 0:
            temp_a0->unk0 = 1;
            break;
        case 1:
            temp_a0->unk0 = 2;
            break;
        case 2:
            if ((arg0 + arg1)->unk3F4 != 0) {
                temp_v0 = temp_a0->unk3A0->unk7D0;
                var_s1 = 0;
                if ((func_8016BDA8((s16) temp_v0) != 0) && (func_8016B6DC(4, (s16) temp_v0) & 0xFF)) {
                    var_s1 = (u32) (func_8016B6DC(2, (s16) temp_v0) & 0xFF) > 0U;
                }
                temp_v0_2 = arg1 * 4;
                if (var_s1 != 0) {
                    *(arg0 + temp_v0_2) = 3;
                    (arg0 + arg1)->unk3F4 = 0;
                } else {
                    *(arg0 + temp_v0_2) = 0;
                }
            } else {
                temp_a0->unk0 = 3;
            }
            break;
        default:
            temp_a0->unk0 = 0;
            break;
        }
        func_801011E4(arg0, arg1, *(arg0 + (arg1 * 4)), 0);
    }
}
