/* m2c reference for func_8013E6C8 @ 8013E6C8 (45 words). Generated; not compiled or validated. */
? func_80112368(s32);                               /* extern */
? func_8011B994(s32);                               /* extern */
? func_8011BC6C(s32, ?, ?, ?, s32, s32);            /* extern */

void func_8013E6C8(void *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk24;
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_8011B994(arg0->unk8);
        break;
    case 2:
        func_80112368(arg0->unk8);
        break;
    }
    if (arg0->unk0 != NULL) {
        func_8011BC6C(arg0->unk0 + 0x1C, 0, 0xA, 0x48, 0, 0);
        arg0->unk0->unkC = 0;
        arg0->unk0->unk0 = 0;
    }
    arg0->unk24 = 3;
}
