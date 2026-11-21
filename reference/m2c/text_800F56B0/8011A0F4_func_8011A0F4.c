/* m2c reference for func_8011A0F4 @ 8011A0F4 (56 words). Generated; not compiled or validated. */
? func_801F54A8();                                  /* extern */
? func_801F550C();                                  /* extern */
? func_801F5E94();                                  /* extern */
? func_801F5F14();                                  /* extern */
? func_801F6514();                                  /* extern */
? func_801F763C();                                  /* extern */
? func_801F7BF8();                                  /* extern */
? func_801F7FD4();                                  /* extern */
? func_801F82E4();                                  /* extern */
static void *D_801C34EC = NULL;

void func_8011A0F4(void) {
    u32 temp_v1;

    temp_v1 = D_801C34EC->unk12688;
    switch (temp_v1) {
    case 0:
        func_801F550C();
        return;
    case 7:
        func_801F7BF8();
        return;
    case 2:
        func_801F7FD4();
        return;
    case 5:
        func_801F763C();
        func_801F550C();
        return;
    case 3:
        func_801F5F14();
        func_801F82E4();
        return;
    case 8:
        func_801F6514();
        return;
    case 6:
        func_801F54A8();
        return;
    case 9:
        func_801F5E94();
        /* fallthrough */
    default:
        return;
    }
}
