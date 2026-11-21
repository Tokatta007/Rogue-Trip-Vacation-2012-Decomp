/* m2c reference for func_801747DC @ 801747DC (58 words). Generated; not compiled or validated. */
? func_8015EDEC();                                  /* extern */
? func_80160010(s32);                               /* extern */
? func_8016091C(?, s32, ?);                         /* extern */
? func_801748C4(?);                                 /* extern */
extern s32 D_801BC01C;
extern s32 D_801C2648;
extern s32 D_801C264C;
extern s32 D_801C2650;
extern s32 D_801C2664;
extern s32 D_801C2668;
extern s32 D_801C266C;
extern s32 D_801C2670;
extern s32 D_801C2674;
extern ? D_801C267C;
extern s32 D_801C268C;
extern s32 D_801C2690;
extern s16 D_801C26C2;
extern s32 D_801C2AC4;
extern s32 D_801C2AD8;

void func_801747DC(s32 arg0) {
    s16 *var_v0;
    s32 var_v1;

    func_8015EDEC();
    func_80160010(arg0);
    if (arg0 == 0) {
        var_v1 = 0x17;
        var_v0 = &D_801C26C2;
        do {
            *var_v0 = 0xC000;
            var_v1 -= 1;
            var_v0 -= 2;
        } while (var_v1 >= 0);
    }
    func_801748C4(0xC000);
    D_801C266C = 0;
    D_801C2670 = 0;
    D_801C267C.unk0 = 0;
    D_801C267C.unk4 = 0;
    D_801C267C.unk6 = 0;
    D_801C267C.unk8 = 0;
    D_801C267C.unkC = 0;
    D_801C2674 = D_801C2AD8;
    func_8016091C(0xD1, D_801C2AD8, 0);
    D_801C2648 = 0;
    D_801C264C = 0;
    D_801C2650 = 0;
    D_801C2668 = 0;
    D_801BC01C = 0;
    D_801C2664 = 0;
    D_801C2690 = 0;
    D_801C268C = 0;
    D_801C2AC4 = 0;
}
