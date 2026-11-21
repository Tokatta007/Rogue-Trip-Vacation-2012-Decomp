/* m2c reference for func_8011DA64 @ 8011DA64 (219 words). Generated; not compiled or validated. */
? func_8011B994(void *);                            /* extern */
? func_8011BA5C(s32 *, s32, void *);                /* extern */
s32 func_8011BC6C(s32 *, s32 *, s32, s32, s32, s32); /* extern */
? func_8011D3A4(s32, s8);                           /* extern */
s32 func_80122F24(s32, s32 *, u16, ? *);            /* extern */
? func_80124CF4(s32 *, s32 *, s32, s32, s32);       /* extern */
extern ? D_80183200;
extern s32 D_801C3790;
extern ? D_801CA910;
static s32 D_801C34EC = 0;

void func_8011DA64(void) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    VECTOR sp28;                                    /* compiler-managed */
    ? sp38;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_s4;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    void *temp_s0;

    var_a0 = D_801C3790;
    if (var_a0 != -1) {
        var_v1 = var_a0 * 2;
        do {
            temp_s0 = (var_a0 << 6) + &D_801CA910;
            temp_s4 = (((var_v1 + var_a0) * 4) + &D_80183200)->unk8;
            temp_s0->unk39 = (u8) (temp_s0->unk39 - 1);
            if (temp_s0->unk39 == 0) {
                if (temp_s0->unk18 != 0) {
                    func_8011BA5C(&sp18, temp_s0->unk18, temp_s0 + 0x2C);
                    if (temp_s0->unk1C != NULL) {
                        mathMulTransVec(temp_s0->unk18 + 0x28, temp_s0 + 0xC, &sp28);
                        sp28 = (s32) sp28 + temp_s0->unk1C->unk0;
                        sp28.vy += temp_s0->unk1C->unk4;
                        var_v0 = sp28.vz + temp_s0->unk1C->unk8;
                        goto block_8;
                    }
                    sp28.vz = 0;
                    sp28.vy = 0;
                    sp28 = 0;
                } else {
                    sp18 = temp_s0->unk0;
                    sp1C = temp_s0->unk4;
                    sp20 = temp_s0->unk8;
                    sp28 = temp_s0->unkC;
                    sp28.vy = temp_s0->unk10;
                    var_v0 = temp_s0->unk14;
block_8:
                    sp28.vz = var_v0;
                }
                temp_s0->unk0 = (s32) (temp_s0->unk0 + (s16) temp_s0->unk20);
                temp_s0->unk4 = (s32) (temp_s0->unk4 + (s16) temp_s0->unk22);
                temp_s0->unk24 = (u16) (temp_s0->unk24 - temp_s0->unk3E);
                temp_s0->unk8 = (s32) (temp_s0->unk8 + (s16) temp_s0->unk24);
                temp_s0->unk34 = (u8) (temp_s0->unk34 + temp_s0->unk36);
                temp_s0->unk39 = (u8) (temp_s0->unk37 + (temp_s0->unk38 & rand()));
                if (func_80122F24(D_801C34EC, &sp18, temp_s0->unk2A, &sp38) != 0) {
                    temp_s2 = temp_s0->unk34 + (temp_s0->unk35 & rand());
                    if ((rand() & 0xFF) < (s32) temp_s0->unk3C) {
                        var_s1 = temp_s0->unk3B & 0xFF;
                    } else {
                        var_s1 = temp_s0->unk3A & 0xFF;
                    }
                    if (temp_s0->unk32 != 0) {
                        func_80124CF4(&sp18, &sp18, temp_s0->unk32 & 0xFF, temp_s0->unk32 & 0xFF, 0);
                    }
                    if (temp_s0->unk33 != 0) {
                        func_80124CF4(&sp28.vx, &sp28.vx, temp_s0->unk33 & 0xFF, temp_s0->unk33 & 0xFF, (s32) temp_s0->unk33);
                    }
                    temp_a0 = func_8011BC6C(&sp18, &sp28, temp_s2, var_s1, (s32) (s16) temp_s0->unk28, 0);
                    if ((s8) temp_s0->unk3F != -0x80) {
                        func_8011D3A4(temp_a0, (s8) temp_s0->unk3F);
                    }
                }
            }
            var_a0 = temp_s4;
            if (temp_s0->unk30 != 0) {
                temp_s0->unk30 = (u16) (temp_s0->unk30 - 1);
                var_a0 = temp_s4;
                if (temp_s0->unk30 == 0) {
                    func_8011B994(temp_s0);
                    var_a0 = temp_s4;
                }
            }
            var_v1 = var_a0 * 2;
        } while (var_a0 != -1);
    }
}
