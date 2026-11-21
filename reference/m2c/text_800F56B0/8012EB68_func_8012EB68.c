/* m2c reference for func_8012EB68 @ 8012EB68 (206 words). Generated; not compiled or validated. */
? func_800FF890(void *, s32, s32);                  /* extern */
? func_801011E4(void *, s32, ?, ?);                 /* extern */
? func_80102E88(void *, s32, void *, ?);            /* extern */
? func_80111068(void *, s32);                       /* extern */
s32 func_801233B4(void *, s32);                     /* extern */
? func_8012A120(s32, s32, void *, void *);          /* extern */
? func_8012EEA0(void *);                            /* extern */
? func_8012F0EC(void *, ?);                         /* extern */
s32 func_8013A06C();                                /* extern */
? func_80142918(void *);                            /* extern */
? func_8014645C(void *);                            /* extern */
? func_80147934(void *);                            /* extern */
s32 func_8016BDA8(s32);                             /* extern */
s32 func_8016BDC0(s32);                             /* extern */
s32 func_8016BE60(s32);                             /* extern */
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;

void func_8012EB68(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    void *var_a0;

    arg0->unk7B8 = 1;
    arg0->unk738 = arg1;
    arg0->unk750 = arg2;
    arg0->unk7C0 = arg3;
    arg0->unk7C4 = arg5;
    arg0->unk7C8 = func_801233B4(D_801C34EC, arg5);
    arg0->unk7D0 = (s32) (s16) arg2;
    arg0->unk82F = 0;
    arg0->unk890 = 0;
    if (arg0->unk7C0 != 0xF0) {
        func_8012A120(D_801C34F0, arg5, arg0, arg0 + 0x1E4);
    }
    var_a0 = NULL;
    if (arg0 != NULL) {
        var_a0 = arg0 + 4;
    }
    func_800FF890(var_a0, arg0->unk738, arg4);
    arg0->unk4 = 0;
    arg0->unk40 = arg1;
    func_80111068(arg0 + 0x830, arg0->unk7D0);
    func_80142918(arg0);
    if (func_8013A06C() == 0) {
        arg0->unk110 = (s32) (arg0->unk110 + ((s32) arg0->unk110 >> 1));
        if (D_801C34EC->unk7D8 < 3) {
            temp_v1 = D_801C34EC->unk12688;
            switch (temp_v1) {                      /* irregular */
            case 0:
                arg0->unk110 = (s32) (arg0->unk110 * 2);
                break;
            case 1:
                var_v0 = (s32) arg0->unk110 >> 1;
block_15:
                arg0->unk110 = (s32) (arg0->unk110 + var_v0);
                break;
            case 2:
                var_v0 = (s32) arg0->unk110 >> 2;
                goto block_15;
            }
        }
    }
    arg0->unk10C = (s32) arg0->unk110;
    func_8012F0EC(arg0, -1);
    func_8014645C(arg0);
    temp_v1_2 = arg0->unk7D0;
    arg0->unk78C = 0;
    arg0->unk788 = 0;
    arg0->unk19E = (s8) ((D_801C34EC + temp_v1_2)->unk127B6 == 0);
    arg0->unk19F = (s8) ((D_801C34EC + temp_v1_2)->unk127BA & 0xFF);
    arg0->unk1A0 = (s8) ((D_801C34EC + temp_v1_2)->unk127BE & 0xFF);
    arg0->unk1A1 = (s8) ((D_801C34EC + temp_v1_2)->unk127C2 & 0xFF);
    if ((D_801C34EC + temp_v1_2)->unk127C6 != 0) {
        arg0->unk1A2 = 0x21;
        func_80147934(arg0);
    }
    arg0->unk7B4 = func_8016BDC0(func_8016BE60(arg0->unk750));
    if (func_8016BDA8(arg0->unk7D0) != 0) {
        func_80102E88(D_801C34EC + 0x6220, func_8016BE60(arg0->unk750), arg0 + 0x1E4, 0);
        func_801011E4(D_801C34EC + 0x6220, func_8016BE60(arg0->unk750), 6, 0);
        (D_801C34EC + 0x6220 + (func_8016BE60(arg0->unk750) * 2))->unk3E8 = 0;
    }
    func_8012EEA0(arg0);
}
