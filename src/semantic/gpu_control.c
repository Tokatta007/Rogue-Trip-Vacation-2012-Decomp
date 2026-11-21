/* libgpu low-level GPU port helpers and AddPrim, ported from TM2-Release
 * gpu_control.c / gpu_addprim.c (instruction-identical after relocation
 * masking). The MMIO pointer cells stay retail-owned storage here:
 *   801BAE1C 1F801810 GP0 data   801BAE24 1F8010A0 DMA2 MADR
 *   801BAE20 1F801814 GP1 status 801BAE28 1F8010A4 DMA2 BCR
 *                                801BAE2C 1F8010A8 DMA2 CHCR
 * The cells are not volatile: retail reloads each pointer after every store
 * (a store could alias a cell) and fills the return delay slot with the
 * last MMIO store, which a volatile access forbids in gcc 2.7.2. */

extern unsigned int *D_801BAE1C;
extern unsigned int *D_801BAE20;
extern unsigned int *D_801BAE24;
extern unsigned int *D_801BAE28;
extern unsigned int *D_801BAE2C;

/* libgpu P_TAG view of an ordering-table entry / primitive header. */
typedef struct {
    unsigned addr: 24;
    unsigned len: 8;
} RTTag;

/* @8015B6D8. Link prim after ot: the length byte of both tags is kept, and
 * ot is reloaded after the first store (ot and prim may be the same word). */
void __attribute__((section(".text_8015B6D8"))) AddPrim(void *ot, void *prim)
{
    ((RTTag *)prim)->addr = ((RTTag *)ot)->addr;
    ((RTTag *)ot)->addr = (unsigned int)prim;
}

/* @8015D4C0. Read the full GPU status word through the current pointer. */
unsigned int __attribute__((section(".text_8015D4C0"))) _status(void)
{
    return *D_801BAE20;
}

/* @8015DD1C. Start a GPU linked-list DMA at head; callers ignore v0. */
void __attribute__((section(".text_8015DD1C"))) _cwc(unsigned int *head)
{
    *D_801BAE20 = 0x04000002u;
    *D_801BAE24 = (unsigned int)head;
    *D_801BAE28 = 0;
    *D_801BAE2C = 0x01000401u;
}

/* @8015DD64. Keep the selector's upper bits and mask only the result. */
unsigned int __attribute__((section(".text_8015DD64"))) _param(unsigned int selector)
{
    *D_801BAE20 = selector | 0x10000000u;
    return *D_801BAE1C & 0x00FFFFFFu;
}
