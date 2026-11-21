/* m2c reference for func_8014A344 @ 8014A344 (173 words). Generated; not compiled or validated. */
s32 func_801233B4(s32, s32);                        /* extern */
s32 func_801244FC(s32, s32);                        /* extern */
? func_801253C8(s32, ?);                            /* extern */
? func_80125464(s32, s32);                          /* extern */
s32 func_8014A5F8(void *, void *);                  /* extern */
? func_8014D1F8(void *, void *);                    /* extern */
? func_8014D260(void *, void *);                    /* extern */
? func_8015A05C(s32, s32);                          /* extern */
? func_80164274(void *, s32);                       /* extern */
? func_8016B504(void *, s32, void *);               /* extern */
? func_8016B574(void *, s32, void *);               /* extern */
? func_80178A1C();                                  /* extern */
static s32 D_801C34EC = 0;
static s32 D_801C35D8 = 0;

s32 func_8014A344(void *arg0, s32 arg1, ? arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_s1;
    s32 var_a0;
    s32 var_s2;
    void *temp_s0;

    var_s2 = 0;
    func_80178A1C();
    temp_s1 = arg0->unk1750;
    if (temp_s1 != -1) {
        func_8016B574(arg0 + 0x1298, temp_s1, arg0 + 0x1750);
        func_8016B504(arg0 + 0x10B8, temp_s1, arg0 + 0x174C);
        temp_s0 = arg0 + ((temp_s1 * 0x68) + 0x10);
        temp_s0->unk20 = arg1;
        if ((u32) (arg5 - 0x10) < 0x110U) {
            temp_s0->unk1C = func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, arg6));
        } else {
            temp_s0->unk1C = 0;
        }
        temp_s0->unk18 = arg4;
        temp_s0->unk2C = -1;
        temp_s0->unk5E = 0;
        temp_s0->unk64 = 0;
        temp_s0->unk50 = (s16) arg5;
        temp_s0->unk52 = (s16) arg6;
        temp_s0->unk0 = 0;
        temp_s0->unk4 = 0;
        temp_s0->unk8 = 0;
        if (arg7 != 0) {
            temp_s0->unk61 = 1U;
        } else {
            temp_s0->unk61 = 0U;
        }
        if (temp_s0->unk18 != 0) {
            func_8014D1F8(arg0, temp_s0);
        }
        var_a0 = 0;
        temp_s0->unk4C = 0;
        temp_s0->unk5C = 0;
        if ((temp_s0->unk20 == 3) || (temp_s0->unk20 == 0xE) || (temp_s0->unk20 == 0xB)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            temp_s0->unk32 = 0;
        } else {
            temp_s0->unk32 = 0x14;
        }
        temp_s0->unk58 = (s16) temp_s1;
        temp_s0->unk5A = (s16) D_801C35D8;
        D_801C35D8 += 1;
        func_801253C8(temp_s0->unk14 + 0x1C, arg2);
        func_80125464(temp_s0->unk14 + 0x14, arg3);
        func_8015A05C(temp_s0->unk14 + 0x14, temp_s0->unk14 + 0x28);
        temp_s0->unk5F = 0;
        temp_s0->unk60 = 0;
        var_s2 = func_8014A5F8(arg0, temp_s0);
        if (var_s2 & 0xFF) {
            func_80164274(temp_s0->unk14, (arg0 + ((temp_s0->unk61 * 4) + (temp_s0->unk20 * 8)))->unk1658);
            if (temp_s0->unk14->unk0 != 0) {
                temp_s0->unk14->unkC = 1;
            }
            func_8014D260(arg0, temp_s0);
            return var_s2 & 0xFF;
        }
        func_8016B574(arg0 + 0x10B8, temp_s1, arg0 + 0x174C);
        func_8016B504(arg0 + 0x1298, temp_s1, arg0 + 0x1750);
        goto block_21;
    }
block_21:
    return var_s2 & 0xFF;
}
