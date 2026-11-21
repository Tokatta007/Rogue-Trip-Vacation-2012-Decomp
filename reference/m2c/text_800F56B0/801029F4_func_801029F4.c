/* m2c reference for func_801029F4 @ 801029F4 (80 words). Generated; not compiled or validated. */
? func_80125464(s32, s32);                          /* extern */
s32 func_80133040();                                /* extern */
? func_8015A05C(s32, void *);                       /* extern */
? func_8016408C(s32 *);                             /* extern */
? func_801640EC(void *);                            /* extern */
u16 func_80176C1C(s16, s32, ?);                     /* extern */

void func_801029F4(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s2;
    void *temp_s0;
    void *temp_s3;
    void *temp_v1;

    temp_v1 = arg0 + (arg1 * 4);
    temp_s3 = temp_v1->unk390;
    if ((temp_s3 != NULL) && (temp_v1->unk3A0 != NULL)) {
        var_s2 = temp_v1->unk3A0->unk1F0;
        temp_s1 = arg1 * 8;
        if (func_80133040() != 0) {
            if (arg1 == 0) {
                var_s2 += 0x38;
            } else {
                var_s2 += 0x5B;
            }
        }
        temp_s0 = arg0 + temp_s1;
        sp10 = (s16) temp_s0->unk380 - var_s2;
        func_8016408C(&sp10);
        temp_s2 = temp_s3 + 0x14;
        temp_s0->unk380 = func_80176C1C((s16) temp_s0->unk380, var_s2, 9);
        temp_s0->unk384 = (s16) (arg0 + (arg1 * 4))->unk3A0->unk1F8;
        temp_s0->unk382 = 0;
        func_80125464(temp_s2, arg0 + (temp_s1 + 0x380));
        temp_s3->unk18 = (u16) (temp_s3->unk18 + (arg0 + (arg1 * 2))->unk3E8);
        func_801640EC(temp_s3 + 0x18);
        func_8015A05C(temp_s2, temp_s3 + 0x28);
    }
}
