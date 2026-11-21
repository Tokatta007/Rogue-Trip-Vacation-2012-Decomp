/* m2c reference for func_8016D0A8 @ 8016D0A8 (57 words). Generated; not compiled or validated. */
? func_8016D18C();                                  /* extern */
? func_8016D27C(void *);                            /* extern */
? func_8016D378(void *);                            /* extern */
? func_8016D45C(void *);                            /* extern */
static s32 D_801C3660 = 0;
static s32 D_801C3664 = 1;

void func_8016D0A8(void *arg0) {
    if (arg0->unk12 == 0) {
        (arg0 + D_801C3664)->unk10 = 0;
        if ((arg0 + D_801C3660)->unk10 == 0) {
            switch (arg0->unkA) {                   /* irregular */
            case 0:
                func_8016D18C();
                break;
            case 1:
                func_8016D27C(arg0);
                break;
            case 2:
                func_8016D378(arg0);
                break;
            case 3:
                func_8016D45C(arg0);
                break;
            }
            (arg0 + D_801C3660)->unk10 = 1;
        }
    }
}
