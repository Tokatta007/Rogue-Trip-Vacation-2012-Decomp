/* Fixed-point 3x3 matrix * vector helpers (4.12 matrix, 32-bit vectors).
 * Engine code shared with TM2 (TM2 80153FE4 / 80154118, TM2-Release
 * math_vec.c). Each row divides toward zero; `in` is reloaded after every
 * store, so input/output aliasing behaves as in retail. Retail returns
 * nothing.
 *
 * Retail loads each matrix element with lhu + sll + sra and multiplies
 * vector * matrix. That is a volatile unsigned-halfword read cast to short:
 * combine cannot fold the extension into the volatile load (a plain or
 * casted read becomes lh). Exact with GCC 2.7.2, the libcomb cc1 and PsyQ
 * 4.4 alike. */
#include <sys/types.h>
#include <libgte.h>

/* Matrix element r c as retail reads it. */
#define M(r, c) ((short) *(volatile unsigned short *) &m->m[r][c])

/* @8016F60C: out = m * in / 4096. */
void __attribute__((section(".text_8016F60C"))) mathMulVec(MATRIX *m, VECTOR *in, VECTOR *out)
{
    out->vx = (in->vx * M(0, 0) + in->vy * M(0, 1) + in->vz * M(0, 2)) / 4096;
    out->vy = (in->vx * M(1, 0) + in->vy * M(1, 1) + in->vz * M(1, 2)) / 4096;
    out->vz = (in->vx * M(2, 0) + in->vy * M(2, 1) + in->vz * M(2, 2)) / 4096;
}

/* @8016F740: out = transpose(m) * in / 4096. */
void __attribute__((section(".text_8016F740"))) mathMulTransVec(MATRIX *m, VECTOR *in, VECTOR *out)
{
    out->vx = (in->vx * M(0, 0) + in->vy * M(1, 0) + in->vz * M(2, 0)) / 4096;
    out->vy = (in->vx * M(0, 1) + in->vy * M(1, 1) + in->vz * M(2, 1)) / 4096;
    out->vz = (in->vx * M(0, 2) + in->vy * M(1, 2) + in->vz * M(2, 2)) / 4096;
}

/* @8016F874: a second retail copy of mathMulVec, instruction-identical. */
void __attribute__((section(".text_8016F874"))) mathMulVec2(MATRIX *m, VECTOR *in, VECTOR *out)
{
    out->vx = (in->vx * M(0, 0) + in->vy * M(0, 1) + in->vz * M(0, 2)) / 4096;
    out->vy = (in->vx * M(1, 0) + in->vy * M(1, 1) + in->vz * M(1, 2)) / 4096;
    out->vz = (in->vx * M(2, 0) + in->vy * M(2, 1) + in->vz * M(2, 2)) / 4096;
}
