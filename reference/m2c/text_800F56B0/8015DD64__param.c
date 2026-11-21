/* m2c reference for _param @ 8015DD64 (12 words). Generated; not compiled or validated. */
extern s32 *D_801BAE1C;
extern s32 *D_801BAE20;

u32 _param(u32 selector) {
    *D_801BAE20 = selector | 0x10000000;
    return *D_801BAE1C & 0xFFFFFF;
}
