/* m2c reference for func_8015A05C @ 8015A05C (163 words). Generated; not compiled or validated. */
extern ? D_801B5958;

void *func_8015A05C(void *arg0, void *arg1) {
    s16 temp_t7;
    s16 temp_t7_2;
    s16 temp_t7_3;
    s16 temp_t7_4;
    s16 temp_t7_5;
    s16 temp_t7_6;
    s16 var_t3;
    s16 var_t4;
    s16 var_t5;
    s16 var_t6;
    s32 temp_lo;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 temp_t9_4;
    s32 temp_t9_5;
    s32 temp_t9_6;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;

    temp_t7 = arg0->unk0;
    if (temp_t7 < 0) {
        temp_t7_2 = -temp_t7;
        if (temp_t7_2 < 0) {

        }
        temp_t9 = *(&D_801B5958 + ((temp_t7_2 & 0xFFF) * 4));
        var_t6 = (s16) temp_t9;
        var_t3 = -var_t6;
        var_t0 = temp_t9 >> 0x10;
    } else {
        temp_t9_2 = *(&D_801B5958 + ((temp_t7 & 0xFFF) * 4));
        var_t3 = (s16) temp_t9_2;
        var_t6 = -var_t3;
        var_t0 = temp_t9_2 >> 0x10;
    }
    temp_t7_3 = arg0->unk2;
    if (temp_t7_3 < 0) {
        temp_t7_4 = -temp_t7_3;
        if (temp_t7_4 < 0) {

        }
        temp_t9_3 = *(&D_801B5958 + ((temp_t7_4 & 0xFFF) * 4));
        var_t4 = -(s16) temp_t9_3;
        var_t1 = temp_t9_3 >> 0x10;
    } else {
        temp_t9_4 = *(&D_801B5958 + ((temp_t7_3 & 0xFFF) * 4));
        var_t4 = (s16) temp_t9_4;
        var_t1 = temp_t9_4 >> 0x10;
    }
    temp_t7_5 = arg0->unk4;
    arg1->unkA = var_t6;
    temp_lo = var_t1 * var_t0;
    arg1->unk4 = (s16) ((s32) (var_t4 * var_t0) >> 0xC);
    if (temp_t7_5 < 0) {
        arg1->unk10 = (s16) (temp_lo >> 0xC);
        temp_t7_6 = -temp_t7_5;
        if (temp_t7_6 < 0) {

        }
        temp_t9_5 = *(&D_801B5958 + ((temp_t7_6 & 0xFFF) * 4));
        var_t5 = -(s16) temp_t9_5;
        var_t2 = temp_t9_5 >> 0x10;
    } else {
        arg1->unk10 = (s16) (temp_lo >> 0xC);
        temp_t9_6 = *(&D_801B5958 + ((temp_t7_5 & 0xFFF) * 4));
        var_t5 = (s16) temp_t9_6;
        var_t2 = temp_t9_6 >> 0x10;
    }
    arg1->unk6 = (s16) ((s32) (var_t5 * var_t0) >> 0xC);
    arg1->unk8 = (s16) ((s32) (var_t2 * var_t0) >> 0xC);
    temp_t8 = (s32) (var_t4 * var_t3) >> 0xC;
    arg1->unk0 = (s16) (((s32) (var_t1 * var_t2) >> 0xC) + ((s32) (temp_t8 * var_t5) >> 0xC));
    arg1->unk2 = (s16) (-((s32) (var_t1 * var_t5) >> 0xC) + ((s32) (temp_t8 * var_t2) >> 0xC));
    temp_t8_2 = (s32) (var_t1 * var_t3) >> 0xC;
    arg1->unkE = (s16) (((s32) (var_t4 * var_t5) >> 0xC) + ((s32) (temp_t8_2 * var_t2) >> 0xC));
    arg1->unkC = (s16) (-((s32) (var_t4 * var_t2) >> 0xC) + ((s32) (temp_t8_2 * var_t5) >> 0xC));
    return arg1;
}
