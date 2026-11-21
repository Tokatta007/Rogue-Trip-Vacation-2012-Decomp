/* m2c reference for func_801520B4 @ 801520B4 (212 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
s32 func_801233B4(void *, s16);                     /* extern */
s32 func_8012340C(void *, s32);                     /* extern */
void *func_801244FC(void *, s32);                   /* extern */
void *func_80124584(void *, ?, s32);                /* extern */
void *func_80124CBC(void *, ?);                     /* extern */
? func_8012A154(s32, ? *, ?, ?, s32, s32);          /* extern */
? func_8013CAE0(s32, ?, void *);                    /* extern */
? func_8014F214(s32, s32 *, ? *, ?);                /* extern */
? func_801548C8(s32, void *);                       /* extern */
? func_801683EC(void *, ? *, ?, s32);               /* extern */
? func_801F71E8(void *, void *);                    /* extern */
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;
static s32 D_801C34F4 = 0;
static ? D_801C35E4;                                /* unable to generate initializer: unknown type */

void func_801520B4(s32 arg0, s32 arg1, s32 arg2, s32 arg4) {
    s32 sp18;
    ? sp28;
    s16 sp68;
    s16 sp6A;
    ? sp1B0;
    ? sp1B4;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s0_2;

    sp1B0 = (unaligned s32) D_801C35E4.unk0;
    sp1B4 = (unaligned s32) D_801C35E4.unk4;
    temp_s3 = (arg0 + ((arg2 * 4) + (arg1 * 8)))->unk1820;
    func_801683EC(temp_s3, &sp28, 1, arg4);
    if (sp2C != 0) {
        func_8014F214(arg0, &sp18, &sp28, 0);
        temp_s3->unk1C = (s32) (temp_s3->unk1C + sp18);
        temp_s3->unk20 = (s32) (temp_s3->unk20 + sp1C);
        var_v0 = temp_s3->unk24 + sp20;
    } else {
        var_v0 = temp_s3->unk24 - 0x18;
    }
    temp_s3->unk24 = var_v0;
    if (sp4C != 0) {
        if (sp6A == 0x460) {
            temp_v1 = arg0 + (arg2 * 4);
            var_s1 = -1;
            if (temp_v1->unk1818 != 0) {
                var_s1 = func_8012340C(D_801C34EC, temp_v1->unk1818);
            }
            temp_s2 = D_801C34EC->unk1270C;
            var_s0 = 0;
            if (temp_s2 > 0) {
                do {
                    if (var_s0 != var_s1) {
                        temp_v0 = func_801244FC(D_801C34EC, var_s0);
                        if (temp_v0->unk542 != 0) {
                            sp6A = (s16) temp_v0->unk7C0;
                            sp68 = (s16) temp_v0->unk7C4;
                        }
                    }
                    var_s0 += 1;
                } while (var_s0 < temp_s2);
            }
        }
        if (sp6A == 0x271) {
            func_801F71E8(D_801C34EC + 0x11C24, func_80124584(D_801C34EC, 0x70, arg2));
        }
        if ((sp6A >= 0x10) && (sp68 != 0) && (sp68 != (*(arg0 + (arg2 * 4))->unk1818)->unk2)) {
            temp_s1 = func_80124CBC(D_801C34EC, 0xE);
            if (sp6A < 0x120) {
                temp_v0_2 = func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, sp68));
                if (temp_v0_2->unk89 != 0) {
                    func_801548C8(arg0, temp_v0_2);
                }
            }
            var_s0_2 = temp_s3 + 0x1C;
            temp_s1->unk18 = (s32) func_80124584(D_801C34EC, 0x70, arg2)->unk7C4;
            temp_s1->unk14 = 0;
            temp_s1->unkC = var_s0_2;
            temp_s1->unk10 = 0;
            temp_s1->unk20 = 0;
            temp_s1->unk21 = 0;
            func_8012A154(D_801C34F0, &sp1B0, 0xA, 0x1D, (s32) sp68, 0);
        } else {
            var_s0_2 = temp_s3 + 0x1C;
        }
        func_8013CAE0(D_801C34F4, 0xE, var_s0_2);
        func_8011BC6C(var_s0_2, 0, 0xF, 5, 0, 0);
        temp_s3->unkC = 0;
    }
}
