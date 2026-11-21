/* m2c reference for func_80147934 @ 80147934 (47 words). Generated; not compiled or validated. */
? func_801446AC(void *, s16);                       /* extern */
static void *D_801C34EC = NULL;

void func_80147934(void *arg0) {
    s16 var_v1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    arg0->unk15C = 0x64U;
    temp_v1 = arg0->unk7B8;
    if (temp_v1 == 2) {
        temp_v0 = D_801C34EC->unk7D4;
        if (temp_v0 != 0) {
            if (temp_v0 != temp_v1) {

            } else {
                var_v1 = (s16) arg0->unk15C;
                var_v0 = var_v1 * 4;
                goto block_6;
            }
        } else {
            var_v1 = (s16) arg0->unk15C;
            var_v0 = var_v1 * 2;
block_6:
            arg0->unk15C = (u16) ((s32) (var_v0 + var_v1) >> 2);
        }
    }
    func_801446AC(arg0, (s16) arg0->unk15C);
    arg0->unk15E = (u16) arg0->unk15C;
}
