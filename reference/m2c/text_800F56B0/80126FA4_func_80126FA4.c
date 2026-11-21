/* m2c reference for func_80126FA4 @ 80126FA4 (26 words). Generated; not compiled or validated. */
? func_80140BBC(void *, s32);                       /* extern */
? func_8014936C(s32);                               /* extern */
? func_80179904(s32);                               /* extern */

void func_80126FA4(s32 arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = arg0 + 0x10A64;
    temp_a0 = temp_s0->unk330;
    if (temp_a0 != 0) {
        func_8014936C(temp_a0);
    }
    func_80140BBC(temp_s0, arg0 + 0x15CC);
    func_80179904(arg0 + 0x10DE4);
}
