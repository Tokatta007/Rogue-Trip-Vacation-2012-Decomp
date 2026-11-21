/* m2c reference for func_8011A2A8 @ 8011A2A8 (24 words). Generated; not compiled or validated. */
? func_8011A430(void *, s32, ?, s16, s32, s32);     /* extern */
extern ? D_80180D30;
static s32 D_801C32BC = 0;

void func_8011A2A8(s32 arg0, ? arg1, s16 arg2, s32 arg3, s32 arg4) {
    func_8011A430((D_801C32BC << 5) + &D_80180D30, arg0, arg1, arg2, arg3 & 0xFFFF, arg4);
    D_801C32BC += 1;
}
