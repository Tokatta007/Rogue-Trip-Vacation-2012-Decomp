/* m2c reference for func_8015DCA4 @ 8015DCA4 (9 words). Generated; not compiled or validated. */
extern u32 *D_801BAE20;
extern ? D_801EB040;

void func_8015DCA4(u32 arg0) {
    *D_801BAE20 = arg0;
    *(&D_801EB040 + (arg0 >> 0x18)) = (s8) arg0;
}
