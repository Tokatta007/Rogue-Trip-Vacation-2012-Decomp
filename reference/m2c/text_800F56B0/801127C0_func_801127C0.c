/* m2c reference for func_801127C0 @ 801127C0 (141 words). Generated; not compiled or validated. */
? func_80112484();                                  /* extern */
? func_801125C4(void *, void *, ?);                 /* extern */
? func_80125518(s16 *, s16, s16, s16);              /* extern */
? func_8016F9A8(s32, s16 *, s16 *);                 /* extern */

void func_801127C0(void *arg0, void *arg1) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 sp18;
    s16 var_a1;
    s16 var_a2;
    s16 var_a2_2;
    s16 var_a3_2;
    s16 var_a3_3;
    s32 var_v1;
    u32 var_a3;
    void *temp_v0;

    func_80112484();
    func_801125C4(arg0, arg1, 0);
    func_801125C4(arg0, arg1, 1);
    var_a3 = 0;
    if (arg0->unk263 != 0) {
        var_a3 = (u32) (arg0->unk25A << arg0->unk263) >> 4;
    }
    if (arg0->unk254 & 0x80) {
        var_a2 = (s16) var_a3;
        var_a3_2 = arg0->unk258 << 5;
    } else {
        var_a3_2 = (s16) var_a3;
        var_a2 = (s32) arg0->unk258 * -0x20;
    }
    func_80125518(&sp10, 0, var_a2, var_a3_2);
    if (arg0->unk254 & 0x10000) {
        var_a1 = sp10;
        var_a2_2 = sp12;
        var_a3_3 = sp14;
    } else {
        temp_v0 = arg0->unk4;
        if (temp_v0 != NULL) {
            sp10 = (u16) sp10 + ((s32) (temp_v0->unk0 << 5) >> 6);
            sp12 = (u16) sp12 + ((s32) (arg0->unk4->unk4 << 5) >> 6);
            sp14 = (u16) sp14 + ((s32) (arg0->unk4->unk8 << 5) >> 6);
        }
        func_8016F9A8(arg0->unk8, &sp10, &sp18);
        var_a1 = sp18;
        var_a2_2 = sp1C;
        var_a3_3 = sp20;
    }
    func_80125518(arg1 + 0x30, var_a1, var_a2_2, var_a3_3);
    var_v1 = 0;
    if ((arg0->unk254 & 8) || (arg0->unk254 & 4)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        arg1->unk38 = (u16) (0x7F - (rand() & 0xFE));
        arg1->unk3A = (u16) (0x7F - (rand() & 0xFE));
        arg1->unk3C = (u16) (((u16) arg0->unk25A >> 3) + (rand() & 0x7F));
        arg1->unk30 = (u16) (arg1->unk30 - arg1->unk38);
        arg1->unk32 = (u16) (arg1->unk32 - arg1->unk3A);
        arg1->unk34 = (u16) (arg1->unk34 - arg1->unk3C);
    }
}
