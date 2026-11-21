/* m2c reference for func_8017F2F8 @ 8017F2F8 (71 words). Generated; not compiled or validated. */
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

s32 func_8017F2F8(s32 arg0, s8 *arg1) {
    s8 sp10;
    s32 sp30;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (D_801F52D0.unk0 != 0) {
        printf(D_800F566C);
        return -1;
    }
    func_8017F628(arg0, &sp10);
    strcat(&sp10, arg1);
    D_801F52C4 |= 1 << D_801F52D0.unkC;
case 3:
loop_3:
    temp_v0 = erase(&sp10);
    sp30 = temp_v0;
    if (temp_v0 == 0) {
        func_8017DEE8();
        func_8017E234(arg0);
        func_8017F07C(0, 0, &sp30);
        func_8017DF0C();
        switch (sp30) {                             /* irregular */
        case 2:
            var_s0 += 1;
            if (var_s0 >= 4) {
                if (sp30 == 0) {
                case 0:
                    sp30 = 5;
                }
            default:
                return sp30;
            }
            goto loop_3;
        }
    } else {
        return 0;
    }
}
