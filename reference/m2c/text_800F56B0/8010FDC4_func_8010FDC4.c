/* m2c reference for func_8010FDC4 @ 8010FDC4 (61 words). Generated; not compiled or validated. */
? func_801597FC(void *, s32);                       /* extern */

void func_8010FDC4(void *arg0, void *arg1, s16 arg2) {
    s16 var_s0;
    s32 var_v1;

    var_s0 = arg2;
loop_1:
    var_v1 = 0;
    if (((u32) (arg1->unk0 + 0x3FFF) >= 0x7FFFU) || (arg1->unk4 >= 0x4000) || (arg1->unk4 < -0x3FFF) || (arg1->unk8 >= 0x4000) || (arg1->unk8 < -0x3FFF)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        arg1->unk0 = (s32) ((s32) arg1->unk0 >> 2);
        arg1->unk4 = (s32) ((s32) arg1->unk4 >> 2);
        arg1->unk8 = (s32) ((s32) arg1->unk8 >> 2);
        goto loop_1;
    }
    func_801597FC(arg1, arg0 + 0x454);
    if (var_s0 < 0) {
        var_s0 = 0;
    }
    arg0->unk504 = var_s0;
}
