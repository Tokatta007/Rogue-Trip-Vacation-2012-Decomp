/* m2c reference for func_80178C44 @ 80178C44 (13 words). Generated; not compiled or validated. */
extern void *D_801C2DF4;
extern ? D_801C2DFC;

s32 func_80178C44(s32 arg0) {
    D_801C2DF4->unk4 = (s32) (D_801C2DF4->unk4 & ~*(&D_801C2DFC + ((arg0 & 0xFFFF) * 4)));
    return 1;
}
