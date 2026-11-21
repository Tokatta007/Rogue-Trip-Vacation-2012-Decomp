/* m2c reference for func_80124C4C @ 80124C4C (28 words). Generated; not compiled or validated. */
s32 func_800FF2B0(s32, ?, s32);                     /* extern */
s32 func_800FF594(s32);                             /* extern */
? func_801253C8(?, s32);                            /* extern */

void func_80124C4C(void *arg0, ? arg1, ? arg2) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x15CC;
    func_801253C8(arg2, arg0->unk15CC + (func_800FF2B0(temp_s0, arg1, func_800FF594(temp_s0)) << 5));
}
