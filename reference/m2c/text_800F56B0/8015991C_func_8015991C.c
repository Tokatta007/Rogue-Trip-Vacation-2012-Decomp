/* m2c reference for func_8015991C @ 8015991C (58 words). Generated; not compiled or validated. */
? func_8015985C(s32, ?);                            /* extern */

void func_8015991C(void *arg0) {
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_t5;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;

    temp_t3 = arg0->unk6;
    temp_t4 = arg0->unk8;
    temp_t5 = arg0->unkA;
    temp_v0 = GTE_RT11RT12;
    temp_v1 = GTE_RT22RT23;
    temp_a2 = GTE_RT33;
    GTE_RT11RT12 = arg0->unk0;
    GTE_RT22RT23 = arg0->unk2;
    GTE_RT33 = arg0->unk4;
    GTE_IR3 = temp_t5;
    GTE_IR1 = temp_t3;
    GTE_IR2 = temp_t4;
    gte_op12();
    GTE_RT11RT12 = temp_t3;
    GTE_RT22RT23 = temp_t4;
    GTE_RT33 = temp_t5;
    gte_op12();
    GTE_VXY0 = temp_t3;
    GTE_VZ0 = temp_t4;
    GTE_VXY1 = temp_t5;
    GTE_RT11RT12 = temp_v0;
    GTE_RT22RT23 = temp_v1;
    GTE_RT33 = temp_a2;
    func_8015985C(temp_a2, saved_reg_ra);
    *M2C_ERROR(/* Read from unset register $a1 */) = M2C_ERROR(/* Read from unset register $t0 */);
    M2C_ERROR(/* Read from unset register $a1 */)->unk2 = (s16) M2C_ERROR(/* Read from unset register $t1 */);
    M2C_ERROR(/* Read from unset register $a1 */)->unk4 = (s16) M2C_ERROR(/* Read from unset register $t2 */);
    func_8015985C();
    M2C_ERROR(/* Read from unset register $a1 */)->unk6 = (s16) M2C_ERROR(/* Read from unset register $t0 */);
    M2C_ERROR(/* Read from unset register $a1 */)->unk8 = (s16) M2C_ERROR(/* Read from unset register $t1 */);
    M2C_ERROR(/* Read from unset register $a1 */)->unkA = (s16) M2C_ERROR(/* Read from unset register $t2 */);
    func_8015985C();
    M2C_ERROR(/* Read from unset register $a1 */)->unkC = (s16) M2C_ERROR(/* Read from unset register $t0 */);
    M2C_ERROR(/* Read from unset register $a1 */)->unkE = (s16) M2C_ERROR(/* Read from unset register $t1 */);
    M2C_ERROR(/* Read from unset register $a1 */)->unk10 = (s16) M2C_ERROR(/* Read from unset register $t2 */);
}
