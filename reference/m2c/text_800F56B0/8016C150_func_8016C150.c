/* m2c reference for func_8016C150 @ 8016C150 (84 words). Generated; not compiled or validated. */
? func_801625B8(void *, s8 *, ? *, ? *);            /* extern */
? func_8016C780();                                  /* extern */
extern ? *D_801BC0F8;
extern s32 D_801BC0FC;
extern s32 D_801BC110;
extern ? *D_801EC9C8;
extern ? *D_801EC9D0;
extern ? *D_801EC9D4;
extern ? *D_801EC9DC;
extern ? *D_801EC9E8;
extern ? *D_801EC9F0;
extern ? D_801F32A8;
extern ? D_801F32F0;
extern ? D_801F3338;
extern ? func_8016C2A0;
extern ? func_8016C308;
extern ? func_8016C3E0;
extern ? func_8016C49C;
extern ? func_8016C718;
extern ? func_8016C750;

void func_8016C150(s32 arg0, s32 arg1) {
    ? *var_a2;
    ? *var_a3;
    ? *var_s0;
    s32 var_t0;
    s32 var_v1;
    s8 *var_a1;
    void *var_a0;

    D_801BC0FC = 0;
    D_801BC110 = 0;
    func_8016C780();
    var_s0 = &D_801F3338;
    D_801EC9D0 = &func_8016C308;
    D_801EC9F0 = &func_8016C2A0;
    D_801EC9E8 = &func_8016C3E0;
    D_801EC9DC = &func_8016C49C;
    D_801EC9C8 = &func_8016C718;
    D_801BC0F8 = &D_801F3338;
    D_801EC9D4 = &func_8016C750;
    bzero(&D_801F3338, 0x1E0);
    var_t0 = 0;
    var_a0 = &D_801F3338 + 0x40;
    var_a3 = &D_801F32F0;
    var_a2 = &D_801F32A8;
    D_801F3338.unk30 = arg0;
    D_801F3338.unk120 = arg1;
    do {
        var_a1 = var_s0 + 0x5D;
        var_a0->unk-34 = 0;
        var_a0->unk-30 = var_s0;
        var_a0->unk-10->unk0 = 0xFF;
        var_v1 = 5;
        var_a0->unk-10->unk1 = 0;
        var_a0->unk-4 = var_a2;
        var_a0->unk0 = var_a3;
loop_2:
        *var_a1 = 0xFF;
        var_v1 -= 1;
        var_a1 += 1;
        if (var_v1 >= 0) {
            goto loop_2;
        }
        var_a3 += 0x23;
        var_a2 += 0x23;
        var_t0 += 1;
        var_a0 += 0xF0;
        var_s0 += 0xF0;
    } while (var_t0 < 2);
    func_801625B8(var_a0, var_a1, var_a2, var_a3);
    D_801BC0FC = 1;
}
