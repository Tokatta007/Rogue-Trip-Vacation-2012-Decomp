/* m2c reference for func_8017F18C @ 8017F18C (91 words). Generated; not compiled or validated. */
? func_8017DEE8();                                  /* extern */
? func_8017DF0C();                                  /* extern */
? func_8017E234(s32);                               /* extern */
? func_8017F07C(?, ?, s32 *);                       /* extern */
? func_8017F628(s32, s8 *);                         /* extern */
extern s32 D_801F52C4;
extern ? D_801F52D0;
static s8 D_800F566C[0x20] = {
    0x41,
    0x63,
    0x63,
    0x65,
    0x73,
    0x73,
    0x20,
    0x44,
    0x65,
    0x6E,
    0x69,
    0x65,
    0x64,
    0x2E,
    0x20,
    0x3A,
    0x20,
    0x73,
    0x79,
    0x73,
    0x74,
    0x65,
    0x6D,
    0x20,
    0x62,
    0x75,
    0x73,
    0x79,
    0xA,
    0,
    0,
    0,
}; /* const */

s32 func_8017F18C(s32 arg0, s8 *arg1, s32 arg2) {
    s8 sp10;
    s32 sp30;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_s0;

    var_s0 = 0;
    if (D_801F52D0.unk0 != 0) {
        printf(D_800F566C);
        return -1;
    }
    func_8017F628(arg0, &sp10);
    strcat(&sp10, arg1);
    D_801F52C4 |= 1 << D_801F52D0.unkC;
    temp_v0 = open(&sp10, 1U);
    if (temp_v0 >= 0) {
        close(temp_v0);
        return 6;
    }
case 3:
    var_a1 = arg2 << 0x10;
loop_6:
    temp_v0_2 = open(&sp10, var_a1 | 0x200);
    if (temp_v0_2 < 0) {
        func_8017DEE8();
        func_8017E234(arg0);
        func_8017F07C(0, 0, &sp30);
        func_8017DF0C();
        if (sp30 != 0) {
            switch (sp30) {                         /* irregular */
            case 2:
                var_s0 += 1;
                var_a1 = arg2 << 0x10;
                if (var_s0 >= 4) {
                    if (sp30 == 0) {
                    case 0:
                        sp30 = 5;
                    }
                default:
                    return sp30;
                }
                goto loop_6;
            }
        } else {
            return 7;
        }
    } else {
        close(temp_v0_2);
        return 0;
    }
}
