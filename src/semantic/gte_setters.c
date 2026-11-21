/* Genuine PSX GTE control/data register interfaces, ported from TM2-Release
 * gte_setters.c and gte_depth.c (all instruction-identical to TM2 after
 * relocation masking). C loads and scales the values; ctc2/swc2 are the
 * hardware boundary. Consecutive transfers target distinct registers, as in
 * retail, and the return delay slot separates the last transfer from any
 * caller GTE command.
 *
 * The four matrix setters are PsyQ hand-written assembly that loads into
 * t0-t4; local register variables pin the loaded words there, which gives
 * retail's code exactly. */
#ifndef __mips__
#error These interfaces require the PSX GTE target.
#endif

#define CTC5(a,b,c,d,e,r0,r1,r2,r3,r4) \
    __asm__ volatile ("ctc2 %0,$" #r0 "\n\tctc2 %1,$" #r1 \
                      "\n\tctc2 %2,$" #r2 "\n\tctc2 %3,$" #r3 \
                      "\n\tctc2 %4,$" #r4 : : "r"(a), "r"(b), "r"(c), "r"(d), "r"(e))
#define CTC3(a,b,c,r0,r1,r2) \
    __asm__ volatile ("ctc2 %0,$" #r0 "\n\tctc2 %1,$" #r1 \
                      "\n\tctc2 %2,$" #r2 : : "r"(a), "r"(b), "r"(c))

/* @80159DDC: five packed words; GTE sign-extends the last word's low half. */
void __attribute__((section(".text_80159DDC"))) SetRotMatrix(const unsigned int *matrix)
{
    register unsigned int a __asm__("$8") = matrix[0];
    register unsigned int b __asm__("$9") = matrix[1];
    register unsigned int c __asm__("$10") = matrix[2];
    register unsigned int d __asm__("$11") = matrix[3];
    register unsigned int e __asm__("$12") = matrix[4];

    CTC5(a,b,c,d,e,0,1,2,3,4);
}

/* @801663CC */
void __attribute__((section(".text_801663CC"))) SetLightMatrix(const unsigned int *matrix)
{
    register unsigned int a __asm__("$8") = matrix[0];
    register unsigned int b __asm__("$9") = matrix[1];
    register unsigned int c __asm__("$10") = matrix[2];
    register unsigned int d __asm__("$11") = matrix[3];
    register unsigned int e __asm__("$12") = matrix[4];

    CTC5(a,b,c,d,e,8,9,10,11,12);
}

/* @801663FC */
void __attribute__((section(".text_801663FC"))) SetColorMatrix(const unsigned int *matrix)
{
    register unsigned int a __asm__("$8") = matrix[0];
    register unsigned int b __asm__("$9") = matrix[1];
    register unsigned int c __asm__("$10") = matrix[2];
    register unsigned int d __asm__("$11") = matrix[3];
    register unsigned int e __asm__("$12") = matrix[4];

    CTC5(a,b,c,d,e,16,17,18,19,20);
}

/* @8016642C: translation starts at byte +20, not the packed matrix base. */
void __attribute__((section(".text_8016642C"))) SetTransMatrix(const unsigned int *matrix)
{
    register unsigned int x __asm__("$8") = matrix[5];
    register unsigned int y __asm__("$9") = matrix[6];
    register unsigned int z __asm__("$10") = matrix[7];

    CTC3(x,y,z,5,6,7);
}

/* @8016644C: SZ1, SZ2, SZ3 in order, even when destinations alias. */
void __attribute__((section(".text_8016644C"))) gteStoreSZ3(unsigned int *a,
    unsigned int *b, unsigned int *c)
{
    __asm__ volatile ("swc2 $17,0(%0)\n\tswc2 $18,0(%1)\n\tswc2 $19,0(%2)"
                      : : "r"(a),"r"(b),"r"(c) : "memory");
}

/* @8016646C: SZ0 through SZ3. Upper halfwords are zero on GTE reads. */
void __attribute__((section(".text_8016646C"))) gteStoreSZ4(unsigned int *a,
    unsigned int *b, unsigned int *c, unsigned int *d)
{
    __asm__ volatile ("swc2 $16,0(%0)\n\tswc2 $17,0(%1)\n\tswc2 $18,0(%2)\n\tswc2 $19,0(%3)"
                      : : "r"(a),"r"(b),"r"(c),"r"(d) : "memory");
}

/* @8016648C: modulo-32-bit scaling, without a byte clamp. */
void __attribute__((section(".text_8016648C"))) SetBackColor(unsigned int r, unsigned int g, unsigned int b)
{
    CTC3(r<<4,g<<4,b<<4,13,14,15);
}

/* @801798B0 */
void __attribute__((section(".text_801798B0"))) SetGeomOffset(unsigned int x, unsigned int y)
{
    __asm__ volatile ("ctc2 %0,$24\n\tctc2 %1,$25" : : "r"(x<<16), "r"(y<<16));
}

/* @801798D0: H (projection distance); the GTE sign-extends the low half. */
void __attribute__((section(".text_801798D0"))) SetGeomScreen(unsigned int value)
{
    __asm__ volatile ("ctc2 %0,$26" : : "r"(value));
}
