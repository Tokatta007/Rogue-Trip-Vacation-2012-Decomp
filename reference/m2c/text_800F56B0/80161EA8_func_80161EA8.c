/* m2c reference for func_80161EA8 @ 80161EA8 (58 words). Generated; not compiled or validated. */
s32 func_80160F08(s32, s32);                        /* extern */
s32 func_80160F60(s32, s32);                        /* extern */
s32 func_801611B4(s32, s32);                        /* extern */
s32 func_8016120C(s32, s32);                        /* extern */

s32 func_80161EA8(void *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    arg0->unk18 = 0;
    if (arg1 == 1) {
        if (arg0->unk0 & 0x8000) {
            if (func_80160F08(arg0->unk8, arg0->unkC) != 0) {
                arg0->unk18 = 0x10;
                goto block_14;
            }
            goto block_8;
        }
        var_v1 = func_80160F60(arg0->unk8, arg0->unkC);
        goto block_10;
    }
    var_v0 = 0x16;
    if (arg1 == 2) {
        if (arg0->unk0 & 0x8000) {
            var_v0 = 0x10;
            if (func_801611B4(arg0->unk8, arg0->unkC) == 0) {
block_8:
                return 0;
            }
            goto block_13;
        }
        var_v1 = func_8016120C(arg0->unk8, arg0->unkC);
block_10:
        if (var_v1 < 0) {
            arg0->unk18 = 5;
        }
        return var_v1;
    }
block_13:
    arg0->unk18 = var_v0;
block_14:
    return -1;
}
