/* Rogue Trip weapon-slot cycling (8012B094), reconstructed from the retail
 * instructions. Built like the engine link modules: PsyQ 4.4,
 * "-O2 -G8 -fvolatile", ASPSX 2.56. No data of its own.
 *
 * Link relevance: only a player on this console (func_8016BDA8, port < 2;
 * docs/LINK_CABLE.md Layer 4) changes its selection here. The partner's car
 * gets its weapon slot from the in-race packet instead (8012D45C sets the pad
 * words and weapon slot), so both consoles agree on it. */

extern int func_8016BDA8(int player);   /* player plays on this console */

/* A car's weapon selector. */
typedef struct {
    char *car;              /* +0x00: car; its player number is at +0x7D0 */
    char pad4[0x3D];
    signed char sel;        /* +0x41: selected slot, 0..8 */
    char pad42;
    unsigned char have[9];  /* +0x43: non-zero = slot holds a weapon */
} WeaponSel;

/* @8012B094: step the selected slot by dir (wrapping 8 <-> 0) until it
 * reaches a slot that holds a weapon or comes back to where it started.
 * Callers: 8012A3F0, 8012A5F0 (twice), 8012CDF4.
 *
 * Matching notes: -fvolatile gives retail's reload of sel after every store
 * and the sign-extending re-reads. */
void __attribute__((section(".text_8012B094"))) func_8012B094(WeaponSel *m, int dir)
{
    signed char start;
    int done;

    if (func_8016BDA8(*(int *) (m->car + 0x7D0))) {
        start = m->sel;
        do {
            m->sel += dir;
            if (m->sel < 0) {
                m->sel = 8;
            } else if (m->sel > 8) {
                m->sel = 0;
            }
            done = 0;
            if (m->have[m->sel] != 0 || m->sel == start) {
                done = 1;
            }
        } while (!done);
    }
}
