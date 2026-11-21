/* m2c reference for func_8017E298 @ 8017E298 (137 words). Generated; not compiled or validated. */
s32 func_8017F54C(s32);                             /* extern */
? func_8017F6D4(s32);                               /* extern */
? func_8017F774(? *);                               /* extern */
? func_8017FC18(s32, s32 *);                        /* extern */
s32 func_8017FD08();                                /* extern */
? func_8017FDD4();                                  /* extern */
s32 func_8017FEA0();                                /* extern */
s32 func_8017FEDC();                                /* extern */
extern s32 D_801F52B8;
extern s32 D_801F52BC;
extern s32 D_801F52C0;
extern s32 D_801F52C4;
extern ? D_801F52D0;
extern s32 D_801F52DC;
extern ? func_8017E07C;

s32 func_8017E298(u32 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_v0;
    u32 temp_v1;

    temp_v1 = *arg0;
    switch (temp_v1) {
    case 0:
        D_801F52C0 = 0;
        D_801F52BC = 0;
        D_801F52B8 = 0;
        func_8017F774(&func_8017E07C);
        *arg0 = 0xA;
    default:
block_24:
        var_v0 = 0;
        return var_v0;
    case 10:
        if (D_801F52D0.unk4 != 0) {
            var_v0 = 1;
            if (D_801F52D0.unk4 == 3) {
                D_801F52C0 = 1;
                D_801F52C4 |= 1 << D_801F52D0.unkC;
                func_8017FC18(D_801F52D0.unkC, &D_801F52C4);
                func_8017F6D4(D_801F52D0.unkC);
                *arg0 = 0x15;
                goto block_24;
            }
        } else {
block_19:
            *arg0 = 0x1E;
            goto block_24;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
        return var_v0;
    case 21:
        var_v0 = 0;
        if (func_8017FEDC() != 0) {
            func_8017FDD4();
            *arg0 = 0x1E;
        case 30:
            func_8017FC18();
            _card_load(D_801F52DC);
            *arg0 += 1;
            goto block_24;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
        return var_v0;
    case 31:
        var_v0 = 0;
        if (func_8017FEA0() != 0) {
            temp_v0 = func_8017FD08();
            D_801F52BC = temp_v0;
            if (temp_v0 < 3) {
                if (temp_v0 <= 0) {
                    var_a0 = 0;
                    if (temp_v0 != 0) {
                        goto block_20;
                    }
                    if (D_801F52C0 != 0) {
                        var_a0 = 3;
                    }
                    goto block_22;
                }
                goto block_18;
            }
            if (temp_v0 != 4) {
                goto block_20;
            }
block_18:
            temp_v0_2 = D_801F52B8 + 1;
            D_801F52B8 = temp_v0_2;
            if (temp_v0_2 < 5) {
                goto block_19;
            }
block_20:
            var_a0 = D_801F52BC;
            if (var_a0 == 4) {
block_22:
                D_801F52D0.unk4 = var_a0;
                return 1;
            }
            D_801F52D0.unk4 = func_8017F54C(var_a0);
            return 1;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
        return var_v0;
    }
}
