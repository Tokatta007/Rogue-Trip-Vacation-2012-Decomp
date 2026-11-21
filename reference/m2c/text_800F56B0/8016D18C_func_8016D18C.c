/* m2c reference for func_8016D18C @ 8016D18C (60 words). Generated; not compiled or validated. */
? func_8016D5A0(void *, ?);                         /* extern */
? func_8016D750(s32, u8);                           /* extern */
extern u16 D_801C38DC;

void func_8016D18C(void *arg0) {
    s32 var_v1;

    arg0->unkE = (u16) (arg0->unkE + D_801C38DC);
    if ((u16) arg0->unk6 < (u16) arg0->unkE) {
        if (arg0->unkC == 0) {
            func_8016D5A0((void *)1);
        }
        arg0->unkC = (u8) (arg0->unkC + 1);
        if ((u8) arg0->unk9 < (u8) arg0->unkC) {
            arg0->unkC = (u8) arg0->unk8;
        }
        var_v1 = 0;
        if (arg0->unk1C != 0) {
            var_v1 = arg0->unk5 == arg0->unkC;
        }
        if (var_v1 != 0) {
            func_8016D750(arg0->unk1C, arg0->unk13);
        }
        if (arg0->unkC == 0) {
            func_8016D5A0(arg0, 0);
        }
        arg0->unkE = 0U;
    }
}
