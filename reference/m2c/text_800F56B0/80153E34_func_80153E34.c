/* m2c reference for func_80153E34 @ 80153E34 (65 words). Generated; not compiled or validated. */
s32 func_801244FC(s32, s32);                        /* extern */
s32 func_80124A30(s32, s32, s32 *);                 /* extern */
s32 func_80125094(void *, s32);                     /* extern */
void *func_8013FFD0();                              /* extern */
? func_80140500(void *);                            /* extern */
static s32 D_801C34EC = 0;

s32 func_80153E34(void *arg1, s32 arg2, s8 arg3) {
    s32 sp10;
    s32 var_v0;
    u16 var_v1;
    void *temp_v0;

    temp_v0 = func_8013FFD0();
    var_v0 = 0;
    if (temp_v0 != NULL) {
        temp_v0->unkAF = arg3;
        var_v1 = 0xB4;
        if (arg3 == 9) {
            var_v1 = 0x78;
        }
        temp_v0->unkAC = var_v1;
        temp_v0->unk0 = arg1;
        temp_v0->unk4 = (s32) arg1->unk738;
        if ((arg2 == 0) || (func_80125094(arg1 + 0x1E4, arg2 + 0x1C) >= 0x641)) {
            temp_v0->unk8 = 0;
            temp_v0->unkAC = (u16) ((s32) (temp_v0->unkAC << 0x10) >> 0x12);
        } else {
            if (func_80124A30(D_801C34EC, arg2, &sp10) & 0xFF) {
                temp_v0->unk8 = func_801244FC(D_801C34EC, sp10);
            } else {
                temp_v0->unk8 = 0;
            }
            temp_v0->unkC = arg2;
        }
        func_80140500(temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
