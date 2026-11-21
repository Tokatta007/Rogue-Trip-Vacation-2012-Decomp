/* m2c reference for func_8017ED54 @ 8017ED54 (66 words). Generated; not compiled or validated. */
? func_8017F774(? *);                               /* extern */
extern s32 D_801C3218;
extern ? D_801F52D0;
extern ? func_8017E07C;
extern ? func_8017E8D4;

s32 func_8017ED54(s32 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = *arg0;
    if (temp_v1 != 0xA) {
        if (temp_v1 < 0xB) {
            if (temp_v1 != 0) {
                return 0;
            }
            D_801C3218 = 0;
            func_8017F774(&func_8017E07C);
            *arg0 = 0xA;
            var_v0 = 0;
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return var_v0;
        }
        switch (temp_v1) {                          /* irregular */
        case 20:
            close(D_801F52D0.unk10);
            D_801F52D0.unk10 = -1;
            return 1;
        default:
            return 0;
        }
    } else {
        var_v0 = 1;
        if (D_801F52D0.unk4 == 0) {
            temp_v0 = open(&D_801F52D0 + 0x20, 0x8001U);
            D_801F52D0.unk10 = temp_v0;
            if (temp_v0 < 0) {
                D_801F52D0.unk4 = 5;
                return 1;
            }
        case 11:
            *arg0 = 0x14;
            func_8017F774(&func_8017E8D4);
            return 0;
        }
        return var_v0;
    }
}
