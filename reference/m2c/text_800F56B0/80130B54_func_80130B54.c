/* m2c reference for func_80130B54 @ 80130B54 (48 words). Generated; not compiled or validated. */
s32 func_80144EE8(void *, s32, s32, ?);             /* extern */
s16 func_80178A1C();                                /* extern */

void func_80130B54(void *arg0) {
    if ((arg0->unk73C != 0) && (func_80144EE8(arg0, arg0->unk73C, (func_80178A1C() * 0x448E) / 1000, 0x400) == 0)) {
        arg0->unk73C = 0;
    }
    arg0->unkF0 = (s32) (arg0->unkF0 - arg0->unk7D4);
    if (arg0->unkF0 < 0) {
        arg0->unk8E = 0;
    }
}
