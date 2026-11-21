/* m2c reference for func_800FE76C @ 800FE76C (55 words). Generated; not compiled or validated. */
s32 func_801250C8(void *, s32, s32);                /* extern */
extern ? D_801C3F08;
static void *D_801C34EC = NULL;

s32 func_800FE76C(void *arg0) {
    s32 temp_a2;
    s32 var_s1;
    u32 *temp_s0;

    var_s1 = 0;
    temp_a2 = (D_801C34EC + 0x10A64)->unk38 + 0x1C;
    temp_s0 = (((s32) arg0->unk7C0 >> 4) * 8) + ((arg0->unk78 * 4) + &D_801C3F08);
    if (D_801C34EC->unk127DE != 0) {
        arg0->unk790 = func_801250C8(arg0 + 0x1E4, temp_a2, temp_a2);
        if (arg0->unk790 < 0x4B0) {
            if (arg0->unk7D != 0) {
                var_s1 = (u32) *temp_s0 < 1U;
                goto block_6;
            }
            *temp_s0 = 1;
            return 1;
        }
    }
    *temp_s0 = 0;
block_6:
    return var_s1;
}
