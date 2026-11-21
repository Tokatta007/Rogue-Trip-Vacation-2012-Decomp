/* m2c reference for func_8012552C @ 8012552C (97 words). Generated; not compiled or validated. */
void *func_80179278(?);                             /* extern */
MATRIX *func_8017929C(?);                           /* extern */
? func_80179640(?, s32 *, s32 *);                   /* extern */
s32 func_801797B4(?);                               /* extern */

void func_8012552C(void *arg0, void *arg1, ? arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    s32 sp30;
    s32 sp34;
    MATRIX *temp_a0;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_a0;
    void *temp_s0;

    func_80179640(arg2, &sp30, &sp34);
    temp_s3 = func_801797B4(arg2);
    temp_s4 = func_801797B4(arg2);
    temp_s0 = func_80179278(arg2);
    temp_a0 = func_8017929C(arg2);
    sp10 = arg0->unk0 + temp_s0->unk0;
    sp14 = arg0->unk4 + temp_s0->unk4;
    sp18 = arg0->unk8 + temp_s0->unk8;
    mathMulVec(temp_a0, (VECTOR *) &sp10, &sp20);
    var_a0 = sp20.vz;
    if (var_a0 == 0) {
        var_a0 = 1;
    }
    arg1->unk0 = (s32) (((s32) ((s32) sp20 * temp_s3) / var_a0) + sp30);
    arg1->unk4 = (s32) (((s32) (sp20.vy * temp_s4) / var_a0) + sp34);
    arg1->unk8 = var_a0;
}
