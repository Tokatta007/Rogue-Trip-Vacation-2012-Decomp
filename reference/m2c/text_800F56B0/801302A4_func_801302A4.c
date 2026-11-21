/* m2c reference for func_801302A4 @ 801302A4 (99 words). Generated; not compiled or validated. */
? func_80130198(void *, void *, void *, void *, void *); /* extern */
? func_80130218(void *, void *, void *, void *, void *); /* extern */
? func_8013BDCC(s32, ?, ?);                         /* extern */
s8 func_8016B6DC(?, s32);                           /* extern */
s32 func_8016BE78(?, s16);                          /* extern */
extern s32 D_801C31D4;
static s32 D_801C34F4 = 0;

s8 func_801302A4(void *arg0) {
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    s8 var_s1;
    s8 var_s1_2;
    void *var_v0_2;

    var_a0 = 0;
    if ((arg0->unk7B4 == 5) || (arg0->unk7B4 == 7)) {
        var_a0 = 1;
    }
    if (var_a0 != 0) {
        var_s1_2 = (0x7F - (func_8016BE78(1, (s16) arg0->unk750) & 0xFF)) >= 0x65;
        if (arg0->unkA6 != 0) {
            var_s1_2 = 1;
            arg0->unk8AF = 1U;
            var_v0 = 1 << 0x18;
        } else {
            goto block_7;
        }
    } else {
        var_s1_2 = func_8016B6DC(0x80, arg0->unk750);
block_7:
        var_v0 = var_s1_2 << 0x18;
    }
    if (var_v0 != 0) {
        func_80130198(arg0, arg0 + 0x87C, arg0 + 0x880, arg0 + 0x8AE, arg0 + 0x8AF);
    } else {
        var_v0_2 = arg0 + 0x8AF;
        if (arg0->unk8B0 != 0) {
            arg0->unk8AF = 0U;
            arg0->unk8B0 = 0U;
            var_v0_2 = arg0 + 0x8AF;
        }
        func_80130218(arg0, arg0 + 0x87C, arg0 + 0x880, arg0 + 0x8AE, var_v0_2);
    }
    if (arg0->unk8AF != 0) {
        var_s1 = var_s1_2;
        if (var_s1 != 0) {
            arg0->unk8B0 = 1U;
            var_v1 = 0;
            if ((arg0 + 0x264)->unk28 < 5) {
                var_v1 = arg0->unk199 == 0;
            }
            if (var_v1 != 0) {
                D_801C31D4 = 7;
                func_8013BDCC(D_801C34F4, 0, 0);
                arg0->unk8AE = 0;
                arg0->unk8AF = 0U;
                return var_s1;
            }
            goto block_20;
        }
        goto block_20;
    }
    var_s1 = 0;
block_20:
    return var_s1;
}
