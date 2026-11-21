/* m2c reference for func_8017CF64 @ 8017CF64 (53 words). Generated; not compiled or validated. */
s32 func_80155590(?, ? *, s32);                     /* extern */
? func_80155734(?, ?);                              /* extern */
s32 func_80155B5C(? *);                             /* extern */
s32 func_8015EBDC(?);                               /* extern */
? func_8017CD30(?, ?);                              /* extern */
? func_8017D038(?);                                 /* extern */
static s32 D_801C3708 = 0;
static s32 D_801C370C = 0;
static s32 D_801C3710 = 0;

void func_8017CF64(void) {
    ? sp10;
    ? sp15;
    s32 temp_ret;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_ret = func_8015EBDC(-1);
    temp_v0 = temp_ret;
    if (temp_v0 == ((temp_ret / 15) * 0xF)) {
        temp_v0_2 = func_80155590(1, &sp10, MULT_HI(temp_v0, 0x88888889));
        switch (temp_v0_2) {                        /* irregular */
        case 2:
            if ((D_801C370C < D_801C3708) || (D_801C3708 < D_801C3710)) {
            case 5:
                func_8017D038(6);
                return;
            }
            temp_v0_3 = func_80155B5C(&sp15);
            if (temp_v0_3 > 0) {
                D_801C3708 = temp_v0_3;
            }
            func_8017CD30(0, 0);
            func_80155734(0x11, 0);
            break;
        }
    }
}
