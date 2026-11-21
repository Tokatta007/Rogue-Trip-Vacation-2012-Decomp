/* m2c reference for func_80159644 @ 80159644 (32 words). Generated; not compiled or validated. */
? func_8015A7AC();                                  /* extern */
extern s32 D_801B5628;

void func_80159644(void) {
    D_801B5628 = saved_reg_ra;
    func_8015A7AC();
    COP0_SR |= 0x40000000;
    GTE_ZSF3 = 0x155;
    GTE_ZSF4 = 0x100;
    GTE_H = 0x3E8;
    GTE_DQA = -0x1062;
    GTE_DQB = 0x01400000;
    GTE_OFX = 0;
    GTE_OFY = 0;
}
