/* m2c reference for func_8016DC08 @ 8016DC08 (22 words). Generated; not compiled or validated. */
void func_8016DC08(s32 arg0) {
    if ((u32) M2C_ERROR(/* Read from unset register $t7 */) >= 0x2CU) {
        *M2C_ERROR(/* Read from unset register $t9 */) = arg0;
        M2C_ERROR(/* Read from unset register $t9 */)->unk4 = (s32) M2C_ERROR(/* Read from unset register $t2 */);
        M2C_ERROR(/* Read from unset register $t9 */)->unk8 = (s32) M2C_ERROR(/* Read from unset register $t3 */);
        M2C_ERROR(/* Read from unset register $t9 */)->unkC = (s32) M2C_ERROR(/* Read from unset register $t4 */);
        M2C_ERROR(/* Read from unset register $t9 */)->unk10 = (s32) M2C_ERROR(/* Read from unset register $t5 */);
        if ((u32) M2C_ERROR(/* Read from unset register $t7 */) >= 0xC8U) {

        }
    } else {
        *M2C_ERROR(/* Read from unset register $t8 */) = arg0;
        M2C_ERROR(/* Read from unset register $t8 */)->unk4 = (s32) M2C_ERROR(/* Read from unset register $t2 */);
        M2C_ERROR(/* Read from unset register $t8 */)->unk8 = (s32) M2C_ERROR(/* Read from unset register $t3 */);
        M2C_ERROR(/* Read from unset register $t8 */)->unkC = (s32) M2C_ERROR(/* Read from unset register $t4 */);
        M2C_ERROR(/* Read from unset register $t8 */)->unk10 = (s32) M2C_ERROR(/* Read from unset register $t5 */);
    }
}
