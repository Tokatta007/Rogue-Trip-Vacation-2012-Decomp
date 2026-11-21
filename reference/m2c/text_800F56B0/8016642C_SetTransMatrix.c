/* m2c reference for SetTransMatrix @ 8016642C (8 words). Generated; not compiled or validated. */
void SetTransMatrix(MATRIX *m) {
    GTE_TRX = m->t[0];
    GTE_TRY = m->t[1];
    GTE_TRZ = m->t[2];
}
