/* m2c reference for func_8015A7AC @ 8015A7AC (43 words). Generated; not compiled or validated. */
extern s32 D_801E6BD8;
extern s32 func_8015A858;

void func_8015A7AC(void) {
    s32 *temp_t7;
    s32 *var_t2;
    s32 *var_t2_2;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 temp_v1;

    D_801E6BD8 = saved_reg_ra;
    EnterCriticalSection();
    var_v0 = (void *(*)())0xB0()->unk18 + 0x28;
    temp_t7 = var_v0;
    var_t2 = &func_8015A858;
loop_1:
    temp_v1 = *var_t2;
    var_t2 += 4;
    var_v0 += 4;
    if (temp_v1 == *var_v0) {
        if (var_t2 == (&func_8015A858 + 0x18)) {
            var_v0_2 = temp_t7;
            var_t2_2 = &func_8015A858 + 0x18;
            do {
                *var_v0_2 = *var_t2_2;
                var_t2_2 += 4;
                var_v0_2 += 4;
            } while (var_t2_2 != (&func_8015A858 + 0x30));
        } else {
            goto loop_1;
        }
    }
    FlushCache();
    ExitCriticalSection();
}
