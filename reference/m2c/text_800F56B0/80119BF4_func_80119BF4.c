/* m2c reference for func_80119BF4 @ 80119BF4 (140 words). Generated; not compiled or validated. */
s32 func_800FF594(s32, void *);                     /* extern */
? func_80100630(void *);                            /* extern */
? func_801181F0(void *);                            /* extern */
? func_80118484(void *);                            /* extern */
? func_80118F78(void *);                            /* extern */
s32 func_80122F24(s32, void *, ?, s32 *);           /* extern */
void *func_80124820(s32, void *, void *, ?, s32);   /* extern */
s32 func_80178A2C();                                /* extern */
static s32 D_801C34EC = 0;

void func_80119BF4(void *arg0) {
    s32 sp18;
    s32 temp_s0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v0;

    if (arg0->unk38->unkC != 0) {
        if (arg0->unk2A4 != func_80178A2C()) {
            func_80118484(arg0);
        }
        if (func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0xFA0, &sp18) != 0) {
            arg0->unk30F = 1U;
        } else {
            arg0->unk30F = 0U;
        }
        if (arg0->unk310 != 0) {
            if (arg0->unk278 != 0) {
                arg0->unk278 = (s32) (arg0->unk278 - (arg0->unk274 * 4));
                if (arg0->unk278 < 0) {
                    arg0->unk278 = 0;
                }
            }
            func_801181F0(arg0);
        } else {
            var_v1 = 0;
            if ((arg0->unk311 != 0) && (arg0->unk312 == 0)) {
                var_v1 = arg0->unk314 == 0;
            }
            if (var_v1 != 0) {
                arg0->unk3C = 0;
                var_v1_2 = 0;
                if (arg0->unk30F != 0) {
                    var_v1_2 = arg0->unk14 < 0x640;
                }
                if (var_v1_2 != 0) {
                    temp_v0 = func_80124820(D_801C34EC, arg0->unk38 + 0x1C, arg0->unk38 + 0x14, 0, 0x4B0);
                    if (temp_v0 != NULL) {
                        temp_s0 = func_800FF594(arg0->unk40, temp_v0->unk3C + 0x1C);
                        if (temp_s0 == func_800FF594(arg0->unk40, arg0->unk38 + 0x1C)) {
                            arg0->unk3C = (s32) temp_v0->unk3C;
                            arg0->unk312 = 1U;
                            arg0->unk66 = 0;
                        }
                    }
                }
            }
            func_80100630(arg0);
        }
        func_80118F78(arg0);
        return;
    }
    if ((arg0->unk315 != 0) && (func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0x2EE0, &sp18) == 0) && (sp18 >= 0x961)) {
        arg0->unk38->unkC = 1U;
        arg0->unk315 = 0U;
    }
}
