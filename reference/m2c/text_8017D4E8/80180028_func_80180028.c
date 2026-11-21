/* m2c reference for func_80180028 @ 80180028 (11 words). Generated; not compiled or validated. */
void func_80180028(void) {
    s32 var_t0;

    M2C_ERROR(/* Read from unset register $v1 */)->unkA = (s16) (M2C_ERROR(/* Read from unset register $v1 */)->unkA | M2C_ERROR(/* Read from unset register $v0 */) | 0x12);
    var_t0 = 0x28;
    do {
        var_t0 -= 1;
    } while (var_t0 != 0);
}
