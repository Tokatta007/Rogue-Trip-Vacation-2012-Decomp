/* m2c reference for func_801796BC @ 801796BC (44 words). Generated; not compiled or validated. */
extern ? D_801C2E34;
extern ? D_801C3908;

void func_801796BC(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 *temp_a0;

    temp_a0 = (arg0 * 4) + &D_801C3908;
    *arg1 = ((*temp_a0 * 0x60) + &D_801C2E34)->unk20;
    *arg2 = ((*temp_a0 * 0x60) + &D_801C2E34)->unk24;
    *arg3 = ((*temp_a0 * 0x60) + &D_801C2E34)->unk18;
    *arg4 = ((*temp_a0 * 0x60) + &D_801C2E34)->unk1C;
}
