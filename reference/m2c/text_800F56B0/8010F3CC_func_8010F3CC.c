/* m2c reference for func_8010F3CC @ 8010F3CC (88 words). Generated; not compiled or validated. */
? func_8016408C(s32 *, s32);                        /* extern */
s32 func_80176C1C(s32, s32, ?);                     /* extern */

s32 func_8010F3CC(void *arg0, s32 *arg1, s32 *arg2) {
    s32 sp10;
    s32 temp_a1;
    s32 temp_s4;
    s32 var_v0;
    s32 var_v1;

    sp10 = *arg1 - *arg2;
    func_8016408C(&sp10);
    var_v1 = 0;
    if (arg0->unk6BC == 0) {
        var_v0 = sp10;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < 0x16) {
            var_v1 = 0;
            *arg2 = *arg1;
        } else {
            temp_s4 = func_80176C1C(*arg2, *arg1, 5);
            if (arg0->unk50C != 0) {
                sp10 = temp_s4 - *arg2;
                func_8016408C(&sp10);
                temp_a1 = (sp10 * 0x46) / 100;
                *arg1 += temp_a1;
                func_8016408C(arg1, temp_a1);
                arg0->unk50C = (u16) (arg0->unk50C - arg0->unk7D4);
                if (arg0->unk50C & 0x8000) {
                    arg0->unk50C = 0U;
                }
            }
            *arg2 = temp_s4;
            var_v1 = 1;
        }
    }
    return var_v1;
}
