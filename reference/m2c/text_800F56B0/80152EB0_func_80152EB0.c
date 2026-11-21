/* m2c reference for func_80152EB0 @ 80152EB0 (236 words). Generated; not compiled or validated. */
? func_8011BC6C(s32, ?, ?, ?, s32, s32);            /* extern */
void *func_80124584(s32, ?, s32);                   /* extern */
void *func_80124CBC(s32);                           /* extern */
? func_80125130(VECTOR *, VECTOR *);                /* extern */
? func_8012538C(s32, VECTOR *);                     /* extern */
? func_801253C8(s32, s32);                          /* extern */
? func_801253F4(s32, VECTOR *);                     /* extern */
? func_8012A154(s32, ?, ?, ?, s32, s32);            /* extern */
? func_8013CAE0(s32, ?, s32);                       /* extern */
? func_801548C8(s32, void *);                       /* extern */
? func_80154918(s32, void *);                       /* extern */
? func_8015A05C(s32, s32);                          /* extern */
? func_801640EC(s32);                               /* extern */
s32 func_80178A1C();                                /* extern */
static s32 D_801C34EC = 0;
static s32 D_801C34F0 = 0;
static s32 D_801C34F4 = 0;

void func_80152EB0(s32 arg0, s32 arg1) {
    VECTOR sp18;
    VECTOR sp28;
    ? var_s4;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v0;
    u8 var_v0_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s5;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v1;

    temp_s5 = D_801C34EC + 0x10FF4;
    temp_a0 = arg0 + (arg1 * 2);
    temp_a0->unk189C = (u16) (temp_a0->unk189C + func_80178A1C());
    temp_v0 = temp_a0->unk189C;
    var_s4 = 7;
    temp_a0->unk189C = (u16) (temp_v0 + 1);
    temp_v0_2 = arg1 * 4;
    if ((s16) temp_v0 < 0x78) {
        temp_v0_3 = (arg0 + temp_v0_2)->unk188C;
        var_s0 = arg1 * 4;
        if ((temp_v0_3 != NULL) && (temp_v0_3->unk8C != 0)) {
            temp_a0->unk189C = 0x78U;
            var_s0 = arg1 * 4;
        }
        temp_s0 = arg0 + var_s0;
        func_801253C8(temp_s0->unk1884 + 0x1C, temp_s0->unk1894 + 0x1C);
        func_8012538C(arg0 + ((arg1 * 8) + 0x1874), &sp18);
        mathMulTransVec(temp_s0->unk1894 + 0x28, &sp18, &sp28);
        func_80125130(&sp28, &sp18);
        func_801253F4(temp_s0->unk1884 + 0x14, &sp18);
        func_801640EC(temp_s0->unk1884 + 0x14);
        func_801640EC(temp_s0->unk1884 + 0x16);
        func_801640EC(temp_s0->unk1884 + 0x18);
        func_8015A05C(temp_s0->unk1884 + 0x14, temp_s0->unk1884 + 0x28);
        var_v0 = arg1 * 4;
    } else {
        temp_v1 = arg0 + temp_v0_2;
        temp_v0_4 = temp_v1->unk188C;
        if (temp_v0_4 != NULL) {
            if (temp_v0_4->unk89 != 0) {
                func_801548C8(arg0, temp_v1->unk188C);
            }
        } else if (((**temp_v1->unk1894 & 0xFFF0) == 0x2120) && (temp_s5->unk88 != 0)) {
            var_s4 = 0x16;
            func_80154918(arg0, temp_s5);
        }
        temp_v0_5 = func_80124CBC(D_801C34EC);
        temp_s1 = arg0 + (arg1 * 4);
        temp_v0_5->unk14 = 0;
        temp_v0_5->unkC = (s32) (temp_s1->unk1884 + 0x1C);
        temp_v0_5->unk18 = (s32) func_80124584(D_801C34EC, 0xA0, arg1)->unk7C4;
        temp_v0_5->unk10 = (s32) (arg0 + 0x1050);
        temp_v0_5->unk20 = 0;
        temp_v0_5->unk21 = 0;
        temp_v0_6 = temp_s1->unk188C;
        if (temp_v0_6 != NULL) {
            var_v0_2 = arg1 * 4;
            if (temp_v0_6->unk8B != 0) {
                temp_s1->unk188C->unk8B = 0U;
                goto block_14;
            }
        } else {
block_14:
            var_v0_2 = arg1 * 4;
        }
        temp_s0_2 = arg0 + var_v0_2;
        func_8012A154(D_801C34F0, 0, var_s4, 0x1D, (s32) (*temp_s0_2->unk1894)->unk2, 0);
        temp_v0_7 = temp_s0_2->unk188C;
        if ((temp_v0_7 != NULL) && ((temp_v0_7->unk192 << 0x10) > 0)) {
            temp_s0_2->unk188C->unk8B = 1;
        }
        temp_s0_3 = arg0 + (arg1 * 4);
        func_8013CAE0(D_801C34F4, 0xF, temp_s0_3->unk1884 + 0x1C);
        func_8011BC6C(temp_s0_3->unk1884 + 0x1C, 0, 0xF, 0xE, 0, 0);
        func_8011BC6C(temp_s0_3->unk1884 + 0x1C, 0, 0x14, 5, 0, 0);
        (arg0 + arg1)->unk18A0 = 0;
        temp_s0_3->unk1884->unkC = 0;
        var_v0 = arg1 * 4;
    }
    temp_a0_2 = arg0 + var_v0;
    temp_v0_8 = temp_a0_2->unk188C;
    if (temp_v0_8 != NULL) {
        var_v0_3 = temp_v0_8->unk8C;
        goto block_23;
    }
    if ((**temp_a0_2->unk1894 & 0xFFF0) == 0x2120) {
        var_v0_3 = temp_s5->unk7A;
block_23:
        if (var_v0_3 != 0) {
            (arg0 + arg1)->unk18A0 = 0;
            temp_a0_2->unk1884->unkC = 0;
        }
    }
}
