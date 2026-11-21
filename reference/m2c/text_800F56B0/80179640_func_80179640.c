/* m2c reference for func_80179640 @ 80179640 (31 words). Generated; not compiled or validated. */
extern ? D_801C2E34;
extern ? D_801C3908;

void func_80179640(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 *temp_a0;

    temp_a0 = (arg0 * 4) + &D_801C3908;
    *arg1 = (s32) ((*temp_a0 * 0x60) + &D_801C2E34)->unk18 / 2;
    *arg2 = (s32) ((*temp_a0 * 0x60) + &D_801C2E34)->unk1C / 2;
}
