/* m2c reference for func_8012AF9C @ 8012AF9C (58 words). Generated; not compiled or validated. */
s32 func_8012BD30();                                /* extern */

void func_8012AF9C(void *arg0, u8 arg1, s32 arg2) {
    void *temp_a0;

    if (func_8012BD30() < 0x19) {
        temp_a0 = arg0 + arg1;
        if ((arg2 << 0x10) > 0) {
            if ((s8) temp_a0->unk43 != -1) {
                temp_a0->unk43 = (u8) (arg2 + temp_a0->unk43);
            }
            if ((arg1 == 0) && ((s8) arg0->unk43 >= 7)) {
                arg0->unk43 = 6U;
            }
        } else {
            (arg0 + arg1)->unk43 = -1;
        }
        if ((arg0 + (s8) arg0->unk41)->unk43 == 0) {
            arg0->unk41 = arg1;
        }
    }
}
