/* m2c reference for func_8017F5A0 @ 8017F5A0 (34 words). Generated; not compiled or validated. */
? func_8017F7F4();                                  /* extern */
s32 func_8017F868();                                /* extern */
extern ? D_801F52D0;
extern ? D_801F5320;

void func_8017F5A0(void) {
    if (func_8017F868() == 0) {
        func_8017F7F4();
        if (func_8017F868() != 0) {
            D_801F52D0.unk8 = 1;
            D_801F5320.unk0 = (s32) D_801F52D0.unk0;
            D_801F5320.unk4 = (s32) D_801F52D0.unk4;
            D_801F52D0.unk0 = 0;
            D_801F52D0.unk4 = 0;
            if (D_801F52D0.unk40 != NULL) {
                D_801F52D0.unk40(D_801F5320.unk0, D_801F5320.unk4, D_801F52D0.unk40, &D_801F5320);
            }
        }
    }
}
