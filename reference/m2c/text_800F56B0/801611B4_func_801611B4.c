/* m2c reference for func_801611B4 @ 801611B4 (22 words). Generated; not compiled or validated. */
extern void *D_801BC068;
extern ? D_801EC980;

s32 func_801611B4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (D_801EC980.unk0 == 0) {
        D_801EC980.unk8 = arg1;
        D_801EC980.unk4 = arg0;
        D_801EC980.unk0 = 1;
        D_801EC980.unkC = (s32) (D_801BC068->unk4 & 0x80);
        var_v0 = 0;
        D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x400);
    }
    return var_v0;
}
