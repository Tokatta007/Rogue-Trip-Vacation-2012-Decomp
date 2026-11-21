/* m2c reference for func_80129E1C @ 80129E1C (155 words). Generated; not compiled or validated. */
? func_800F012C(?, ?);                              /* extern */
? func_800F0154(?, ?, s32 *);                       /* extern */
? func_800F0318(?, ?);                              /* extern */
s32 func_8011BC6C(s32 *, ?, ?, ?, s32, s32);        /* extern */
? func_8011D3A4(s32, ?);                            /* extern */
? func_80124CF4(s32 *, s32, ?, ?, s32);             /* extern */
? func_8016679C(?, ?);                              /* extern */

void func_80129E1C(void *arg0, ? arg2) {
    s32 sp18;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;

    func_800F0318(0x1F800000, 0);
    func_800F012C(0x1F800000, 0xFF9696);
    if ((arg0->unk16 << 0x10) > 0) {
        func_80124CF4(&sp18, arg0->unk18 + 0x1E4, 0x3F, 0, 0x3F);
        func_8011D3A4(func_8011BC6C(&sp18, 0, 0xA, 0x14, 0, 0), -0xF);
        func_800F0154(0x1F800000, 0, &sp18);
        if (rand() & 1) {
            var_v1 = arg0->unk4 + (rand() & 0x7F);
        } else {
            var_v1 = arg0->unk4 - (rand() & 0x7F);
        }
        sp28 = var_v1;
        if (rand() & 1) {
            var_v1_2 = arg0->unk8 + (rand() & 0x7F);
        } else {
            var_v1_2 = arg0->unk8 - (rand() & 0x7F);
        }
        sp2C = var_v1_2;
        sp30 = arg0->unkC + 0x118;
        func_800F0154(0x1F800000, 1, &sp28);
        func_8016679C(arg2, 0x1F800000);
        func_80124CF4(&sp18, arg0->unk18 + 0x1E4, 0x3F, 0, 0x3F);
        func_8011D3A4(func_8011BC6C(&sp18, 0, 0xA, 0x14, 0, 0), -0xF);
        func_800F0154(0x1F800000, 0, &sp18);
        if (rand() & 1) {
            var_v1_3 = arg0->unk4 + (rand() & 0x7F);
        } else {
            var_v1_3 = arg0->unk4 - (rand() & 0x7F);
        }
        sp28 = var_v1_3;
        if (rand() & 1) {
            var_v1_4 = arg0->unk8 + (rand() & 0x7F);
        } else {
            var_v1_4 = arg0->unk8 - (rand() & 0x7F);
        }
        sp2C = var_v1_4;
        sp30 = arg0->unkC + 0x118;
        func_800F0154(0x1F800000, 1, &sp28);
        func_8016679C(arg2, 0x1F800000);
    }
}
