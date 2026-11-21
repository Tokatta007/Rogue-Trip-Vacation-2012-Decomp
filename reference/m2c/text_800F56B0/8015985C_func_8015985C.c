/* m2c reference for func_8015985C @ 8015985C (48 words). Generated; not compiled or validated. */
extern ? D_801B57CC;

void func_8015985C(void) {
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v1;

    GTE_IR1 = M2C_ERROR(/* Read from unset register $t0 */);
    GTE_IR2 = M2C_ERROR(/* Read from unset register $t1 */);
    GTE_IR3 = M2C_ERROR(/* Read from unset register $t2 */);
    gte_sqr0();
    temp_v0 = GTE_MAC1 + GTE_MAC2 + GTE_MAC3;
    GTE_LZCS = temp_v0;
    temp_v1 = GTE_LZCR & ~1;
    temp_t3 = temp_v1 - 0x18;
    if (temp_t3 >= 0) {
        GTE_IR0 = *(&D_801B57CC + (((temp_v0 << temp_t3) - 0x40) * 2));
        GTE_IR1 = M2C_ERROR(/* Read from unset register $t0 */);
        GTE_IR2 = M2C_ERROR(/* Read from unset register $t1 */);
        GTE_IR3 = M2C_ERROR(/* Read from unset register $t2 */);
        gte_gpf0();
        return;
    }
    GTE_IR0 = *(&D_801B57CC + (((temp_v0 >> (0x18 - temp_v1)) - 0x40) * 2));
    GTE_IR1 = M2C_ERROR(/* Read from unset register $t0 */);
    GTE_IR2 = M2C_ERROR(/* Read from unset register $t1 */);
    GTE_IR3 = M2C_ERROR(/* Read from unset register $t2 */);
    gte_gpf0();
}
