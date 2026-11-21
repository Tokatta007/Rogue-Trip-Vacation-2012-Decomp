/* m2c reference for func_80144BC8 @ 80144BC8 (190 words). Generated; not compiled or validated. */
? func_8011B994(s32);                               /* extern */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
? func_8011D704(void *);                            /* extern */
s32 func_80133AE0(s32, s32);                        /* extern */
? func_80133B08(void *);                            /* extern */
? func_8013BEA8(s32);                               /* extern */
? func_8013CAE0(s32, ?, void *);                    /* extern */
? func_8013E77C(s32, s32, s32, s32);                /* extern */
? func_80147764(void *, ?);                         /* extern */
extern ? D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;

void func_80144BC8(void *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    if (arg0->unk88 != 0) {
        arg0->unk88 = 0U;
        func_8011B994(arg0->unk740);
    }
    if (arg0->unkA0 != 0) {
        func_8011D704(arg0 + 0x1E4);
    } else {
        temp_v0 = func_80133AE0(arg0->unk7C0, arg0->unk78);
        func_8013E77C(arg0->unk738 + 0x1C, arg0->unk738 + 0x28, temp_v0, (s32) arg0->unk7C0 >> 4);
        func_8011BC6C(arg0->unk738 + 0x1C, 0, 8, 7, 0, 0);
        func_8011BC6C(arg0->unk738 + 0x1C, 0, 0x28, 0xE, 0, 0);
        func_8011BC6C(arg0->unk738 + 0x1C, 0, 0xA, 0x48, 0, 0);
        func_8011BC6C(arg0->unk738 + 0x1C, 0, 0xF, 0x49, 0, 0);
        if (arg0->unkF4 != 0) {
            arg0->unk738->unk24 = temp_v0;
            func_8011BC6C(arg0->unk738 + 0x1C, 0, 0xA, 0x18, 0xC8, 1);
            temp_v1 = arg0->unk738;
            temp_v1->unk20 = (s32) (temp_v1->unk20 + 0x30);
            func_8011BC6C(arg0->unk738 + 0x1C, 0, 6, 0x18, 0x96, 1);
            temp_v1_2 = arg0->unk738;
            temp_v1_2->unk1C = (s32) (temp_v1_2->unk1C - 0x30);
            temp_v1_3 = arg0->unk738;
            temp_v1_3->unk20 = (s32) (temp_v1_3->unk20 - 0x50);
            func_8011BC6C(arg0->unk738 + 0x1C, 0, 5, 0x18, 0x78, 1);
            temp_v1_4 = arg0->unk738;
            temp_v1_4->unk1C = (s32) (temp_v1_4->unk1C + 0x50);
            func_8011BC6C(arg0->unk738 + 0x1C, 0, 4, 0x18, 0x64, 1);
        }
    }
    func_8013CAE0(D_801C34F4, 0x11, arg0->unk738 + 0x1C);
    arg0->unk738->unkC = 0;
    arg0->unk19C = 0;
    if (arg0->unk7C0 == 0x10) {
        (D_801C34EC + (arg0->unk78 * 4))->unk610C->unkC = 0;
    }
    if (arg0->unk7C0 == 0x50) {
        (D_801C34EC + (arg0->unk78 * 4))->unk6154->unkC = 0;
    }
    D_801C31CC.unk8 = (s32) arg0->unk7D8;
    D_801C31CC.unkC = (s32) arg0->unk7C4;
    func_8013BEA8(D_801C34F4);
    D_801C31CC.unk8 = 5;
    D_801C31CC.unkC = (s32) arg0->unk7C4;
    func_8013BEA8(D_801C34F4);
    arg0->unk9D = 1;
    func_80133B08(arg0);
    arg0->unk19C = 0;
    func_80147764(arg0, 0x258);
}
