/* m2c reference for func_80173E5C @ 80173E5C (32 words). Generated; not compiled or validated. */
? func_80174C8C(s32);                               /* extern */
extern ? D_801F4B58;
extern u16 D_801F4BB0;
extern ? D_801F4BB8;

void func_80173E5C(s16 arg0) {
    if (((u32) (arg0 & 0xFFFF) < 0x10U) && (*(&D_801F4B58 + arg0) == 1)) {
        func_80174C8C(*(&D_801F4BB8 + (arg0 * 4)));
        *(&D_801F4B58 + arg0) = 0;
        D_801F4BB0 -= 1;
    }
}
