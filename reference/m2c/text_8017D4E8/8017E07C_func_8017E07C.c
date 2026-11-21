/* m2c reference for func_8017E07C @ 8017E07C (110 words). Generated; not compiled or validated. */
s32 func_8017F54C(s32, s32 *, s32 *);               /* extern */
? func_8017FC18();                                  /* extern */
s32 func_8017FD08();                                /* extern */
s32 func_8017FEA0();                                /* extern */
extern s32 D_801F52B0;
extern s32 D_801F52B4;
extern s32 D_801F52C4;
extern ? D_801F52D0;
extern s32 D_801F52DC;

s32 func_8017E07C(s32 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        switch (temp_v1) {                          /* irregular */
        case 11:
            if (func_8017FEA0() != 0) {
                temp_v0 = func_8017FD08();
                D_801F52B4 = temp_v0;
                if (temp_v0 < 3) {
                    if (temp_v0 <= 0) {
                        if (temp_v0 != 0) {
                            goto block_21;
                        }
                        if (!(D_801F52C4 & (1 << D_801F52D0.unkC))) {
                            D_801F52B4 = 4;
                        }
                        var_a0 = D_801F52B4;
                        goto block_22;
                    }
                    temp_v0_2 = D_801F52B0 + 1;
                    D_801F52B0 = temp_v0_2;
                    if (temp_v0_2 < 5) {
                        *arg0 = 0xA;
                        goto block_23;
                    }
                    goto block_20;
                }
                if (temp_v0 == 4) {
                    D_801F52D0.unk4 = func_8017F54C(4);
                    return 1;
                }
block_20:
block_21:
                var_a0 = D_801F52B4;
                D_801F52C4 &= ~(1 << D_801F52D0.unkC);
block_22:
                D_801F52D0.unk4 = func_8017F54C(var_a0, &D_801F52C4, &D_801F52B4);
                return 1;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return 0;
        default:
            return 0;
        }
    } else {
        D_801F52B4 = 0;
        D_801F52B0 = 0;
        *arg0 = 0xA;
    case 10:
        func_8017FC18();
        _card_info(D_801F52DC);
        *arg0 += 1;
block_23:
        return 0;
    }
}
