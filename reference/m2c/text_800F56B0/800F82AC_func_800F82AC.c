/* m2c reference for func_800F82AC @ 800F82AC (48 words). Generated; not compiled or validated. */
static void *D_801C34EC = NULL;

void func_800F82AC(void *arg0) {
    s32 var_v1;

    if ((D_801C34EC->unk7D8 != 0) && ((D_801C34EC + (((s16) arg0->unk8E0 * 0x1C) + 0x12380)) != NULL)) {
loop_2:
        var_v1 = 0;
        if (arg0->unk7DC > 0) {
            var_v1 = arg0->unk10C < arg0->unk110;
        }
        if (var_v1 != 0) {
            arg0->unk7DC = (s32) (arg0->unk7DC - 0x3E8);
            if (arg0->unk7DC < 0) {
                arg0->unk7DC = 0;
            }
            arg0->unk10C = (s32) (arg0->unk10C + ((s32) arg0->unk110 >> 3));
            goto loop_2;
        }
    }
}
