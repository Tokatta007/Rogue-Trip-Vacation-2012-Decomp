/* m2c reference for func_80155A58 @ 80155A58 (65 words). Generated; not compiled or validated. */
void func_80155A58(s32 arg0, void *arg1) {
    arg1->unk2 = (s8) (((((arg0 + 0x96) % 75) / 10) * 0x10) + (((arg0 + 0x96) % 75) % 10));
    arg1->unk1 = (s8) ((((((arg0 + 0x96) / 75) % 60) / 10) * 0x10) + ((((arg0 + 0x96) / 75) % 60) % 10));
    arg1->unk0 = (s8) ((((((arg0 + 0x96) / 75) / 60) / 10) * 0x10) + ((((arg0 + 0x96) / 75) / 60) % 10));
}
