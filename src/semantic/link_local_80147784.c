/* Rogue Trip: restart a player's car, reconstructed from the retail
 * instructions at 80147784. PsyQ 4.4, -O2 -G8. See docs/LINK_CABLE.md
 * (Layer 4, "Local and remote players"). */

#define S32(p, o) (*(int *) ((char *) (p) + (o)))
#define U8(p, o) (*(unsigned char *) ((char *) (p) + (o)))

typedef struct { char b[0x8B8]; } Car;  /* car record, game +0xB788 */

/* Object at game +0x10FF4 that model 0xF0 drives (set up by the overlay
 * function 801F54C8). */
typedef struct {
    char pad0[0x78];
    unsigned char active;       /* +0x78 */
    char pad79[0x15C - 0x79];
    Car *car;                   /* +0x15C: its car record */
} Obj;

typedef struct {
    char pad0[0xB788];
    Car car[8];                 /* +0xB788 */
    char pad1[0x10FF4 - 0xB788 - 8 * 0x8B8];
    Obj obj;                    /* +0x10FF4 */
} Game;

extern Game *D_801C34EC;                    /* game data */

extern void func_801F54C8(void *o);
extern void func_8012EB68(void *car, void *model, int a2, int kind, int a4, int a5);
extern void func_8011FF4C(void *game, int player);
extern void *func_8012468C(void *game, void *pos, void *model);
extern int func_801250C8(void *a, void *b);
extern void func_800FE848(void *car);
extern void func_80179414(int value, int view);

/* Restart the car record P (a player's car coming back after a wreck).
 * Only for a car in play (+0x7B8 == 1, set by 8012EB68). Up to 10 times:
 * for model 0xF0 set up its object at game +0x10FF4 and point it at this
 * record (game +0xB788 + player * 0x8B8); set the car up again (8012EB68:
 * position, hit points - base value in a link game, scaled otherwise);
 * apply the player's options (8011FF4C, which may fill every weapon slot
 * through 8012BCB0); stop once the nearest other car (8012468C) is more
 * than 1200 away (801250C8), else try another spot. Then mark the model
 * (+0xC), give the player 3000 money (+0x7DC) when game +0x12728 >= 2 and
 * byte +0x127E5 is clear (else 0), finish the car (800FE848), set its
 * view value to 220 (80179414) and clear game byte +0x127E2.
 *
 * Link role: the round-end handler 801387F0 and the versus/link continue
 * logic 8013ACCC call it for local and remote players alike. A remote
 * player is restarted on this console once its hit points arriving in the
 * link packets are positive again, so both consoles re-create the car
 * with the same set-up; the partner's weapon slots are then kept in step
 * by packet byte 1 (8012BD20).
 *
 * Matching notes: the loop is `while (1) { if (i >= 10) break; ... }` with
 * i = 0 inside the if; the byte store takes a variable ONE (retail keeps
 * the 1 of the first compare in s6); the model read at +0x7C0 in the loop
 * is volatile (lw before li); the record address is integer arithmetic
 * `n * 0x8B8 + (int) g + 0xB788`; the money stores are volatile (kept out
 * of the jump's delay slot). */
void __attribute__((section(".text_80147784"))) func_80147784(char *p)
{
    int i;
    Game *g;
    Obj *ob;
    char *h;
    int n;
    int f;
    int one;
    int d;

    if (S32(p, 0x7B8) == 1) {
        i = 0;
        one = 1;
        while (1) {
            if (i >= 10)
                break;
            if (*(volatile int *) (p + 0x7C0) == 0xF0) {
                g = D_801C34EC;
                n = S32(p, 0x7D0);
                ob = &g->obj;
                func_801F54C8(ob);
                ob->active = one;
                ob->car = (Car *) (n * 0x8B8 + (int) g + 0xB788);
            }
            func_8012EB68(p, *(void **) (p + 0x738), S32(p, 0x750), S32(p, 0x7C0), S32(p, 0x44),
                          S32(p, 0x7C4));
            func_8011FF4C(D_801C34EC, S32(p, 0x7D0));
            d = func_801250C8(p + 0x1E4,
                              (char *) func_8012468C(D_801C34EC, p + 0x1E4, *(void **) (p + 0x738)) + 0x1E4);
            if (d > 1200)
                break;
            i++;
        }
        U8(*(char **) (p + 0x738), 0xC) = 1;
        h = (char *) D_801C34EC + 0x10000;
        f = 0;
        if (S32(h, 0x2728) >= 2)
            f = U8(h, 0x27E5) == 0;
        if (f)
            *(volatile int *) (p + 0x7DC) = 3000;
        else
            *(volatile int *) (p + 0x7DC) = 0;
        func_800FE848(p);
        func_80179414(220, S32(p, 0x7CC));
        U8(D_801C34EC, 0x127E2) = 0;
    }
}
