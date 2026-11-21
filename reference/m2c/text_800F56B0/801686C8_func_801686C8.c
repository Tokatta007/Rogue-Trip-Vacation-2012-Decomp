/* m2c reference for func_801686C8 @ 801686C8 (94 words). Generated; not compiled or validated. */
? func_8016F9A8(void *, void *, s32 *);             /* extern */
extern ? D_801BC1F8;

void func_801686C8(void *arg0, void *arg1, void *arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v1;
    void *var_s0;

    var_s2 = 0;
    if (arg0->unk48 > 0) {
        var_s0 = arg2;
        do {
            if (var_s0->unk4 == 0) {
                func_8016F9A8(arg0 + 0x28, arg0 + ((var_s2 * 8) + 0x4C), &sp10);
                temp_v0 = sp10 + arg1->unk0;
                sp10 = temp_v0;
                temp_v0_2 = sp14 + arg1->unk4;
                sp14 = temp_v0_2;
                temp_v0_3 = sp18 + arg1->unk8;
                sp18 = temp_v0_3;
                var_v1 = (temp_v0 * D_801BC1F8.unk0) + (temp_v0_2 * D_801BC1F8.unk2) + (temp_v0_3 * D_801BC1F8.unk4);
                if (var_v1 < 0) {
                    var_v1 += 0xFFF;
                }
                temp_v1 = var_v1 >> 0xC;
                if ((temp_v1 + D_801BC1F8.unk8) > 0) {
                    var_s0->unk4 = 1;
                    var_s0->unk18 = 0;
                    var_s0->unk22 = (u16) D_801BC1F8.unkE;
                    var_s0->unk20 = 0;
                    var_s0->unk1C = (s16) D_801BC1F8.unkD;
                    var_s0->unk8 = (s32) D_801BC1F8.unk0;
                    var_s0->unkC = (s32) D_801BC1F8.unk2;
                    var_s0->unk10 = (s32) D_801BC1F8.unk4;
                    var_s0->unk14 = (s32) (temp_v1 + D_801BC1F8.unk8);
                }
            }
            var_s0 += 0x20;
            var_s2 += 1;
        } while (var_s2 < arg0->unk48);
    }
}
