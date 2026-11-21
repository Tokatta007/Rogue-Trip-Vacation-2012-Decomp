/* m2c reference for SetGeomOffset @ 801798B0 (6 words). Generated; not compiled or validated. */
void SetGeomOffset(s32 x, s32 y) {
    GTE_OFX = x << 0x10;
    GTE_OFY = y << 0x10;
}
