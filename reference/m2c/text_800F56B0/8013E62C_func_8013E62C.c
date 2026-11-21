/* m2c reference for func_8013E62C @ 8013E62C (39 words). Generated; not compiled or validated. */
void *func_80114368(?);                             /* extern */
extern void *D_801E3F78;

void func_8013E62C(void) {
    s32 var_s1;
    s32 var_s2;
    void **var_s0;
    void *temp_v0;

    var_s1 = 0;
    var_s0 = &D_801E3F78;
    var_s2 = -0x118;
    do {
        if (var_s1 < 7) {
            temp_v0 = func_80114368(0);
            *var_s0 = temp_v0;
            if (temp_v0 != NULL) {
                temp_v0->unkD = 0;
                (*var_s0)->unkC = 0;
                var_s0 += 0x28;
            } else {
                goto block_5;
            }
        } else {
            *var_s0 = *(var_s2 + &D_801E3F78);
block_5:
            var_s0 += 0x28;
        }
        var_s1 += 1;
        var_s2 += 0x28;
    } while (var_s1 < 0x10);
}
