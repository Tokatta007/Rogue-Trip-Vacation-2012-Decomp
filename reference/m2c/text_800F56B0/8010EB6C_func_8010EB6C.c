/* m2c reference for func_8010EB6C @ 8010EB6C (112 words). Generated; not compiled or validated. */
s32 func_8010ED2C(void *, s32);                     /* extern */
? func_8010F6C0(void *, s32, s32);                  /* extern */
s32 func_801233B4(s32, s16);                        /* extern */
s32 func_801244FC(s32, s32);                        /* extern */
void *func_80124CBC(s32);                           /* extern */
? func_801253F4(? *, void *);                       /* extern */
? func_8012A154(s32, ? *, ?, ?, s32, s32);          /* extern */
static s32 D_801C34EC = 0;
static s32 D_801C34F0 = 0;

void func_8010EB6C(void *arg0) {
    ? sp18;
    s16 temp_s0;
    s32 temp_v0_3;
    s32 var_s3;
    s32 var_s5;
    s32 var_v1;
    u16 temp_v0;
    void *temp_v0_2;
    void *var_s1;

    if (arg0->unk829 != 0) {
        var_s5 = arg0->unk738->unk48;
        var_s3 = 4;
    } else {
        var_s5 = 2;
        var_s3 = 1;
    }
    if (var_s3 < var_s5) {
        var_s1 = (var_s3 << 5) + arg0;
        do {
            var_v1 = 0;
            if (var_s1->unk2C8 != 0) {
                var_v1 = arg0->unkA4 == 0;
            }
            if ((var_v1 != 0) && (temp_v0 = var_s1->unk2E6, temp_s0 = (s16) var_s1->unk2E4, (((u32) ((s16) temp_v0 - 0x10) < 0x110U) != 0))) {
                if (arg0->unk829 == 0) {
                    var_s1->unk2C8 = 0;
                    var_s1 += 0x20;
                } else {
                    temp_v0_2 = func_80124CBC(D_801C34EC);
                    temp_v0_2->unkC = (void *) (arg0 + 0x1E4);
                    temp_v0_2->unk18 = (s32) arg0->unk7C4;
                    temp_v0_2->unk14 = 1;
                    if (arg0->unk53A != 0) {
                        func_801253F4(&sp18, arg0 + 0x460);
                        goto block_15;
                    }
                    temp_v0_3 = func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, temp_s0));
                    if (func_8010ED2C(arg0, temp_v0_3) != 0) {
                        func_8010F6C0(arg0, var_s3, temp_v0_3);
block_15:
                        arg0->unk508 = 0;
                        arg0->unk50A = (s16) temp_v0;
                        func_8012A154(D_801C34F0, &sp18, 1, 1, (s32) (s16) var_s1->unk2E4, 0);
                    }
                    goto block_16;
                }
            } else {
block_16:
                var_s1 += 0x20;
            }
            var_s3 += 1;
        } while (var_s3 < var_s5);
    }
}
