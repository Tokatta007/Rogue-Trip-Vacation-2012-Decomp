/* Rogue Trip per-view mode step (801033D8), reconstructed from the retail
 * instructions. Built like the engine link modules: PsyQ 4.4,
 * "-O2 -G8 -fvolatile", ASPSX 2.56. No data of its own.
 *
 * Link relevance: the button test is gated by func_8016BDA8 ("player plays on
 * this console", port < 2; docs/LINK_CABLE.md Layer 4, controller ports). In a
 * link game the partner's car is driven through ports 2/3, whose pad words
 * arrive in packets, so its button combination is never read here. */

extern int func_8016BDA8(short player);                  /* player is local */
extern unsigned char func_8016B6DC(int button, short player); /* button held */
extern void func_801011E4(void *t, int i, int state, int arg);

/* game + 0x6220: per-view table (same record as ViewTab in
 * link_game_801446DC.c). */
typedef struct {
    int state[232];         /* +0x000: mode of view i */
    char *car[21];          /* +0x3A0: car shown by view i */
    unsigned char flag[4];  /* +0x3F4 */
} ViewTab;

/* @801033D8: step the mode of view i (only views 0 and 1) and apply it with
 * 801011E4(t, i, mode, 0). The mode cycles 0 -> 1 -> 2 -> 3 -> 0. From mode 2
 * it goes to 3 when flag[i] is clear; when flag[i] is set it goes to 3 (and
 * clears the flag) only while the view's player is on this console and holds
 * buttons 4 and 2 (8016B6DC), else back to 0. Callers: 8012F320 and the demo
 * director 80126250, which steps view 0 a random number of times every 300
 * ticks. The car's player number is its word at +0x7D0.
 *
 * Matching notes: -fvolatile makes every *p access volatile, which gives
 * retail's re-reads of the mode word between the tests; the car pointer is
 * reached through p (retail's 928(a0) with a0 = &state[i]). */
void __attribute__((section(".text_801033D8"))) func_801033D8(ViewTab *t, int i)
{
    int *p;

    if (i < 2) {
        p = &t->state[i];
        if (*p == 0) {
            *p = 1;
        } else if (*p == 1) {
            *p = 2;
        } else if (*p == 2) {
            if (t->flag[i] != 0) {
                short id = *(int *) (((char **) p)[232] + 0x7D0);  /* t->car[i] */
                int ok = 0;

                if (func_8016BDA8(id) && func_8016B6DC(4, id)) {
                    ok = func_8016B6DC(2, id) != 0;
                }
                if (ok) {
                    t->state[i] = 3;
                    t->flag[i] = 0;
                } else {
                    t->state[i] = 0;
                }
            } else {
                *p = 3;
            }
        } else {
            *p = 0;
        }
        func_801011E4(t, i, t->state[i], 0);
    }
}
