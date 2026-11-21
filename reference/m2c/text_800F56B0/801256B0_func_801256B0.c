/* m2c reference for func_801256B0 @ 801256B0 (145 words). Generated; not compiled or validated. */
? func_801253C8(void *, s32);                       /* extern */
? func_801597FC(void *, s32 *);                     /* extern */

void func_801256B0(s32 arg0, s32 arg1, void *arg2, void *arg3, void *arg4, s32 arg5) {
    s32 sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v1;

    func_801253C8(arg3, arg0 + ((arg1 << 5) + 4) + 4);
loop_1:
    var_v1 = 0;
    if (((u32) (arg4->unk0 + 0x3FFF) >= 0x7FFFU) || (arg4->unk4 >= 0x4000) || (arg4->unk4 < -0x3FFF) || (arg4->unk8 >= 0x4000) || (arg4->unk8 < -0x3FFF)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        arg4->unk0 = (s32) ((s32) arg4->unk0 >> 2);
        arg4->unk4 = (s32) ((s32) arg4->unk4 >> 2);
        arg4->unk8 = (s32) ((s32) arg4->unk8 >> 2);
        goto loop_1;
    }
    func_801597FC(arg4, &sp10);
    temp_v0 = (s32) ((sp10 * arg3->unk0) + (sp14 * arg3->unk4) + (sp18 * arg3->unk8)) >> 0xC;
    temp_a0 = (s32) (temp_v0 * arg3->unk0) >> 0xC;
    sp20 = temp_a0;
    temp_v1 = (s32) (temp_v0 * arg3->unk4) >> 0xC;
    sp24 = temp_v1;
    sp28 = (s32) (temp_v0 * arg3->unk8) >> 0xC;
    arg2->unk0 = (s16) ((u16) sp10 - ((arg5 * temp_a0) / 100));
    arg2->unk2 = (s16) ((u16) sp14 - ((arg5 * temp_v1) / 100));
    arg2->unk4 = (s16) ((u16) sp18 - ((arg5 * sp28) / 100));
}
