/* m2c reference for SetColorMatrix @ 801663FC (12 words). Generated; not compiled or validated. */
void SetColorMatrix(MATRIX *m) {
    GTE_LR1LR2 = m->unk0;
    GTE_LR3LG1 = m->unk4;
    GTE_LG2LG3 = m->unk8;
    GTE_LB1LB2 = m->unkC;
    GTE_LB3 = m->unk10;
}
