/* m2c reference for func_80140AE0 @ 80140AE0 (49 words). Generated; not compiled or validated. */
void *func_80114368(?);                             /* extern */
? func_8012A0B8(s32, ?, void *, void *);            /* extern */
s32 func_8016F210(?);                               /* extern */
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;

void func_80140AE0(void *arg0, ? arg1) {
    void *var_a2;

    arg0->unk320 = func_80114368(arg1);
    arg0->unk320->unk4 = func_8016F210(2);
    arg0->unk3C = (s32) (D_801C34EC + ((rand() & D_801C34EC->unk12728) * 4))->unk1240C;
    if (arg0->unk3C != 0) {
        arg0->unk30 = (s32) (arg0->unk3C + 0x1C);
    }
    var_a2 = NULL;
    if (arg0 != NULL) {
        var_a2 = arg0 + 0x74;
    }
    func_8012A0B8(D_801C34F0, 0x19, var_a2, arg0->unk320 + 0x1C);
}
