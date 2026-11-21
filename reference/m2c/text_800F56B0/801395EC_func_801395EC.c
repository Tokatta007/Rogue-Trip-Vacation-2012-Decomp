/* m2c reference for func_801395EC @ 801395EC (104 words). Generated; not compiled or validated. */
? func_8013A898(s32, s32, ?, ?);                    /* extern */
? func_80154AFC(? *, ? *, s32, ?);                  /* extern */
? func_80167020(?, s32, s32, ? *);                  /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167104(?);                                 /* extern */
s32 func_801F56DC(s32);                             /* extern */
extern ? D_801B3960;
static s32 D_801C34EC = 0;
static ? D_800F3D80;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3D90;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3DB0;                                /* unable to generate initializer: unknown type; const */

void func_801395EC(void) {
    ? sp10;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    void *temp_v1;

    var_s3 = 0;
    func_80167104(0);
    func_80167020(0, 0xC8, 0x1E, &D_800F3D80);
    var_s1 = 0;
    var_s4 = 0;
loop_1:
    if (var_s1 < (s32) D_801B3960.unk6) {
        var_s2 = 0x4B;
        if (var_s1 == 1) {
            var_s2 = 0x8C;
        }
        var_a0 = var_s3 + 0x2F;
        if ((u8) D_801B3960.unk6 >= 2U) {
            var_a1 = var_s2 - 5;
            if ((D_801C34EC + 0x6220)->unk3A8 == 1) {
                var_s3 = 0xA;
                if (var_s1 == 0) {
                    var_s3 = -0xA;
                }
                var_a0 = var_s3 + 0x2F;
                goto block_9;
            }
        } else {
block_9:
            var_a1 = var_s2 - 5;
        }
        func_8013A898(var_a0, var_a1, 0xDC, 0x12);
        func_80167088(1, 0x9F, 0x23, 0x23);
        func_80154AFC(&sp10, &D_800F3D90, func_801F56DC(var_s1), 0x51A4);
        temp_s0 = var_s3 + 0xA0;
        func_80167020(1, temp_s0, var_s2, &sp10);
        if (func_801F56DC(var_s1) >= 0x51A4) {
            func_80167088(1, 0x9F, 0x23, 0x23);
            func_80167020(1, temp_s0, var_s2 + 0x14, &D_800F3DB0);
            temp_v1 = D_801C34EC + (var_s4 + 0xB788);
            temp_v1->unk7DC = (s32) (temp_v1->unk7DC + 0x2710);
        }
        var_s4 += 0x8B8;
        var_s1 += 1;
        goto loop_1;
    }
}
