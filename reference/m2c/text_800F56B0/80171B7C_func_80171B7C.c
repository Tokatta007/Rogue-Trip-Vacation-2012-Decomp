/* m2c reference for func_80171B7C @ 80171B7C (65 words). Generated; not compiled or validated. */
? func_80173D9C(s16, s16);                          /* extern */
extern s32 D_801F4B24;
extern ? D_801F4B58;

s32 func_80171B7C(s16 arg0, s16 arg1, void *arg2) {
    s32 temp_s0;

    if (*(&D_801F4B58 + arg0) != 1) {
        return -1;
    }
    func_80173D9C(arg0, arg1);
    temp_s0 = arg1 * 0x10;
    arg2->unk0 = (u8) *(temp_s0 + D_801F4B24);
    arg2->unk1 = (u8) (temp_s0 + D_801F4B24)->unk1;
    arg2->unk2 = (u8) (temp_s0 + D_801F4B24)->unk2;
    arg2->unk3 = (u8) (temp_s0 + D_801F4B24)->unk3;
    arg2->unk4 = (u8) (temp_s0 + D_801F4B24)->unk4;
    arg2->unk6 = (u16) (temp_s0 + D_801F4B24)->unk6;
    return 0;
}
