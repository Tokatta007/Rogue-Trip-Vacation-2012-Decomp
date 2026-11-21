/* m2c reference for func_80130984 @ 80130984 (53 words). Generated; not compiled or validated. */
? func_801011E4(s32, s32, ?, s32);                  /* extern */
? func_8012EEE8(?, ?, ?);                           /* extern */
? func_80147764(void *, ?);                         /* extern */
s32 func_8016BDA8(s32);                             /* extern */
s32 func_8016BE60(s32);                             /* extern */
static s32 D_801C34EC = 0;

void func_80130984(void *arg0, void *arg1) {
    s32 var_a0;

    arg0->unk82F = 1;
    func_8012EEE8(0, 0, 0);
    func_80147764(arg0, 0x708);
    var_a0 = 0;
    if (arg0->unk7B8 == 1) {
        var_a0 = func_8016BDA8(arg0->unk7D0) != 0;
    }
    if (var_a0 != 0) {
        arg0->unk894 = (s32) *(D_801C34EC + 0x6220 + (func_8016BE60(arg0->unk750) * 4));
        func_801011E4(D_801C34EC + 0x6220, func_8016BE60(arg0->unk750), 5, arg1->unk14);
    }
    arg0->unk890 = arg1;
}
