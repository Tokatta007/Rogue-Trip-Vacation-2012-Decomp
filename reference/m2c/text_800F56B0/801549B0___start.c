/* m2c reference for __start @ 801549B0 (43 words). Generated; not compiled or validated. */
/* Warning: missing "jr $ra" in last block of __start (.L801549C0.1). */

extern ? D_80000004;
extern s32 D_801BBFF8;
extern s32 D_801C3720;
extern s32 D_801C3868;
extern ? D_801F5410;
extern ? func_80154A5C;

void __start(void) {
    s32 *var_v0;
    u32 temp_a0;

    var_v0 = &D_801C3720;
    do {
        *var_v0 = 0;
        var_v0 += 4;
    } while ((u32) var_v0 < (u32) &D_801F5410);
    temp_a0 = (u32) ((s32) &D_801F5410 * 8) >> 3;
    D_801C3868 = saved_reg_ra;
    InitHeap((u32 *) (temp_a0 | (s32) &D_80000004), (func_80154A5C.unk4 - D_801BBFF8) - temp_a0);
    main();
    M2C_BREAK(0);
}
