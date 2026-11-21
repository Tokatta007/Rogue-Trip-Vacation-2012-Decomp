/* m2c reference for func_80130198 @ 80130198 (32 words). Generated; not compiled or validated. */
void func_80130198(void *arg0, s32 *arg1, s32 *arg2, u8 *arg3, u8 *arg4) {
    s32 var_v1;

    *arg2 = 0;
    *arg1 += arg0->unk7D4;
    if (*arg1 < 0x14) {
        var_v1 = 0;
        if (*arg3 == 0) {
            var_v1 = *arg4 == 0;
        }
        if (var_v1 != 0) {
            *arg3 = 1;
        }
        return;
    }
    if (*arg4 == 0) {
        *arg3 = 0;
        *arg4 = 0;
    }
}
