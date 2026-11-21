/* m2c reference for func_800FD594 @ 800FD594 (83 words). Generated; not compiled or validated. */
? func_8013EEFC(s16 *, s32 *, s32 *, s32 *);        /* extern */
extern s32 D_801C3758;
extern s32 D_801C375C;
extern s32 D_801C3760;
extern s32 D_801C3764;
extern s32 D_801C3768;
extern s32 D_801C3774;
extern ? D_801C3918;
extern ? D_801C39A8;
extern ? D_801C3BE8;
extern ? D_801C3C78;
extern ? D_801C3D08;
extern ? D_801C3D98;
extern ? D_801C3E28;
extern ? D_801C3EB8;
extern ? D_801C3F08;
extern ? D_801C3F98;

void func_800FD594(s16 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s16 *var_a0;
    s32 *temp_t0;
    s32 *temp_t1;
    s32 *temp_t2;
    s32 *temp_v0;
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_t3;
    s32 var_t4;
    s32 var_t5;
    void *temp_v1_2;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_t5 = 0;
loop_1:
    var_t4 = 0;
    if (var_t5 < 0x12) {
        var_t3 = var_t5 * 8;
        do {
            temp_v0 = var_t3 + &D_801C3918;
            var_a2 = var_t3 + &D_801C3BE8;
            var_a3 = var_t3 + &D_801C3C78;
            temp_t0 = var_t3 + &D_801C3D08;
            temp_t1 = var_t3 + &D_801C3D98;
            temp_t2 = var_t3 + &D_801C3E28;
            var_a1 = var_t3 + &D_801C3F08;
            var_t3 += 4;
            temp_v1 = var_t4 * 4;
            temp_a0 = var_t4 * 2;
            var_t4 += 1;
            *temp_v0 = 0;
            temp_v1_2 = temp_v1 + (var_t5 << 5) + &D_801C39A8;
            var_a0 = temp_a0 + (var_t5 * 4) + &D_801C3EB8;
            temp_v1_2->unk0 = 0;
            temp_v1_2->unk8 = 0;
            temp_v1_2->unk10 = 0;
            temp_v1_2->unk18 = 0;
            *var_a2 = 0;
            *var_a3 = 0;
            *temp_t0 = 0;
            *temp_t1 = 0;
            *temp_t2 = 0;
            *var_a0 = 0;
            *var_a1 = 0;
        } while (var_t4 < 2);
        var_t5 += 1;
        goto loop_1;
    }
    D_801C3F98.unk0 = 0;
    D_801C3758 = 0;
    D_801C375C = 0;
    D_801C3F98.unk4 = 0;
    D_801C3F98.unk8 = 0;
    D_801C3F98.unkC = 0;
    D_801C3768 = 0;
    D_801C3774 = 0;
    D_801C3760 = 0;
    D_801C3764 = 0;
    func_8013EEFC(var_a0, var_a1, var_a2, var_a3);
}
