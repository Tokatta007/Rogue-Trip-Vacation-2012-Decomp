/* m2c reference for func_8011D704 @ 8011D704 (106 words). Generated; not compiled or validated. */
? func_8011BC6C(s32 *, s32 *, s32, s32, s32, s32);  /* extern */
void *func_8011D40C(s32 *, ?, ?, ?);                /* extern */
s32 func_801594CC(s32);                             /* extern */
s32 func_8015959C(s32);                             /* extern */

void func_8011D704(s32 *arg0) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_v0;
    s32 var_s0;
    void *temp_v0_2;
    void *temp_v0_3;

    sp1C = 0;
    sp18 = 0;
    sp20 = 0x50;
    func_8011BC6C(&sp18, (s32 *)0x64, 0x4A, 0, 0);
    var_s0 = 0;
    do {
        sp18 = func_801594CC(var_s0) >> 5;
        temp_v0 = func_8015959C(var_s0);
        var_s0 += 0x200;
        sp1C = temp_v0 >> 5;
        sp1C = temp_v0 >> 6;
        sp20 = 0x3C;
        sp18 = sp18 >> 1;
        func_8011BC6C(arg0, &sp18, (rand() & 0x1F) + 0x3C, 0x4A, 0, 0);
    } while (var_s0 < 0x1000);
    func_8011BC6C(arg0, NULL, 0x64, 0xE, 0, 0);
    func_8011BC6C(arg0, NULL, 0x4B, 0xE, 0, 0);
    func_8011BC6C(arg0, NULL, 0x28, 7, 0, 0);
    temp_v0_2 = func_8011D40C(arg0, 0x78, 0, 0x3E);
    temp_v0_2->unk34 = 0x50;
    temp_v0_2->unk35 = 0;
    temp_v0_2->unk36 = -8;
    temp_v0_2->unk37 = 0x14;
    temp_v0_2->unk38 = 0;
    temp_v0_2->unkC = 0;
    temp_v0_2->unk10 = 0;
    temp_v0_2->unk14 = 0xA;
    temp_v0_2->unk33 = 0;
    temp_v0_3 = func_8011D40C(arg0, 0x2A, 0, 0x45);
    temp_v0_3->unk20 = 0;
    temp_v0_3->unk22 = 0;
    temp_v0_3->unk24 = 0x190;
    temp_v0_3->unk3E = 0;
    temp_v0_3->unk34 = 0x5A;
    temp_v0_3->unk35 = 0;
    temp_v0_3->unk36 = 0x14;
    temp_v0_3->unk37 = 0x14;
    temp_v0_3->unk38 = 0;
}
