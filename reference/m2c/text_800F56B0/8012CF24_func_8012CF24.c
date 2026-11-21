/* m2c reference for func_8012CF24 @ 8012CF24 (24 words). Generated; not compiled or validated. */
s32 func_801788E4();                                /* extern */
extern s32 D_801C37C8;
static s32 D_801C32F0 = 0;
static s32 D_801C32F4 = 0;
static s32 D_801C32F8 = 0;

s32 func_8012CF24(void) {
    if (D_801C32F8 != 0) {
        if ((u32) (0x2DC6C0 << D_801C37C8) < (u32) (func_801788E4() - D_801C32F0)) {
            D_801C32F4 = 1;
            return 0;
        }
        D_801C32F4 = 0;
        goto block_4;
    }
block_4:
    return 1;
}
