/* m2c reference for func_8013B28C @ 8013B28C (123 words). Generated; not compiled or validated. */
? func_8012E0C8(s32, ?, ?, s32, s32, s32, s32, s32, s32, s32, s32, ? *, s8 *); /* extern */
? func_8015AA3C(? *, ?, ?, ?, s32);                 /* extern */
? func_8015AAF0(? *, ?, ?, ?, s32);                 /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C66C(? *);                               /* extern */
? func_8015C838(? *);                               /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_8016BE08(?);                                 /* extern */
extern s32 D_801C3850;
extern ? D_801CC710;
extern ? D_801CC7D0;

s32 func_8013B28C(s32 arg0, s32 arg1, s32 arg2, ? arg3) {
    s8 sp38;
    ? *temp_s1;
    ? *temp_s1_2;
    s32 var_s5;

    var_s5 = 0x140;
    sp38 = 1;
    func_8016BE08(1);
    func_8015EBDC(0);
    func_8015C008(0);
    if (arg2 != 0) {
        var_s5 = 0x1E0;
        func_8015AAF0(&D_801CC7D0, 0, 0, 0x140, 0xF0);
        temp_s1 = &D_801CC7D0 + 0x14;
        func_8015AAF0(temp_s1, 0x1E0, 0, 0x140, 0xF0);
        D_801CC7D0.unk11 = 1;
        D_801CC7D0.unk25 = 1;
        func_8015C838(temp_s1);
        func_8015AA3C(&D_801CC710, 0, 0, 0x1E0, 0x100);
        temp_s1_2 = &D_801CC710 + 0x5C;
        func_8015AA3C(temp_s1_2, 0x1E0, 0, 0x1E0, 0x100);
        D_801CC710.unk18 = 1;
        D_801CC710.unk74 = 1;
        func_8015C66C(temp_s1_2);
    } else {
        func_8015AAF0(&D_801CC7D0, 0, 0, 0x140, 0xF0);
        func_8015AAF0(&D_801CC7D0 + 0x14, 0x140, 0, 0x140, 0xF0);
    }
    func_8012E0C8(arg0, arg3, 0, arg2 & 0xFF, arg1, 0, 0, var_s5, 0, 0x140, 0xF0, &D_801CC7D0, &sp38);
    func_8015C008(0);
    func_8015EBDC(0);
    func_8015EBDC(0);
    func_8015EBDC(0);
    func_8016BE08(0);
    return D_801C3850;
}
