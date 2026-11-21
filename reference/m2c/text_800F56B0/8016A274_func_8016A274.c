/* m2c reference for func_8016A274 @ 8016A274 (71 words). Generated; not compiled or validated. */
u8 *func_8016415C();                                /* extern */
? func_8016A5A0(void *, u8 *);                      /* extern */
? func_8016AE78(s32, ?, void *);                    /* extern */
s32 func_8016B374(s32, s32, s32);                   /* extern */
u8 *func_801793C0(?);                               /* extern */
extern u8 D_801BC204;
extern u8 *D_801C3884;
extern u8 D_801F3188;
extern u8 D_801F31C8;
static s32 D_801C364C = 3;

void func_8016A274(s32 arg0, ? arg1, void *arg2, s32 arg3, u8 *arg4) {
    *(u8 **)0x1F800000 = D_801C3884;
    *(u8 **)0x1F800004 = &D_801F3188;
    *(u8 **)0x1F800008 = arg4;
    *(u8 **)0x1F800014 = D_801C364C;
    *(u8 **)0x1F800018 = &D_801F31C8;
    *(u8 **)0x1F80001C = func_801793C0(0);
    *(u8 **)0x1F800020 = func_8016415C();
    *(u8 **)0x1F800044 = arg3 * arg3;
    if (func_8016B374((s32) arg2->unk0 >> D_801C364C, (s32) arg2->unk4 >> D_801C364C, (s32) arg2->unk8 >> D_801C364C) != 0) {
        *(u8 **)0x1F800010 = (u8 *)1;
    } else {
        *(u8 **)0x1F800010 = NULL;
    }
    func_8016AE78(arg0, arg1, arg2);
    if ((*arg4 == 0) && (D_801BC204 == 1)) {
        func_8016A5A0(arg2, arg4);
    }
}
