/* m2c reference for func_80176B6C @ 80176B6C (24 words). Generated; not compiled or validated. */
extern s32 D_801BC000;

void func_80176B6C(s32 arg0, u16 *arg1, u16 *arg2) {
    u16 temp_a0_2;
    u16 temp_v1;
    u32 temp_a3;
    u32 temp_v1_2;
    void *temp_a0;

    temp_a0 = (arg0 * 0x10) + D_801BC000;
    temp_v1 = temp_a0->unk0;
    temp_a0_2 = temp_a0->unk2;
    temp_a3 = temp_v1 & 0xFFFF;
    if (temp_a3 >= 0x4000U) {
        *arg1 = temp_a3 - 0x8000;
    } else {
        *arg1 = temp_v1;
    }
    temp_v1_2 = temp_a0_2 & 0xFFFF;
    if (temp_v1_2 >= 0x4000U) {
        *arg2 = temp_v1_2 - 0x8000;
        return;
    }
    *arg2 = temp_a0_2;
}
