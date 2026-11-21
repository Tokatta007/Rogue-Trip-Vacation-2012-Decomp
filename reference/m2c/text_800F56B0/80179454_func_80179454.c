/* m2c reference for func_80179454 @ 80179454 (25 words). Generated; not compiled or validated. */
s32 func_801641F8();                                /* extern */
? func_80164274(s32, s32);                          /* extern */
extern ? D_801F5090;
static s32 D_801C369C = 0;

void func_80179454(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    D_801F5090.unk4 = arg0;
    D_801C369C = arg1;
    if (arg0 != NULL) {
        temp_v0 = func_801641F8();
        D_801F5090.unk38 = temp_v0;
        func_80164274(temp_v0, *arg0);
        return;
    }
    D_801F5090.unk38 = 0;
}
