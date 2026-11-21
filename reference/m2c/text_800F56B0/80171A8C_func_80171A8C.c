/* m2c reference for func_80171A8C @ 80171A8C (58 words). Generated; not compiled or validated. */
? func_80172C6C(?, s32, u16 *, u16 *);              /* extern */
extern u16 D_801C2484;
extern u16 D_801C2494;
extern s32 D_801F3A9C;
extern s32 D_801F3AA0;
extern s32 D_801F3AA4;
extern ? D_801F3B28;

void func_80171A8C(void) {
    ? *var_v1_3;
    s32 *var_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a1_2;
    u16 *var_a2;
    u16 *var_a2_2;
    u16 *var_v1;
    u16 *var_v1_2;
    u16 temp_v0;
    u16 temp_v0_2;

    var_a2 = (u16 *)0x1F801C00;
    var_a0 = 0;
    do {
        var_a1 = 0;
        var_v1 = &D_801C2484;
loop_2:
        temp_v0 = *var_v1;
        var_v1 += 2;
        var_a1 += 1;
        *var_a2 = temp_v0;
        var_a2 += 2;
        if (var_a1 < 8) {
            goto loop_2;
        }
        var_a0 += 1;
    } while (var_a0 < 0x18);
    var_a2_2 = (u16 *)0x1F801D80;
    var_a0_2 = 0;
    var_v1_2 = &D_801C2494;
    do {
        temp_v0_2 = *var_v1_2;
        var_v1_2 += 2;
        var_a0_2 += 1;
        *var_a2_2 = temp_v0_2;
        var_a2_2 += 2;
    } while (var_a0_2 < 0x10);
    func_80172C6C(0x18, var_a1, var_a2_2, &D_801C2484);
    var_a1_2 = 0;
    var_v1_3 = &D_801F3B28;
    do {
        var_a0_3 = 0xF;
        var_v0 = var_v1_3 + 0x3C;
loop_8:
        *var_v0 = 0;
        var_a0_3 -= 1;
        var_v0 -= 4;
        if (var_a0_3 >= 0) {
            goto loop_8;
        }
        var_a1_2 += 1;
        var_v1_3 += 0x40;
    } while (var_a1_2 < 0x20);
    D_801F3AA4 = 0x3C;
    D_801F3AA0 = 0;
    D_801F3A9C = 0;
}
