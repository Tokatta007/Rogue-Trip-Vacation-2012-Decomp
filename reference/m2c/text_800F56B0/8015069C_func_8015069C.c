/* m2c reference for func_8015069C @ 8015069C (29 words). Generated; not compiled or validated. */
? func_80125518(void *, ?, ?, ?);                   /* extern */

void func_8015069C(s32 arg0, void *arg1, s32 arg2) {
    void *temp_s0;

    temp_s0 = arg0 + (arg2 * 4);
    temp_s0->unk17B8 = arg1;
    temp_s0->unk17B8->unkC = 0;
    temp_s0->unk17B8->unkD = 0;
    temp_s0->unk17B8->unk48 = 2;
    func_80125518(temp_s0->unk17B8 + 0x4C, 0, 0, -0x38);
    func_80125518(temp_s0->unk17B8 + 0x54, 0, 0, -0x18);
}
