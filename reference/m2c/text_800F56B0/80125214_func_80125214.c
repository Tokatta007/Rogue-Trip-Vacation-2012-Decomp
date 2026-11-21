/* m2c reference for func_80125214 @ 80125214 (94 words). Generated; not compiled or validated. */
s32 func_801594CC(s32);                             /* extern */
s32 func_8015959C(s32);                             /* extern */
? func_801597FC(s32 *, ?);                          /* extern */
? func_80163E3C(s32 *);                             /* extern */

void func_80125214(void *arg0, ? arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;

    var_v0 = arg0->unk0;
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    if (var_v0 >= 0x401) {
        sp20 = arg0->unk0 + 0x800;
        sp24 = arg0->unk4;
        sp28 = arg0->unk8 + 0x800;
        func_80163E3C(&sp20);
        sp10 = func_801594CC(sp28);
        var_a0 = sp20;
        sp14 = func_8015959C(sp28);
    } else {
        sp10 = func_801594CC(arg0->unk8);
        sp14 = func_8015959C(arg0->unk8);
        var_a0 = arg0->unk0;
    }
    sp18 = func_801594CC(var_a0);
    if (((u32) (sp10 + 0x3FFF) >= 0x7FFFU) || (sp14 >= 0x4000) || (sp14 < -0x3FFF) || (sp18 >= 0x4000) || (sp18 < -0x3FFF)) {
        do {
loop_10:
            temp_v0 = sp10 >> 2;
            temp_v1 = sp14 >> 2;
            temp_a0 = sp18 >> 2;
            sp10 = temp_v0;
            sp14 = temp_v1;
            sp18 = temp_a0;
            if ((u32) (temp_v0 + 0x3FFF) >= 0x7FFFU) {
                goto loop_10;
            }
            if (temp_v1 >= 0x4000) {
                goto loop_10;
            }
            if (temp_v1 < -0x3FFF) {
                goto loop_10;
            }
            if (temp_a0 >= 0x4000) {
                goto loop_10;
            }
        } while (temp_a0 < -0x3FFF);
    }
    func_801597FC(&sp10, arg1);
}
