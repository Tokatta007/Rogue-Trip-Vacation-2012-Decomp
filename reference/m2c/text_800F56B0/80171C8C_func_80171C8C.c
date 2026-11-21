/* m2c reference for func_80171C8C @ 80171C8C (142 words). Generated; not compiled or validated. */
? func_80173D9C(s16, s16);                          /* extern */
extern s32 D_801F4B30;
extern s8 D_801F4B3F;
extern ? D_801F4B58;

s32 func_80171C8C(s16 arg0, s16 arg1, s32 arg2, void *arg3) {
    s32 temp_v1;
    void *temp_v1_2;

    if (*(&D_801F4B58 + arg0) != 1) {
        return -1;
    }
    func_80173D9C(arg0, arg1);
    temp_v1 = (s32) ((arg2 + (D_801F4B3F * 0x10)) << 0x10) >> 0xB;
    arg3->unk0 = (u8) *(temp_v1 + D_801F4B30);
    arg3->unk1 = (u8) (temp_v1 + D_801F4B30)->unk1;
    arg3->unk2 = (u8) (temp_v1 + D_801F4B30)->unk2;
    arg3->unk3 = (u8) (temp_v1 + D_801F4B30)->unk3;
    arg3->unk4 = (u8) (temp_v1 + D_801F4B30)->unk4;
    arg3->unk5 = (u8) (temp_v1 + D_801F4B30)->unk5;
    arg3->unk7 = (u8) (temp_v1 + D_801F4B30)->unk7;
    arg3->unk6 = (u8) (temp_v1 + D_801F4B30)->unk6;
    arg3->unk8 = (u8) (temp_v1 + D_801F4B30)->unk8;
    arg3->unk9 = (u8) (temp_v1 + D_801F4B30)->unk9;
    arg3->unkA = (u8) (temp_v1 + D_801F4B30)->unkA;
    arg3->unkB = (u8) (temp_v1 + D_801F4B30)->unkB;
    arg3->unkC = (u8) (temp_v1 + D_801F4B30)->unkC;
    arg3->unkD = (u8) (temp_v1 + D_801F4B30)->unkD;
    temp_v1_2 = temp_v1 + D_801F4B30;
    arg3->unk10 = (u16) temp_v1_2->unk10;
    arg3->unk12 = (u16) temp_v1_2->unk12;
    arg3->unk14 = (u16) temp_v1_2->unk14;
    arg3->unk16 = (u16) temp_v1_2->unk16;
    return 0;
}
