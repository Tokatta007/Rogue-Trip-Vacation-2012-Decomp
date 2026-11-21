/* m2c reference for func_80132CF4 @ 80132CF4 (27 words). Generated; not compiled or validated. */
? func_80124B80(s32, s32);                          /* extern */
extern ? D_801CBB58;
static s32 D_801C3370 = 0;
static s32 D_801C34EC = 0;

void func_80132CF4(s32 arg0, s32 arg1) {
    void *temp_v1;

    func_80124B80(D_801C34EC, arg0);
    if (D_801C3370 < 4) {
        temp_v1 = (D_801C3370 * 8) + &D_801CBB58;
        temp_v1->unk4 = arg0;
        temp_v1->unk0 = arg1;
        D_801C3370 += 1;
    }
}
