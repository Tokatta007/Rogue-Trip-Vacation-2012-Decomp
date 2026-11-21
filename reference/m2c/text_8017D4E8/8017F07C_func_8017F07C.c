/* m2c reference for func_8017F07C @ 8017F07C (68 words). Generated; not compiled or validated. */
extern ? D_801F52D0;
extern ? D_801F5320;

s32 func_8017F07C(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 var_v0;

    if (D_801F52D0.unk0 == 0) {
        if (D_801F52D0.unk8 == 0) {
            return -1;
        }
        goto block_4;
    }
block_4:
    if (arg0 == 0) {
        if (D_801F52D0.unk8 == 0) {
            do {

            } while (D_801F52D0.unk8 == 0);
        }
        if (arg2 != NULL) {
            *arg2 = D_801F5320.unk4;
        }
        if (arg1 != NULL) {
            *arg1 = D_801F5320.unk0;
        }
        D_801F52D0.unk8 = 0;
        return 1;
    }
    if (D_801F52D0.unk8 == 0) {
        if (arg2 != NULL) {
            *arg2 = D_801F52D0.unk4;
        }
        var_v0 = 0;
        if (arg1 != NULL) {
            *arg1 = D_801F52D0.unk0;
            return 0;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_v0;
    }
    if (arg2 != NULL) {
        *arg2 = D_801F5320.unk4;
    }
    if (arg1 != NULL) {
        *arg1 = D_801F5320.unk0;
    }
    D_801F52D0.unk8 = 0;
    var_v0 = 1;
    return var_v0;
}
