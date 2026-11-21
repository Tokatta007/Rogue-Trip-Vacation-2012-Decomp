/* m2c reference for func_8012EB08 @ 8012EB08 (24 words). Generated; not compiled or validated. */
s32 func_8013A06C();                                /* extern */
extern ? D_8018462C;

void func_8012EB08(s32 arg0) {
    void *temp_v1;

    if (func_8013A06C() == 2) {
        temp_v1 = ((arg0 * 0x18) + &D_8018462C)->unk8;
        temp_v1->unk3 = (u8) ((temp_v1->unk3 & 0x80) | 1);
    }
}
