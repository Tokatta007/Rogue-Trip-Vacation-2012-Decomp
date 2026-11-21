/* m2c reference for func_8012FF6C @ 8012FF6C (139 words). Generated; not compiled or validated. */
? func_80130198(void *, void *, void *, void *, void *); /* extern */
? func_80130218(void *, void *, void *, void *, void *); /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
s32 func_8016BE78(?, s16);                          /* extern */

void func_8012FF6C(void *arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *var_v0_2;

    var_a0 = 0;
    if ((arg0->unk7B4 == 5) || (arg0->unk7B4 == 7)) {
        var_a0 = 1;
    }
    if (var_a0 != 0) {
        var_s1 = 1;
        var_v0 = 1 << 0x18;
        if ((0x7F - (func_8016BE78(1, (s16) arg0->unk750) & 0xFF)) >= -0x78) {
            var_s1 = 0;
            goto block_7;
        }
    } else {
        var_s1 = func_8016B6DC(0x20, arg0->unk750);
block_7:
        arg0->unkA6 = 0;
        var_v0 = var_s1 << 0x18;
    }
    if (var_v0 != 0) {
        func_80130198(arg0, arg0 + 0x884, arg0 + 0x888, arg0 + 0x8B1, arg0 + 0x8B2);
    } else {
        var_v0_2 = arg0 + 0x8B2;
        if (arg0->unk8B3 != 0) {
            arg0->unk8B2 = 0U;
            arg0->unk8B3 = 0U;
            arg0->unkA6 = 0;
            var_v0_2 = arg0 + 0x8B2;
        }
        func_80130218(arg0, arg0 + 0x884, arg0 + 0x888, arg0 + 0x8B1, var_v0_2);
    }
    if (arg0->unk8B2 != 0) {
        var_v1 = 0;
        if ((arg0->unk7F == 0) && ((var_s1 << 0x18) != 0)) {
            var_v1 = arg0->unkC8 < arg0->unk7A4;
        }
        if (var_v1 != 0) {
            arg0->unk7F = 1U;
        }
        var_v1_2 = 0;
        if ((arg0 + 0x264)->unk28 < 5) {
            var_v1_2 = arg0->unk199 == 0;
        }
        if (var_v1_2 != 0) {
            arg0->unkA6 = 0;
            if (arg0->unk20C < 0) {
                arg0->unk8B1 = 0;
                arg0->unk8B2 = 0U;
            }
        } else if ((var_s1 << 0x18) != 0) {
            arg0->unkA6 = 1;
        }
        var_a0_2 = 0;
        if (arg0->unk7F != 0) {
            arg0->unk8B3 = 1U;
            if ((arg0->unk7B4 == 5) || (arg0->unk7B4 == 7)) {
                var_a0_2 = 1;
            }
            if ((var_a0_2 != 0) && (arg0->unk20C < 0)) {
                goto block_32;
            }
        }
    } else {
block_32:
        arg0->unk7F = 0U;
    }
    var_v1_3 = 0;
    if (arg0->unk7F != 0) {
        var_v1_3 = arg0->unk7A4 < arg0->unkC4;
    }
    if (var_v1_3 != 0) {
        arg0->unk7F = 0U;
    }
}
