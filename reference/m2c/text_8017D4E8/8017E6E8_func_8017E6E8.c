/* m2c reference for func_8017E6E8 @ 8017E6E8 (78 words). Generated; not compiled or validated. */
s32 func_8017F54C(s32);                             /* extern */
? func_8017FC18();                                  /* extern */
s32 func_8017FD08();                                /* extern */
s32 func_8017FEA0();                                /* extern */
extern s32 D_801C320C;
extern ? D_801F52D0;

s32 func_8017E6E8(s32 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = *arg0;
    if (temp_v1 != 0xA) {
        if (temp_v1 < 0xB) {
            if (temp_v1 != 0) {
                return 0;
            }
            D_801C320C = 0;
            *arg0 = 0xA;
            goto block_7;
        }
        if (temp_v1 != 0x1E) {
            return 0;
        }
        if (func_8017FEA0() != 0) {
            var_a0 = func_8017FD08();
            if (var_a0 != 0) {
                temp_v0 = D_801C320C + 1;
                D_801C320C = temp_v0;
                if (temp_v0 < 4) {
                    *arg0 = 0xA;
                    goto block_18;
                }
                goto block_17;
            }
            var_a0 = 0;
block_17:
            D_801F52D0.unk4 = func_8017F54C(var_a0);
            return 1;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return 0;
    }
block_7:
    do {

    } while (lseek(D_801F52D0.unk10, D_801F52D0.unk14, 0) != D_801F52D0.unk14);
    func_8017FC18();
    do {

    } while (read(D_801F52D0.unk10, D_801F52D0.unk1C, D_801F52D0.unk18) != 0);
    *arg0 = 0x1E;
block_18:
    return 0;
}
