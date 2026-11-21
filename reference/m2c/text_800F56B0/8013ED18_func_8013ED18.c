/* m2c reference for func_8013ED18 @ 8013ED18 (121 words). Generated; not compiled or validated. */
? func_8013E6C8(? *);                               /* extern */
? func_80159CCC(void *, ? *);                       /* extern */
? func_8015A05C(void *, ? *, u8);                   /* extern */
extern s16 D_801C385C;
extern s16 D_801C385E;
extern ? D_801E3F78;

void func_8013ED18(void) {
    ? sp10;
    ? *var_s0;
    s16 var_s2;
    s32 var_a0;
    u8 temp_a2;
    void *temp_s1;
    void *temp_v0;
    void *var_s3;

    var_s0 = &D_801E3F78;
    var_s2 = 0x10;
    if (D_801C385E == 0) {
        var_s2 = D_801C385C;
    }
    var_s3 = &D_801E3F78 + 0x18;
loop_3:
    var_s2 -= 1;
    var_a0 = 0;
    if (var_s2 != -1) {
        if (var_s0->unk24 != 3) {
            temp_v0 = var_s0->unk0;
            if (temp_v0 != NULL) {
                var_a0 = (u32) temp_v0->unk0 > 0U;
            }
        }
        if (var_a0 != 0) {
            temp_s1 = var_s0->unk0;
            var_s0->unk14 = (s32) (var_s0->unk14 - ((s32) var_s0->unk14 >> var_s0->unk22));
            temp_s1->unk24 = (s32) (temp_s1->unk24 + var_s0->unk14);
            var_s0->unk14 = (s32) (var_s0->unk14 - 2);
            if ((s16) var_s0->unk20 >= temp_s1->unk24) {
                func_8013E6C8(var_s0);
                var_s3 += 0x28;
            } else {
                var_s0->unkC = (s32) (var_s0->unkC - ((s32) var_s0->unkC >> var_s0->unk22));
                temp_s1->unk1C = (s32) (temp_s1->unk1C + var_s0->unkC);
                var_s0->unk10 = (s32) (var_s0->unk10 - ((s32) var_s0->unk10 >> var_s0->unk22));
                temp_s1->unk20 = (s32) (temp_s1->unk20 + var_s0->unk10);
                var_s0->unk18 = (u16) (var_s0->unk18 - ((s16) var_s0->unk18 >> var_s0->unk23));
                var_s0->unk1A = (u16) (var_s0->unk1A - ((s16) var_s0->unk1A >> var_s0->unk23));
                temp_a2 = var_s0->unk23;
                var_s0->unk1C = (u16) (var_s0->unk1C - ((s16) var_s0->unk1C >> temp_a2));
                func_8015A05C(var_s3, &sp10, temp_a2);
                func_80159CCC(temp_s1 + 0x28, &sp10);
                goto block_11;
            }
        } else {
block_11:
            var_s3 += 0x28;
        }
        var_s0 += 0x28;
        goto loop_3;
    }
}
