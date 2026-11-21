/* m2c reference for func_801667BC @ 801667BC (61 words). Generated; not compiled or validated. */
s32 func_8016CE84();                                /* extern */
void *func_8016F210(?);                             /* extern */
void *func_801793C0(s32);                           /* extern */
void *func_80179894(s32);                           /* extern */

void func_801667BC(s32 arg0) {
    MATRIX sp10;
    s32 var_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_8016F210(0);
    *(s32 *)0x1F8003C0 = func_8016CE84();
    temp_v0 = func_801793C0(arg0);
    *(s32 *)0x1F8003B4 = temp_v0->unk8;
    *(s32 *)0x1F8003B8 = temp_v0->unkC;
    sp10.t[0] = 0;
    sp10.t[1] = 0;
    sp10.t[2] = 0;
    *(s32 *)0x1F8003BC = temp_v0->unk10;
    SetRotMatrix(temp_v0 + 0x14);
    SetLightMatrix(temp_s0 + 0x2C);
    SetTransMatrix(&sp10);
    SetColorMatrix(temp_s0 + 0xC);
    SetBackColor(temp_s0->unk0, temp_s0->unk4, temp_s0->unk8);
    temp_a0 = func_80179894(arg0);
    *(s32 *)0x1F8003C7 = 1;
    var_v1 = 0xE1000000;
    if (temp_a0->unk26 != 0) {
        var_v1 = 0xE1000200;
    }
    if (temp_a0->unk27 != 0) {
        var_v1 |= 0x400;
    }
    *(s32 *)0x1F8003C8 = var_v1;
}
