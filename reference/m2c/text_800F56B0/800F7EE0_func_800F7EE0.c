/* m2c reference for func_800F7EE0 @ 800F7EE0 (47 words). Generated; not compiled or validated. */
s32 func_801250C8(s32, void *);                     /* extern */
? func_801253C8(void *, s32);                       /* extern */

void func_800F7EE0(void *arg0) {
    s32 var_a0;
    void *temp_s1;

    var_a0 = 0;
    if (arg0->unk58 == 0x12) {
        var_a0 = arg0->unk78C < (arg0->unk85C * 2);
    }
    if (var_a0 != 0) {
        temp_s1 = arg0 + 0x844;
        if (func_801250C8(arg0->unk34, temp_s1) >= 0x321) {
            func_801253C8(temp_s1, arg0->unk34);
            if (arg0->unk78C < func_801250C8(arg0->unk34, *arg0->unk44 + ((s32) (arg0->unk5C << 0x10) >> 0xB))) {
                arg0->unk941 = 1;
                arg0->unk8EC = 0x1A4;
            }
        }
    }
}
