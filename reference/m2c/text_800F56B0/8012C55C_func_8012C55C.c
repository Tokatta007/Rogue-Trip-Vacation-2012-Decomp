/* m2c reference for func_8012C55C @ 8012C55C (60 words). Generated; not compiled or validated. */
? func_8011BC6C(s32, s32 *, ?, ?, s32, s32);        /* extern */
? func_801253C8(s32 *, s32);                        /* extern */
? func_80149D84(s32, ?, void *, s32 *, s32, s32);   /* extern */
? func_801FA318(s32);                               /* extern */
static s32 D_801C34EC = 0;

void func_8012C55C(void *arg0) {
    s32 sp18;
    s32 var_a0;
    void *temp_a2;

    func_801253C8(&sp18, arg0->unk0 + 0x720);
    if (arg0->unk39 == 0) {
        sp18 = -sp18;
    }
    func_8011BC6C(arg0->unk0->unk738, &sp18, 4, 0x23, 0, 2);
    temp_a2 = arg0->unk0;
    var_a0 = 0;
    if (temp_a2->unk7C0 == 0xF0) {
        var_a0 = temp_a2->unk7B8 == 1;
    }
    if (var_a0 != 0) {
        func_801FA318(D_801C34EC + 0x10FF4);
        arg0->unkC = -0xC;
        return;
    }
    func_80149D84(D_801C34EC + 0x496C, 8, temp_a2, &sp18, 0, (s32) (s8) arg0->unk40);
}
