/* m2c reference for func_801339B8 @ 801339B8 (74 words). Generated; not compiled or validated. */
? func_80125518(void **, ?, ?, ?);                  /* extern */
? func_80164168(void **);                           /* extern */
void **func_801641F8(s32, s32);                     /* extern */
extern ? D_801CC590;

void func_801339B8(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a2;
    void ***temp_s1;
    void **temp_v0;
    void **temp_v0_2;

    temp_a0 = arg0 * 8;
    temp_a2 = (arg2 * 4) + temp_a0;
    temp_s1 = temp_a2 + &D_801CC590;
    temp_v0 = *temp_s1;
    if (temp_v0 == NULL) {
        temp_v0_2 = func_801641F8(temp_a0, temp_a2);
        temp_v0_2->unkC = 0;
        temp_v0_2->unkD = 0;
        temp_v0_2->unk0 = arg1;
        temp_v0_2->unk0->unk10 = 0x320;
        func_80164168(temp_v0_2);
        *temp_s1 = temp_v0_2;
        temp_v0_2->unk48 = 7;
        func_80125518(temp_v0_2 + 0x4C, 0, 0, -0x40);
        func_80125518(temp_v0_2 + 0x54, 0, 0, -0x80);
        func_80125518(temp_v0_2 + 0x5C, 0, 0, -0xC0);
        func_80125518(temp_v0_2 + 0x64, 0, 0, -0x100);
        func_80125518(temp_v0_2 + 0x6C, 0, 0, -0x140);
        func_80125518(temp_v0_2 + 0x74, 0, 0, -0x180);
        func_80125518(temp_v0_2 + 0x7C, 0, 0, -0x1C0);
        return;
    }
    *temp_v0 = arg1;
}
