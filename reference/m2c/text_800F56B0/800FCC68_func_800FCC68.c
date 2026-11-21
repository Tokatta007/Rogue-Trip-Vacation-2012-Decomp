/* m2c reference for func_800FCC68 @ 800FCC68 (308 words). Generated; not compiled or validated. */
? func_800F7F9C(void *);                            /* extern */
s16 func_800FF828(s32 *, void *);                   /* extern */
void *func_801244FC(void *, s32);                   /* extern */
s32 func_80124A94(void *, s32, s32 *);              /* extern */
s32 func_801250C8(void *, void *);                  /* extern */
void *func_801297D4(void *, void *, ?, void *);     /* extern */
? func_8012A5F0(void *);                            /* extern */
s32 func_8012BD30(void *);                          /* extern */
s32 func_8012E544(void *, void *, ?, ?);            /* extern */
? func_8014662C(void *, ?, s32, ?);                 /* extern */
? func_80148A00(void *, ?);                         /* extern */
extern s32 D_801C3724;
extern s32 D_801C372C;
static void *D_801C34EC = NULL;

void func_800FCC68(void *arg0, ? arg1, s32 arg2, ? arg3) {
    s32 sp10;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    void *temp_a0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;

    var_s2 = arg2;
    var_s4 = 0;
    if ((arg0->unk7C0 != 0xD0) || (D_801C3724 != 0)) {
        if (func_80124A94(D_801C34EC, (D_801C34EC + 0xB744)->unk18, &sp10) != 0) {
            temp_v0 = func_801244FC(D_801C34EC, sp10);
            if (temp_v0->unk7B8 == 1) {
                var_v0 = arg0->unk868;
                if (var_v0 < 0) {
                    var_v0 = -var_v0;
                }
                var_a0 = arg0 + 0x1E4;
                if (var_v0 < 0x355) {
                    arg0->unk928 = (s32) (arg0->unk928 + var_s2);
                    var_a0 = arg0 + 0x1E4;
                }
                if (func_801250C8(var_a0, temp_v0 + 0x1E4) < 0xFA0) {
                    if (((arg0->unk10C - var_s2) < 0xF) || ((s32) arg0->unk956 < arg0->unk928)) {
                        var_s4 = 1;
                    } else {
                        var_v1 = 0;
                        if (arg0->unk934 == 0) {
                            var_v1 = func_8012BD30(arg0 + 0x264) >= 2;
                        }
                        if (var_v1 != 0) {
                            var_s1 = 0;
                            arg0->unk8C8 = (s32) ((s32) D_801C34EC->unk12688 >> 2);
                            var_a0_2 = 0;
                            if ((temp_v0->unk20C < temp_v0->unkC8) && (arg0->unk58 != 0xB)) {
                                var_a0_2 = (u32) (arg0->unk58 ^ 0xC) > 0U;
                            }
                            if ((var_a0_2 != 0) && ((var_s1 = 0, (arg0->unk94C != 0)) || ((rand() & 7) == 1))) {
                                var_s1 = 1;
                            }
                            if (var_s1 != 0) {
                                arg0->unk934 = 1U;
                                arg0->unk93C = 0;
                                arg0->unk854 = temp_v0;
                                arg0->unk89C = 0x1A4;
                                arg0->unk8C4 = 0;
                                arg0->unk8C8 = (s32) (arg0->unk8C8 + (D_801C34EC->unk7D4 * 2));
                                arg0->unk8CC = 0;
                            }
                        }
                    }
                }
            } else if ((arg0->unk829 == 0) || (var_s2 = var_s2 >> 1, ((arg0->unk10C - var_s2) <= 0))) {
                var_s2 = 0;
            }
            if (arg0->unk7C0 == 0x90) {
                var_v1_2 = 0;
                if (arg0->unk90 == 0) {
                    var_v1_2 = arg0->unk87 == 0;
                }
                if ((var_v1_2 != 0) && ((rand() & 0xF) == 7)) {
                    if ((s8) (*arg0->unk44 + ((s32) (arg0->unk5C << 0x10) >> 0xB))->unk1C >= 2) {
                        func_80148A00(arg0, 1);
                        arg0->unk81 = 1;
                    }
                }
            }
        }
        func_8014662C(arg0, arg1, var_s2, arg3);
        var_v1_3 = 0;
        if ((var_s4 != 0) && (arg0->unk10C > 0)) {
            var_v1_3 = rand() & 1;
        }
        if (var_v1_3 != 0) {
            arg0->unk8 = 1;
            arg0->unk8B0 = 0;
            arg0->unk64 = func_800FF828(arg0->unk44, arg0 + 0x1E4);
            arg0->unk34 = (void *) (arg0->unk40 + 0x1C);
            arg0->unk58 = 2;
            func_800F7F9C(arg0);
            var_v1_4 = 0;
            if (arg0->unk87 == 0) {
                var_v1_4 = (s16) arg0->unk17C < arg0->unk920;
            }
            if (var_v1_4 != 0) {
                var_s1_2 = 0;
                if ((arg0->unk82A != 0) || ((rand() & 0x40) < D_801C372C)) {
                    var_s1_2 = 1;
                }
                temp_a0 = arg0 + 0x264;
                if ((var_s1_2 != 0) && (temp_a0->unk28 >= 0x14E)) {
                    temp_a0->unk42 = 0x33;
                    temp_a0->unk35 = 0;
                    temp_a0->unk36 = 0;
                    arg0->unk29B = 1;
                    temp_a0->unk38 = 0;
                    func_8012A5F0(temp_a0);
                }
            }
        } else {
            arg0->unk918 = (s32) (arg0->unk918 + var_s2);
            if (arg0->unk91C < arg0->unk918) {
                arg0->unk780 = 0;
                arg0->unk8B0 = 0;
                if (arg0->unk7DC >= 0xBB9) {
                    if (arg0->unk58 != 8) {
                        temp_v0_2 = func_801297D4(D_801C34EC, arg0 + 0x1E4, 0xBB8, arg0 + 0x8E0);
                        if (temp_v0_2 != NULL) {
                            arg0->unk34 = temp_v0_2;
                            arg0->unk8 = 3;
                            arg0->unk58 = 8;
                        }
                    }
                } else {
                    temp_s1 = arg0 + 0x72C;
                    if (func_8012E544(arg0 + 0x1E4, temp_s1, 1, 1) != 0) {
                        arg0->unk8 = 3;
                        arg0->unk58 = 9;
                        arg0->unk34 = temp_s1;
                    }
                }
            }
        }
    }
}
