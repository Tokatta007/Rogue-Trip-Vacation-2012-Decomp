/* m2c reference for func_801744AC @ 801744AC (21 words). Generated; not compiled or validated. */
extern s32 D_801BC028;
extern s32 D_801C2648;
extern s32 D_801C264C;
extern void *D_801C2650;

s32 func_801744AC(s32 arg0, void *arg1) {
    if (arg0 <= 0) {
        return 0;
    }
    arg1->unk0 = 0x40001010;
    D_801C2650 = arg1;
    D_801C264C = 0;
    D_801C2648 = arg0;
    arg1->unk4 = (s32) ((0x10000 << D_801BC028) - 0x1010);
    return arg0;
}
