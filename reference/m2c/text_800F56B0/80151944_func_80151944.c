/* m2c reference for func_80151944 @ 80151944 (135 words). Generated; not compiled or validated. */
s32 func_8012340C(s32);                             /* extern */
void *func_801244FC(s32, s32);                      /* extern */
? func_80124FC8(void *, VECTOR *, void *);          /* extern */
? func_801253C8(s32, s32);                          /* extern */
? func_80125464(void *, s32);                       /* extern */
? func_8015A05C(void *, void *);                    /* extern */
s16 func_80178A1C(void *);                          /* extern */
static s32 D_801C34EC = 0;

void func_80151944(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    s32 var_s2;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_801244FC(D_801C34EC, func_8012340C(D_801C34EC));
    (arg0 + arg3)->unk1850 = 1;
    temp_a0 = arg0 + (arg3 * 4);
    temp_a0->unk1838 = arg2;
    (arg0 + (arg3 * 2))->unk1840 = 0;
    temp_a0->unk1818 = arg1;
    var_s2 = 0;
    if (temp_v0->unk20C > 0) {
        temp_v1 = arg0 + (arg3 * 0xC);
        temp_v1->unk1804 = (s32) (temp_v1->unk1804 + ((s32) ((s32) temp_v0->unk20C / func_80178A1C(temp_a0)) >> 6));
        var_s2 = 0;
    }
    do {
        temp_s0 = (arg0 + ((arg3 * 4) + (var_s2 * 8)))->unk1820;
        temp_s0->unkC = 1;
        temp_s1 = temp_s0 + 0x14;
        func_801253C8(temp_s0 + 0x1C, arg1 + 0x1C);
        func_80125464(temp_s1, arg1 + 0x14);
        temp_s0->unk14 = 0;
        if (temp_v0->unkBA != 0) {
            temp_s0->unk18 = (u16) (temp_s0->unk18 + 0x800);
        }
        func_8015A05C(temp_s1, temp_s0 + 0x28);
        if (var_s2 == 0) {
            var_v0 = -0x28;
            goto block_9;
        }
        var_v0 = 0x28;
        if (var_s2 == 1) {
            sp10 = 0;
            sp14 = 0x78;
        } else {
block_9:
            sp10 = var_v0;
            sp14 = 0x50;
        }
        sp18 = 0;
        mathMulTransVec(temp_s0 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_a0_2 = temp_s0 + 0x1C;
        func_80124FC8(temp_a0_2, &sp20, temp_a0_2);
        var_s2 += 1;
        temp_s0->unk48 = 2;
        temp_s0->unk4C = 0;
        temp_s0->unk4E = 0;
        temp_s0->unk50 = -0x20;
        temp_s0->unk54 = 0;
        temp_s0->unk56 = 0;
        temp_s0->unk58 = 0;
    } while (var_s2 < 3);
}
