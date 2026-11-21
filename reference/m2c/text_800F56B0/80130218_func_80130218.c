/* m2c reference for func_80130218 @ 80130218 (35 words). Generated; not compiled or validated. */
void func_80130218(void *arg0, s32 *arg1, s32 *arg2, u8 *arg3, u8 *arg4) {
    s32 var_v1;

    *arg1 = 0;
    *arg2 += arg0->unk7D4;
    if (*arg2 >= 0x15) {
        var_v1 = 0;
        if ((*arg3 != 0) || (*arg4 != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            *arg3 = 0;
            *arg4 = 0;
        }
    } else if (*arg3 != 0) {
        *arg3 = 0;
        *arg4 = 1;
    }
}
