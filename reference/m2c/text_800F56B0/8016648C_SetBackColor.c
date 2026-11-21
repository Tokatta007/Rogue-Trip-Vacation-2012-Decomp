/* m2c reference for SetBackColor @ 8016648C (8 words). Generated; not compiled or validated. */
void SetBackColor(s32 r, s32 g, s32 b) {
    GTE_RBK = r * 0x10;
    GTE_GBK = g * 0x10;
    GTE_BBK = b * 0x10;
}
