/* m2c reference for func_801244FC @ 801244FC (34 words). Generated; not compiled or validated. */
s32 func_801244FC(s32 arg0, s32 arg1) {
    void *temp_a2;

    temp_a2 = arg0 + (arg1 * 4);
    if (temp_a2->unkB768 != 1) {
        return arg0 + 0xC8F8 + (temp_a2->unk126EC * 0x958);
    }
    return arg0 + 0xB788 + (temp_a2->unk126EC * 0x8B8);
}
