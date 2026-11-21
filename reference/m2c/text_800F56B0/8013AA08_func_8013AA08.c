/* m2c reference for func_8013AA08 @ 8013AA08 (177 words). Generated; not compiled or validated. */
? func_80154AFC(? *, ? *, s32);                     /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167620(?, s32, s32, ? *, void *);          /* extern */
s32 func_8016BDA8(s32);                             /* extern */
? func_801796BC(s32, ? *, ? *, s32 *, u32 *);       /* extern */
extern ? D_801B3960;
extern ? D_801DFF40;
extern ? D_801DFF50;
static ? D_801C34C4;                                /* unable to generate initializer: unknown type */
static s32 D_801C34EC = 0;
static ? D_800F3F30;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3F44;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3F50;                                /* unable to generate initializer: unknown type; const */

void func_8013AA08(s32 arg0, void *arg1) {
    ? sp18;
    ? sp28;
    ? sp2C;
    s32 sp30;
    u32 sp34;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    void *temp_a1;

    var_s1 = 0;
    var_s3 = 0;
loop_1:
    if (var_s1 < (s32) D_801B3960.unk6) {
        if (((D_801C34EC + (var_s3 + 0xB788))->unk7CC == arg0) && (func_8016BDA8(var_s1) != 0)) {
            func_801796BC(arg0, &sp28, &sp2C, &sp30, &sp34);
            if ((var_s1 + &D_801B3960)->unk10 != 0) {
                if (*((var_s1 * 4) + &D_801DFF50) < 0) {
                    func_80167088(1, 0xC8, 0xC8, 0x32);
                    func_80167620(1, sp30 >> 1, ((s32) (sp34 + (sp34 >> 0x1F)) >> 1) - 0xF, &D_800F3F30, arg1);
                    func_80167088(0, 0xFF, 0x32, 0x32);
                    func_80167620(0, sp30 >> 1, ((s32) sp34 / 2) - 5, "PRESS X", arg1);
                    func_80167088(0, 0xFF, 0x32, 0x32);
                    func_80167620(0, sp30 >> 1, ((s32) sp34 / 2) + 0xA, &D_800F3F44, arg1);
                    var_s3 += 0x8B8;
                } else {
                    goto block_8;
                }
            } else {
block_8:
                var_s0 = 0;
                if (arg0 == 1) {
                    var_s0 = ((u32) ((D_801C34EC + 0x6220)->unk3A8 ^ 1) > 0U) * 8;
                }
                func_80154AFC(&sp18, &D_800F3F50, (var_s3 + D_801C34EC + 0xB788)->unk7F4 + *((var_s1 * 4) + &D_801DFF40));
                func_80167620(1, sp30 - 0x27, 0x16 - var_s0, &sp18, arg1);
                temp_a1 = arg1->unk8;
                temp_a1->unk3 = 5;
                temp_a1->unk7 = 0x28;
                temp_a1->unk4 = 0;
                temp_a1->unk5 = 0;
                temp_a1->unk6 = 0;
                temp_v0 = 0x15 - var_s0;
                temp_a0 = (u16) sp30 - 0x4A;
                temp_v1 = (u16) sp30 - 4;
                temp_a1->unk8 = temp_a0;
                temp_a1->unkA = temp_v0;
                temp_a1->unkC = temp_v1;
                temp_a1->unkE = temp_v0;
                temp_v0_2 = 0x21 - var_s0;
                temp_a1->unk10 = temp_a0;
                temp_a1->unk12 = temp_v0_2;
                temp_a1->unk14 = temp_v1;
                temp_a1->unk16 = temp_v0_2;
                AddPrim(arg1->unk0, temp_a1);
                arg1->unk8 = (void *) (arg1->unk8 + 0x60);
                goto block_11;
            }
        } else {
block_11:
            var_s3 += 0x8B8;
        }
        var_s1 += 1;
        goto loop_1;
    }
}
