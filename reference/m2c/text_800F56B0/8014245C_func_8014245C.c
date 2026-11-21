/* m2c reference for func_8014245C @ 8014245C (91 words). Generated; not compiled or validated. */
? func_800FECB4(s32 *, s32, s16, void *);           /* extern */
? func_800FF164(s32 *, s16, s16, void *);           /* extern */
u16 func_800FF20C(s32 *, s32);                      /* extern */
? func_8010B62C(s32, ?, ?);                         /* extern */
? func_80118484(void *);                            /* extern */
static s32 D_801C34EC = 0;

void func_8014245C(void *arg0) {
    s32 var_a0;
    s32 var_v0;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_2;

    var_v0 = 0;
    if (arg0->unk330 != NULL) {
        temp_v1 = arg0->unk330;
        var_a0 = 0;
        if ((temp_v1->unk10C <= 0) || (temp_v1->unkA0 != 0)) {
            var_a0 = 1;
        }
        var_v0 = 1;
        if ((var_a0 == 0) && ((temp_v1_2 = arg0->unk330, (temp_v1_2->unk1A2 != 0)) || (var_v0 = 0 == 0, (temp_v1_2->unk8B != 0)))) {
            var_v0 = 1 == 0;
        }
    }
    if (var_v0 != 0) {
        arg0->unk334 = 5;
        arg0->unk58 = func_800FF20C(arg0->unk40, arg0->unk320 + 0x1C);
        temp_s0 = arg0 + 8;
        arg0->unk5C = (u16) (*arg0->unk40 + ((s32) (arg0->unk58 << 0x10) >> 0xB))->unkC;
        arg0->unk5A = (u16) arg0->unk5C;
        func_800FECB4(arg0->unk40, arg0->unk320 + 0x1C, (s16) arg0->unk5C, temp_s0);
        func_800FF164(arg0->unk40, (s16) arg0->unk58, (s16) arg0->unk5C, temp_s0);
        arg0->unk66 = 0;
        arg0->unk278 = 0;
        arg0->unk27C = 0x1E;
        arg0->unk284 = 0x1E;
        func_80118484(arg0);
        arg0->unk338 = 0;
        arg0->unk33C = 0;
        func_8010B62C(D_801C34EC + 0x6220, 0x25, 1);
    }
}
