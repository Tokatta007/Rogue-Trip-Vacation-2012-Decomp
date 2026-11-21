/* m2c reference for func_8012B094 @ 8012B094 (59 words). Generated; not compiled or validated. */
s32 func_8016BDA8(s32);                             /* extern */

void func_8012B094(void *arg0, s32 arg1) {
    s32 var_v1;
    s8 temp_a0;

    if (func_8016BDA8(arg0->unk0->unk7D0) != 0) {
        temp_a0 = (s8) arg0->unk41;
        do {
            arg0->unk41 = (u8) (arg0->unk41 + arg1);
            if (arg0->unk41 & 0x80) {
                arg0->unk41 = 8U;
            } else if ((s8) arg0->unk41 >= 9) {
                arg0->unk41 = 0U;
            }
            var_v1 = 0;
            if (((arg0 + (s8) arg0->unk41)->unk43 != 0) || ((s8) arg0->unk41 == temp_a0)) {
                var_v1 = 1;
            }
        } while (var_v1 == 0);
    }
}
