/* m2c reference for func_8013BED8 @ 8013BED8 (146 words). Generated; not compiled or validated. */
? func_80154AFC(? *, ? *);                          /* extern */
? func_8015F9F0(u16 *);                             /* extern */
? func_8015FB30(s16, s16);                          /* extern */
? func_8015FB80(?, s16, s16);                       /* extern */
? func_8017DE94(s32);                               /* extern */
static void *D_801C34F8 = NULL;
static s32 D_801C36C0 = 0;
static s32 D_801C36CC = 0;
static s32 D_801C36D8 = 0;
static s32 D_801C36DC = 0;
static u16 D_801C36FC = 0;
static ? D_800F411C;                                /* unable to generate initializer: unknown type; const */

void func_8013BED8(s32 arg0, s32 arg1) {
    ? sp10;
    ? *var_s3;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 var_a1;
    u16 var_a1_3;
    u16 var_s1;
    u16 var_s4;
    void *temp_v0;

    func_8015F9F0(&D_801C36FC);
    var_s1 = D_801C36FC;
    var_s4 = var_s1;
    if (arg1 != 0) {
        var_s1 = (u16) D_801C36CC;
        var_s4 = var_s1;
    }
loop_3:
    if (var_s1 != 0) {
        var_s1 -= 1;
        if (arg1 != 0) {
            var_v1 = D_801C36D8;
            if ((s32) var_s1 < var_v1) {
                var_v1 = (s32) var_s1;
            }
            D_801C36CC = var_v1;
            var_a1 = var_s1;
            if ((s32) var_s1 < D_801C36DC) {
                var_a1 = (u16) D_801C36DC;
            }
            D_801C36CC = (s32) var_a1;
            var_s0 = 0;
        } else {
            func_8015FB30((s16) var_s1, (s16) var_s1);
            var_s0 = 0;
        }
        do {
            func_80154AFC(&sp10, &D_800F411C);
            var_s0 += 1;
        } while (var_s0 < 0x64);
        goto loop_3;
    }
    func_8017DE94(arg0);
    var_s3 = &D_800F411C;
    if (arg1 == 0) {
        temp_v0 = D_801C34F8->unk8;
        (temp_v0 + 0x18)->unk4(D_801C34F8 + (s16) temp_v0->unk18, D_801C34F8->unk4);
        var_v1_2 = D_801C36D8;
        if (arg1 < var_v1_2) {
            var_v1_2 = 0;
        }
        D_801C36C0 = var_v1_2;
        var_a1_2 = 0;
        if (arg1 < D_801C36DC) {
            var_a1_2 = D_801C36DC;
        }
        D_801C36C0 = var_a1_2;
        func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
        var_s3 = (? *)0x800F0000;
    }
    var_v0 = (s32) var_s1 < (s32) var_s4;
loop_21:
    if (var_v0 != 0) {
        var_s1 += 1;
        if (arg1 != 0) {
            var_v1_3 = D_801C36D8;
            if ((s32) var_s1 < var_v1_3) {
                var_v1_3 = (s32) var_s1;
            }
            D_801C36CC = var_v1_3;
            var_a1_3 = var_s1;
            if ((s32) var_s1 < D_801C36DC) {
                var_a1_3 = (u16) D_801C36DC;
            }
            D_801C36CC = (s32) var_a1_3;
            var_s0_2 = 0;
        } else {
            func_8015FB30((s16) var_s1, (s16) var_s1);
            var_s0_2 = 0;
        }
        do {
            func_80154AFC(&sp10, var_s3);
            var_s0_2 += 1;
        } while (var_s0_2 < 0x64);
        var_v0 = (s32) var_s1 < (s32) var_s4;
        goto loop_21;
    }
}
