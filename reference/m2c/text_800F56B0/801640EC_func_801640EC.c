/* m2c reference for func_801640EC @ 801640EC (28 words). Generated; not compiled or validated. */
void func_801640EC(u16 *arg0) {
loop_2:
    if ((s16) *arg0 >= 0x800) {
        *arg0 -= 0x1000;
        goto loop_2;
    }
loop_5:
    if ((s16) *arg0 < -0x800) {
        *arg0 += 0x1000;
        goto loop_5;
    }
}
