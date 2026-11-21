/* m2c reference for func_8017C7BC @ 8017C7BC (18 words). Generated; not compiled or validated. */
extern ? D_801F3AA8;
extern s16 D_801F4B4E;

s16 func_8017C7BC(s16 arg0) {
    D_801F4B4E = arg0;
    return (*(&D_801F3AA8 + ((arg0 & 0xFF) * 4)) + (((s32) (arg0 & 0xFF00) >> 8) * 0xB0))->unk58;
}
