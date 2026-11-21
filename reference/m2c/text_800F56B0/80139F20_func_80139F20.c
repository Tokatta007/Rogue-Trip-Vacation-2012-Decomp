/* m2c reference for func_80139F20 @ 80139F20 (41 words). Generated; not compiled or validated. */
? func_801670B4(?);                                 /* extern */
? func_80167228(?, ?, ?, s32);                      /* extern */

void func_80139F20(s32 arg0, ? arg1, ? arg2, s32 *arg3) {
    *arg3 += 1;
    if (*arg3 >= 0x1F) {
        *arg3 = 1;
    }
    if (*arg3 >= 0x10) {
        func_801670B4(1);
        goto block_5;
    }
    if (*arg3 < 0x10) {
block_5:
        func_80167228(1, arg1, arg2, arg0);
    }
}
