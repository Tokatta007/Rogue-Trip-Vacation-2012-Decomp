/* m2c reference for func_8013E560 @ 8013E560 (14 words). Generated; not compiled or validated. */
extern s16 D_801C385C;
extern s16 D_801C385E;
extern ? D_801E3F78;

void func_8013E560(void) {
    ? *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = &D_801E3F78;
    D_801C385E = 0;
    D_801C385C = 0;
    do {
        var_v1->unk24 = 3;
        var_v1->unk0 = 0;
        var_a0 += 1;
        var_v1 += 0x28;
    } while (var_a0 < 0x10);
}
