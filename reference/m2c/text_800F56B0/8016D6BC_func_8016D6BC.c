/* m2c reference for func_8016D6BC @ 8016D6BC (37 words). Generated; not compiled or validated. */
? func_8016D750(s32, u8);                           /* extern */

void func_8016D6BC(void *arg0, u8 arg1) {
    s32 var_v1;
    s32 var_v1_2;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg1 < (u32) (arg0->unk3 & 0x7F))) {
        var_v1 = (arg0->unk0 & 0xF) == 9;
    }
    if (var_v1 != 0) {
        arg0->unk4 = arg1;
        var_v1_2 = 0;
        if (arg0->unk8 != 0) {
            var_v1_2 = arg0->unk6 == arg0->unk4;
        }
        if (var_v1_2 != 0) {
            func_8016D750(arg0->unk8, arg0->unk5);
        }
    }
}
