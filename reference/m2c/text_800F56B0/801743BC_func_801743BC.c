/* m2c reference for func_801743BC @ 801743BC (46 words). Generated; not compiled or validated. */
? func_8017600C(s32, s32);                          /* extern */
? func_8017606C(s32);                               /* extern */
? func_801760CC(?);                                 /* extern */
? func_801761BC(?);                                 /* extern */
extern ? D_801F4B58;
extern ? D_801F4B70;
extern ? D_801F4BB8;

s16 func_801743BC(s32 arg0, s16 arg1) {
    s32 temp_s0;
    s32 temp_s1;

    if ((u32) (arg1 & 0xFFFF) < 0x11U) {
        temp_s1 = arg1 * 4;
        if (*(&D_801F4B58 + arg1) == 2) {
            temp_s0 = *(&D_801F4BB8 + temp_s1);
            func_801760CC(0);
            func_8017606C(temp_s0);
            func_8017600C(arg0, *(&D_801F4B70 + temp_s1));
            *(&D_801F4B58 + arg1) = 1;
            return arg1;
        }
    }
    func_801761BC(0);
    return -1;
}
