/* m2c reference for func_8010B4EC @ 8010B4EC (52 words). Generated; not compiled or validated. */
s32 func_80123A68(s32, void *, s32, s32, s32 *, ? *); /* extern */
s32 func_801244FC(s32, s32);                        /* extern */
s32 func_80124A30(s32, s32, s32 *);                 /* extern */
static s32 D_801C34EC = 0;

s32 func_8010B4EC(s32 arg0, s32 arg1) {
    s32 sp18;
    s32 sp1C;
    ? sp20;
    s32 sp24;
    s32 var_v0;
    void *temp_s1;
    void *temp_v0;

    memset(&sp18, 0, 8);
    sp18 = 0xBB8;
    temp_s1 = arg0 + (arg1 * 4);
    sp1C = 0x1F40;
    temp_v0 = temp_s1->unk3A0;
    var_v0 = 0;
    if (func_80124A30(D_801C34EC, func_80123A68(D_801C34EC, temp_s1->unk3A0, temp_v0->unk738 + 0x1C, temp_v0->unk738 + 0x14, &sp18, &sp20), &sp24) & 0xFF) {
        var_v0 = func_801244FC(D_801C34EC, sp24);
    }
    return var_v0;
}
