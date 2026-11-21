/* m2c reference for func_8012EFE4 @ 8012EFE4 (66 words). Generated; not compiled or validated. */
? func_801623CC(s32, ? *);                          /* extern */
? func_8016244C(s32, void *, ?);                    /* extern */
s32 func_8016BDA8(s32);                             /* extern */
s32 func_8016BE60(s32);                             /* extern */
static ? D_801C3354;                                /* unable to generate initializer: unknown type */

void func_8012EFE4(void *arg0) {
    s32 temp_s0;

    if (func_8016BDA8(arg0->unk7D0) != 0) {
        if (arg0->unk8A8 != 0) {
            arg0->unk8A8 = (s32) (arg0->unk8A8 - 1);
            temp_s0 = (func_8016BE60(arg0->unk7D0) != 0) * 0x10;
            func_801623CC(temp_s0, &D_801C3354);
            func_8016244C(temp_s0, arg0 + 0x8AC, 2);
            return;
        }
        if (arg0->unk8A0 > 0) {
            arg0->unk8A0 = (s32) (arg0->unk8A0 - arg0->unk7D4);
            if (arg0->unk8A0 <= 0) {
                arg0->unk8AC = 0;
            }
        }
        if (arg0->unk8A4 > 0) {
            arg0->unk8A4 = (s32) (arg0->unk8A4 - arg0->unk7D4);
            if (arg0->unk8A4 <= 0) {
                arg0->unk8AD = 0;
            }
        }
    }
}
