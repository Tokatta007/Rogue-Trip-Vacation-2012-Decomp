/* m2c reference for func_80102E88 @ 80102E88 (48 words). Generated; not compiled or validated. */
? func_801253C8(s32, s32);                          /* extern */

void func_80102E88(s32 arg0, s32 arg1, s32 arg2, u8 arg3) {
    s32 var_a0;
    s32 var_a1;
    void *temp_v1;

    temp_v1 = arg0 + arg1;
    temp_v1->unk3F0 = arg3;
    if (temp_v1->unk3F0 != 0) {
        if (arg2 != 0) {
            func_801253C8(arg0 + ((arg1 * 0xC) + 0x368), arg2);
            var_a1 = arg2;
            var_a0 = (arg0 + (arg1 * 4))->unk390 + 0x1C;
        } else {
            var_a0 = arg0 + ((arg1 * 0xC) + 0x368);
            var_a1 = (arg0 + (arg1 * 4))->unk390 + 0x1C;
        }
        func_801253C8(var_a0, var_a1);
        (arg0 + arg1)->unk3F2 = 0;
        return;
    }
    temp_v1->unk3F2 = 0;
}
