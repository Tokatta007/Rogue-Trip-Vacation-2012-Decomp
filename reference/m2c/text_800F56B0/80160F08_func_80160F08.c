/* m2c reference for func_80160F08 @ 80160F08 (22 words). Generated; not compiled or validated. */
extern void *D_801BC068;
extern ? D_801EC990;

s32 func_80160F08(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (D_801EC990.unk0 == 0) {
        D_801EC990.unk8 = arg1;
        D_801EC990.unk4 = arg0;
        D_801EC990.unk0 = 1;
        D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x800);
        var_v0 = 0;
        D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x20);
    }
    return var_v0;
}
