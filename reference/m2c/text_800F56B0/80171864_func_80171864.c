/* m2c reference for func_80171864 @ 80171864 (29 words). Generated; not compiled or validated. */
s16 func_80173EDC(?, ?, ?, ?);                      /* extern */
? func_8017447C(?);                                 /* extern */

s32 func_80171864(s32 arg0, ? arg1, ? arg2, s32 arg3) {
    s32 var_v0;
    void *temp_s1;

    temp_s1 = arg0 + ((s32) (arg3 << 0x10) >> 0xE);
    temp_s1->unk3DC = (s32) func_80173EDC(arg1, arg2, -1, 1);
    var_v0 = 0;
    if (temp_s1->unk3DC >= 0) {
        func_8017447C(1);
        var_v0 = 1;
    }
    return var_v0;
}
