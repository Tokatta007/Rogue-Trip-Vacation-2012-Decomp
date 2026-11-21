/* m2c reference for func_8016193C @ 8016193C (31 words). Generated; not compiled or validated. */
extern void *D_801BC068;
extern void *D_801BC080;
extern s32 D_801EC980;

s32 func_8016193C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_801BC080->unk0 & D_801BC080->unk4 & 0x100) {
        var_v0 = 1;
        if (D_801EC980 != 0) {
            var_v0 = 1;
            if (D_801BC068->unk4 & 1) {
                D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xFBFF);
                var_v0 = 1;
            }
        }
    }
    return var_v0;
}
