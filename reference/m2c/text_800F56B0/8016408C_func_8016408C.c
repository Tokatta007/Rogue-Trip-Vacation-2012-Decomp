/* m2c reference for func_8016408C @ 8016408C (24 words). Generated; not compiled or validated. */
void func_8016408C(s32 *arg0) {
loop_2:
    if (*arg0 >= 0x800) {
        *arg0 -= 0x1000;
        goto loop_2;
    }
loop_5:
    if (*arg0 < -0x800) {
        *arg0 += 0x1000;
        goto loop_5;
    }
}
