/* m2c reference for func_80166234 @ 80166234 (67 words). Generated; not compiled or validated. */
extern void *D_801C3878;

void func_80166234(void *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    void *temp_v1;
    void *var_s0;

    var_s0 = arg0;
    var_s1 = 0;
    if (arg1 > 0) {
        var_s3 = 0xD8;
        var_s2 = 0;
        do {
            var_v0 = var_s1 < 0x10;
            if ((u16) var_s0->unk4 >= 3U) {
                sp10 = var_s0->unk8;
                sp14 = var_s0->unkC;
                sp18 = var_s0->unk10;
                var_v0 = var_s1 < 0x10;
            }
            if (var_v0 != 0) {
                temp_v1 = D_801C3878 + var_s2;
                D_801C3878->unk4 = (s32) (D_801C3878->unk4 + 1);
                temp_v1->unkD8 = (s32) var_s0->unk0;
                temp_v1->unkE8 = (s32) (var_s0->unk6 & 0xFF);
                mathMulVec(arg2 + (var_s0->unk7 << 5), (VECTOR *) &sp10, D_801C3878 + var_s3 + 4);
            }
            var_s3 += 0x14;
            var_s2 += 0x14;
            var_s1 += 1;
            var_s0 += var_s0->unk4 * 4;
        } while (var_s1 < arg1);
    }
}
