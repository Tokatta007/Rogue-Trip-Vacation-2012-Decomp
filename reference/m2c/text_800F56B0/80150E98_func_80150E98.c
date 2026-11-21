/* m2c reference for func_80150E98 @ 80150E98 (82 words). Generated; not compiled or validated. */
void *func_80124584(s32, ?, s32);                   /* extern */
? func_80149D84(void *, ?, void *, void *, s32, s32); /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
static s32 D_801C34EC = 0;

void func_80150E98(void *arg0, s32 arg1) {
    u8 temp_v0_2;
    void *temp_a1;
    void *temp_v0;

    temp_v0 = func_80124584(D_801C34EC, 0x40, arg1);
    if (temp_v0->unk8C != 0) {
        (arg0 + arg1)->unk17DC = 0;
        arg0->unk1760 = 0U;
        return;
    }
    temp_a1 = arg0 + arg1;
    if (temp_v0->unk87 == 0) {
        temp_v0->unk268 = 0;
        temp_v0->unk297 = 0;
        temp_v0_2 = temp_a1->unk17DA;
        temp_a1->unk17DA = (u8) (temp_v0_2 + 1);
        if ((s8) temp_v0_2 >= 0x1A) {
            temp_a1->unk17DC = 0;
            arg0->unk1760 = 0U;
        }
        if (((temp_a1->unk17DA % 5) << 0x18) == 0) {
            if (arg0->unk1760 != 0) {
                arg0->unk1760 = 0U;
            } else {
                arg0->unk1760 = 1U;
            }
            if (func_8016B6DC(0x10, temp_v0->unk750) & 0xFF) {
                temp_v0->unkBA = 1;
            }
            func_80149D84(arg0, 0xF, temp_v0, temp_v0 + 0x714, 0, 0);
        }
    }
}
