/* m2c reference for func_801313FC @ 801313FC (71 words). Generated; not compiled or validated. */
? func_80131518(void *, void *);                    /* extern */
? func_801643F8(void *, s32, ? *);                  /* extern */
? func_8016CE78(s32);                               /* extern */
extern s32 D_801C3804;
extern s32 D_801C3808;
extern ? func_801143B8;

void func_801313FC(void *arg0, s32 arg1) {
    s32 *var_s1;
    u32 *temp_s1;
    u32 temp_s3;
    u32 var_s2;
    void *temp_s0;
    void *temp_s4;

    D_801C3808 = arg1;
    temp_s4 = arg0 + 0x7FFDFE30;
    if (arg0->unk0 != 0x50535844) {
        exit(-1);
    }
    if (arg0->unk4 != 0x43) {
        exit(-1);
    }
    func_8016CE78(arg0->unk10);
    D_801C3804 = arg0->unk10;
    var_s2 = 0;
    temp_s1 = arg0->unk14 + temp_s4;
    temp_s3 = *temp_s1;
    var_s1 = temp_s1 + 4;
    if (temp_s3 != 0) {
loop_6:
        if (*var_s1 == 0) {
            var_s1 += 4;
            goto block_10;
        }
        temp_s0 = *var_s1 + temp_s4;
        if (temp_s0 != NULL) {
            func_80131518(temp_s0, temp_s4);
            var_s1 += 4;
            func_801643F8(temp_s0, D_801C3804, &func_801143B8);
block_10:
            var_s2 += 1;
            if (var_s2 < temp_s3) {
                goto loop_6;
            }
        }
    }
}
