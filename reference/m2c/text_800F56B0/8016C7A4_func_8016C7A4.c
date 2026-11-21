/* m2c reference for func_8016C7A4 @ 8016C7A4 (50 words). Generated; not compiled or validated. */
? func_80162DCC();                                  /* extern */
? func_80163668(?);                                 /* extern */

void func_8016C7A4(void *arg0) {
    ? (*temp_v0)();
    u8 temp_v1;

    if ((*arg0->unk3C != 0xF3) || (arg0->unkE8 != 0)) {
        temp_v1 = arg0->unk46;
        switch (temp_v1) {                          /* irregular */
        case 0x1:
            func_80163668(1);
            return;
        default:
            temp_v0 = arg0->unk14;
            if (temp_v0 != NULL) {
                temp_v0();
                return;
            }
            func_80162DCC();
        case 0xFF:
        case 0x0:
            return;
        }
    } else {
    case 0xFE:
        func_80163668(0);
    }
}
