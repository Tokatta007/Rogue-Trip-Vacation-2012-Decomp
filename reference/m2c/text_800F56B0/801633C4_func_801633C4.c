/* m2c reference for func_801633C4 @ 801633C4 (26 words). Generated; not compiled or validated. */
extern s32 (*D_801EC9E4)();
extern ? func_8016342C;
extern ? func_80163448;

s32 func_801633C4(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (D_801EC9E4() == 0) {
        var_v0 = 1;
        arg0->unk46 = 1;
        arg0->unk14 = &func_8016342C;
        arg0->unk20 = arg1;
        arg0->unk18 = &func_80163448;
    }
    return var_v0;
}
