/* m2c reference for func_80171ECC @ 80171ECC (216 words). Generated; not compiled or validated. */
? func_801725FC(s8, ? *);                           /* extern */
s32 func_80173090(u16, u16);                        /* extern */
? func_8017327C(s32);                               /* extern */
? func_801738CC(?, s32);                            /* extern */
s32 func_80173D9C(s16, s16);                        /* extern */
extern s32 D_801F3A9C;
extern ? D_801F4340;
extern ? D_801F4342;
extern ? D_801F434E;
extern ? D_801F4350;
extern ? D_801F4352;
extern ? D_801F4354;
extern ? D_801F4356;
extern ? D_801F4358;
extern ? D_801F435D;
extern s32 D_801F4B24;
extern s32 D_801F4B30;
extern ? D_801F4B42;
extern ? D_801F4B4E;

s16 func_80171ECC(s16 arg0, s16 arg1, s16 arg2, s8 arg3, u16 arg4, u16 arg5, s32 arg6, s32 arg7) {
    s16 sp10;
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_a0;
    void *temp_v0;
    void *temp_v1;

    sp10 = arg1;
    if (D_801F3A9C == 1) {
        return -1;
    }
    D_801F3A9C = 1;
    if (((u32) (arg0 & 0xFFFF) < 0x18U) && (func_80173D9C(arg1, arg2) == 0)) {
        D_801F4B4E.unk0 = 0x21;
        D_801F4B4E.unk-14 = (s8) arg4;
        D_801F4B4E.unk-13 = (s8) arg5;
        D_801F4B4E.unk-A = arg3;
        if ((s16) arg6 == (s16) arg7) {
            D_801F4B4E.unk-11 = 0x40;
            D_801F4B4E.unk-12 = (s8) arg6;
        } else {
            if ((s16) arg7 < (s16) arg6) {
                var_v0 = (s32) ((s16) arg7 << 6) / (s16) arg6;
                D_801F4B4E.unk-12 = (s8) arg6;
            } else {
                D_801F4B4E.unk-12 = (s8) arg7;
                var_v0 = 0x7F - ((s32) ((s16) arg6 << 6) / (s16) arg7);
            }
            D_801F4B4E.unk-11 = (s8) var_v0;
        }
        temp_v1 = ((s32) (arg2 << 0x10) >> 0xC) + D_801F4B24;
        D_801F4B42.unk0 = (u8) temp_v1->unk1;
        D_801F4B42.unk1 = (u8) temp_v1->unk4;
        D_801F4B42.unk-A = (u8) temp_v1->unk0;
        temp_v0 = ((s32) (((s8) D_801F4B42.unk2 + (D_801F4B42.unk-3 * 0x10)) << 0x10) >> 0xB) + D_801F4B30;
        D_801F4B42.unk5 = (u8) temp_v0->unk0;
        temp_a0 = temp_v0->unk16;
        D_801F4B42.unkE = temp_a0;
        D_801F4B42.unk3 = (u8) temp_v0->unk2;
        D_801F4B42.unk4 = (u8) temp_v0->unk3;
        D_801F4B42.unk6 = (u8) temp_v0->unk4;
        D_801F4B42.unk7 = (u8) temp_v0->unk5;
        D_801F4B42.unkA = (u8) temp_v0->unk1;
        D_801F4B42.unk8 = (u8) temp_v0->unk6;
        D_801F4B42.unk9 = (u8) temp_v0->unk7;
        if (temp_a0 == 0) {
            goto block_11;
        }
        temp_v0_2 = arg0 * 0x36;
        D_801F4B42.unk10 = arg0;
        *(&D_801F4350 + temp_v0_2) = 0x21;
        *(&D_801F4358 + temp_v0_2) = (u16) sp10;
        *(&D_801F4354 + temp_v0_2) = arg2;
        *(&D_801F4352 + temp_v0_2) = (s16) (s8) (u8) D_801F4B42.unk-3;
        *(&D_801F4340 + temp_v0_2) = D_801F4B42.unkE;
        *(&D_801F434E + temp_v0_2) = arg4;
        *(&D_801F435D + temp_v0_2) = 1;
        *(&D_801F4342 + temp_v0_2) = 0;
        *(&D_801F4356 + temp_v0_2) = (s16) (s8) D_801F4B42.unk2;
        func_801725FC((s8) D_801F4B42.unk2, &D_801F4B4E);
        if ((s16) D_801F4B42.unkE == 0xFF) {
            func_8017327C(arg0 & 0xFF);
        } else {
            func_801738CC(1, func_80173090(arg4, arg5) & 0xFFFF);
        }
        D_801F3A9C = 0;
        return arg0;
    }
block_11:
    D_801F3A9C = 0;
    return -1;
}
