/* m2c reference for func_800F1590 @ 800F1590 (61 words). Generated; not compiled or validated. */
void func_800F1590(void) {
    s32 temp_s0;
    s32 var_t1;
    void *temp_s3;
    void *var_v0;
    void *var_v1;

    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */)->unk94;
    switch (temp_s0) {                              /* irregular */
    case 3:
        var_v0 = M2C_ERROR(/* Read from unset register $t3 */);
        var_v1 = M2C_ERROR(/* Read from unset register $t9 */);
        var_t1 = 3;
        if ((M2C_ERROR(/* Read from unset register $t5 */) == 1) && (M2C_ERROR(/* Read from unset register $t6 */) < 3)) {
            var_t1 = M2C_ERROR(/* Read from unset register $t6 */);
        }
        do {
            temp_s3 = M2C_ERROR(/* Read from unset register $t0 */)->unk58 + (var_v0->unk8 * 8);
            GTE_VXY0 = temp_s3->unk0;
            GTE_VZ0 = temp_s3->unk4;
            GTE_RGBC = var_v0->unk4;
            gte_nccs();
            var_t1 -= 1;
            var_v0 += 0xC;
            var_v1 += 0xC;
            var_v1->unk-4 = (s32) GTE_RGB2;
        } while (var_t1 > 0);
        break;
    case 2:
        M2C_ERROR(/* Read from unset register $t9 */)->unk8 = (s32) M2C_ERROR(/* Read from unset register $t3 */)->unk4;
        M2C_ERROR(/* Read from unset register $t9 */)->unk14 = (s32) M2C_ERROR(/* Read from unset register $t3 */)->unkC;
        M2C_ERROR(/* Read from unset register $t9 */)->unk20 = (s32) M2C_ERROR(/* Read from unset register $t3 */)->unk14;
        break;
    }
}
