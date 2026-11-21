/* m2c reference for func_8014D1F8 @ 8014D1F8 (22 words). Generated; not compiled or validated. */
s32 func_80124A30(s32, s32, void *);                /* extern */
static s32 D_801C34EC = 0;

void func_8014D1F8(void *arg1) {
    if (func_80124A30(D_801C34EC, arg1->unk18, arg1 + 0x2C) & 0xFF) {
        arg1->unk5E = 1;
        return;
    }
    arg1->unk2C = -1;
    arg1->unk5E = 0;
}
