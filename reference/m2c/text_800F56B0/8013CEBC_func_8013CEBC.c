/* m2c reference for func_8013CEBC @ 8013CEBC (43 words). Generated; not compiled or validated. */
s32 func_8013C568(s32);                             /* extern */
static s32 D_801C34F4 = 0;

void func_8013CEBC(void *arg0, void *arg1, s16 arg2) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_8013C568(D_801C34F4);
    var_a1 = 0;
    if ((temp_v0 < arg0->unk10) || (arg0->unk10 == -1)) {
        var_a1 = 1;
    }
    if (var_a1 != 0) {
        arg0->unk10 = temp_v0;
        arg0->unk4 = (s32) arg1->unk0;
        arg0->unk8 = (s32) arg1->unk4;
        arg0->unkC = (s32) arg1->unk8;
        arg0->unk18 = arg2;
    }
    arg0->unk14 = 1;
}
