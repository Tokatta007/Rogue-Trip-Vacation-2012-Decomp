/* m2c reference for func_80147784 @ 80147784 (108 words). Generated; not compiled or validated. */
? func_800FE848(void *);                            /* extern */
? func_8011FF4C(void *, s32);                       /* extern */
s32 func_8012468C(void *, void *, void *);          /* extern */
s32 func_801250C8(void *, s32);                     /* extern */
? func_8012EB68(void *, void *, s32, s32, s32, s32); /* extern */
? func_80179414(?, s32);                            /* extern */
? func_801F54C8(void *);                            /* extern */
static void *D_801C34EC = NULL;

void func_80147784(void *arg0) {
    s32 temp_s0;
    s32 var_a0;
    s32 var_s4;
    void *temp_s1;
    void *temp_s2;
    void *temp_s5;

    var_s4 = 0;
    if (arg0->unk7B8 == 1) {
        temp_s5 = arg0 + 0x1E4;
loop_2:
        if (var_s4 < 0xA) {
            if (arg0->unk7C0 == 0xF0) {
                temp_s2 = D_801C34EC;
                temp_s0 = arg0->unk7D0;
                temp_s1 = temp_s2 + 0x10FF4;
                func_801F54C8(temp_s1);
                temp_s1->unk78 = 1;
                temp_s1->unk15C = (void *) ((temp_s0 * 0x8B8) + temp_s2 + 0xB788);
            }
            func_8012EB68(arg0, arg0->unk738, arg0->unk750, arg0->unk7C0, arg0->unk44, arg0->unk7C4);
            func_8011FF4C(D_801C34EC, arg0->unk7D0);
            var_s4 += 1;
            if (func_801250C8(temp_s5, func_8012468C(D_801C34EC, temp_s5, arg0->unk738) + 0x1E4) < 0x4B1) {
                goto loop_2;
            }
        }
        arg0->unk738->unkC = 1;
        var_a0 = 0;
        if (D_801C34EC->unk12728 >= 2) {
            var_a0 = D_801C34EC->unk127E5 == 0;
        }
        if (var_a0 != 0) {
            arg0->unk7DC = 0xBB8;
        } else {
            arg0->unk7DC = 0;
        }
        func_800FE848(arg0);
        func_80179414(0xDC, arg0->unk7CC);
        D_801C34EC->unk127E2 = 0;
    }
}
