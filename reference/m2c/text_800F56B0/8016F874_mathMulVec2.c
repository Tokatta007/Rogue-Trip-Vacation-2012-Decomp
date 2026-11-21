/* m2c reference for mathMulVec2 @ 8016F874 (77 words). Generated; not compiled or validated. */
void mathMulVec2(MATRIX *m, VECTOR *in, VECTOR *out) {
    out->vx = (s32) ((in->vx * (s16) (u16) m->m[0][0]) + (in->vy * (s16) (u16) m->m[0][1]) + (in->vz * (s16) (u16) m->m[0][2])) / 4096;
    out->vy = (s32) ((in->vx * (s16) (u16) m->m[1][0]) + (in->vy * (s16) (u16) m->m[1][1]) + (in->vz * (s16) (u16) m->m[1][2])) / 4096;
    out->vz = (s32) ((in->vx * (s16) (u16) m->m[2][0]) + (in->vy * (s16) (u16) m->m[2][1]) + (in->vz * (s16) (u16) m->m[2][2])) / 4096;
}
