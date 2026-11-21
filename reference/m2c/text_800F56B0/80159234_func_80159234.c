/* m2c reference for func_80159234 @ 80159234 (106 words). Generated; not compiled or validated. */
extern u8 *D_801B4DC8;
extern s32 *D_801B4DE0;
extern void *D_801B4DE4;
static s8 D_800F4B04[0x38] = {
    0x44,
    0x4D,
    0x41,
    0x20,
    0x53,
    0x54,
    0x41,
    0x54,
    0x55,
    0x53,
    0x20,
    0x45,
    0x52,
    0x52,
    0x4F,
    0x52,
    0x20,
    0x25,
    0x78,
    0xA,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0x30,
    0x31,
    0x32,
    0x33,
    0x34,
    0x35,
    0x36,
    0x37,
    0x38,
    0x39,
    0x41,
    0x42,
    0x43,
    0x44,
    0x45,
    0x46,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
}; /* const */

void func_80159234(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s8 var_v0;
    void *temp_a1_2;

    var_a0 = 0;
    temp_a1 = arg0 * 0x10;
    if ((temp_a1 + 0x1F800000)->unk1088 & 0x01000000) {
loop_1:
        if (var_a0 != 0x10000) {
            var_a0 += 1;
            if (!((temp_a1 + 0x1F800000)->unk1088 & 0x01000000)) {

            } else {
                goto loop_1;
            }
        } else {
            printf(D_800F4B04, (temp_a1 + 0x1F800000)->unk1088, 0x10000);
        }
    }
    if (arg5 == 1) {
        var_v0 = D_801B4DE4->unk2 | (1 << arg0);
    } else {
        var_v0 = D_801B4DE4->unk2 & ~(1 << arg0);
    }
    D_801B4DE4->unk2 = var_v0;
    temp_v0 = arg0 * 0x10;
    temp_a1_2 = temp_v0 + 0x1F801080;
    *D_801B4DE0 |= 1 << ((arg0 * 4) + 3);
    *(0x1F801080 + temp_v0) = arg1;
    temp_a1_2->unk4 = (s32) ((arg2 << 0x10) | arg3);
    if (!(*D_801B4DC8 & 0x40)) {
        do {

        } while (!(*D_801B4DC8 & 0x40));
    }
    (temp_a1_2 + 4)->unk4 = arg4;
}
