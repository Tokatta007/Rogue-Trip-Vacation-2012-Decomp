/* m2c reference for func_8012DEA4 @ 8012DEA4 (77 words). Generated; not compiled or validated. */
s32 func_8015880C(s32 *, void **);                  /* extern */
extern ? D_7FFFFF;
extern u8 D_801C37CC;
extern s32 D_801C37D4;
static u32 D_801C333C = 0;
static s32 D_801C3340 = 0;
static s32 D_801C3344 = 0;

s32 func_8012DEA4(void *arg0, u32 arg1) {
    s32 sp10;
    void *sp14;
    ? *var_s0;
    s32 var_a1;
    s32 var_v0;
    u32 temp_v0;

    var_s0 = &D_7FFFFF;
loop_1:
    if (func_8015880C(&sp10, &sp14) != 0) {
        if (var_s0 == NULL) {
            return 0;
        }
        goto loop_1;
    }
    D_801C333C = sp14->unk8;
    if ((u32) sp14->unk8 >= arg1) {
        D_801C37D4 = 1;
    }
    var_a1 = 0;
    if ((D_801C3340 != sp14->unk10) || (D_801C3344 != sp14->unk12)) {
        var_a1 = 1;
    }
    if (var_a1 != 0) {
        D_801C3340 = (s32) sp14->unk10;
        D_801C3344 = (s32) sp14->unk12;
    }
    if (D_801C37CC != 0) {
        temp_v0 = D_801C3340 * 3;
        var_v0 = (s32) (temp_v0 + (temp_v0 >> 0x1F)) >> 1;
    } else {
        var_v0 = (s32) (u16) D_801C3340;
    }
    arg0->unk1C = (u16) var_v0;
    arg0->unk14 = (u16) arg0->unk1C;
    arg0->unk1E = (u16) D_801C3344;
    arg0->unk16 = (u16) arg0->unk1E;
    arg0->unk2A = (u16) D_801C3344;
    return sp10;
}
