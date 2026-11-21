/* m2c reference for func_80144FF8 @ 80144FF8 (122 words). Generated; not compiled or validated. */
? func_8016408C(s32 *);                             /* extern */
s32 func_80176C1C(s32, s32, ?);                     /* extern */
s8 func_80176CBC(s8, s32, ?);                       /* extern */

void func_80144FF8(void *arg0, s32 arg1) {
    s32 sp10;
    s32 temp_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 var_v0_4;

    sp10 = arg1 - (arg0->unk1F8 + ((s32) arg0->unk21C >> 3));
    func_8016408C(&sp10);
    temp_a0 = sp10 * 8;
    var_v0 = temp_a0;
    if (sp10 & 0x10000000) {
        var_v0 = -var_v0;
    }
    sp10 = temp_a0;
    if (var_v0 < 0x71) {
        arg0->unk1F8 = func_80176C1C(arg0->unk1F8, arg1, 5);
        arg0->unk21C = 0;
        return;
    }
    if (arg0->unkC8 < arg0->unk7A4) {
        if (arg0->unkE4 < temp_a0) {
            sp10 = arg0->unkE4;
        } else if (temp_a0 < -arg0->unkE4) {
            sp10 = -arg0->unkE4;
        }
    }
    var_v0_2 = (s32) (sp10 * 0x7F) / (s32) arg0->unkE0;
    sp10 = var_v0_2;
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    if (var_v0_2 >= 0x80) {
        arg0->unkA9 = 1U;
        var_v0_3 = 0x7F;
        if (sp10 <= 0) {
            var_v0_3 = -0x7F;
        }
        sp10 = var_v0_3;
    }
    if (sp10 > 0) {
        if (arg0->unkA9 != 0) {
            arg0->unkAF = 1;
            return;
        }
        arg0->unkAF = func_80176CBC((s8) arg0->unkB3, sp10, 5);
        return;
    }
    if (sp10 < 0) {
        var_v0_4 = 1;
        if (arg0->unkA9 == 0) {
            var_v0_4 = func_80176CBC((s8) arg0->unkB2, -sp10, 5);
        }
        arg0->unkAE = var_v0_4;
    }
}
