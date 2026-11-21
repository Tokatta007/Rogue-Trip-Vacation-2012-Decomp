/* m2c reference for func_8015B9DC @ 8015B9DC (24 words). Generated; not compiled or validated. */
void func_8015B9DC(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s8 var_a0;

    var_a0 = 5;
    if ((arg1->unk4 == 0) || (arg1->unk6 == 0)) {
        var_a0 = 0;
    }
    arg0->unk4 = 0x01000000;
    arg0->unk8 = 0x80000000;
    arg0->unk3 = var_a0;
    arg0->unk10 = (s32) ((arg3 << 0x10) | (arg2 & 0xFFFF));
    arg0->unkC = (s32) arg1->unk0;
    arg0->unk14 = (s32) arg1->unk4;
}
