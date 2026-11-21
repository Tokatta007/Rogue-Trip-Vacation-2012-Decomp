/* m2c reference for func_800F56B0 @ 800F56B0 (115 words). Generated; not compiled or validated. */
? func_800F587C(void *);                            /* extern */
u16 func_800FED80(s32, ?);                          /* extern */
? func_800FF890(void *, s32, s32);                  /* extern */
? func_800FF8B8(void *, s16);                       /* extern */
s32 func_801233B4(s32, s32);                        /* extern */
? func_801253C8(void *, s32);                       /* extern */
? func_80125420(void *, s32);                       /* extern */
? func_8012A120(s32, s32, void *, void *);          /* extern */
? func_80142918(void *);                            /* extern */
? func_8014645C(void *);                            /* extern */
extern s32 D_801C3720;
extern s32 D_801C3724;
static s32 D_801C34EC = 0;
static s32 D_801C34F0 = 0;

void func_800F56B0(void *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_s0;
    void *var_a0;
    void *var_a0_2;

    arg0->unk7B8 = 2;
    arg0->unk738 = arg1;
    arg0->unk750 = -1;
    arg0->unk7C0 = arg3;
    arg0->unk7C4 = arg5;
    arg0->unk7C8 = func_801233B4(D_801C34EC, arg5);
    temp_s0 = arg0 + 0x1E4;
    arg0->unk7D0 = (s32) arg2;
    arg0->unk860 = 0xC8;
    func_8012A120(D_801C34F0, arg5, arg0, temp_s0);
    var_a0 = NULL;
    if (arg0 != NULL) {
        var_a0 = arg0 + 4;
    }
    func_800FF890(var_a0, arg0->unk738, arg4);
    arg0->unk4 = 0;
    arg0->unk894 = -1;
    arg0->unk93B = 0;
    arg0->unk8B8 = 0;
    arg0->unk8D0 = 0;
    arg0->unk7DC = 0;
    var_a0_2 = NULL;
    arg0->unk62 = func_800FED80(arg4, 1);
    if (arg0 != NULL) {
        var_a0_2 = arg0 + 4;
    }
    func_800FF8B8(var_a0_2, (s16) arg0->unk62);
    func_80125420(arg0 + 0x1F0, arg0->unk738 + 0x14);
    func_801253C8(temp_s0, arg0->unk738 + 0x1C);
    arg0->unk1EC = (s32) (arg0->unk1EC - (s16) arg0->unk16C);
    arg0->unk77C = 0x1A4;
    arg0->unk8D8 = 0x690;
    func_80142918(arg0);
    func_800F587C(arg0);
    arg0->unk15E = (u16) arg0->unk15C;
    if (arg0->unk7C0 == 0xD0) {
        D_801C3724 = 0;
        arg0->unk19E = 0;
        D_801C3720 = 0;
        arg0->unk3C->unk8 = 0;
        arg0->unk3C->unk9 = 0;
        arg0->unk3C->unkA = 0;
    }
    func_8014645C(arg0);
    arg0->unk947 = 1;
}
