/* m2c reference for func_80147B88 @ 80147B88 (98 words). Generated; not compiled or validated. */
? func_800FF9C8(void *, s32);                       /* extern */
? func_800FFB58(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */
? func_801481F0(void *, s32 *, ?, s32);             /* extern */
? func_8016408C(s32 *);                             /* extern */

s32 func_80147B88(void *arg0) {
    s32 sp10;
    s32 sp20;
    s32 sp30;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    void *var_a0;
    void *var_a0_2;

    sp30 = (s16) arg0->unk20 - arg0->unk1F8;
    func_8016408C(&sp30);
    temp_v0 = (s32) (arg0->unk21C * 2) >> 3;
    temp_a0 = sp30 - temp_v0;
    temp_lo = temp_v0 * temp_a0;
    if (temp_lo < 0) {
        var_s1 = 1;
    } else {
        var_v0 = temp_a0;
        if (temp_a0 < 0) {
            var_v0 = -var_v0;
        }
        var_s1 = var_v0 < (arg0->unk7D4 * 0x2D);
    }
    if ((var_s1 == 0) && (arg0->unk71 == 0) && ((u32) ((*arg0->unk44 + ((s32) (arg0->unk60 << 0x10) >> 0xB))->unk1F - 1) >= 2U)) {
        func_801481F0(arg0, &sp10, 1, temp_lo);
        func_801481F0(arg0, &sp20, 0);
        temp_lo_2 = sp10 * sp10;
        if (((sp20 * sp20) + (sp24 * sp24)) < (temp_lo_2 + (sp14 * sp14))) {
            var_a0 = NULL;
            if (arg0 != NULL) {
                var_a0 = arg0 + 4;
            }
            func_800FF9C8(var_a0, temp_lo_2);
            var_a0_2 = NULL;
            if (arg0 != NULL) {
                var_a0_2 = arg0 + 4;
            }
            func_800FFB58(var_a0_2, -1);
            func_80147DD0(arg0);
        }
    }
    return var_s1;
}
