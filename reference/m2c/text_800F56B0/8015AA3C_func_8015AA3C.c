/* m2c reference for func_8015AA3C @ 8015AA3C (45 words). Generated; not compiled or validated. */
s32 func_8015F890();                                /* extern */

void func_8015AA3C(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s32 temp_v0;
    s8 var_v0;

    temp_v0 = func_8015F890();
    arg0->unk0 = arg1;
    arg0->unk2 = arg2;
    arg0->unk4 = arg3;
    arg0->unkC = 0;
    arg0->unkE = 0;
    arg0->unk10 = 0;
    arg0->unk12 = 0;
    arg0->unk19 = 0;
    arg0->unk1A = 0;
    arg0->unk1B = 0;
    arg0->unk16 = 1;
    arg0->unk6 = (s16) arg4;
    if (temp_v0 != 0) {
        var_v0 = arg4 < 0x121;
    } else {
        var_v0 = arg4 < 0x101;
    }
    arg0->unk17 = var_v0;
    arg0->unk8 = arg1;
    arg0->unkA = arg2;
    arg0->unk14 = 0xA;
    arg0->unk18 = 0;
}
