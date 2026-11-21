/* m2c reference for func_80155B5C @ 80155B5C (32 words). Generated; not compiled or validated. */
s32 func_80155B5C(void *arg0) {
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v1;

    temp_v1 = arg0->unk0;
    temp_a2 = arg0->unk1;
    temp_a1 = arg0->unk2;
    return (((((((temp_v1 >> 4) * 0xA) + (temp_v1 & 0xF)) * 0x3C) + (((temp_a2 >> 4) * 0xA) + (temp_a2 & 0xF))) * 0x4B) + (((temp_a1 >> 4) * 0xA) + (temp_a1 & 0xF))) - 0x96;
}
