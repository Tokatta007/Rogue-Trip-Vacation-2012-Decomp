/* m2c reference for SetRotMatrix @ 80159DDC (12 words). Generated; not compiled or validated. */
void SetRotMatrix(MATRIX *m) {
    GTE_RT11RT12 = m->unk0;
    GTE_RT13RT21 = m->unk4;
    GTE_RT22RT23 = m->unk8;
    GTE_RT31RT32 = m->unkC;
    GTE_RT33 = m->unk10;
}
