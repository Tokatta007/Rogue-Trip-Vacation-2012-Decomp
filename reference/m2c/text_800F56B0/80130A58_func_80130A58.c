/* m2c reference for func_80130A58 @ 80130A58 (63 words). Generated; not compiled or validated. */
? func_800FE250(?);                                 /* extern */
? func_801011E4(s32, s32, s32, ?);                  /* extern */
? func_8012CCFC(void *, ?);                         /* extern */
? func_801476C0(void *);                            /* extern */
s8 func_8016B6DC(?, s32);                           /* extern */
s32 func_8016BDA8(s32);                             /* extern */
s32 func_8016BE60(s32);                             /* extern */
static s32 D_801C34EC = 0;

void func_80130A58(void *arg0) {
    s32 var_a0;
    void *temp_a0;

    if (arg0->unk82F != 0) {
        arg0->unk82F = 0U;
        func_800FE250(0);
        arg0->unk154 = 0;
        func_801476C0(arg0);
        arg0->unk297 = 0;
        arg0->unk268 = 0;
        var_a0 = 0;
        arg0->unkB8 = func_8016B6DC(1, arg0->unk750);
        if (arg0->unk7B8 == 1) {
            var_a0 = func_8016BDA8(arg0->unk7D0) != 0;
        }
        if (var_a0 != 0) {
            (D_801C34EC + 0x6220 + (func_8016BE60(arg0->unk750) * 4))->unk3D0 = 0xF;
            func_801011E4(D_801C34EC + 0x6220, func_8016BE60(arg0->unk750), arg0->unk894, 0);
        }
        temp_a0 = arg0 + 0x264;
        temp_a0->unk3A = 0;
        func_8012CCFC(temp_a0, 0);
        arg0->unk2A0 = 0;
        arg0->unk890 = 0;
    }
}
