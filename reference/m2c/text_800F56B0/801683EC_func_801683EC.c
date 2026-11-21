/* m2c reference for func_801683EC @ 801683EC (131 words). Generated; not compiled or validated. */
s32 func_8016415C();                                /* extern */
? func_801686C8(void *, void *, void *);            /* extern */
? func_80168840(void *, void *, void *);            /* extern */
? func_80169BB8(void *, void *, ?, ?, s32);         /* extern */
s32 func_8016B374(s32, s32, s32);                   /* extern */
? func_8016F9A8(void *, void *, s32 *);             /* extern */
s32 func_801793C0(?, u16, void *);                  /* extern */
extern u8 D_801BC204;
extern s32 D_801C387C;
extern void *D_801C3880;
extern ? D_801F2E78;
extern ? D_801F30D8;
extern ? D_801F3108;
extern ? D_801F3148;
static u16 D_801C3640 = 3;
static void *D_801C3648 = (void *)0x1F800000;

void func_801683EC(void *arg0, void *arg1, ? arg2, ? arg3, s32 arg4) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    void *var_a0;
    void *var_s0;

    *(u16 *)0x1F800012 = D_801C3640;
    D_801C3648->unk0 = (s32) D_801C387C;
    D_801C3648->unk4 = &D_801F3108;
    var_s4 = 0;
    D_801C3648->unk1C = func_801793C0(0, D_801C3640, D_801C3648);
    D_801C3648->unk20 = &D_801F2E78;
    D_801C3648->unkA0 = &D_801F3148;
    D_801C3648->unkB4 = &D_801F30D8;
    D_801C3648->unkD8 = func_8016415C();
    var_s3 = 0;
    if (arg0->unk48 > 0) {
        var_s1 = 0x4C;
        var_s0 = arg1;
        var_a0 = arg0 + 0x28;
        do {
            var_s0->unk4 = 0;
            func_8016F9A8(var_a0, arg0 + var_s1, &sp18);
            temp_a0 = sp18 + arg0->unk1C;
            sp18 = temp_a0;
            temp_a1 = sp1C + arg0->unk20;
            sp1C = temp_a1;
            temp_v0 = sp20 + arg0->unk24;
            sp20 = temp_v0;
            if (func_8016B374(temp_a0 >> (s32) D_801C3640, temp_a1 >> (s32) D_801C3640, temp_v0 >> (s32) D_801C3640) != 0) {
                var_s0->unk4 = 2;
                var_s3 += 1;
            }
            var_s1 += 8;
            var_s0 += 0x20;
            var_s4 += 1;
            var_a0 = arg0 + 0x28;
        } while (var_s4 < arg0->unk48);
    }
    if (var_s3 == arg0->unk48) {
        D_801C3648->unk24 = 1;
    } else {
        D_801C3648->unk24 = 0;
    }
    D_801C3880 = arg1;
    func_80169BB8(arg0, arg1, arg2, arg3, arg4);
    switch (D_801BC204) {                           /* irregular */
    case 1:
        func_801686C8(arg0, arg0 + 0x1C, arg1);
        return;
    case 2:
        func_80168840(arg0, arg0 + 0x1C, arg1);
        return;
    }
}
