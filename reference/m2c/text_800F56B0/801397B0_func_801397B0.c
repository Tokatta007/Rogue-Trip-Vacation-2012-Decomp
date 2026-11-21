/* m2c reference for func_801397B0 @ 801397B0 (121 words). Generated; not compiled or validated. */
? func_8013A898(s32, s32, ?, ?);                    /* extern */
? func_80154AFC(? *, ? *, s32, s32);                /* extern */
? func_80167020(?, s32, s32, ? *);                  /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167104(?);                                 /* extern */
extern ? D_801B3960;
extern ? D_801C3848;
static void *D_801C34EC = NULL;
static ? D_800F3DB0;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3DC4;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3DD0;                                /* unable to generate initializer: unknown type; const */

void func_801397B0(void) {
    ? sp10;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    void *temp_v1;

    var_s3 = 0;
    func_80167104(0);
    func_80167020(0, 0xC8, 0x1E, &D_800F3DC4);
    var_s2 = 0;
    var_s4 = 0;
loop_1:
    if (var_s2 < (s32) D_801B3960.unk6) {
        var_s1 = 0x4B;
        if (var_s2 == 1) {
            var_s1 = 0x8C;
        }
        var_a0 = var_s3 + 0x34;
        if ((u8) D_801B3960.unk6 >= 2U) {
            var_a1 = var_s1 - 5;
            if ((D_801C34EC + 0x6220)->unk3A8 == 1) {
                var_s3 = 0xA;
                if (var_s2 == 0) {
                    var_s3 = -0xA;
                }
                var_a0 = var_s3 + 0x34;
                goto block_9;
            }
        } else {
block_9:
            var_a1 = var_s1 - 5;
        }
        temp_s0 = D_801C34EC->unk12750 * 0x9C4;
        func_8013A898(var_a0, var_a1, 0xD6, 0x25);
        func_80167088(1, 0x9F, 0x23, 0x23);
        func_80154AFC(&sp10, &D_800F3DD0, *((var_s2 * 4) + &D_801C3848), temp_s0);
        temp_s0_2 = var_s3 + 0xA0;
        func_80167020(1, temp_s0_2, var_s1, &sp10);
        if (D_801C34EC->unk12754 == 0) {
            func_80167088(1, 0x9F, 0x23, 0x23);
            func_80167020(1, temp_s0_2, var_s1 + 0x14, &D_800F3DB0);
            temp_v1 = D_801C34EC + (var_s4 + 0xB788);
            temp_v1->unk7DC = (s32) (temp_v1->unk7DC + 0x2710);
        }
        var_s4 += 0x8B8;
        var_s2 += 1;
        goto loop_1;
    }
}
