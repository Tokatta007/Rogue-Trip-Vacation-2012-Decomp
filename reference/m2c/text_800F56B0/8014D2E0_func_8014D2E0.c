/* m2c reference for func_8014D2E0 @ 8014D2E0 (42 words). Generated; not compiled or validated. */
? func_8011BC6C(s32, ?, s16, s32, s32);             /* extern */

void func_8014D2E0(void *arg1) {
    ? var_a2;
    s32 temp_v1;

    if ((arg1->unk1C != 0) && (arg1->unk28 == 3)) {
        temp_v1 = arg1->unk20;
        if (temp_v1 != 5) {
            if (temp_v1 < 6) {
                var_a2 = 0x1E;
                if (temp_v1 != 1) {

                } else {
                    var_a2 = 0xA;
                }
            } else {
                var_a2 = 0x1E;
                if (temp_v1 != 7) {

                } else {
                    var_a2 = 0xF;
                }
            }
        } else {
            var_a2 = 0x28;
        }
        func_8011BC6C(arg1->unk14 + 0x1C, var_a2, (s16) arg1->unk4E, 0, 0);
    }
}
