/* m2c reference for func_8015BAA8 @ 8015BAA8 (14 words). Generated; not compiled or validated. */
s32 func_8015BAA8(void *arg0, void *arg1) {
    s32 temp_v1;

    temp_v1 = arg0->unk3 + arg1->unk3 + 1;
    if (temp_v1 < 0x11) {
        arg0->unk3 = (u8) temp_v1;
        arg1->unk0 = 0;
        return 0;
    }
    return -1;
}
