/* m2c reference for func_80177C7C @ 80177C7C (18 words). Generated; not compiled or validated. */
void func_80177C7C(u32 *arg0, s32 *arg1, void *arg2, u32 arg3, s32 arg4) {
    if (arg3 == 0) {
        *arg0 = (u16) arg2->unk10 >> 4;
        *arg1 = arg2->unk12 & 0xFF;
        return;
    }
    *arg0 = arg3;
    *arg1 = arg4;
}
