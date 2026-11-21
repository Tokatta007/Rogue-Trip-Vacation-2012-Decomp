/* m2c reference for func_8015CE18 @ 8015CE18 (21 words). Generated; not compiled or validated. */
s32 func_8015D2D4(?, ?, s32);                       /* extern */
s32 func_8015D440(s32);                             /* extern */

void func_8015CE18(void *arg0, ? arg1, ? arg2, s32 arg3, s32 arg4) {
    arg0->unk3 = 2;
    arg0->unk4 = func_8015D2D4(arg1, arg2, arg3 & 0xFFFF);
    arg0->unk8 = func_8015D440(arg4);
}
