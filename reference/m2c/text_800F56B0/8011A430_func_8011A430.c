/* m2c reference for func_8011A430 @ 8011A430 (31 words). Generated; not compiled or validated. */
? func_801253C8(s32, ?);                            /* extern */
s8 func_8012A0B8(s32, ?, void *, s32);              /* extern */
static s32 D_801C34F0 = 0;

void func_8011A430(void *arg0, void *arg1, ? arg2, s16 arg3, s32 arg4, s32 arg5) {
    s32 temp_s1;

    temp_s1 = arg0 + 4;
    arg0->unk1C = arg3;
    arg0->unk1E = (s16) arg4;
    arg0->unk10 = arg1;
    arg0->unk18 = arg5;
    arg0->unk14 = 0;
    func_801253C8(temp_s1, arg2);
    arg0->unk10->unk2 = func_8012A0B8(D_801C34F0, 0x1B, arg0, temp_s1);
}
