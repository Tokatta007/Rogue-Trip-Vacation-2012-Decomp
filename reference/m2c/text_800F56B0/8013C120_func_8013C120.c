/* m2c reference for func_8013C120 @ 8013C120 (260 words). Generated; not compiled or validated. */
? func_8013B928(void *);                            /* extern */
? func_8013BDCC(void *, ?, ?);                      /* extern */
? func_8013BED8(void *, ?);                         /* extern */
? func_8013C530(?);                                 /* extern */
? func_80154AFC(? *, ? *, ? *, ? *);                /* extern */
? func_8015FB80(?, s16, s16);                       /* extern */
? func_80166D2C(void *, ? *);                       /* extern */
s32 func_80171864(s32, void *, void *, s16);        /* extern */
? func_8017194C(s32);                               /* extern */
? func_8017DE0C();                                  /* extern */
extern ? D_801B399C;
extern ? D_801C31CC;
static s32 D_801C34E8 = 0;
static ? D_801C358C;                                /* unable to generate initializer: unknown type */
static ? D_801C3594;                                /* unable to generate initializer: unknown type */
static ? D_801C359C;                                /* unable to generate initializer: unknown type */
static ? D_801C35A8;                                /* unable to generate initializer: unknown type */
static ? D_801C35B0;                                /* unable to generate initializer: unknown type */
static ? D_801C35B8;                                /* unable to generate initializer: unknown type */
static s32 D_801C36C0 = 0;
static s32 D_801C36CC = 0;
static s32 D_801C36D8 = 0;
static s32 D_801C36DC = 0;
static ? D_800F4134;                                /* unable to generate initializer: unknown type; const */

void func_8013C120(void *arg0, s16 arg1, ? *arg2) {
    ? sp18;
    ? *var_a2;
    ? *var_a3;
    s32 temp_s2;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_v0_2;
    s32 var_v1_2;
    u8 var_v1;
    u8 var_v1_3;
    void *var_a0;
    void *var_s3;
    void *var_v0;

    if (arg0->unk80 != 0) {
        func_8013C530(0x1E);
    }
    if ((arg0 + (arg1 * 4))->unk8 == 0) {
        var_s3 = (void *)0x800201D0;
        switch (arg1) {                             /* irregular */
        case 29:
            var_a2 = "SND\\";
            var_a3 = "INTRO";
block_18:
            func_80154AFC(&sp18, "%s%s.%s", var_a2, var_a3);
            var_a0 = var_s3;
            break;
        case 0:
            func_8013B928(arg0);
            func_8013BED8(arg0, 0);
            func_8017194C(D_801C34E8);
            var_a2 = "SND\\";
            var_a3 = "RTCORE";
            var_v0 = (void *)0x80010000;
block_17:
            arg0->unk4 = var_v0;
            goto block_18;
        case 1:
            func_8013BED8(arg0, 0);
            func_8017194C(D_801C34E8);
            var_a2 = "SHELL\\";
            var_a3 = "RTSHELL";
            var_v0 = (void *)0x80010000;
            goto block_17;
        case 2:
            var_a2 = "SND\\";
            var_a3 = arg2;
            goto block_18;
        default:
            if ((u32) (arg1 - 3) < 0xEU) {
                var_a2 = "SND\\";
                var_a3 = arg2;
                goto block_18;
            }
            if ((u32) (arg1 - 0x11) < 0xCU) {
                var_a2 = "SND\\";
                var_a3 = arg2;
                goto block_18;
            }
            var_a0 = (void *)0x800201D0;
            if (arg1 == 0x1E) {
                var_a2 = &D_800F4134;
                var_a3 = arg2;
                var_s3 = (void *)0x800AB460;
                var_v0 = arg0->unk88 + 0x80010000;
                goto block_17;
            }
            break;
        }
        func_80166D2C(var_a0, &sp18);
        temp_s2 = (var_s3->unk12 << 9) + 0xA20;
        memcpy(arg0->unk4, var_s3, temp_s2);
        if (func_80171864(D_801C34E8, arg0->unk4, var_s3 + temp_s2, arg1) == 0) {
            (arg0 + (arg1 * 4))->unk8 = 0;
            return;
        }
        arg0->unk4 = (void *) (arg0->unk4 + temp_s2);
        if ((arg1 == 0) || (arg1 == 2) || ((u32) (arg1 - 0x11) < 0xCU)) {
            arg0->unk84 = (s32) (arg0->unk84 + temp_s2);
            var_v0_2 = arg1 * 4;
        } else {
            var_v0_2 = arg1 * 4;
            if (arg1 == 1) {
                arg0->unk88 = temp_s2;
                var_v0_2 = arg1 * 4;
            }
        }
        (arg0 + var_v0_2)->unk8 = 1;
        if (arg1 == 1) {
            var_a0_2 = D_801C36D8;
            if ((s32) D_801B399C.unk1 < var_a0_2) {
                var_a0_2 = (s32) D_801B399C.unk1;
            }
            var_v1 = D_801B399C.unk1;
            D_801C36C0 = var_a0_2;
            if ((s32) var_v1 < D_801C36DC) {
                var_v1 = (u8) D_801C36DC;
            }
            D_801C36C0 = (s32) var_v1;
            func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
            var_a0_3 = D_801C36D8;
            var_v1_2 = D_801C36C0;
            if (var_v1_2 < var_a0_3) {
                var_a0_3 = var_v1_2;
            }
            D_801C36CC = var_a0_3;
            if (var_v1_2 < D_801C36DC) {
                var_v1_2 = D_801C36DC;
            }
            D_801C36CC = var_v1_2;
            D_801C31CC.unk8 = 0x31;
            D_801C31CC.unkC = 0x31;
            func_8013BDCC(arg0, 0, 0);
            func_8017DE0C();
            var_a0_4 = D_801C36D8;
            var_v1_3 = D_801B399C.unk2;
            if ((s32) var_v1_3 < var_a0_4) {
                var_a0_4 = (s32) var_v1_3;
            }
            D_801C36CC = var_a0_4;
            if ((s32) var_v1_3 < D_801C36DC) {
                var_v1_3 = (u8) D_801C36DC;
            }
            D_801C36CC = (s32) var_v1_3;
        }
    }
}
