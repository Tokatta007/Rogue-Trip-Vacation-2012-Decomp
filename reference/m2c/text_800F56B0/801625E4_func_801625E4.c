/* m2c reference for func_801625E4 @ 801625E4 (26 words). Generated; not compiled or validated. */
extern void *D_801BC11C;
extern ? (*D_801EC9EC)();

s32 func_801625E4(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_801BC11C->unk4 & 1) {
        var_v0 = 0;
        if (D_801BC11C->unk0 & 1) {
            if (D_801EC9EC != NULL) {
                D_801EC9EC();
            }
            var_v0 = 1;
        }
    }
    return var_v0;
}
