/* m2c reference for func_8017CEB4 @ 8017CEB4 (44 words). Generated; not compiled or validated. */
s32 func_80155B5C(u8 *);                            /* extern */
? func_8017D038(?);                                 /* extern */
static s32 D_801C3700 = 0;
static s32 D_801C3708 = 0;
static s32 D_801C370C = 0;
static s32 D_801C3710 = 0;

void func_8017CEB4(s32 arg0, void *arg1) {
    u8 sp10;
    u8 sp11;
    u8 sp12;
    s32 temp_s0;

    temp_s0 = arg0 & 0xFF;
    if (temp_s0 == 1) {
        if (!(arg1->unk4 & 0x80)) {
            sp10 = arg1->unk3;
            sp11 = arg1->unk4;
            sp12 = arg1->unk5;
            D_801C3708 = func_80155B5C(&sp10);
        }
        if ((D_801C370C < D_801C3708) || (D_801C3708 < D_801C3710)) {
            func_8017D038(3);
            D_801C3700 = temp_s0;
        }
    } else {
        func_8017D038(3);
    }
}
