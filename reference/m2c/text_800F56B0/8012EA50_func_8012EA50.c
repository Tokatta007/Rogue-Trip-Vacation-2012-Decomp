/* m2c reference for func_8012EA50 @ 8012EA50 (39 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
? func_801244FC(s32, s32);                          /* extern */
s32 func_80124A94(s32, s32, s32 *);                 /* extern */
static s32 D_801C34EC = 0;

void func_8012EA50(void *arg0, s32 arg3) {
    s32 sp18;
    void *temp_v1;

    if (arg3 == 1) {
        if (func_80124A94(D_801C34EC, (D_801C34EC + 0xB744)->unk18, &sp18) != 0) {
            func_801244FC(D_801C34EC, sp18);
            temp_v1 = arg0->unk8;
            temp_v1->unk3 = (u8) (temp_v1->unk3 & 0x80);
        }
    } else {
        func_8011BC6C(arg0 + 0xC, 0, 4, 5, 0, 0);
    }
}
