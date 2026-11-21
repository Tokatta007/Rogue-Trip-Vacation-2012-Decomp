/* m2c reference for func_80158628 @ 80158628 (22 words). Generated; not compiled or validated. */
? func_80155A58(s32, s32);                          /* extern */
s32 func_80155B5C(? *);                             /* extern */
extern s32 D_801E47A8;
extern ? D_801E6BB0;
extern s32 D_801E6BB4;

s32 func_80158628(s32 arg0) {
    if (D_801E47A8 == 0) {
        func_80155A58(func_80155B5C(&D_801E6BB0) + 1, arg0);
        return D_801E6BB4;
    }
    return -1;
}
