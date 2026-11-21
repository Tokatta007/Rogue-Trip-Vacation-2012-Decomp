/* m2c reference for func_8010058C @ 8010058C (41 words). Generated; not compiled or validated. */
s32 func_800FF040(s32 *, s16, s16);                 /* extern */
? func_801253C8(?, void *);                         /* extern */

void func_8010058C(void *arg0, ? arg1, s32 arg2) {
    s32 var_s0;
    void *temp_a1;

    var_s0 = 0;
loop_1:
    if (var_s0 < 8) {
        temp_a1 = *arg0->unk40 + ((s32) (func_800FF040(arg0->unk40, (s16) arg0->unk58, (s16) arg0->unk5A) << 0x10) >> 0xB);
        var_s0 += 1;
        if ((s8) temp_a1->unk1D == arg2) {
            func_801253C8(arg1, temp_a1);
        } else {
            goto loop_1;
        }
    }
}
