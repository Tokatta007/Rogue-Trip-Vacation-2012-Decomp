/* m2c reference for func_80169344 @ 80169344 (22 words). Generated; not compiled or validated. */
void func_80169344(s32 arg0) {
    if ((u32) M2C_ERROR(/* Read from unset register $t8 */) >= 0x28U) {
        *M2C_ERROR(/* Read from unset register $t7 */) = arg0;
        M2C_ERROR(/* Read from unset register $t7 */)->unk4 = (s32) M2C_ERROR(/* Read from unset register $t1 */);
        M2C_ERROR(/* Read from unset register $t7 */)->unk8 = (s32) M2C_ERROR(/* Read from unset register $t2 */);
        M2C_ERROR(/* Read from unset register $t7 */)->unkC = (s32) M2C_ERROR(/* Read from unset register $t3 */);
        M2C_ERROR(/* Read from unset register $t7 */)->unk10 = (s32) M2C_ERROR(/* Read from unset register $t4 */);
        if ((u32) M2C_ERROR(/* Read from unset register $t8 */) >= 0xC8U) {

        }
    } else {
        *M2C_ERROR(/* Read from unset register $t6 */) = arg0;
        M2C_ERROR(/* Read from unset register $t6 */)->unk4 = (s32) M2C_ERROR(/* Read from unset register $t1 */);
        M2C_ERROR(/* Read from unset register $t6 */)->unk8 = (s32) M2C_ERROR(/* Read from unset register $t2 */);
        M2C_ERROR(/* Read from unset register $t6 */)->unkC = (s32) M2C_ERROR(/* Read from unset register $t3 */);
        M2C_ERROR(/* Read from unset register $t6 */)->unk10 = (s32) M2C_ERROR(/* Read from unset register $t4 */);
    }
}
