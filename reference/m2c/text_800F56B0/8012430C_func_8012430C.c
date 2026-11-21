/* m2c reference for func_8012430C @ 8012430C (93 words). Generated; not compiled or validated. */
s32 func_801250C8(s32 *, s32 *);                    /* extern */
s16 func_80178A1C();                                /* extern */

void func_8012430C(void *arg1, void *arg2, s32 arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 temp_lo;
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = func_801250C8(arg1 + 0x1E4, arg2 + 0x1E4);
    if (arg3 != 0) {
        var_s0 = temp_v0 / arg3;
    } else {
        var_s0 = temp_v0;
    }
    temp_lo = var_s0 / func_80178A1C();
    sp10 = arg1->unk1E4 + (arg1->unk244 * temp_lo);
    sp14 = arg1->unk1E8 + (arg1->unk248 * temp_lo);
    sp18 = arg1->unk1EC + (arg1->unk24C * temp_lo);
    sp20 = arg2->unk1E4 + (arg2->unk244 * temp_lo);
    sp24 = arg2->unk1E8 + (arg2->unk248 * temp_lo);
    sp28 = arg2->unk1EC + (arg2->unk24C * temp_lo);
    func_801250C8(&sp10, &sp20);
}
