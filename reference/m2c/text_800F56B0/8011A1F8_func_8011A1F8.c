/* m2c reference for func_8011A1F8 @ 8011A1F8 (44 words). Generated; not compiled or validated. */
? func_8011A308(void *, s32 *, ?);                  /* extern */
extern ? D_80180D30;
static s32 D_801C32B8 = 0;
static s32 D_801C32BC = 0;

void func_8011A1F8(s32 *arg0, ? arg1) {
    if ((*arg0 & 0xF) == 9) {
        func_8011A308((D_801C32BC << 5) + &D_80180D30, arg0, arg1);
        if ((*arg0 & 0xFFF0) == 0x1FC0) {
            D_801C32B8 = D_801C32BC;
        }
        D_801C32BC += 1;
        return;
    }
    if (!(*arg0 & 0xF)) {
        ((D_801C32B8 << 5) + &D_80180D30)->unk14 = arg0;
    }
}
