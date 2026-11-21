/* m2c reference for func_80127344 @ 80127344 (98 words). Generated; not compiled or validated. */
? func_80127108(s32, u16, u16);                     /* extern */
extern ? D_8018403C;
extern ? D_8018444C;
static s32 D_801C32D4 = 0;

void func_80127344(void) {
    ? *var_a1;
    ? *var_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v0;
    u16 var_a1_2;
    u16 var_a2;
    void *temp_v0;

    var_a0 = 0;
    var_s3 = 0;
    if (D_801C32D4 > 0) {
        var_v1 = &D_8018444C;
        var_a1 = &D_8018444C;
        do {
            if ((var_v1->unk18 != 0) && ((var_v0 = var_a0 < var_s3, (var_v1->unk0 != 0)) || (var_v0 = var_a0 < var_s3, (var_v1->unk4 != 0)))) {
                if (var_v0 != 0) {
                    var_a1->unk0 = (s32) var_v1->unk0;
                    var_a1->unk4 = (s32) var_v1->unk4;
                    var_a1->unk8 = (s32) var_v1->unk8;
                    var_a1->unkC = (s32) var_v1->unkC;
                    var_a1->unk10 = (s32) var_v1->unk10;
                    var_a1->unk14 = (s32) var_v1->unk14;
                    var_a1->unk18 = (s32) var_v1->unk18;
                    var_a1->unk1C = (s32) var_v1->unk1C;
                }
                var_a1 += 0x20;
                var_a0 += 1;
            }
            var_s3 += 1;
            var_v1 += 0x20;
        } while (var_s3 < D_801C32D4);
    }
    D_801C32D4 = var_a0;
    var_s3_2 = 0;
    if (var_a0 > 0) {
        var_s4 = 0;
        do {
            var_s2 = var_s3_2 << 5;
loop_12:
            var_s0 = 0;
            temp_v0 = var_s2 + &D_8018444C;
            var_a0_2 = temp_v0->unk0;
            var_a1_2 = D_8018403C.unk2;
            var_a2 = D_8018403C.unk4;
loop_13:
            if (var_a0_2 != 0) {
                func_80127108(var_a0_2, var_a1_2, var_a2);
            }
            var_s0 += 1;
            var_a0_2 = temp_v0->unk4;
            var_a1_2 = D_8018403C.unkA;
            var_a2 = D_8018403C.unkC;
            if (var_s0 < 2) {
                goto loop_13;
            }
            var_s4 += 1;
            var_s2 += 0xC;
            if (var_s4 < 2) {
                goto loop_12;
            }
            var_s3_2 += 1;
            var_s4 = 0;
        } while (var_s3_2 < D_801C32D4);
    }
}
