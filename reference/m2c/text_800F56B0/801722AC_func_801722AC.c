/* m2c reference for func_801722AC @ 801722AC (35 words). Generated; not compiled or validated. */
? func_8017522C(? *, s32, s32);                     /* extern */
extern ? D_801F4A40;

void func_801722AC(s16 arg0, s16 arg1) {
    s32 temp_a2;

    temp_a2 = arg1 * 0x7FFF;
    D_801F4A40.unk0 = 6;
    D_801F4A40.unk8 = (s16) ((arg0 * 0x7FFF) / 127);
    D_801F4A40.unkA = (s16) ((arg1 * 0x7FFF) / 127);
    func_8017522C(&D_801F4A40, MULT_HI(temp_a2, 0x81020409), temp_a2 >> 0x1F);
}
