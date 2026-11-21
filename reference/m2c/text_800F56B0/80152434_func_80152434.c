/* m2c reference for func_80152434 @ 80152434 (172 words). Generated; not compiled or validated. */
? func_8011BC6C(void **, s32 *, ?, ?, s32, s32);    /* extern */
s32 func_8012340C(s32);                             /* extern */
void *func_801244FC(s32, s32);                      /* extern */
s32 func_80124A30(s32, void **, s32 *);             /* extern */
void *func_80124CBC(s32);                           /* extern */
? func_801253C8(s32, s32);                          /* extern */
? func_80125464(void *, s32);                       /* extern */
? func_8012A154(s32, ? *, ?, ?, s32, s32);          /* extern */
? func_8015A05C(void *, void *);                    /* extern */
s16 func_80178A1C(s32);                             /* extern */
static s32 D_801C34EC = 0;
static s32 D_801C34F0 = 0;
static ? D_801C35F0;                                /* unable to generate initializer: unknown type */

void func_80152434(s32 arg0, s32 arg1, void **arg2, s32 arg3) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    ? sp28;
    ? sp2C;
    s32 sp30;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v1;

    var_a0 = 0;
    temp_s1 = arg0 + (arg3 * 4);
    temp_s2 = temp_s1->unk1854;
    temp_s0 = func_801244FC(D_801C34EC, func_8012340C(D_801C34EC));
    sp28 = (unaligned s32) D_801C35F0.unk0;
    sp2C = (unaligned s32) D_801C35F0.unk4;
    if (temp_s0->unk2A5 == 0) {
        var_a0 = temp_s0->unk2A7 != 0;
    }
    if (var_a0 != 0) {
        var_v1 = 0;
        if ((D_801C34EC + 0x496C + arg3)->unk1872 == 0) {
            var_v1 = (((func_80178A1C(var_a0) * 0xF3C) / 1000) << 6) < temp_s0->unk20C;
        }
        if (var_v1 != 0) {
            temp_v1 = arg0 + arg3;
            temp_v1->unk1872 = 1;
            (arg0 + (arg3 * 2))->unk186C = 0;
            temp_s1->unk1864 = arg2;
            temp_v1->unk1870 = 0xF;
            if (func_80124A30(D_801C34EC, arg2, &sp30) & 0xFF) {
                temp_s1->unk185C = func_801244FC(D_801C34EC, sp30);
                temp_v0 = func_80124CBC(D_801C34EC);
                temp_v0->unk18 = (s32) temp_s0->unk7C4;
                temp_v0->unkC = (void *) (temp_s0 + 0x1E4);
                temp_v0->unk14 = 0;
                func_8012A154(D_801C34F0, &sp28, 0xF, 1, (s32) (*temp_s1->unk1864)->unk2, 0);
                var_a0_2 = temp_s2 + 0x1C;
            } else {
                temp_s1->unk185C = NULL;
                var_a0_2 = temp_s2 + 0x1C;
            }
            temp_s2->unkC = 1;
            temp_s0_2 = temp_s2 + 0x14;
            func_801253C8(var_a0_2, arg1 + 0x1C);
            func_80125464(temp_s0_2, arg1 + 0x14);
            func_8015A05C(temp_s0_2, temp_s2 + 0x28);
            sp30 = 0;
            do {
                sp18 = 0xF - (rand() & 0x1F);
                sp1C = 0xF - (rand() & 0x1F);
                sp20 = (rand() & 0x3F) + 0xF;
                func_8011BC6C(arg2 + 0x1C, &sp18, 2, 0x2C, 0, 0);
                temp_v0_2 = sp30 + 1;
                sp30 = temp_v0_2;
            } while (temp_v0_2 < 0xA);
        }
    }
}
