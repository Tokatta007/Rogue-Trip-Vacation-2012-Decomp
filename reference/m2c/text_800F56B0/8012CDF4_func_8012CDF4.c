/* m2c reference for func_8012CDF4 @ 8012CDF4 (31 words). Generated; not compiled or validated. */
? func_8012B084(s32, s8);                           /* extern */
? func_8012B094(s32, ?);                            /* extern */

void func_8012CDF4(s32 arg0, s8 arg1) {
    void *temp_a0;

    temp_a0 = arg0 + arg1;
    if ((s8) temp_a0->unk43 != -1) {
        temp_a0->unk43 = (u8) (temp_a0->unk43 - 1);
        if ((temp_a0->unk43 << 0x18) <= 0) {
            func_8012B084(arg0, arg1);
            func_8012B094(arg0, 1);
        }
    }
}
