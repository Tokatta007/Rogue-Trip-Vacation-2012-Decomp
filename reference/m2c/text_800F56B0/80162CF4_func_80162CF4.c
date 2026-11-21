/* m2c reference for func_80162CF4 @ 80162CF4 (36 words). Generated; not compiled or validated. */
s32 func_801638CC();                                /* extern */
extern s32 *D_801BC11C;
extern void *D_801BC120;

s32 func_80162CF4(void) {
    s32 var_v0;

    *D_801BC11C = -0x81;
    if (D_801BC120->unk4 & 0x80) {
loop_1:
        var_v0 = 0;
        if (func_801638CC() == 0) {
            if (!(D_801BC120->unk4 & 0x80)) {
                goto block_3;
            }
            goto loop_1;
        }
    } else {
block_3:
        var_v0 = 1;
        D_801BC120->unkA = (u16) (D_801BC120->unkA | 0x10);
    }
    return var_v0;
}
