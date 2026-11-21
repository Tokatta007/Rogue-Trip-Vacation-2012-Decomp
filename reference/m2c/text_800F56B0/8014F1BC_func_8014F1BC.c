/* m2c reference for func_8014F1BC @ 8014F1BC (22 words). Generated; not compiled or validated. */
? func_8015A05C(s32, s32);                          /* extern */
? func_801640EC(s32);                               /* extern */

void func_8014F1BC(void *arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    temp_s1 = arg1->unk14;
    temp_s2 = temp_s1 + 0x14;
    temp_s0 = arg1->unk14 + 0x28;
    func_801640EC(temp_s2);
    func_801640EC(temp_s1 + 0x18);
    func_8015A05C(temp_s2, temp_s0);
}
