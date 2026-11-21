/* m2c reference for func_80163510 @ 80163510 (38 words). Generated; not compiled or validated. */
extern s32 (*D_801EC9E4)();
extern ? func_801635A8;
extern ? func_801635FC;

s32 func_80163510(void *arg0, s8 arg1, s8 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (D_801EC9E4() == 0) {
        var_v0 = 1;
        arg0->unk46 = 1;
        arg0->unk14 = &func_801635A8;
        arg0->unk18 = &func_801635FC;
        arg0->unk51 = arg1;
        arg0->unk52 = arg2;
        arg0->unk53 = (s8) ((arg1 & 0xFF) == arg0->unkE4);
    }
    return var_v0;
}
