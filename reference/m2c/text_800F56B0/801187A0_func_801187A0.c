/* m2c reference for func_801187A0 @ 801187A0 (120 words). Generated; not compiled or validated. */
u16 func_80118174(void *, s16);                     /* extern */
? func_80118980(void *);                            /* extern */
? func_80118D04(void *);                            /* extern */
s32 func_80176C1C(s32, ?, ?);                       /* extern */

void func_801187A0(void *arg0) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    var_v1 = arg0->unk278;
    if (var_v1 < 0) {
        var_v1 = -var_v1;
    }
    if (var_v1 < (arg0->unk274 * 2)) {
        arg0->unk278 = 0;
    } else {
        var_v1_2 = arg0->unk274;
        if (arg0->unk303 != 0) {
            var_v1_2 *= 2;
        }
        if (arg0->unk2FC != 0) {
            var_v0 = arg0->unk278 - var_v1_2;
        } else {
            var_v0 = arg0->unk278 - (var_v1_2 * 2);
        }
        arg0->unk278 = var_v0;
    }
    var_v1_3 = 0;
    if (arg0->unk298 != 0) {
        var_v1_3 = (u32) (arg0->unk2C0 ^ 0x17C) > 0U;
    }
    if (var_v1_3 != 0) {
        arg0->unk298 = func_80176C1C(arg0->unk298, 0, 5);
    }
    if (arg0->unk29C != 0) {
        arg0->unk29C = func_80176C1C(arg0->unk29C, 0, 5);
    }
    if (arg0->unk303 != 0) {
        func_80118980(arg0);
    } else if (arg0->unk305 != 0) {
        func_80118D04(arg0);
    } else if (arg0->unk278 < (arg0->unk274 * 2)) {
        arg0->unk300 = 0;
        arg0->unk278 = 0;
    }
    if ((arg0->unk306 != 0) && (arg0->unk5E & 0x8000)) {
        arg0->unk5E = func_80118174(arg0, (s16) arg0->unk5E);
        arg0->unk2D8 = 0x64;
        arg0->unk30 = (s32) (*arg0->unk40 + ((s32) (arg0->unk5E << 0x10) >> 0xB));
        arg0->unk2DC = 0;
    }
    arg0->unk38->unk16 = (s16) (arg0->unk2F6 + arg0->unk2F0);
    arg0->unk38->unk14 = (s16) (arg0->unk2F8 + arg0->unk2EE);
}
