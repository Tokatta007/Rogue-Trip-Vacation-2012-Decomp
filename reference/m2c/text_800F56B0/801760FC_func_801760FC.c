/* m2c reference for func_801760FC @ 801760FC (41 words). Generated; not compiled or validated. */
extern s32 D_801BC034;
extern s32 D_801C2660;
extern s32 D_801C2668;

s32 func_801760FC(s32 arg0) {
    s32 var_v0;

    if ((D_801C2668 == 1) || (D_801BC034 == 1)) {
        return 1;
    }
    var_v0 = TestEvent(D_801C2660);
    if (arg0 == 1) {
        var_v0 = 1;
        if (var_v0 == 0) {
            do {
                var_v0 = 1;
            } while (TestEvent(D_801C2660) == 0);
        }
        goto block_8;
    }
    if (var_v0 == 1) {
block_8:
        D_801BC034 = var_v0;
    }
    return var_v0;
}
