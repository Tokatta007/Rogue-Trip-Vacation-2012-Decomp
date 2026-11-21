/* m2c reference for func_8017E4BC @ 8017E4BC (76 words). Generated; not compiled or validated. */
? func_8017DEE8();                                  /* extern */
? func_8017DF0C();                                  /* extern */
? func_8017E234(s32);                               /* extern */
? func_8017F07C(?, ?, s32 *);                       /* extern */
? func_8017F628(s32, s8 *);                         /* extern */
? func_8017FC18();                                  /* extern */
extern ? D_801F52D0;
static s8 D_800F55C4[0x28] = {
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
    0x66,
    0x69,
    0x6C,
    0x65,
    0x20,
    0x61,
    0x6C,
    0x72,
    0x65,
    0x61,
    0x64,
    0x79,
    0x20,
    0x6F,
    0x70,
    0x65,
    0x6E,
    0x2E,
    0xA,
    0,
    0,
    0,
    0,
}; /* const */

s32 func_8017E4BC(s32 arg0, s8 *arg1, s32 arg2) {
    s32 sp10;
    s32 temp_v0;
    s32 var_s1;
    s8 *temp_s0;

    var_s1 = 0;
    if (D_801F52D0.unk10 >= 0) {
        printf(D_800F55C4);
        return -1;
    }
    temp_s0 = &D_801F52D0 + 0x20;
    func_8017F628(arg0, temp_s0);
    strcat(temp_s0, arg1);
    D_801F52D0.unkC = arg0;
case 3:
loop_3:
    func_8017FC18();
    temp_v0 = open(temp_s0, arg2 | 0x8000);
    D_801F52D0.unk10 = temp_v0;
    if (temp_v0 < 0) {
        func_8017DEE8();
        func_8017E234(arg0);
        func_8017F07C(0, 0, &sp10);
        func_8017DF0C();
        switch (sp10) {                             /* irregular */
        case 2:
            var_s1 += 1;
            if (var_s1 >= 5) {
                if (sp10 == 0) {
                case 0:
                    sp10 = 5;
                }
            default:
                return sp10;
            }
            goto loop_3;
        }
    } else {
        return 0;
    }
}
