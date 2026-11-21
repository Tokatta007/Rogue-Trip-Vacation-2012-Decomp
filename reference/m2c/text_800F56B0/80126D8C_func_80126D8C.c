/* m2c reference for func_80126D8C @ 80126D8C (40 words). Generated; not compiled or validated. */
s32 func_801250C8(?, s32);                          /* extern */

s32 func_80126D8C(void *arg0, ? arg1) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = 1;
    var_s1 = func_801250C8(arg1, arg0->unk65B0 + 0x1C);
loop_1:
    if (var_s0 < (arg0 + 0x6220)->unk3CC) {
        temp_v0 = func_801250C8(arg1, arg0->unk65B0 + 0x1C);
        if (temp_v0 < var_s1) {
            var_s1 = temp_v0;
        }
        var_s0 += 1;
        goto loop_1;
    }
    return var_s1;
}
