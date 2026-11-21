/* m2c reference for func_8016B614 @ 8016B614 (50 words). Generated; not compiled or validated. */
? func_80162000();                                  /* extern */
? func_8016C150(s32 *, s32 *, s32);                 /* extern */
extern s32 D_801BC218;
extern s32 D_801C38D4;
extern ? D_801F3208;
extern s32 D_801F3298;

void func_8016B614(void) {
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_v1_2;

    var_a2 = 0;
    var_a1 = &D_801BC218;
loop_1:
    var_a0 = 0;
    if (var_a2 < 4) {
        var_v1 = var_a1;
        do {
            *var_v1 = 0;
            var_a0 += 1;
            var_v1 += 4;
        } while (var_a0 < 9);
        var_a1 += 0x24;
        var_a2 += 1;
        goto loop_1;
    }
    func_8016C150(&D_801BC218, &D_801BC218 + 0x24, var_a2);
    func_80162000();
    D_801C38D4 = 1;
    var_a3 = 0;
    var_a2_2 = 0;
    var_a1_2 = &D_801F3298;
loop_6:
    var_v1_2 = 0;
    if (var_a3 < 4) {
        *var_a1_2 = 0;
        var_a0_2 = var_a2_2;
        do {
            *(var_a0_2 + &D_801F3208) = var_v1_2;
            var_v1_2 += 1;
            var_a0_2 += 4;
        } while (var_v1_2 < 9);
        var_a2_2 += 0x24;
        var_a1_2 += 4;
        var_a3 += 1;
        goto loop_6;
    }
}
