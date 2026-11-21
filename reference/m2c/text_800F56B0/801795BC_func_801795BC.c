/* m2c reference for func_801795BC @ 801795BC (21 words). Generated; not compiled or validated. */
extern ? D_801C38F8;
extern ? D_801C3900;

void func_801795BC(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    s32 temp_a0;
    void *temp_v0;

    temp_a0 = arg0 * 4;
    if (*(temp_a0 + &D_801C38F8) != 0) {
        temp_v0 = *(temp_a0 + &D_801C3900);
        temp_v0->unk29 = arg1;
        temp_v0->unk2A = arg2;
        temp_v0->unk2B = arg3;
        temp_v0->unkA9 = arg1;
        temp_v0->unkAA = arg2;
        temp_v0->unkAB = arg3;
    }
}
