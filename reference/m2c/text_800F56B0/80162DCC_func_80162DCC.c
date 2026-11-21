/* m2c reference for func_80162DCC @ 80162DCC (33 words). Generated; not compiled or validated. */
? func_80163688();                                  /* extern */
? func_8016369C(u8);                                /* extern */
? func_801636DC(u8);                                /* extern */

void func_80162DCC(void *arg0) {
    u8 temp_v1;

    temp_v1 = arg0->unk46;
    switch (temp_v1) {                              /* irregular */
    case 2:
        func_80163688();
        return;
    case 3:
        func_8016369C(arg0->unkE4);
        return;
    case 4:
        func_801636DC(arg0->unk47);
        return;
    }
}
