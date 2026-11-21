/* m2c reference for func_80149D40 @ 80149D40 (17 words). Generated; not compiled or validated. */
void func_80149D40(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if (arg1 == 8) {
        if (arg3 == 2) {
            arg0->unk1738 = arg2;
            return;
        }
        var_v0 = (arg3 * 4) + 0x40;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        (arg0 + var_v0)->unk1658 = arg2;
        return;
    }
    var_v0 = (arg3 * 4) + (arg1 * 8);
    (arg0 + var_v0)->unk1658 = arg2;
}
