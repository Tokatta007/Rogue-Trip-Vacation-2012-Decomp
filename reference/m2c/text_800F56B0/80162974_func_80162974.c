/* m2c reference for func_80162974 @ 80162974 (70 words). Generated; not compiled or validated. */
? func_80162D84(u16);                               /* extern */
? func_801638B0(?);                                 /* extern */
extern s32 D_801BC104;
extern s32 *D_801BC11C;
extern void *D_801BC120;
extern ? (*D_801EC9CC)(void *);

s32 func_80162974(void *arg0) {
    s32 var_v0;
    u16 var_a0;

    D_801BC120->unkA = 0x40U;
    D_801BC120->unkA = 0U;
    D_801BC120->unk8 = 0xD;
    D_801BC120->unkE = 0x88;
    func_801638B0(0x91);
    var_a0 = 0x1003;
    if (D_801BC104 != 0) {
        var_a0 = 0x3003;
    }
    D_801BC120->unkA = var_a0;
    if (D_801BC120->unk4 & 0x200) {
        D_801BC120->unkA = (u16) (D_801BC120->unkA | 0x10);
        if (D_801BC120->unk4 & 0x200) {
            D_801BC120->unk0 = 1U;
            func_80162D84(var_a0);
            return 0;
        }
        *D_801BC11C = -0x81;
        goto block_6;
    }
block_6:
    D_801EC9CC(arg0);
    if ((arg0->unk50 == 0) || (var_v0 = 0, (arg0->unk36 == 0))) {
        var_v0 = 1;
        *arg0->unk3C = 0;
    }
    return var_v0;
}
