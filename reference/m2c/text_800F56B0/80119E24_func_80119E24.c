/* m2c reference for func_80119E24 @ 80119E24 (56 words). Generated; not compiled or validated. */
? func_801F5414();                                  /* extern */
? func_801F5440();                                  /* extern */
? func_801F5450();                                  /* extern */
? func_801F5DE0();                                  /* extern */
? func_801F5E8C();                                  /* extern */
? func_801F6420();                                  /* extern */
? func_801F7538();                                  /* extern */
? func_801F7B44();                                  /* extern */
? func_801F7F28();                                  /* extern */
? func_801F8258();                                  /* extern */
static void *D_801C34EC = NULL;

void func_80119E24(void) {
    u32 temp_v1;

    temp_v1 = D_801C34EC->unk12688;
    switch (temp_v1) {
    case 0:
        func_801F5450();
        return;
    case 7:
        func_801F7B44();
        return;
    case 2:
        func_801F7F28();
        return;
    case 5:
        func_801F7538();
        func_801F5440();
        return;
    case 3:
        func_801F5E8C();
        func_801F8258();
        return;
    case 8:
        func_801F6420();
        return;
    case 6:
        func_801F5414();
        return;
    case 9:
        func_801F5DE0();
        /* fallthrough */
    default:
        return;
    }
}
