/* m2c reference for func_800F81F8 @ 800F81F8 (45 words). Generated; not compiled or validated. */
static void *D_801C34EC = NULL;

void func_800F81F8(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk954 == 0) {
        var_v1 = arg0->unk88C >= 0x709;
    }
    if ((var_v1 != 0) && (D_801C34EC->unk7D8 != 0) && (arg0->unk7DC < (D_801C34EC->unk12688 * 0x3E8))) {
        arg0->unk7DC = (s32) (arg0->unk7DC + (((D_801C34EC->unk7D4 * 2) + 1) * 0x3E8));
        arg0->unk954 = 1U;
    }
}
