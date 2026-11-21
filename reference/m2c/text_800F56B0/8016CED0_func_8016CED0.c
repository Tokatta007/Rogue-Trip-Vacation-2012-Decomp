/* m2c reference for func_8016CED0 @ 8016CED0 (73 words). Generated; not compiled or validated. */
? func_8016D18C(void *);                            /* extern */
? func_8016D27C(void *);                            /* extern */
? func_8016D378(void *);                            /* extern */
? func_8016D45C(void *);                            /* extern */
extern void *D_801F35B8;
static s32 D_801C3660 = 0;
static s32 D_801C3664 = 1;
static s32 D_801C3670 = 0;
static s32 D_801C3674 = 0;

void func_8016CED0(void) {
    s32 var_s1;
    void **var_s2;
    void *temp_s0;

    if (D_801C3674 != 0) {
        var_s1 = 0;
        if (D_801C3670 > 0) {
            var_s2 = &D_801F35B8;
            do {
                temp_s0 = *var_s2;
                (temp_s0 + D_801C3664)->unk10 = 0;
                if ((temp_s0 + D_801C3660)->unk10 == 0) {
                    switch (temp_s0->unkA) {        /* irregular */
                    case 0:
                        func_8016D18C(temp_s0);
                        break;
                    case 1:
                        func_8016D27C(temp_s0);
                        break;
                    case 2:
                        func_8016D378(temp_s0);
                        break;
                    case 3:
                        func_8016D45C(temp_s0);
                        break;
                    }
                    (temp_s0 + D_801C3660)->unk10 = 1;
                }
                var_s1 += 1;
                var_s2 += 4;
            } while (var_s1 < D_801C3670);
        }
    }
}
