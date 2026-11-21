/* m2c reference for func_8017046C @ 8017046C (75 words). Generated; not compiled or validated. */
s32 func_8016FDC4(void *, s32 *);                   /* extern */
void *func_80179278(s32);                           /* extern */
void *func_8017929C(s32);                           /* extern */

s32 func_8017046C(void *arg0, s32 arg1, void *arg2) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = func_8017929C(arg1);
    temp_v0 = func_80179278(arg1);
    sp20 = -temp_v0->unk0;
    sp24 = -temp_v0->unk4;
    sp28 = -temp_v0->unk8;
    temp_v1 = func_8016FDC4(arg2, &sp20) >> 1;
    temp_v0_2 = (s32) (((arg2->unk0 - sp20) * (s16) temp_s1->unk0) + ((arg2->unk4 - sp24) * (s16) temp_s1->unk2) + ((arg2->unk8 - sp28) * (s16) temp_s1->unk4)) >> 0xD;
    if (arg1 == 0) {
        arg0->unk484 = temp_v0_2;
    } else {
        arg0->unk488 = temp_v0_2;
    }
    return temp_v1;
}
