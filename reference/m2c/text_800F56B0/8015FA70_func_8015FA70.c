/* m2c reference for func_8015FA70 @ 8015FA70 (48 words). Generated; not compiled or validated. */
? func_8015FC90(s32 *, s32);                        /* extern */

void func_8015FA70(s32 arg0, s8 arg1, s8 arg2) {
    s32 sp10;
    s32 sp24;
    s32 sp28;
    s32 sp30;
    s32 sp34;
    s32 temp_a0;
    s32 var_v0;

    if ((arg0 << 0x18) == 0) {
        if (arg1 == 0) {
            sp10 = 0x200;
            sp28 = (s32) arg2;
        }
        var_v0 = arg0 << 0x18;
        if (arg1 == 1) {
            sp10 = 0x100;
            sp24 = (s32) arg2;
            goto block_5;
        }
    } else {
block_5:
        var_v0 = arg0 << 0x18;
    }
    temp_a0 = var_v0 >> 0x18;
    if (temp_a0 == 1) {
        if (arg1 == 0) {
            sp10 = 0x2000;
            sp34 = (s32) arg2;
        }
        if (arg1 == temp_a0) {
            sp10 = 0x1000;
            sp30 = (s32) arg2;
        }
    }
    func_8015FC90(&sp10, arg0);
}
