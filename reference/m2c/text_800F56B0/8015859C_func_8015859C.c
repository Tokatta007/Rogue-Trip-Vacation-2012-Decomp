/* m2c reference for func_8015859C @ 8015859C (35 words). Generated; not compiled or validated. */
extern s32 D_801E474C;
extern s32 D_801E4754;
extern s32 D_801E4758;
extern s32 D_801E4770;
extern ? D_801E6BB0;
extern s32 D_801E6BB4;
extern ? (*D_801E6BC0)(?, ? *);

void func_8015859C(void) {
    void *temp_v1;

    temp_v1 = D_801E4770 + (D_801E4758 << 5);
    temp_v1->unk0 = 2;
    D_801E6BB0 = (unaligned s32) temp_v1->unk1C;
    D_801E6BB4 = temp_v1->unk8;
    D_801E4758 = D_801E4754;
    if (D_801E6BC0 != NULL) {
        D_801E6BC0(D_801E6BC0, &D_801E6BB0);
    }
    D_801E474C = 0;
}
