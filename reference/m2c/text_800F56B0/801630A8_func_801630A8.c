/* m2c reference for func_801630A8 @ 801630A8 (42 words). Generated; not compiled or validated. */
? func_8016369C(u8);                                /* extern */
? func_801636BC(u8);                                /* extern */
? func_801636DC(u8);                                /* extern */
? func_801636FC();                                  /* extern */

void func_801630A8(void *arg0) {
    u8 temp_v1;

    temp_v1 = arg0->unk46;
    switch (temp_v1) {                              /* irregular */
    case 2:
        func_8016369C(arg0->unk47);
        return;
    case 3:
        func_801636BC(arg0->unk47);
        return;
    case 4:
        if (arg0->unk48 == 0) {
            func_801636DC(arg0->unk47);
            return;
        }
        func_801636FC();
        return;
    }
}
