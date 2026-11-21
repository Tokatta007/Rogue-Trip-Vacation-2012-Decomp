/* m2c reference for func_8015367C @ 8015367C (68 words). Generated; not compiled or validated. */
? func_8011BC6C(? *, ?, s32, ?, s32, s32);          /* extern */
? func_80124CF4(? *, void *, ?, ?, s32);            /* extern */
s32 func_8015378C(s32);                             /* extern */

void func_8015367C(s32 arg0, void *arg1) {
    ? sp18;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    void *temp_v0_2;

    var_s1 = 0;
    arg1->unk8 = (s32) (arg1->unk8 - 0x50);
    do {
        func_80124CF4(&sp18, arg1, 0xFF, 0xFF, 0);
        var_s1 += 1;
        temp_s0 = (rand() & 0xF) + 0x19;
        func_8011BC6C(&sp18, 0, temp_s0, 0x18, (rand() & 0x1F) + 0x28, 1);
    } while (var_s1 < 2);
    arg1->unk8 = (s32) (arg1->unk8 + 0x50);
    temp_v0 = func_8015378C(arg0);
    if (temp_v0 < 0x1E) {
        temp_v0_2 = arg0 + (temp_v0 * 0x10);
        temp_v0_2->unk1478 = 1;
        temp_v0_2->unk147A = 0;
        temp_v0_2->unk147C = (s32) arg1->unk0;
        temp_v0_2->unk1480 = (s32) arg1->unk4;
        temp_v0_2->unk1484 = (s32) arg1->unk8;
    }
}
